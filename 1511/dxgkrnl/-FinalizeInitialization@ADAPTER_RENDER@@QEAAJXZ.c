/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00D5A58
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C006781C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v4 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 117), this);
  if ( v4 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
    return (unsigned int)v4;
  }
  else
  {
    v5 = *((_QWORD *)this + 53);
    v6 = *((_QWORD *)this + 54);
    *((_BYTE *)this + 705) = 1;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 832LL))(v6);
  }
}
