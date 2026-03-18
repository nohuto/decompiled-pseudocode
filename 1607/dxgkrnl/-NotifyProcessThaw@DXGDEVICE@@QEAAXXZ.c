/*
 * XREFs of ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C006E2C4
 * Callers:
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D2440 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0004428 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004584 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0008E04 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000D45C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::NotifyProcessThaw(struct _KTHREAD **this)
{
  bool v2; // si
  __int64 v3; // rbp
  struct _KTHREAD *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  DXGDEVICE *v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF

  v13 = 0;
  v12 = (DXGDEVICE *)this;
  if ( DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this[2] + 2)) )
  {
    v2 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12) != 0;
  }
  else
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12);
    v2 = 1;
  }
  v3 = *((_QWORD *)this[2] + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3 + 120, 0LL);
  if ( *((_DWORD *)this + 94) == 1 )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v14, this + 35);
    for ( i = this[39]; i != (struct _KTHREAD *)(this + 39) && i; i = *(struct _KTHREAD **)i )
    {
      DXGADAPTER::NotifyContextCreation(*((DXGADAPTER **)this[2] + 2), i, 1, *((_DWORD *)i + 80));
      *((_BYTE *)i + 349) = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    if ( v2 )
    {
      if ( DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this[2] + 2)) )
      {
        LOBYTE(v10) = 1;
        (*(void (__fastcall **)(struct _KTHREAD *, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v9 + 400) + 8LL) + 1096LL))(
          this[70],
          0LL,
          v10);
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      *(_QWORD *)(v11 + 24) = this;
      WdLogEvent5_WdWarning(v11);
    }
  }
  ExReleasePushLockSharedEx(v3 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( v12 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12);
}
