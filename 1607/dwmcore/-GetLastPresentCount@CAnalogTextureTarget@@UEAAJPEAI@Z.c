/*
 * XREFs of ?GetLastPresentCount@CAnalogTextureTarget@@UEAAJPEAI@Z @ 0x180166350
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogTextureTarget::GetLastPresentCount(CAnalogTextureTarget *this, unsigned int *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v2 + 176) + 232LL))(v2 + 176, a2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xF4u);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0xF8u);
  }
  return v4;
}
