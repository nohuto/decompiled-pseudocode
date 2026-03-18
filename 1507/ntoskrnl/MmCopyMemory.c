/*
 * XREFs of MmCopyMemory @ 0x1402160E4
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 *     ZwReadVirtualMemory @ 0x14017F7D0 (ZwReadVirtualMemory.c)
 *     MiCopySinglePage @ 0x140215494 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 *     MiCheckPhysicalAddressRange @ 0x140222818 (MiCheckPhysicalAddressRange.c)
 */

NTSTATUS __fastcall MmCopyMemory(char *Buffer, char *BaseAddress, SIZE_T NumberOfBytesToRead, int a4, PSIZE_T a5)
{
  ULONG_PTR *NumberOfBytesRead; // r12
  __int16 v6; // r10
  char v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  int v17; // eax
  size_t v18; // r14
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  size_t v23; // rdx
  char *v24; // rcx
  __int64 v25; // r12
  __int64 v26; // r8
  unsigned __int64 v27; // r13
  int v28; // [rsp+38h] [rbp-41h]
  __int64 v29; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v31; // [rsp+50h] [rbp-29h]
  __int64 v32; // [rsp+58h] [rbp-21h]
  unsigned __int64 v33; // [rsp+60h] [rbp-19h] BYREF
  __int64 v34; // [rsp+68h] [rbp-11h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-9h]
  __int64 *v36; // [rsp+78h] [rbp-1h]
  _QWORD v37[9]; // [rsp+80h] [rbp+7h] BYREF
  char *v38; // [rsp+D8h] [rbp+5Fh]
  __int64 v39; // [rsp+E0h] [rbp+67h]
  unsigned __int8 v40; // [rsp+F0h] [rbp+77h] BYREF

  v39 = (__int64)BaseAddress;
  v38 = Buffer;
  NumberOfBytesRead = a5;
  v6 = (__int16)BaseAddress;
  v32 = 0LL;
  v7 = a4;
  v8 = NumberOfBytesToRead;
  *a5 = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v28 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( !(unsigned int)MiCheckPhysicalAddressRange(BaseAddress, NumberOfBytesToRead) )
      return -1073741800;
    v10 = v8 + 4095;
  }
  else
  {
    if ( &BaseAddress[NumberOfBytesToRead] <= BaseAddress )
      return -1073741800;
    if ( BaseAddress <= MmHighestUserAddress )
    {
      if ( &BaseAddress[NumberOfBytesToRead] <= MmHighestUserAddress )
        return ZwReadVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 BaseAddress,
                 Buffer,
                 NumberOfBytesToRead,
                 NumberOfBytesRead);
      return -1073741800;
    }
    v10 = NumberOfBytesToRead + 4095;
  }
  v11 = ((v6 & 0xFFF) + v10) >> 12;
  if ( v11 >= 0x100000000LL )
    return -1073741583;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = MiReservePtes((__int64)&qword_14034FC70, v11, NumberOfBytesToRead);
  v13 = v39;
  v14 = 0;
  v36 = v12;
  v15 = v39 & 0xFFF;
  v31 = v12;
  v16 = (unsigned __int64)v12;
  v17 = v28;
  v18 = 4096 - v15;
  if ( 4096 - v15 > v8 )
    v18 = v8;
  if ( v28 )
  {
    v30 = v39 >> 12;
    v17 = v28;
  }
  else
  {
    v30 = -1LL;
  }
  if ( !v8 )
    goto LABEL_56;
  while ( 1 )
  {
    v34 = 0LL;
    v33 = 0LL;
    if ( v17 )
    {
      v25 = 0LL;
      v40 = 17;
      v29 = 0LL;
      goto LABEL_42;
    }
    v19 = MiTranslatePageForCopy(v13, (volatile signed __int32 **)&v29, &v30, &v34, &v40, &v33);
    v14 = v19;
    if ( v19 >= 0 )
    {
      if ( v19 == 273 )
      {
        v14 = 0;
        v23 = v18;
        if ( v18 )
        {
          v24 = &v38[-v15];
          do
          {
            v24[v15] = *((_BYTE *)&v33 + (v15 & 7));
            ++v15;
            --v23;
          }
          while ( v23 );
        }
LABEL_47:
        v32 += v18;
        v8 -= v18;
        v38 += v18;
        ++v30;
        v13 = v18 + v39;
        v16 = (unsigned __int64)v31;
        v18 = v8;
        v39 = v13;
        if ( v8 > 0x1000 )
          v18 = 4096LL;
        v15 = 0LL;
        if ( v31 )
          v16 = (unsigned __int64)++v31;
        goto LABEL_51;
      }
      v25 = v29;
      v16 = (unsigned __int64)v31;
LABEL_42:
      v26 = v15;
      v27 = v30;
      v14 = MiCopySinglePage(v38, v30, v26, v18, v16, v7);
      if ( v25 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v27 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v34 )
          MiUnlockProtoPoolPage(v34, 2u);
        MiUnlockWorkingSetExclusive(v29, v40);
      }
      if ( v14 < 0 )
        goto LABEL_55;
      goto LABEL_47;
    }
    if ( v19 != -1073741608 )
      goto LABEL_55;
    v37[0] = v39;
    v29 = 1LL;
    v20 = 1LL;
    v21 = v8;
    if ( v8 > 0x200000 - (unsigned __int64)(v39 & 0x1FFFFF) )
      v21 = 0x200000 - (v39 & 0x1FFFFF);
    v37[1] = v21;
    if ( (unsigned __int64)(v39 + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
    {
      v22 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v22 || Process == PsInitialSystemProcess )
      {
        v14 = -1073741819;
        goto LABEL_55;
      }
      v20 = v22 + 2968;
      v29 = v20;
    }
    if ( (unsigned __int64)(v39 + 0xA8000000000LL) <= 0xFFFFFFFFFFLL )
      break;
    v14 = MiPrefetchVirtualMemory(1uLL, (__int64)v37, v20, 173);
    if ( v14 < 0 )
      goto LABEL_55;
    v13 = v39;
    v16 = (unsigned __int64)v31;
LABEL_51:
    if ( !v8 )
      goto LABEL_55;
    v17 = v28;
  }
  v14 = -1073741585;
LABEL_55:
  NumberOfBytesRead = a5;
LABEL_56:
  if ( v36 )
    MiReleasePtes((__int64)&qword_14034FC70, v36, v11);
  *NumberOfBytesRead += v32;
  return v14;
}
