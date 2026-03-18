/*
 * XREFs of ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0019934
 * Callers:
 *     ?DxgkPowerSettingCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0125FD0 (-DxgkPowerSettingCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C0017A44 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001AE20 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C001AF60 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 */

void __fastcall DXGADAPTER::NotifyPrimaryMonitorPowerChange(KSPIN_LOCK *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // zf
  char *v7; // rax
  DXGADAPTER *v8; // rdi
  char *v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  _BYTE v12[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  char v15; // [rsp+58h] [rbp-10h]

  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v12, this + 309, 1);
  v6 = bTracingEnabled == 0;
  *((_BYTE *)this + 2449) = a2;
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_xq(v4, &Dxgk_PrimaryMonitorPowerChange, v5, this, a2 != 0);
  v7 = (char *)(this + 275);
  if ( !a2 )
    v7 = (char *)(this + 281);
  this[287] = (KSPIN_LOCK)v7;
  DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
  if ( this[252] )
  {
    v8 = (DXGADAPTER *)this[316];
    while ( v8 != (DXGADAPTER *)(this + 316) )
    {
      v9 = (char *)v8 - 424;
      v10 = *((int *)v8 - 10);
      v8 = *(DXGADAPTER **)v8;
      v11 = *(_QWORD *)(this[287] + 16 * v10);
      if ( v11 != *((_QWORD *)v9 + 46) )
        DXGADAPTER::SetPowerComponentLatencyCB((DXGADAPTER *)this, *((_DWORD *)v9 + 1), v11);
    }
  }
  if ( v15 )
  {
    v15 = 0;
    *(_QWORD *)(v13 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
