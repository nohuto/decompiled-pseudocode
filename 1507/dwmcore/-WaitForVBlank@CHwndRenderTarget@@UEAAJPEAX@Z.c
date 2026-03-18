/*
 * XREFs of ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x18008CB70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800583AC (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::WaitForVBlank(CHwndRenderTarget *this, void *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  int v6; // eax

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 5) + 136LL))((char *)this - 40) )
  {
    if ( !*((_BYTE *)this + 523) && CDisplay::IsPrimary(*((CDisplay **)this + 5)) && (v5 = *((_QWORD *)this + 6)) != 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, void *))(*(_QWORD *)v5 + 264LL))(*((_QWORD *)this + 6), a2);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_18016AB10, 2u, v6, 0x730u);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_18016AB10, 2u, -2147467263, 0x734u);
    }
  }
  return v4;
}
