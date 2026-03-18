/*
 * XREFs of ProcessorpReserveIdtEntriesApic @ 0x1C0088C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessorpReserveIdtEntriesApic(
        PVOID Owner,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        _OWORD *a9)
{
  _QWORD *UserData; // rbx
  int v14; // ebp
  int v15; // edi
  int v16; // ecx
  __int16 v17; // ax
  __int64 v18; // rdi
  UCHAR v19; // r15
  unsigned __int8 i; // si
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v22; // rcx
  ULONG Flags; // r9d
  NTSTATUS v24; // ebp
  struct _PROCESSOR_NUMBER v26; // [rsp+50h] [rbp-48h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+58h] [rbp-40h] BYREF
  ULONGLONG Start; // [rsp+60h] [rbp-38h]

  UserData = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x49706341u);
  if ( !UserData )
    return 3221225626LL;
  v14 = a8;
  v15 = ((__int64 (__fastcall *)(PVOID, __int64, __int64, _QWORD, unsigned int, int, int, int))ProcessorFindIdtEntries)(
          Owner,
          a2,
          a4,
          a5,
          a3,
          a6,
          a7,
          a8);
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(UserData, 0);
    return (unsigned int)v15;
  }
  v16 = *(_DWORD *)(a4 + 32);
  *UserData = 0LL;
  UserData[1] = 0LL;
  v17 = *(_WORD *)(a4 + 24);
  *UserData = 0LL;
  *((_DWORD *)UserData + 5) = v16;
  *((_WORD *)UserData + 4) = v17;
  *((_DWORD *)UserData + 4) = a3;
  LODWORD(Start) = v16;
  *((_DWORD *)UserData + 6) = a5;
  v18 = *(_QWORD *)(a4 + 16);
  v19 = (((a6 & 1) != 0) + 1) | (a3 >= 0xFFF00000 ? 4 : 0);
  for ( i = 0; ; ++i )
  {
    if ( !v18 )
    {
      *a9 = *(_OWORD *)UserData;
      a9[1] = *((_OWORD *)UserData + 1);
      return 0LL;
    }
    if ( _bittest64(&v18, i) )
    {
      v26.Group = *(_WORD *)(a4 + 24);
      *(_WORD *)&v26.Number = i;
      ProcNumber = v26;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
        v22 = 0LL;
      else
        v22 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
      if ( v22 )
        break;
    }
LABEL_16:
    v18 &= ~(1LL << i);
  }
  Flags = 1;
  if ( (a7 & 1) != 0 )
    Flags = 3;
  if ( v14 == 1 )
    ++v22;
  v24 = RtlAddRange(v22, (unsigned int)Start, a5 + (unsigned int)Start - 1LL, v19, Flags, UserData, Owner);
  if ( v24 >= 0 )
  {
    v14 = a8;
    *UserData |= 1LL << i;
    goto LABEL_16;
  }
  ExFreePoolWithTag(UserData, 0);
  return (unsigned int)v24;
}
