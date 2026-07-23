/*
 * XREFs of ObpInsertCallbackByAltitude @ 0x140579820
 * Callers:
 *     ObRegisterCallbacks @ 0x140579658 (ObRegisterCallbacks.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlCompareAltitudes @ 0x1400A8764 (RtlCompareAltitudes.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall ObpInsertCallbackByAltitude(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v3; // rbx
  unsigned int v6; // ebp
  unsigned __int64 *v7; // rdi
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  _QWORD *v10; // r15
  _QWORD *v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rcx
  signed __int64 v14; // rax
  unsigned __int64 v15; // rtt
  const UNICODE_STRING *v17; // r12
  LONG v18; // eax
  bool v19; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v6 = 0;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 184);
  v8 = (_BYTE *)KeAbPreAcquire(a1 + 184, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    v9[26] |= 1u;
  v10 = (_QWORD *)(a1 + 200);
  v11 = (_QWORD *)*v10;
  if ( (_QWORD *)*v10 == v10 )
    goto LABEL_6;
  v17 = (const UNICODE_STRING *)a2[3];
  while ( 1 )
  {
    v18 = RtlCompareAltitudes((PCUNICODE_STRING)(v11[3] + 16LL), v17 + 1);
    v19 = v18 == 0;
    if ( v18 <= 0 )
      break;
    v11 = (_QWORD *)*v11;
    if ( v11 == v10 )
    {
      v19 = v18 == 0;
      break;
    }
  }
  if ( !v19 )
  {
LABEL_6:
    v12 = (__int64 *)v11[1];
    v13 = *v12;
    if ( *(__int64 **)(*v12 + 8) != v12 )
      __fastfail(3u);
    *a2 = v13;
    a2[1] = v12;
    *(_QWORD *)(v13 + 8) = a2;
    *v12 = (__int64)a2;
  }
  else
  {
    v6 = -1071906799;
  }
  _m_prefetchw(v7);
  v14 = *v7;
  if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = v14 - 16;
  if ( (v14 & 2) != 0 || (v15 = *v7, v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v3, v14)) )
    ExfReleasePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
