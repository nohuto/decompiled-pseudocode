/*
 * XREFs of MiManageSubsectionView @ 0x1400138A0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x1401309B0 (MiSessionRemoveImage.c)
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  volatile signed __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // esi
  int v12; // esi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _KTHREAD *v17; // rdi
  int v19; // esi
  __int64 v20; // rax
  _QWORD *v21; // rbp
  __int64 v22; // rcx
  _QWORD *v23; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = (volatile signed __int64 *)(v5 + 104);
  v9 = KeAbPreAcquire(v5 + 104);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx(v5 + 104, v9, v5 + 104);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = a3 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v19 = v12 - 1;
      if ( v19 )
      {
        if ( v19 == 1 && (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
        {
          v22 = *a2;
          v23 = (_QWORD *)a2[1];
          if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v23 != a2 )
            __fastfail(3u);
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
        }
      }
      else
      {
        v20 = *(_QWORD *)(v5 + 8);
        v21 = (_QWORD *)(v5 + 8);
        if ( *(_QWORD **)(v20 + 8) != v21 )
          __fastfail(3u);
        *a2 = v20;
        a2[1] = v21;
        *(_QWORD *)(v20 + 8) = a2;
        *v21 = a2;
      }
    }
    else
    {
      v13 = *a2;
      v14 = (_QWORD *)a2[1];
      if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v14 != a2 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
  }
  else
  {
    v15 = a1[10];
    v16 = a1 + 10;
    if ( *(__int64 **)(v15 + 8) != a1 + 10 )
      __fastfail(3u);
    *a2 = v15;
    a2[1] = v16;
    *(_QWORD *)(v15 + 8) = a2;
    *v16 = a2;
  }
  v17 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  return KiLeaveGuardedRegionUnsafe((__int64)v17);
}
