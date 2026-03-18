/*
 * XREFs of ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x18011F364
 * Callers:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18011F230 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierRenderTarget::SliceRect(CComposition **this)
{
  unsigned int v2; // esi
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // r14
  int v4; // edi
  int v5; // eax

  v2 = 0;
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this[2]);
  if ( PrimaryDesktopRenderTargetNoRef )
  {
    if ( *((_DWORD *)this[2] + 52) )
    {
      *((_DWORD *)this + 174) = -2147024891;
    }
    else
    {
      v4 = 0;
      if ( *((_DWORD *)this + 100) )
      {
        while ( 1 )
        {
          *((_DWORD *)this + 170) = v4;
          v5 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, char *, char *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                        + 64LL))(
                 PrimaryDesktopRenderTargetNoRef,
                 (char *)this + 648,
                 (char *)this + 152);
          v2 = v5;
          if ( v5 < 0 )
            break;
          if ( (unsigned int)++v4 >= *((_DWORD *)this + 100) )
            goto LABEL_10;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4A4u);
      }
    }
  }
  else
  {
    *((_DWORD *)this + 174) = -2003304442;
  }
LABEL_10:
  *((_DWORD *)this + 170) = 0;
  return v2;
}
