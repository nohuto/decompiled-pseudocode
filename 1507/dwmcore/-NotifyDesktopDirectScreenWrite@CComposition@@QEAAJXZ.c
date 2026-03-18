/*
 * XREFs of ?NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ @ 0x1800E2ED0
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x1800EB160 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1800E8E68 (-PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CComposition::NotifyDesktopDirectScreenWrite(CComposition *this)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  unsigned __int64 v5; // [rsp+30h] [rbp-29h]
  __int128 v6; // [rsp+40h] [rbp-19h]
  __int128 v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+60h] [rbp+7h]
  _OWORD v9[3]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v10; // [rsp+A0h] [rbp+47h]

  v1 = *((_QWORD *)this + 4);
  v9[1] = v6;
  LODWORD(v5) = 3;
  v10 = v8;
  v9[0] = v5;
  v9[2] = v7;
  v2 = CRenderTargetManager::PushDesktopMetaData(v1, v9);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xF9Fu);
  return v3;
}
