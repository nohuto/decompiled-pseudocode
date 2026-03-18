/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x18011E730
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180035DB8 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800364D4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18011F494 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  int v1; // esi
  struct CDisplay *v2; // r14
  int CurrentDisplaySet; // eax
  int PrimaryDisplay; // eax
  struct _LUID v6; // rdi
  unsigned int v7; // ebx
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  void *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-39h]
  void *v16; // [rsp+C0h] [rbp+67h] BYREF
  CDisplaySet *v17; // [rsp+C8h] [rbp+6Fh] BYREF
  struct CDisplay *v18; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+7Fh]

  v1 = 0;
  v2 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( *((_DWORD *)this + 68) )
    return (unsigned int)v1;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v17);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v15 = 108;
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v17, &v18);
    v1 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0x6Du);
      v2 = v18;
      goto LABEL_19;
    }
    v2 = v18;
    v19 = 1LL;
    v6 = (struct _LUID)*((_QWORD *)v18 + 29);
    v7 = *(_DWORD *)(*((_QWORD *)v18 + 17) + 244LL);
    DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat((__int64)v17, v7);
    CurrentDisplaySet = COffScreenRenderTarget::UpdatePixelFormatInfo(this, DisplayPixelFormat);
    v1 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      v15 = 118;
    }
    else
    {
      CurrentDisplaySet = CD3DDeviceManager::CreateRenderTargetBitmap(
                            (__int64)&qword_1801F0018,
                            (__int64)this + 384,
                            *((_DWORD *)this + 86),
                            *((_DWORD *)this + 87),
                            v19,
                            0,
                            (COffScreenRenderTarget *)((char *)this + 352),
                            1,
                            (struct _GUID *)(*((_QWORD *)this + 2) + 252LL),
                            v6,
                            v7,
                            0,
                            0,
                            1,
                            &v16);
      v1 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
      {
        v10 = *((_DWORD *)this + 68);
        v11 = v10 + 1;
        if ( (unsigned int)v11 >= v10 )
        {
          v1 = 0;
          if ( (unsigned int)v11 <= *((_DWORD *)this + 67) )
          {
            *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68)) = v16;
            *((_DWORD *)this + 68) = v11;
            goto LABEL_21;
          }
          v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 8u, 1, &v16);
          v1 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
        }
        else
        {
          v1 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( v1 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x88u);
          goto LABEL_19;
        }
LABEL_21:
        v13 = 0LL;
        v16 = 0LL;
        goto LABEL_22;
      }
      v15 = 134;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, v15);
LABEL_19:
  v13 = v16;
  if ( v16 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_21;
  }
LABEL_22:
  if ( v17 )
  {
    CDisplaySet::Release(v17, v11, v9);
    v13 = v16;
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v2 + 8LL))(v2);
    v13 = v16;
  }
  if ( v13 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v1;
}
