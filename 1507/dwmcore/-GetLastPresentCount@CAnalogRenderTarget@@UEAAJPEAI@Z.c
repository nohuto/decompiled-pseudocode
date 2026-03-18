/*
 * XREFs of ?GetLastPresentCount@CAnalogRenderTarget@@UEAAJPEAI@Z @ 0x180126530
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::GetLastPresentCount(CAnalogRenderTarget *this, unsigned int *a2)
{
  __int64 v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v2 + 224LL))(*((_QWORD *)this + 20), a2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1C2u);
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x1C6u);
  }
  return v4;
}
