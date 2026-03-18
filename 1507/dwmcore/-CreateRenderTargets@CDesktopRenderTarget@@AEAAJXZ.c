/*
 * XREFs of ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049B1C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800494B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800495FC (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049850 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x180056420 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1800EB2B0 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
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
  int v10; // edi
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  __int64 v13; // r15
  struct CDisplay *v14; // rdx
  int v15; // eax
  UINT32 cData; // [rsp+20h] [rbp-39h]
  int v17; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v20; // [rsp+60h] [rbp+7h]
  int v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+6Ch] [rbp+13h]
  int *v23; // [rsp+70h] [rbp+17h]
  int v24; // [rsp+78h] [rbp+1Fh]
  int v25; // [rsp+7Ch] [rbp+23h]

  v17 = 0;
  v1 = (const struct CDisplaySet **)((char *)this + 192);
  v18 = 0;
  v3 = (CDisplaySet *)*((_QWORD *)this + 24);
  if ( v3 )
  {
    CDisplaySet::Release(v3);
    *v1 = 0LL;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v3, v1);
  v17 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 222;
LABEL_20:
    v6 = CurrentDisplaySet;
    goto LABEL_6;
  }
  v5 = *v1;
  v18 = *((_DWORD *)*v1 + 18);
  if ( !v18 )
  {
    v6 = -2003304442;
    cData = 231;
    v17 = -2003304442;
LABEL_6:
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v6, cData);
    goto LABEL_7;
  }
  CDXGIEnumeration::UpdateFeatureLevels(*((CDXGIEnumeration **)v5 + 2));
  CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets(this);
  v17 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 241;
    goto LABEL_20;
  }
  v10 = 0;
  v11 = 0;
  v12 = *((_DWORD *)*v1 + 18);
  if ( v12 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v14 = *(struct CDisplay **)(v13 + *((_QWORD *)*v1 + 6));
      if ( *((_BYTE *)v14 + 148) )
      {
        if ( *((_BYTE *)v14 + 145) )
        {
          v15 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(this, v14);
          v10 = v15;
          if ( v15 < 0 )
            break;
        }
      }
      ++v11;
      v13 += 8LL;
      if ( v11 >= v12 )
        goto LABEL_16;
    }
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v15, 0x233u);
  }
LABEL_16:
  v17 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v10, 0xF3u);
LABEL_7:
    if ( v17 < 0 )
      CDesktopRenderTarget::ReleaseRenderTargets(this);
  }
  if ( v18 >= 2
    && hProvider > 5u
    && (qword_180190A80 & 0x400000000000LL) != 0
    && (qword_180190A88 & 0x400000000000LL) == qword_180190A88 )
  {
    v22 = 0;
    v25 = 0;
    v20 = &v18;
    v23 = &v17;
    v21 = 4;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18016E295, v7, v8, 4u, &pData);
  }
  return (unsigned int)v17;
}
