/*
 * XREFs of ?SetIntegerProperty@CYCbCrSurfaceMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DDAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetIntegerProperty(
        DirectComposition::CYCbCrSurfaceMarshaler *this,
        int a2,
        int a3,
        bool *a4)
{
  __int64 result; // rax
  bool v5; // cl

  result = 0LL;
  if ( a2 != 2 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 14) == a3 )
  {
    v5 = 0;
  }
  else
  {
    *((_DWORD *)this + 14) = a3;
    v5 = 1;
  }
  *a4 = v5;
  return result;
}
