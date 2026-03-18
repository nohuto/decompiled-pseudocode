/*
 * XREFs of ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00062E8
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00C3DC0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00D9440 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPartOfDesktop(DXGADAPTER **this, unsigned int a2, char a3)
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
    *(_QWORD *)(v11 + 24) = 3968LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 3969LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = (__int64)this[14] + 1016 * v4;
  if ( *(_BYTE *)(v7 + 706) != a3 )
  {
    *(_BYTE *)(v7 + 706) = a3;
    Global = DXGGLOBAL::GetGlobal();
    if ( a3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)Global + 124);
    }
    else
    {
      v9 = *((unsigned int *)Global + 124);
      v10 = Global;
      if ( (int)v9 <= 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v13 + 24) = 639LL;
        WdLogEvent5_WdAssertion(v13);
      }
      _InterlockedDecrement((volatile signed __int32 *)v10 + 124);
    }
  }
}
