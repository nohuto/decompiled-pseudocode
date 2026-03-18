/*
 * XREFs of ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x1801088E0
 * Callers:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801087B0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::SliceRect(CComposition **this)
{
  unsigned int v2; // ebx
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // r14
  int v4; // esi
  int v5; // eax

  v2 = 0;
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this[2]);
  if ( PrimaryDesktopRenderTargetNoRef )
  {
    if ( *((_DWORD *)this[2] + 52) )
    {
      *((_DWORD *)this + 156) = -2147024891;
    }
    else
    {
      v4 = 0;
      if ( *((_DWORD *)this + 82) )
      {
        while ( 1 )
        {
          *((_DWORD *)this + 152) = v4;
          v5 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, char *, char *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                        + 64LL))(
                 PrimaryDesktopRenderTargetNoRef,
                 (char *)this + 576,
                 (char *)this + 80);
          v2 = v5;
          if ( v5 < 0 )
            break;
          if ( (unsigned int)++v4 >= *((_DWORD *)this + 82) )
            goto LABEL_10;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4D5u);
      }
    }
  }
  else
  {
    *((_DWORD *)this + 156) = -2003304442;
  }
LABEL_10:
  *((_DWORD *)this + 152) = 0;
  return v2;
}
