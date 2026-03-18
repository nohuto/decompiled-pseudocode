/*
 * XREFs of ?NotifyTopLevelWndDestroy@CComposition@@QEAAJ_K@Z @ 0x180116C80
 * Callers:
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051E9C (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18011B324 (-PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CComposition::NotifyTopLevelWndDestroy(CComposition *this, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-29h]
  __int128 v7; // [rsp+40h] [rbp-19h]
  __int128 v8; // [rsp+50h] [rbp-9h]
  __int64 v9; // [rsp+60h] [rbp+7h]
  _OWORD v10[3]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+47h]

  v2 = *((_QWORD *)this + 4);
  *((_QWORD *)&v6 + 1) = a2;
  v10[1] = v7;
  LODWORD(v6) = 4;
  v11 = v9;
  v10[0] = v6;
  v10[2] = v8;
  v3 = CRenderTargetManager::PushDesktopMetaData(v2, v10);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xE47u);
  return v4;
}
