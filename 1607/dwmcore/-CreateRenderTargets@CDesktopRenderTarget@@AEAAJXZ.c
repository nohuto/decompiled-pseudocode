/*
 * XREFs of ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180077178
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800769A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x18003667C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180076E7C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x18011D1A8 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D3C8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateRenderTargets(CDesktopRenderTarget *this, __int64 a2, __int64 a3)
{
  const struct CDisplaySet **v3; // rbx
  CDisplaySet *v5; // rcx
  int CurrentDisplaySet; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // esi
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // r14
  struct CDisplay *v13; // rdx
  int v15; // r9d
  int v16; // eax
  UINT32 cData; // [rsp+20h] [rbp-39h]
  int v18; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v21; // [rsp+60h] [rbp+7h]
  int v22; // [rsp+68h] [rbp+Fh]
  int v23; // [rsp+6Ch] [rbp+13h]
  int *v24; // [rsp+70h] [rbp+17h]
  int v25; // [rsp+78h] [rbp+1Fh]
  int v26; // [rsp+7Ch] [rbp+23h]

  v18 = 0;
  v3 = (const struct CDisplaySet **)((char *)this + 360);
  v19 = 0;
  v5 = (CDisplaySet *)*((_QWORD *)this + 45);
  if ( v5 )
  {
    CDisplaySet::Release(v5, a2, a3);
    *v3 = 0LL;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v5, v3);
  v18 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 262;
    goto LABEL_26;
  }
  v19 = *((_DWORD *)*v3 + 18);
  if ( !v19 )
  {
    v15 = -2003304442;
    cData = 271;
    v18 = -2003304442;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v15, cData);
    goto LABEL_16;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 1241LL) )
  {
    CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets2(this);
    v18 = CurrentDisplaySet;
    if ( CurrentDisplaySet >= 0 )
      goto LABEL_7;
    cData = 280;
    goto LABEL_26;
  }
  CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets(this);
  v18 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 276;
LABEL_26:
    v15 = CurrentDisplaySet;
    goto LABEL_15;
  }
LABEL_7:
  CDXGIEnumeration::UpdateFeatureLevels(
    *((CDXGIEnumeration **)*v3 + 2),
    (const struct _GUID *)(*((_QWORD *)this + 2) + 252LL));
  v9 = 0;
  v10 = 0;
  v11 = *((_DWORD *)*v3 + 18);
  if ( v11 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *(struct CDisplay **)(v12 + *((_QWORD *)*v3 + 6));
      if ( *((_BYTE *)v13 + 303) )
      {
        if ( *((_BYTE *)v13 + 300) )
        {
          v16 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(this, v13);
          v9 = v16;
          if ( v16 < 0 )
            break;
        }
      }
      ++v10;
      v12 += 8LL;
      if ( v10 >= v11 )
        goto LABEL_11;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v16, 0x2AEu);
  }
LABEL_11:
  v18 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v9, 0x121u);
LABEL_16:
    if ( v18 < 0 )
      CDesktopRenderTarget::ReleaseRenderTargets(this);
  }
  if ( v19 >= 2
    && dword_1801EA780 > 5u
    && (qword_1801EA790 & 0x400000000000LL) != 0
    && (qword_1801EA798 & 0x400000000000LL) == qword_1801EA798 )
  {
    v23 = 0;
    v26 = 0;
    v21 = &v19;
    v24 = &v18;
    v22 = 4;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801EA780, &unk_1801C3A14, v7, v8, 4u, &pData);
  }
  return (unsigned int)v18;
}
