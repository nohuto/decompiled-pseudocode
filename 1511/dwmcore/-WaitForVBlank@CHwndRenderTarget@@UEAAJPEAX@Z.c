/*
 * XREFs of ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x1800B51E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180070438 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::WaitForVBlank(CHwndRenderTarget *this, void *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  int v6; // eax

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 5) + 144LL))((char *)this - 40) )
  {
    if ( !*((_BYTE *)this + 516) && CDisplay::IsPrimary(*((CDisplay **)this + 5)) && (v5 = *((_QWORD *)this + 6)) != 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, void *))(*(_QWORD *)v5 + 272LL))(*((_QWORD *)this + 6), a2);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180178EE8, 2u, v6, 0x6EBu);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_180178EE8, 2u, -2147467263, 0x6EFu);
    }
  }
  return v4;
}
