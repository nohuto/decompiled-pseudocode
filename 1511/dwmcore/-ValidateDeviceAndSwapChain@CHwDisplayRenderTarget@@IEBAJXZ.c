/*
 * XREFs of ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180081820
 * Callers:
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180073FD0 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x180080F10 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800B5320 (-WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x180080700 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(CHwDisplayRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rax
  __int64 (__fastcall *v4)(CHwDisplayRenderTarget *); // rsi
  char IsValid; // al

  v1 = *((_DWORD *)this + 75);
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v1, 0x6ACu);
  }
  else
  {
    v3 = *((_QWORD *)this + 20);
    if ( !v3 )
    {
      v1 = -2003304307;
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, -2003304307, 0x6B7u);
      goto LABEL_12;
    }
    v1 = *(_DWORD *)(v3 + 800);
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v1, 0x6B3u);
    }
    else if ( *((_BYTE *)this + 184) )
    {
      if ( !*((_QWORD *)this + 26)
        || ((v4 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 192LL),
             v4 != CHwDisplayRenderTarget::IsValid)
          ? (IsValid = v4(this))
          : (IsValid = CHwDisplayRenderTarget::IsValid(this)),
            !IsValid) )
      {
        v1 = -2003304442;
        MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, -2003304442, 0x6C0u);
        goto LABEL_12;
      }
    }
  }
  if ( v1 < 0 )
LABEL_12:
    *((_DWORD *)this + 75) = v1;
  return (unsigned int)v1;
}
