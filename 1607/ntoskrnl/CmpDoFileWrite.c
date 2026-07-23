/*
 * XREFs of CmpDoFileWrite @ 0x1403F7EE8
 * Callers:
 *     CmpFileWrite @ 0x1403F4FCC (CmpFileWrite.c)
 *     CmpWriteOffsetArrayToFile @ 0x140604F5C (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     CmpSetRespectIoPriorityThread @ 0x14000A0EC (CmpSetRespectIoPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     CmpSetIoPriorityThread @ 0x1400B2B18 (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x1400B2B20 (CmpSetPriorityThread.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetInformationObject @ 0x14015AD70 (ZwSetInformationObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpCreateEvent @ 0x1403F8808 (CmpCreateEvent.c)
 */

char __fastcall CmpDoFileWrite(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        char a7)
{
  __int64 v7; // rsi
  unsigned int i; // edx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  char *PoolWithTag; // rax
  char *v12; // rbx
  __int64 j; // rax
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  signed int v16; // edi
  __int64 v17; // rdx
  unsigned int *v18; // r8
  char v19; // r13
  HANDLE *v20; // r12
  ULONG Length; // esi
  NTSTATUS Event; // ecx
  __int64 v23; // rax
  int *v24; // rcx
  char v25; // si
  __int64 k; // rdi
  __int16 ObjectInformation[2]; // [rsp+50h] [rbp-78h] BYREF
  __int16 v29; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-70h]
  unsigned int v31; // [rsp+5Ch] [rbp-6Ch]
  KPRIORITY Priority; // [rsp+60h] [rbp-68h]
  PVOID Buffer; // [rsp+68h] [rbp-60h]
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp-58h] BYREF
  __int64 v35; // [rsp+78h] [rbp-50h]
  unsigned __int64 v36; // [rsp+80h] [rbp-48h]
  char v37; // [rsp+D0h] [rbp+8h]
  char v38; // [rsp+D8h] [rbp+10h]

  v7 = a4;
  Buffer = 0LL;
  for ( i = 0; ; ++i )
  {
    v30 = i;
    if ( i >= a5 )
      break;
    v9 = *(_QWORD *)(v7 + 24LL * (int)i + 8);
    v36 = v9;
    v10 = v9 + *(unsigned int *)(v7 + 24LL * (int)i + 16);
    while ( v9 < v10 )
    {
      v9 += 4096LL;
      v36 = v9;
      i = v30;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1400uLL, 0x77624D43u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( j = 0LL; j < 64; ++j )
      *(_QWORD *)&v12[8 * j] = 0LL;
    v38 = 0;
    Priority = 0;
    v31 = 0;
    if ( (a7 & 1) != 0 )
    {
      v31 = CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), 0);
      Priority = CmpSetPriorityThread(KeGetCurrentThread(), 4);
      v38 = 1;
    }
    v37 = CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), 1);
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 >= a5 )
      {
        v25 = 1;
        goto LABEL_41;
      }
      v16 = 0;
      v17 = 0LL;
      v35 = 0LL;
      while ( v14 < a5 && v16 < 64 )
      {
        v18 = a6;
        if ( !v15 )
        {
          *a6 = *(_DWORD *)(v7 + 24LL * v14);
          Buffer = *(PVOID *)(v7 + 24LL * v14 + 8);
          v15 = *(_DWORD *)(v7 + 24LL * v14 + 16);
        }
        v19 = 0;
        v20 = (HANDLE *)&v12[8 * v17];
LABEL_21:
        if ( v15 && v16 < 64 )
        {
          ByteOffset.QuadPart = *v18;
          while ( 1 )
          {
            if ( v19 && v15 > 0x10000 )
            {
              Length = 0x10000;
            }
            else
            {
              Length = v15;
              if ( v15 > 0x100000 )
                Length = 0x100000;
            }
            if ( !*v20 )
            {
              Event = CmpCreateEvent(SynchronizationEvent, (PHANDLE)&v12[8 * v16]);
              if ( Event < 0 )
              {
                *(_QWORD *)&v12[8 * v16] = 0LL;
                goto LABEL_55;
              }
              ObjectInformation[0] = 256;
              ZwSetInformationObject(*v20, ObjectHandleFlagInformation, ObjectInformation, 2u);
            }
            Event = ZwWriteFile(
                      a3,
                      *v20,
                      0LL,
                      0LL,
                      (PIO_STATUS_BLOCK)&v12[16 * v16 + 4096],
                      Buffer,
                      Length,
                      &ByteOffset,
                      0LL);
            if ( Event >= 0 )
            {
              ++v16;
              v17 = ++v35;
              ++v20;
              v18 = a6;
              *a6 = Length + ByteOffset.LowPart;
              v15 -= Length;
              Buffer = (char *)Buffer + Length;
              goto LABEL_21;
            }
            if ( v19 )
              goto LABEL_55;
            v19 = 1;
          }
        }
        ++v14;
        v7 = a4;
      }
      Event = KeWaitForMultipleObjects(
                v16,
                (PVOID *)v12 + 64,
                WaitAll,
                Executive,
                0,
                0,
                0LL,
                (PKWAIT_BLOCK)(v12 + 1024));
      if ( Event < 0 )
        break;
      v23 = 0LL;
      v24 = (int *)(v12 + 4096);
      while ( v23 < v35 )
      {
        if ( *v24 < 0 )
          goto LABEL_54;
        ++v23;
        v24 += 4;
      }
      if ( v15 )
        --v14;
    }
LABEL_55:
    CmRegistryIODebug = 2;
    qword_140747ED0 = (__int64)a3;
    dword_140747ED8 = Event;
    if ( v16 > 0 )
      KeWaitForMultipleObjects(v16, (PVOID *)v12 + 64, WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(v12 + 1024));
LABEL_54:
    v25 = 0;
LABEL_41:
    for ( k = 0LL; k < 64 && *(_QWORD *)&v12[8 * k]; ++k )
    {
      ObfDereferenceObject(*(PVOID *)&v12[8 * k + 512]);
      v29 = 0;
      ZwSetInformationObject(*(HANDLE *)&v12[8 * k], ObjectHandleFlagInformation, &v29, 2u);
      ZwClose(*(HANDLE *)&v12[8 * k]);
    }
    ExFreePoolWithTag(v12, 0);
    if ( v38 )
    {
      CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), v31);
      CmpSetPriorityThread(KeGetCurrentThread(), Priority);
    }
    CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), v37);
    LOBYTE(PoolWithTag) = v25;
  }
  return (char)PoolWithTag;
}
