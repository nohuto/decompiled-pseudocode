/*
 * XREFs of ?GetTimeLength@Animation@Animations@Components@@QEBAMXZ @ 0x180162BC0
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Invoke@Animation@Animations@Components@@UEAAJII@Z @ 0x180162C00 (-Invoke@Animation@Animations@Components@@UEAAJII@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Components::Animations::Animation::GetTimeLength(Components::Animations::Animation *this)
{
  __int64 v1; // r8
  float result; // xmm0_4

  v1 = *((_QWORD *)this + 3);
  result = 0.0;
  if ( *(int *)(v1 + 24) > 0 )
    return (float)(*((_DWORD *)this + 52) + *(_DWORD *)(*(_QWORD *)(v1 + 16) + 24LL * *(int *)(v1 + 24) - 24)) / 1000.0;
  return result;
}
