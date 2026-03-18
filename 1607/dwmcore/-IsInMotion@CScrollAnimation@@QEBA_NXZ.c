/*
 * XREFs of ?IsInMotion@CScrollAnimation@@QEBA_NXZ @ 0x18015E234
 * Callers:
 *     ??$RunForAllScrollAnimations@V_lambda_a8a097d538bd29a5823eb139eb293c73_@@@CInteractionTracker@@AEAAXAEBV_lambda_a8a097d538bd29a5823eb139eb293c73_@@@Z @ 0x18014972C (--$RunForAllScrollAnimations@V_lambda_a8a097d538bd29a5823eb139eb293c73_@@@CInteractionTracker@@A.c)
 *     ?MustRecomputeValue@CScrollAnimation@@UEBA_NXZ @ 0x18015E2C0 (-MustRecomputeValue@CScrollAnimation@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CScrollAnimation::IsInMotion(CScrollAnimation *this)
{
  char v1; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = 0;
  if ( *((_DWORD *)this + 134) )
    return 1;
  v4 = *((_DWORD *)this + 106);
  if ( !v4 )
    return (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 192LL))(this);
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1
        || (*((_BYTE *)this + 468) & 0x10) != 0
        && !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 37) + 32LL))((char *)this + 296) )
      {
        return v1;
      }
      return 1;
    }
    return (*((_BYTE *)this + 468) & 0x10) == 0;
  }
  return 1;
}
