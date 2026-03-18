/*
 * XREFs of ?SetFlag@CEffectInputSet@DirectComposition@@QEAAJI_J@Z @ 0x1C00D94D4
 * Callers:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D89A0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CEffectInputSet::SetFlag(
        DirectComposition::CEffectInputSet *this,
        unsigned int a2,
        int a3)
{
  if ( a2 >= *(_DWORD *)this )
    return 3221225485LL;
  *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * a2) = a3;
  *((_DWORD *)this + 8) = 0;
  return 0LL;
}
