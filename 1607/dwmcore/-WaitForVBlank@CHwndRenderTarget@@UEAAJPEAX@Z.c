/*
 * XREFs of ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x1800B8B90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180034D3C (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::WaitForVBlank(CHwndRenderTarget *this, void *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 14) + 152LL))((char *)this - 112) )
  {
    if ( !*((_BYTE *)this + 637) && CDisplay::IsPrimary(*((CDisplay **)this + 5)) && (v5 = *((_QWORD *)this + 6)) != 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 288LL))(v5, a2);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801B0A20, 2u, v6, 0x6F9u);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_1801B0A20, 2u, -2147467263, 0x6FDu);
    }
  }
  return v4;
}
