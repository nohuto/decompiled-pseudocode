/*
 * XREFs of ExpCovQueryInformation @ 0x140674878
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockShared @ 0x140020A98 (ExfAcquirePushLockShared.c)
 *     ExfAcquirePushLockExclusive @ 0x140020CC8 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1404470E8 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x140500E94 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140674444 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x1406745E0 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x14067460C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovReadRequestBuffer @ 0x140674F78 (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovQueryInformation(_OWORD *a1, unsigned int a2, unsigned int *a3)
{
  SIZE_T v3; // rsi
  char *PoolWithTag; // r14
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  char *v9; // rsi
  _OWORD *v10; // r15
  char *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // r12d
  __int64 v15; // r12
  unsigned int v16; // ecx
  unsigned int v17; // r12d
  unsigned int v18; // edx
  void *v19; // rax
  int v20; // [rsp+20h] [rbp-138h]
  unsigned int v21; // [rsp+24h] [rbp-134h]
  int v22; // [rsp+28h] [rbp-130h] BYREF
  char *v23; // [rsp+30h] [rbp-128h]
  _OWORD *v24; // [rsp+38h] [rbp-120h]
  unsigned int v25; // [rsp+40h] [rbp-118h]
  UNICODE_STRING StringIn; // [rsp+48h] [rbp-110h] BYREF
  unsigned int *v27; // [rsp+58h] [rbp-100h]
  void *v28; // [rsp+60h] [rbp-F8h]
  _QWORD *v29; // [rsp+68h] [rbp-F0h]
  _OWORD *v30; // [rsp+70h] [rbp-E8h]
  char *v31; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+88h] [rbp-D0h]
  bool v33; // [rsp+8Ch] [rbp-CCh]
  UNICODE_STRING StringOut; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-B8h]
  int v36; // [rsp+B0h] [rbp-A8h]
  int v37; // [rsp+B4h] [rbp-A4h]
  unsigned int v38; // [rsp+B8h] [rbp-A0h]
  _OWORD v39[4]; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v40; // [rsp+100h] [rbp-58h] BYREF

  v27 = a3;
  v3 = a2;
  v25 = a2;
  v30 = a1;
  StringIn.Buffer = 0LL;
  StringIn.Length = 0;
  StringOut.Buffer = 0LL;
  PoolWithTag = 0LL;
  StringOut.Length = 0;
  v37 = 0;
  v38 = 64;
  v32 = a2;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a3 )
    *a3 = 64;
  if ( a2 < 0x40 )
    return 3221225476LL;
  v24 = a1 + 2;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v39[0] = *a1;
  v39[1] = a1[1];
  v39[2] = a1[2];
  v39[3] = a1[3];
  v33 = LODWORD(v39[0]) == 1;
  v6 = ExpCovReadRequestBuffer((char *)v39 + 8, &StringIn, &v40, &v22);
  if ( v6 >= 0 )
  {
    v36 = v22;
    v35 = v40;
    if ( !StringIn.Buffer || (v6 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut), v6 >= 0) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72766F43u);
      v23 = PoolWithTag;
      v31 = PoolWithTag;
      if ( PoolWithTag )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v6 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovQueryInfoCallBack, (__int64)&v31);
        if ( v6 >= 0 )
        {
          ExpCovQueryHypervisorInformation((__int64 *)&v31);
          v21 = v38;
          v8 = v37;
          v20 = v37;
          if ( (unsigned int)v3 >= v38 && (unsigned int)((v31 - PoolWithTag) >> 5) )
          {
            v9 = PoolWithTag;
            v10 = v24;
            while ( v8 )
            {
              v11 = (char *)v10 + *((unsigned int *)v9 + 6) + 32;
              *(_DWORD *)v10 = *(_DWORD *)v9;
              *((_DWORD *)v10 + 1) = *((_DWORD *)v9 + 1);
              *((_DWORD *)v10 + 6) = *((_DWORD *)v9 + 6);
              memmove((char *)v10 + 28, v9 + 28, *((unsigned int *)v9 + 6));
              *((_WORD *)v10 + 4) = *((_WORD *)v9 + 4);
              *((_WORD *)v10 + 5) = *((_WORD *)v9 + 5);
              *((_QWORD *)v10 + 2) = v11;
              memmove(v11, *((const void **)v9 + 2), *((unsigned __int16 *)v9 + 4));
              v12 = *(unsigned int *)v9;
              v10 = (_OWORD *)((char *)v10 + v12);
              v24 = v10;
              v9 += v12;
              v8 = --v37;
            }
          }
          else
          {
            if ( (unsigned int)v3 < v38 )
              v6 = -1073741820;
            v10 = v24;
          }
          if ( LODWORD(v39[0]) == 1 )
            ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
          else
            ExfAcquirePushLockShared((__int64)&ExpCovPushLock);
          v13 = ExpCovUnloadedModuleList;
LABEL_29:
          v14 = v20;
          while ( (__int64 *)v13 != &ExpCovUnloadedModuleList )
          {
            v29 = (_QWORD *)v13;
            v15 = *(_QWORD *)(v13 + 56);
            if ( !v15 || !ExpCovIsUnLoadedModulePresent(v13, v22, &StringIn, &v40) )
              goto LABEL_32;
            v16 = *(_DWORD *)(v13 + 48);
            if ( LODWORD(v39[0]) != 1 )
              v16 -= *(_DWORD *)(v15 + 28);
            if ( v16 >= 0xFFFFFFE0 || (v17 = *(unsigned __int16 *)(v13 + 32) + v16 + 32, v17 < 0x20) )
              v17 = -1;
            v18 = v17 + v21;
            if ( v17 + v21 < v21 )
            {
              DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n");
LABEL_32:
              v13 = *(_QWORD *)v13;
              goto LABEL_29;
            }
            v21 += v17;
            if ( v25 >= v18 )
            {
              v28 = (char *)v10 + v16 + 32;
              *(_DWORD *)v10 = v17;
              *((_DWORD *)v10 + 1) = 0;
              *((_DWORD *)v10 + 6) = v16;
              memmove((char *)v10 + 28, *(const void **)(v13 + 56), v16);
              *((_WORD *)v10 + 4) = *(_WORD *)(v13 + 32);
              *((_WORD *)v10 + 5) = *(_WORD *)(v13 + 32);
              v19 = v28;
              *((_QWORD *)v10 + 2) = v28;
              memmove(v19, *(const void **)(v13 + 40), *(unsigned __int16 *)(v13 + 32));
              v10 = (_OWORD *)((char *)v10 + v17);
              v24 = v10;
              if ( LODWORD(v39[0]) == 1 )
              {
                v13 = *(_QWORD *)(v13 + 8);
                ExpCovDeleteUnloadedModuleEntry(v29);
              }
            }
            else
            {
              if ( v27 )
                *v27 = v18;
              v6 = -1073741820;
            }
            v14 = ++v20;
            v13 = *(_QWORD *)v13;
          }
          ExfReleasePushLock(&ExpCovPushLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v27 )
            *v27 = v21;
          *((_DWORD *)v30 + 1) = v14;
        }
        else
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
