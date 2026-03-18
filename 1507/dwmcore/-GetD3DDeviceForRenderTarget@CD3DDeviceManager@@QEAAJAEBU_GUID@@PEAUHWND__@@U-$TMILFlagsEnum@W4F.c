/*
 * XREFs of ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090C28
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x18008E50C (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?RenderComposition@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x180126FA0 (-RenderComposition@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180127AA8 (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055CC0 (-GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180055F6C (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z @ 0x18013ACC8 (-FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetD3DDeviceForRenderTarget(
        CD3DDeviceManager *this,
        struct _GUID *a2,
        __int64 a3,
        int a4,
        struct _LUID a5,
        struct CD3DDeviceLevel1 **a6)
{
  struct CD3DDeviceLevel1 **v6; // rsi
  struct CD3DDeviceLevel1 **v8; // rcx
  int D3DDeviceInternal; // eax
  unsigned int v11; // ebx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  int v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v15 = a3;
  v6 = a6;
  v8 = (struct CD3DDeviceLevel1 **)((char *)this + 24);
  a6 = v8;
  *v6 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)v8);
  D3DDeviceInternal = CD3DDeviceManager::EnsureDXGIEnumeration(this);
  v11 = D3DDeviceInternal;
  if ( D3DDeviceInternal < 0 )
  {
    v14 = 689;
LABEL_13:
    v13 = D3DDeviceInternal;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v13, v14);
    goto LABEL_4;
  }
  if ( (v16 & 0x10) == 0 )
  {
    LODWORD(v15) = 0;
    if ( CD3DRegistryDatabase::FindAdapter(a5, (unsigned int *)&v15) )
    {
      if ( *(_DWORD *)(CD3DRegistryDatabase::m_rgAdapterErrorCounts + 12LL * (unsigned int)v15 + 8) < 5u )
      {
        v11 = -2147023496;
        v14 = 723;
      }
      else
      {
        v11 = -2003304307;
        v14 = 718;
      }
      v13 = v11;
    }
    else
    {
      v11 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x45u);
      v13 = -2147024809;
      v14 = 711;
    }
    goto LABEL_14;
  }
  D3DDeviceInternal = CD3DDeviceManager::GetD3DDeviceInternal(this, a2, a5, v6);
  v11 = D3DDeviceInternal;
  if ( D3DDeviceInternal < 0 )
  {
    v14 = 730;
    goto LABEL_13;
  }
LABEL_4:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>((struct _RTL_CRITICAL_SECTION **)&a6);
  return v11;
}
