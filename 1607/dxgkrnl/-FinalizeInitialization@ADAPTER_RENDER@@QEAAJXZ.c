/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00E3B80
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E90EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C00A2F30 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
  v4 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 97), this);
  if ( v4 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
    return (unsigned int)v4;
  }
  else
  {
    v5 = *((_QWORD *)this + 50);
    v6 = *((_QWORD *)this + 51);
    *((_BYTE *)this + 633) = 1;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 848LL))(v6);
  }
}
