/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001DD84
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001CB8C (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ @ 0x1C0145948 (-PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C0009060 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 *     Template_pqq @ 0x1C001E8AC (Template_pqq.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0025C38 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbp
  unsigned int v6; // r13d
  __int64 v8; // rdi
  char v9; // r12
  bool v10; // zf
  __int64 v11; // r14
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  v6 = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_pqq((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentFState, a3, (_DWORD)this, a2, a3);
    v8 = *((_QWORD *)this + 271) + 520 * v5;
    if ( a4 || !*(_BYTE *)(v8 + 360) )
    {
      if ( DXGADAPTER::IsDxgmms2(this) && *(_DWORD *)(v8 + 208) == 3 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        *(_DWORD *)(v8 + 344) = v6;
      }
      v10 = *(_DWORD *)(v8 + 344) == 0;
      *(_BYTE *)(v8 + 359) = 1;
      if ( !v10 )
      {
        v11 = *(_QWORD *)(v8 + 512);
        if ( v11 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 160), &LockHandle);
          *(_DWORD *)(v11 + 196) = -1;
          *(_BYTE *)(v11 + 224) = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      if ( v9 )
        DXGADAPTER::DdiSetPowerComponentFState(this, *(_DWORD *)(v8 + 4), v6);
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_xq(this, &Dxgk_SetPowerComponentFStateEnd, a3, this, v5);
    if ( (*(_DWORD *)(v8 + 216) & 2) == 0 )
    {
      *(_BYTE *)(v8 + 359) = 0;
      if ( !a4 )
        PoFxCompleteIdleState(*((_QWORD *)this + 272), (unsigned int)v5);
      if ( !*(_DWORD *)(v8 + 344) )
      {
        v12 = *(_QWORD *)(v8 + 512);
        if ( v12 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v12 + 136));
      }
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 272), a2);
  }
}
