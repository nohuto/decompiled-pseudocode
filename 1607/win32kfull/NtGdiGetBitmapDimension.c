/*
 * XREFs of NtGdiGetBitmapDimension @ 0x1C02A7AF0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDimension @ 0x1C02BB344 (GreGetBitmapDimension.c)
 */

__int64 __fastcall NtGdiGetBitmapDimension(HSURF a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h]

  if ( !a1 )
    return 0LL;
  result = GreGetBitmapDimension(a1);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    *a2 = v4;
  }
  return result;
}
