/*
 * XREFs of ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007630
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00C4160 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPartOfDesktop(PERESOURCE **this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 3811LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 26) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 3812LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = (__int64)&this[17][127 * v4];
  if ( *(_BYTE *)(v7 + 698) != a3 )
  {
    *(_BYTE *)(v7 + 698) = a3;
    Global = DXGGLOBAL::GetGlobal();
    if ( a3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)Global + 160);
    }
    else
    {
      v9 = *((unsigned int *)Global + 160);
      v10 = Global;
      if ( (int)v9 <= 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v13 + 24) = 747LL;
        WdLogEvent5_WdAssertion(v13);
      }
      _InterlockedDecrement((volatile signed __int32 *)v10 + 160);
    }
  }
}
