/*
 * XREFs of ExpCovQueryInformation @ 0x1406B72F0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ExfAcquirePushLockExclusive @ 0x1400C5F04 (ExfAcquirePushLockExclusive.c)
 *     ExfAcquirePushLockShared @ 0x1400C6108 (ExfAcquirePushLockShared.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlDuplicateUnicodeString @ 0x1403F6E40 (RtlDuplicateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1406B6EBC (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x1406B7058 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406B7084 (ExpCovQueryHypervisorInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1406B79F0 (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovQueryInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  SIZE_T v3; // rsi
  char *PoolWithTag; // r14
  __int64 v6; // rax
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  char *v13; // rsi
  unsigned __int64 v14; // r15
  void *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // r12d
  __int64 v19; // r12
  unsigned int v20; // ecx
  unsigned int v21; // r12d
  unsigned int v22; // edx
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+20h] [rbp-138h]
  unsigned int v28; // [rsp+24h] [rbp-134h]
  int v29; // [rsp+28h] [rbp-130h] BYREF
  char *v30; // [rsp+30h] [rbp-128h]
  unsigned __int64 v31; // [rsp+38h] [rbp-120h]
  unsigned int v32; // [rsp+40h] [rbp-118h]
  UNICODE_STRING StringIn; // [rsp+48h] [rbp-110h] BYREF
  unsigned int *v34; // [rsp+58h] [rbp-100h]
  void *v35; // [rsp+60h] [rbp-F8h]
  _QWORD *v36; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v37; // [rsp+70h] [rbp-E8h]
  char *v38; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v39; // [rsp+88h] [rbp-D0h]
  bool v40; // [rsp+8Ch] [rbp-CCh]
  UNICODE_STRING StringOut; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-B8h]
  int v43; // [rsp+B0h] [rbp-A8h]
  int v44; // [rsp+B4h] [rbp-A4h]
  unsigned int v45; // [rsp+B8h] [rbp-A0h]
  _OWORD v46[4]; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v47; // [rsp+100h] [rbp-58h] BYREF

  v34 = a3;
  v3 = a2;
  v32 = a2;
  v37 = a1;
  StringIn.Buffer = 0LL;
  StringIn.Length = 0;
  StringOut.Buffer = 0LL;
  PoolWithTag = 0LL;
  StringOut.Length = 0;
  v44 = 0;
  v45 = 64;
  v39 = a2;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a3 )
    *a3 = 64;
  if ( a2 < 0x40 )
    return 3221225476LL;
  v31 = a1 + 32;
  v6 = a1;
  if ( a1 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  v46[0] = *(_OWORD *)v6;
  v46[1] = *(_OWORD *)(v6 + 16);
  v46[2] = *(_OWORD *)(v6 + 32);
  v46[3] = *(_OWORD *)(v6 + 48);
  v40 = LODWORD(v46[0]) == 1;
  v7 = ExpCovReadRequestBuffer((char *)v46 + 8, &StringIn, &v47, &v29);
  if ( v7 >= 0 )
  {
    v43 = v29;
    v42 = v47;
    if ( !StringIn.Buffer || (v7 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut), v7 >= 0) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72766F43u);
      v30 = PoolWithTag;
      v38 = PoolWithTag;
      if ( PoolWithTag )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v7 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovQueryInfoCallBack, (__int64)&v38);
        if ( v7 >= 0 )
        {
          ExpCovQueryHypervisorInformation((__int64 *)&v38);
          v28 = v45;
          v12 = v44;
          v27 = v44;
          if ( (unsigned int)v3 >= v45 && (unsigned int)((v38 - PoolWithTag) >> 5) )
          {
            v13 = PoolWithTag;
            v14 = v31;
            while ( v12 )
            {
              v15 = (void *)(*((unsigned int *)v13 + 6) + v14 + 32);
              *(_DWORD *)v14 = *(_DWORD *)v13;
              *(_DWORD *)(v14 + 4) = *((_DWORD *)v13 + 1);
              *(_DWORD *)(v14 + 24) = *((_DWORD *)v13 + 6);
              memmove((void *)(v14 + 28), v13 + 28, *((unsigned int *)v13 + 6));
              *(_WORD *)(v14 + 8) = *((_WORD *)v13 + 4);
              *(_WORD *)(v14 + 10) = *((_WORD *)v13 + 5);
              *(_QWORD *)(v14 + 16) = v15;
              memmove(v15, *((const void **)v13 + 2), *((unsigned __int16 *)v13 + 4));
              v16 = *(unsigned int *)v13;
              v14 += v16;
              v31 = v14;
              v13 += v16;
              v12 = --v44;
            }
          }
          else
          {
            if ( (unsigned int)v3 < v45 )
              v7 = -1073741820;
            v14 = v31;
          }
          if ( LODWORD(v46[0]) == 1 )
            ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
          else
            ExfAcquirePushLockShared((__int64)&ExpCovPushLock);
          v17 = ExpCovUnloadedModuleList;
LABEL_29:
          v18 = v27;
          while ( (__int64 *)v17 != &ExpCovUnloadedModuleList )
          {
            v36 = (_QWORD *)v17;
            v19 = *(_QWORD *)(v17 + 56);
            if ( !v19 || !ExpCovIsUnLoadedModulePresent(v17, v29, &StringIn, &v47) )
              goto LABEL_32;
            v20 = *(_DWORD *)(v17 + 48);
            if ( LODWORD(v46[0]) != 1 )
              v20 -= *(_DWORD *)(v19 + 28);
            if ( v20 >= 0xFFFFFFE0 || (v21 = *(unsigned __int16 *)(v17 + 32) + v20 + 32, v21 < 0x20) )
              v21 = -1;
            v22 = v21 + v28;
            if ( v21 + v28 < v28 )
            {
              DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n");
LABEL_32:
              v17 = *(_QWORD *)v17;
              goto LABEL_29;
            }
            v28 += v21;
            if ( v32 >= v22 )
            {
              v35 = (void *)(v20 + v14 + 32);
              *(_DWORD *)v14 = v21;
              *(_DWORD *)(v14 + 4) = 0;
              *(_DWORD *)(v14 + 24) = v20;
              memmove((void *)(v14 + 28), *(const void **)(v17 + 56), v20);
              *(_WORD *)(v14 + 8) = *(_WORD *)(v17 + 32);
              *(_WORD *)(v14 + 10) = *(_WORD *)(v17 + 32);
              v23 = v35;
              *(_QWORD *)(v14 + 16) = v35;
              memmove(v23, *(const void **)(v17 + 40), *(unsigned __int16 *)(v17 + 32));
              v14 += v21;
              v31 = v14;
              if ( LODWORD(v46[0]) == 1 )
              {
                v17 = *(_QWORD *)(v17 + 8);
                ExpCovDeleteUnloadedModuleEntry(v36);
              }
            }
            else
            {
              if ( v34 )
                *v34 = v22;
              v7 = -1073741820;
            }
            v18 = ++v27;
            v17 = *(_QWORD *)v17;
          }
          ExfReleasePushLock(&ExpCovPushLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
          if ( v34 )
            *v34 = v28;
          *(_DWORD *)(v37 + 4) = v18;
        }
        else
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( StringOut.Buffer )
    RtlFreeAnsiString(&StringOut);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x72766F43u);
  return (unsigned int)v7;
}
