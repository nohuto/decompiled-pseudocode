/*
 * XREFs of EtwpAddGuidEntry @ 0x14048E090
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040D4A0 (EtwpRegisterUMGuid.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EtwpReferenceGuidEntry @ 0x14040D460 (EtwpReferenceGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x14048E200 (EtwpAllocGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x1404C281C (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  volatile signed __int64 *v7; // r14
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 **v10; // r15
  unsigned __int64 *v11; // rsi
  _BYTE *v12; // rax
  _BYTE *v13; // rdi
  volatile signed __int64 *i; // rdi
  __int64 v15; // rcx
  volatile signed __int64 *v16; // rax

  v4 = a3;
  result = EtwpAllocGuidEntry(a2);
  v7 = (volatile signed __int64 *)result;
  if ( result )
  {
    v8 = 56LL * ((*a2 ^ a2[1] ^ a2[3] ^ a2[2]) & 0x3F) + a1 + 1424;
    CurrentThread = KeGetCurrentThread();
    v10 = (volatile signed __int64 **)(v8 + 16 * v4);
    --CurrentThread->KernelApcDisable;
    v11 = (unsigned __int64 *)(v8 + 48);
    v12 = (_BYTE *)KeAbPreAcquire(v8 + 48, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      v13[26] |= 1u;
    for ( i = *v10; i != (volatile signed __int64 *)v10; i = (volatile signed __int64 *)*i )
    {
      v15 = *(_QWORD *)a2 - *((_QWORD *)i + 3);
      if ( *(_QWORD *)a2 == *((_QWORD *)i + 3) )
        v15 = *((_QWORD *)a2 + 1) - *((_QWORD *)i + 4);
      if ( !v15 && EtwpReferenceGuidEntry((ULONG_PTR)i) )
      {
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v11);
          KeAbPostRelease((ULONG_PTR)v11);
          KeLeaveCriticalRegion();
          _InterlockedAdd64(v7 + 2, 0xFFFFFFFFFFFFFFFFuLL);
          EtwpFreeGuidEntry((PVOID)v7);
          return (__int64)i;
        }
        break;
      }
    }
    *((_QWORD *)v7 + 47) = a1;
    v16 = *v10;
    if ( *((volatile signed __int64 ***)*v10 + 1) != v10 )
      __fastfail(3u);
    *v7 = (volatile signed __int64)v16;
    i = v7;
    *((_QWORD *)v7 + 1) = v10;
    *((_QWORD *)v16 + 1) = v7;
    *v10 = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
    return (__int64)i;
  }
  return result;
}
