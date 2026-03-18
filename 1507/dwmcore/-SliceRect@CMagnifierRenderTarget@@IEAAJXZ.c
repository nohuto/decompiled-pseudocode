/*
 * XREFs of ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x1800EDAF0
 * Callers:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1800ED9C0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
      *((_DWORD *)this + 162) = -2147024891;
    }
    else
    {
      v4 = 0;
      if ( *((_DWORD *)this + 88) )
      {
        while ( 1 )
        {
          *((_DWORD *)this + 158) = v4;
          v5 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, char *, char *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                        + 64LL))(
                 PrimaryDesktopRenderTargetNoRef,
                 (char *)this + 600,
                 (char *)this + 80);
          v2 = v5;
          if ( v5 < 0 )
            break;
          if ( (unsigned int)++v4 >= *((_DWORD *)this + 88) )
            goto LABEL_10;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x54Cu);
      }
    }
  }
  else
  {
    *((_DWORD *)this + 162) = -2003304442;
  }
LABEL_10:
  *((_DWORD *)this + 158) = 0;
  return v2;
}
