/*
 * XREFs of NtGdiSetBitmapDimension @ 0x1402260A0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapDimension @ 0x140226114 (GreSetBitmapDimension.c)
 */

__int64 __fastcall NtGdiSetBitmapDimension(HSURF a1, __int64 a2, __int64 a3, void *a4)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a1 )
  {
    v5 = GreSetBitmapDimension(a1);
    if ( v5 && a4 )
      GreProbeAndWriteToUntrustedVa(a4, 8uLL, &v7, 8uLL, 1uLL);
  }
  else
  {
    return 0;
  }
  return v5;
}
