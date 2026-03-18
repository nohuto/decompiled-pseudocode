/*
 * XREFs of ?SetIntegerProperty@CManipulationTransformMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DAD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::SetIntegerProperty(
        DirectComposition::CManipulationTransformMarshaler *this,
        int a2,
        int a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 5 )
    return 3221225485LL;
  *((_DWORD *)this + 22) = a3;
  *a4 = 1;
  *((_DWORD *)this + 4) &= ~0x80u;
  return result;
}
