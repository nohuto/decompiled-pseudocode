/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00C21D8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C00849DC (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  v7 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 99), this);
  if ( v7 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v7;
  }
  else
  {
    v8 = *((_QWORD *)this + 50);
    v9 = *((_QWORD *)this + 51);
    *((_BYTE *)this + 633) = 1;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 832LL))(v9);
  }
}
