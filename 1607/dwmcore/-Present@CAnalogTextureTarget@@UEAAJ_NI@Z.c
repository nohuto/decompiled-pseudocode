/*
 * XREFs of ?Present@CAnalogTextureTarget@@UEAAJ_NI@Z @ 0x180166500
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogTextureTarget::Present(CAnalogTextureTarget *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *((_QWORD *)this + 19);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v1 + 176) + 184LL))(
           v1 + 176,
           0LL,
           0LL,
           0LL);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x223u);
  }
  return v2;
}
