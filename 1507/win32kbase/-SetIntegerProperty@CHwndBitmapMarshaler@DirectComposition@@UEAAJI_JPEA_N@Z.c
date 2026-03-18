/*
 * XREFs of ?SetIntegerProperty@CHwndBitmapMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D9120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHwndBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CHwndBitmapMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 || !a3 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 5) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_QWORD *)this + 5) = a3;
    *a4 = 1;
  }
  return result;
}
