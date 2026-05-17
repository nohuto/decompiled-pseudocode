/*
 * XREFs of RtlpProcessReflectionStartup @ 0x18008D1C0
 * Callers:
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     NtWriteVirtualMemory @ 0x1800A5800 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 *     ZwResumeProcess @ 0x1800A7D30 (ZwResumeProcess.c)
 *     NtSuspendThread @ 0x1800A8510 (NtSuspendThread.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpProcessReflectionStartup(__int64 a1)
{
  int v2; // r14d
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  HANDLE v7; // r8
  HANDLE v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  void *v12; // r15
  HANDLE v13; // rbx
  HANDLE v14; // rdi
  __int64 v15; // rcx
  void *v16; // rsi
  void (__fastcall *v17)(_QWORD); // rdi
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-89h]
  _QWORD v21[2]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v22[8]; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-51h]
  HANDLE v24; // [rsp+60h] [rbp-49h]
  __int64 v25; // [rsp+68h] [rbp-41h]
  __int64 v26; // [rsp+70h] [rbp-39h]
  __int64 v27; // [rsp+110h] [rbp+67h] BYREF
  HANDLE v28; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE v29; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v2 = ZwAllocateVirtualMemory(-1LL, &v27, 0LL, a1, 12288, 4);
  if ( v2 < 0 )
  {
    memset((void *)(a1 + 56), 0, 0x20uLL);
    goto LABEL_30;
  }
  v3 = v27;
  *(_OWORD *)v27 = *(_OWORD *)a1;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(v3 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(v3 + 48) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(v3 + 64) = *(_OWORD *)(a1 + 64);
  *(_QWORD *)(v3 + 80) = *(_QWORD *)(a1 + 80);
  LOBYTE(v20) = 0;
  v2 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 0LL, v20);
  if ( v2 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    v5 = 0;
    if ( (v4 & 2) != 0 )
      v5 = 2;
    if ( (v4 & 8) != 0 )
      v5 |= 4u;
    v6 = RtlCloneUserProcess(v5 | 1u, 0LL, 0LL, 0LL, v22);
    v2 = v6;
    if ( v6 )
    {
      if ( v6 == 297 )
      {
        NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
        ZwSetEvent(v28, 0LL);
        NtClose(v28);
        if ( v29 )
        {
          NtWaitForSingleObject(v29, 0, 0LL);
          NtClose(v29);
        }
        v17 = *(void (__fastcall **)(_QWORD))(v27 + 16);
        if ( v17 )
        {
          v17(*(_QWORD *)(v27 + 24));
        }
        else if ( (*(_DWORD *)(v27 + 8) & 4) == 0 )
        {
          NtSuspendThread(-2LL);
        }
        v21[0] = *(_QWORD *)v27;
        v9 = ZwFreeVirtualMemory(-1LL, &v27, v21, 0x8000LL);
        v2 = v9;
        v10 = -1LL;
        goto LABEL_10;
      }
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
      v18 = *(_QWORD *)(a1 + 32);
      if ( v18 )
        ZwSetEvent(v18, 0LL);
    }
    else
    {
      v7 = v23;
      v8 = Handle;
      *(_QWORD *)(a1 + 64) = v24;
      *(_QWORD *)(a1 + 72) = v25;
      *(_QWORD *)(a1 + 80) = v26;
      *(_QWORD *)(a1 + 56) = v7;
      v9 = ZwDuplicateObject(-1LL, v8, v7, &v28, 2031619, 0, 2);
      v10 = (__int64)v23;
      v2 = v9;
      if ( v9 < 0 )
      {
LABEL_10:
        ZwTerminateProcess(v10, (unsigned int)v9);
        goto LABEL_30;
      }
      v9 = NtWriteVirtualMemory(v23, &v28, &v28, 8LL, 0LL);
      v2 = v9;
      if ( v9 < 0 )
        goto LABEL_12;
      v11 = *(_QWORD *)(a1 + 48);
      if ( v11 )
      {
        v9 = ZwDuplicateObject(-1LL, v11, v23, &v29, 2031619, 0, 2);
        v2 = v9;
        if ( v9 < 0 )
          goto LABEL_12;
        if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
          NtClose(*(HANDLE *)(a1 + 48));
        v9 = NtWriteVirtualMemory(v23, &v29, &v29, 8LL, 0LL);
        v2 = v9;
        if ( v9 < 0 )
        {
LABEL_12:
          v10 = (__int64)v23;
          goto LABEL_10;
        }
      }
      ZwResumeProcess(v23);
      NtWaitForSingleObject(Handle, 0, 0LL);
      v12 = *(void **)(a1 + 32);
      if ( v12 )
      {
        v13 = v23;
        v14 = v24;
        v15 = *(_QWORD *)(a1 + 32);
        v16 = *(void **)(a1 + 40);
        v2 = ZwSetEvent(v15, 0LL);
        NtWaitForSingleObject(v16, 0, 0LL);
        NtClose(v13);
        NtClose(v14);
        NtClose(v12);
        NtClose(v16);
      }
    }
  }
LABEL_30:
  if ( Handle )
    NtClose(Handle);
  if ( v27 )
  {
    v21[0] = *(_QWORD *)v27;
    ZwFreeVirtualMemory(-1LL, &v27, v21, 0x8000LL);
  }
  return (unsigned int)v2;
}
