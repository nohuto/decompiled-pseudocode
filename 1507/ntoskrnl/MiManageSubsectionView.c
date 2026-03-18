/*
 * XREFs of MiManageSubsectionView @ 0x14003DBD0
 * Callers:
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x1401596A0 (MiSessionRemoveImage.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // edi
  int v11; // edi
  int v12; // edi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  struct _KTHREAD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(v5 + 112);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 112), 0LL) )
    ExfAcquirePushLockExclusiveEx(v5 + 112, v8, v5 + 112);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = a3 - 1;
  if ( !v10 )
  {
    v15 = a1[10];
    v16 = a1 + 10;
    *a2 = v15;
    a2[1] = a1 + 10;
    if ( *(__int64 **)(v15 + 8) != a1 + 10 )
      __fastfail(3u);
    goto LABEL_22;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 && (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
      {
        v13 = *a2;
        v14 = (_QWORD *)a2[1];
        if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v14 != a2 )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
      }
      goto LABEL_23;
    }
    v15 = *(_QWORD *)(v5 + 8);
    v16 = (_QWORD *)(v5 + 8);
    *a2 = v15;
    a2[1] = v5 + 8;
    if ( *(_QWORD *)(v15 + 8) != v5 + 8 )
      __fastfail(3u);
LABEL_22:
    *(_QWORD *)(v15 + 8) = a2;
    *v16 = a2;
    goto LABEL_23;
  }
  v17 = *a2;
  v18 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v18 != a2 )
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
LABEL_23:
  v19 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5 + 112);
  KeAbPostRelease(v5 + 112);
  result = (unsigned int)++v19->SpecialApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&v19->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(v21, v20, v22);
  }
  return result;
}
