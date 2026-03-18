/*
 * XREFs of ?HasEnded@CAnimationMarshaler@DirectComposition@@QEAA_N_KPEAM@Z @ 0x1C004D584
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003F888 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CAnimationMarshaler::HasEnded(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2,
        float *a3)
{
  int v3; // r10d
  __int64 v5; // rcx

  v3 = *((_DWORD *)this + 8);
  if ( (v3 & 0x120) == 0x20 && (*((_BYTE *)this + 208) & 2) == 0 )
  {
    v5 = *((_QWORD *)this + 14);
    if ( v5 )
    {
      if ( a2 >= *((_QWORD *)this + 15) + v5 )
        *((_DWORD *)this + 8) = v3 | 0x100;
    }
  }
  if ( (*((_DWORD *)this + 8) & 0x100) == 0 )
    return 0;
  *a3 = *((float *)this + 40);
  return 1;
}
