/*
 * XREFs of ExpCovQueryInformation @ 0x1406F8EF0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockShared @ 0x1400F2EF0 (ExfAcquirePushLockShared.c)
 *     ExfAcquirePushLockExclusive @ 0x1400F30D4 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1404FEFE8 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x14051C530 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1406F8ABC (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x1406F8C58 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406F8C84 (ExpCovQueryHypervisorInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1406F96A8 (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovQueryInformation(_OWORD *a1, unsigned int a2, unsigned int *a3)
{
  SIZE_T v3; // rsi
  char *PoolWithTag; // r14
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  int v10; // ecx
  char *v11; // rsi
  _OWORD *v12; // r15
  char *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // r12d
  __int64 v18; // r12
  unsigned int v19; // ecx
  unsigned int v20; // r12d
  void *v21; // rax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  int v24; // [rsp+20h] [rbp-138h]
  unsigned int v25; // [rsp+24h] [rbp-134h]
  int v26; // [rsp+28h] [rbp-130h] BYREF
  char *v27; // [rsp+30h] [rbp-128h]
  _OWORD *v28; // [rsp+38h] [rbp-120h]
  unsigned int v29; // [rsp+40h] [rbp-118h]
  UNICODE_STRING StringIn; // [rsp+48h] [rbp-110h] BYREF
  unsigned int *v31; // [rsp+58h] [rbp-100h]
  void *v32; // [rsp+60h] [rbp-F8h]
  _QWORD *v33; // [rsp+68h] [rbp-F0h]
  _OWORD *v34; // [rsp+70h] [rbp-E8h]
  char *v35; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v36; // [rsp+88h] [rbp-D0h]
  bool v37; // [rsp+8Ch] [rbp-CCh]
  UNICODE_STRING StringOut; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-B8h]
  int v40; // [rsp+B0h] [rbp-A8h]
  int v41; // [rsp+B4h] [rbp-A4h]
  unsigned int v42; // [rsp+B8h] [rbp-A0h]
  _OWORD v43[4]; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v44; // [rsp+100h] [rbp-58h] BYREF

  v31 = a3;
  v3 = a2;
  v29 = a2;
  v34 = a1;
  StringIn.Buffer = 0LL;
  StringIn.Length = 0;
  StringOut.Buffer = 0LL;
  PoolWithTag = 0LL;
  StringOut.Length = 0;
  v41 = 0;
  v42 = 64;
  v36 = a2;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a3 )
    *a3 = 64;
  if ( a2 < 0x40 )
    return 3221225476LL;
  v28 = a1 + 2;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v43[0] = *a1;
  v43[1] = a1[1];
  v43[2] = a1[2];
  v43[3] = a1[3];
  v37 = LODWORD(v43[0]) == 1;
  v6 = ExpCovReadRequestBuffer((char *)v43 + 8, &StringIn, &v44, &v26);
  if ( v6 >= 0 )
  {
    v40 = v26;
    v39 = v44;
    if ( !StringIn.Buffer || (v6 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut), v6 >= 0) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72766F43u);
      v27 = PoolWithTag;
      v35 = PoolWithTag;
      if ( PoolWithTag )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v6 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovQueryInfoCallBack, (__int64)&v35);
        if ( v6 >= 0 )
        {
          ExpCovQueryHypervisorInformation((__int64 *)&v35);
          v25 = v42;
          v10 = v41;
          v24 = v41;
          if ( (unsigned int)v3 >= v42 && (unsigned int)((v35 - PoolWithTag) >> 5) )
          {
            v11 = PoolWithTag;
            v12 = v28;
            while ( v10 )
            {
              v13 = (char *)v12 + *((unsigned int *)v11 + 6) + 32;
              *(_DWORD *)v12 = *(_DWORD *)v11;
              *((_DWORD *)v12 + 1) = *((_DWORD *)v11 + 1);
              *((_DWORD *)v12 + 6) = *((_DWORD *)v11 + 6);
              memmove((char *)v12 + 28, v11 + 28, *((unsigned int *)v11 + 6));
              *((_WORD *)v12 + 4) = *((_WORD *)v11 + 4);
              *((_WORD *)v12 + 5) = *((_WORD *)v11 + 5);
              *((_QWORD *)v12 + 2) = v13;
              memmove(v13, *((const void **)v11 + 2), *((unsigned __int16 *)v11 + 4));
              v14 = *(unsigned int *)v11;
              v12 = (_OWORD *)((char *)v12 + v14);
              v28 = v12;
              v11 += v14;
              v10 = --v41;
            }
          }
          else
          {
            if ( (unsigned int)v3 < v42 )
              v6 = -1073741820;
            v12 = v28;
          }
          if ( LODWORD(v43[0]) == 1 )
            ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
          else
            ExfAcquirePushLockShared((__int64)&ExpCovPushLock);
          v16 = ExpCovUnloadedModuleList;
LABEL_32:
          v17 = v24;
          while ( (__int64 *)v16 != &ExpCovUnloadedModuleList )
          {
            v33 = (_QWORD *)v16;
            v18 = *(_QWORD *)(v16 + 56);
            if ( !v18 || !ExpCovIsUnLoadedModulePresent(v16, v26, &StringIn, &v44) )
              goto LABEL_35;
            v19 = *(_DWORD *)(v16 + 48);
            if ( LODWORD(v43[0]) != 1 )
              v19 -= *(_DWORD *)(v18 + 28);
            if ( v19 >= 0xFFFFFFE0 || (v20 = *(unsigned __int16 *)(v16 + 32) + v19 + 32, v20 < 0x20) )
              v20 = -1;
            v15 = v20 + v25;
            if ( (unsigned int)v15 < v25 )
            {
              DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n");
LABEL_35:
              v16 = *(_QWORD *)v16;
              goto LABEL_32;
            }
            v25 += v20;
            if ( v29 >= (unsigned int)v15 )
            {
              v32 = (char *)v12 + v19 + 32;
              *(_DWORD *)v12 = v20;
              *((_DWORD *)v12 + 1) = 0;
              *((_DWORD *)v12 + 6) = v19;
              memmove((char *)v12 + 28, *(const void **)(v16 + 56), v19);
              *((_WORD *)v12 + 4) = *(_WORD *)(v16 + 32);
              *((_WORD *)v12 + 5) = *(_WORD *)(v16 + 32);
              v21 = v32;
              *((_QWORD *)v12 + 2) = v32;
              memmove(v21, *(const void **)(v16 + 40), *(unsigned __int16 *)(v16 + 32));
              v12 = (_OWORD *)((char *)v12 + v20);
              v28 = v12;
              if ( LODWORD(v43[0]) == 1 )
              {
                v16 = *(_QWORD *)(v16 + 8);
                ExpCovDeleteUnloadedModuleEntry(v33);
              }
            }
            else
            {
              if ( v31 )
                *v31 = v15;
              v6 = -1073741820;
            }
            v17 = ++v24;
            v16 = *(_QWORD *)v16;
          }
          ExfReleasePushLock(&ExpCovPushLock, v15);
          v22 = KeGetCurrentThread();
          v23 = v22->KernelApcDisable + 1;
          v22->KernelApcDisable = v23;
          if ( !v23
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
            && !v22->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( v31 )
            *v31 = v25;
          *((_DWORD *)v34 + 1) = v17;
        }
        else
        {
          v8 = KeGetCurrentThread();
          v9 = v8->KernelApcDisable + 1;
          v8->KernelApcDisable = v9;
          if ( !v9
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
            && !v8->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
      else
      {
        v6 = -1073741670;
      }
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( StringOut.Buffer )
    RtlFreeAnsiString(&StringOut);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x72766F43u);
  return (unsigned int)v6;
}
