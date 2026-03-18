/*
 * XREFs of ObpInsertCallbackByAltitude @ 0x1405A73C8
 * Callers:
 *     ObRegisterCallbacks @ 0x1405A6D9C (ObRegisterCallbacks.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     RtlCompareAltitudes @ 0x1401299C4 (RtlCompareAltitudes.c)
 */

__int64 __fastcall ObpInsertCallbackByAltitude(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebp
  unsigned __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdi
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  unsigned __int64 v19; // rtt
  struct _KTHREAD *v20; // rdx
  __int16 v21; // cx
  const UNICODE_STRING *v23; // r15
  LONG v24; // eax
  bool v25; // zf

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->SpecialApcDisable;
  v8 = (unsigned __int64 *)(a1 + 184);
  v9 = KeAbPreAcquire(a1 + 184, 0LL, 0LL, a4);
  v12 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = (_QWORD *)(a1 + 200);
  v14 = (_QWORD *)*v13;
  if ( (_QWORD *)*v13 == v13 )
    goto LABEL_6;
  v23 = (const UNICODE_STRING *)a2[3];
  while ( 1 )
  {
    v24 = RtlCompareAltitudes((PCUNICODE_STRING)(v14[3] + 16LL), v23 + 1);
    v25 = v24 == 0;
    if ( v24 <= 0 )
      break;
    v14 = (_QWORD *)*v14;
    if ( v14 == v13 )
    {
      v25 = v24 == 0;
      break;
    }
  }
  if ( !v25 )
  {
LABEL_6:
    v15 = (__int64 *)v14[1];
    v16 = *v15;
    *a2 = *v15;
    a2[1] = (__int64)v15;
    if ( *(__int64 **)(v16 + 8) != v15 )
      __fastfail(3u);
    *(_QWORD *)(v16 + 8) = a2;
    *v15 = (__int64)a2;
  }
  else
  {
    v7 = -1071906799;
  }
  _m_prefetchw(v8);
  v17 = *v8;
  v18 = *v8 - 16;
  if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v18 = 0LL;
  if ( (v17 & 2) != 0 || (v19 = *v8, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v18, v17)) )
    ExfReleasePushLock(v8, v10);
  KeAbPostRelease((ULONG_PTR)v8);
  v20 = KeGetCurrentThread();
  v21 = v20->SpecialApcDisable + 1;
  v20->SpecialApcDisable = v21;
  if ( !v21 && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery();
  return v7;
}
