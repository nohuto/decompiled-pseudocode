/*
 * XREFs of ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00065E0
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C005F540 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00B00C0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPartOfDesktop(PERESOURCE **this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v9 + 24) = 3672LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v10 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v10 + 24) = 3673LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = (__int64)&this[14][126 * v4];
  if ( *(_BYTE *)(v6 + 698) != a3 )
  {
    *(_BYTE *)(v6 + 698) = a3;
    Global = DXGGLOBAL::GetGlobal();
    if ( a3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)Global + 124);
    }
    else
    {
      v8 = Global;
      if ( *((int *)Global + 124) <= 0 )
      {
        v11 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v11 + 24) = 678LL;
        WdLogEvent5_WdAssertion(v11);
      }
      _InterlockedDecrement((volatile signed __int32 *)v8 + 124);
    }
  }
}
