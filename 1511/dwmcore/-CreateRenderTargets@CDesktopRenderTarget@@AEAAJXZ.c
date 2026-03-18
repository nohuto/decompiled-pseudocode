/*
 * XREFs of ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180075A2C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180075420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18006BFB4 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180075580 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18007575C (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180106CE0 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateRenderTargets(CDesktopRenderTarget *this)
{
  const struct CDisplaySet **v1; // rbx
  CDisplaySet *v3; // rcx
  int CurrentDisplaySet; // eax
  const struct CDisplaySet *v5; // rcx
  int v6; // r9d
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v10; // rdx
  unsigned int *v11; // r8
  int v12; // edi
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  __int64 v15; // r15
  struct CDisplay *v16; // rdx
  int v17; // eax
  UINT32 cData; // [rsp+20h] [rbp-39h]
  int v19; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v22; // [rsp+60h] [rbp+7h]
  int v23; // [rsp+68h] [rbp+Fh]
  int v24; // [rsp+6Ch] [rbp+13h]
  int *v25; // [rsp+70h] [rbp+17h]
  int v26; // [rsp+78h] [rbp+1Fh]
  int v27; // [rsp+7Ch] [rbp+23h]

  v19 = 0;
  v1 = (const struct CDisplaySet **)((char *)this + 240);
  v20 = 0;
  v3 = (CDisplaySet *)*((_QWORD *)this + 30);
  if ( v3 )
  {
    CDisplaySet::Release(v3);
    *v1 = 0LL;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v3, v1);
  v19 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 259;
LABEL_20:
    v6 = CurrentDisplaySet;
    goto LABEL_6;
  }
  v5 = *v1;
  v20 = *((_DWORD *)*v1 + 18);
  if ( !v20 )
  {
    v6 = -2003304442;
    cData = 268;
    v19 = -2003304442;
LABEL_6:
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v6, cData);
    goto LABEL_7;
  }
  CDXGIEnumeration::UpdateFeatureLevels(*((CDXGIEnumeration **)v5 + 2));
  CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets(this, v10, v11);
  v19 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 278;
    goto LABEL_20;
  }
  v12 = 0;
  v13 = 0;
  v14 = *((_DWORD *)*v1 + 18);
  if ( v14 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = *(struct CDisplay **)(v15 + *((_QWORD *)*v1 + 6));
      if ( *((_BYTE *)v16 + 303) )
      {
        if ( *((_BYTE *)v16 + 300) )
        {
          v17 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(this, v16);
          v12 = v17;
          if ( v17 < 0 )
            break;
        }
      }
      ++v13;
      v15 += 8LL;
      if ( v13 >= v14 )
        goto LABEL_16;
    }
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v17, 0x24Eu);
  }
LABEL_16:
  v19 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v12, 0x118u);
LABEL_7:
    if ( v19 < 0 )
      CDesktopRenderTarget::ReleaseRenderTargets(this);
  }
  if ( v20 >= 2
    && (unsigned int)hProvider > 5
    && (qword_18019E910 & 0x400000000000LL) != 0
    && (qword_18019E918 & 0x400000000000LL) == qword_18019E918 )
  {
    v24 = 0;
    v27 = 0;
    v22 = &v20;
    v25 = &v19;
    v23 = 4;
    v26 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017D21D, v7, v8, 4u, &pData);
  }
  return (unsigned int)v19;
}
