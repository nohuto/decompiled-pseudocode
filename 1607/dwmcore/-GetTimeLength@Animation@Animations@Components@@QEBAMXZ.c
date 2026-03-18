/*
 * XREFs of ?GetTimeLength@Animation@Animations@Components@@QEBAMXZ @ 0x1800191B8
 * Callers:
 *     ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x180019114 (-ApiSeek@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801135A4 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Components::Animations::Animation::GetTimeLength(Components::Animations::Animation *this)
{
  __int64 v1; // r8
  float result; // xmm0_4
  int v3; // eax

  v1 = *((_QWORD *)this + 2);
  result = 0.0;
  v3 = *(_DWORD *)(v1 + 8);
  if ( v3 > 0 )
    return (float)*(int *)(*(_QWORD *)v1 + 24LL * (v3 - 1)) / 1000.0;
  return result;
}
