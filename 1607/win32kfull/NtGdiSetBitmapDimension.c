/*
 * XREFs of NtGdiSetBitmapDimension @ 0x1C02A97A0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapDimension @ 0x1C02BB3D0 (GreSetBitmapDimension.c)
 */

__int64 __fastcall NtGdiSetBitmapDimension(HSURF a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h]

  if ( !a1 )
    return 0LL;
  result = GreSetBitmapDimension(a1);
  if ( (_DWORD)result && a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (_QWORD *)W32UserProbeAddress;
    *a4 = v6;
  }
  return result;
}
