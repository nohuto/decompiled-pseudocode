/*
 * XREFs of DxgkPreSessionDisconnected @ 0x1C00DB850
 * Callers:
 *     <none>
 * Callees:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0077A64 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00DB89C (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 */

void __fastcall DxgkPreSessionDisconnected(char a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+3Ch] [rbp+14h]

  if ( a1 )
  {
    v7 = -1;
    v6 = -1;
    v1 = HMDDisplayOnOff(&v6, 0xFFFFFFFFLL, 2LL);
    v3 = v1;
    if ( v1 < 0 )
    {
      v5 = WdLogNewEntry5_WdError(v2);
      *(_QWORD *)(v5 + 24) = v3;
      WdLogEvent5_WdError(v5);
    }
    Global = DXGGLOBAL::GetGlobal(v2);
    DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 69), 0);
  }
}
