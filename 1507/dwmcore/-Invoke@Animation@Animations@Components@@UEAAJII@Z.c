/*
 * XREFs of ?Invoke@Animation@Animations@Components@@UEAAJII@Z @ 0x180154FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180153DF0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x180153EEC (-ApiPause@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x180153F58 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?GetTimeLength@Animation@Animations@Components@@QEBAMXZ @ 0x180154F7C (-GetTimeLength@Animation@Animations@Components@@QEBAMXZ.c)
 */

__int64 __fastcall Components::Animations::Animation::Invoke(Components::Animations::Animation *this, int a2, float a3)
{
  int v3; // edx
  int v4; // edx
  __int64 v5; // rdx
  int v6; // edx
  __int64 result; // rax
  char *v8; // rbx
  float TimeLength; // xmm0_4
  Components::Animations::Animation *v10; // rcx

  v3 = a2 - 1;
  if ( !v3 )
  {
    result = Components::Animations::Animation::ApiPlay((Components::Animations::Animation *)((char *)this - 16));
    goto LABEL_12;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    result = Components::Animations::Animation::ApiPause((Components::Animations::Animation *)((char *)this - 16));
    goto LABEL_12;
  }
  v5 = (unsigned int)(v4 - 1);
  if ( !(_DWORD)v5 )
  {
    LODWORD(v5) = 1;
    result = Components::Animations::Animation::ApiReset(
               (Components::Animations::Animation *)((char *)this - 16),
               v5,
               a3);
    goto LABEL_12;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = (char *)this - 16;
    *((_BYTE *)this + 237) |= 1u;
    TimeLength = Components::Animations::Animation::GetTimeLength((Components::Animations::Animation *)((char *)this - 16));
    result = Components::Animations::Animation::ApiInstantAdvance(v10, TimeLength);
    if ( (int)result < 0 )
      return result;
    v8[253] &= ~1u;
    result = 0LL;
LABEL_12:
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  if ( v6 != 1 )
    return 2147942487LL;
  return 0LL;
}
