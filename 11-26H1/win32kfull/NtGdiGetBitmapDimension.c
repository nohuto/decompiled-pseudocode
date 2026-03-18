/*
 * XREFs of NtGdiGetBitmapDimension @ 0x14020F990
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDimension @ 0x14020F9FC (GreGetBitmapDimension.c)
 */

__int64 __fastcall NtGdiGetBitmapDimension(HSURF a1, void *a2)
{
  unsigned int BitmapDimension; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( a1 )
  {
    BitmapDimension = GreGetBitmapDimension(a1);
    if ( BitmapDimension )
      GreProbeAndWriteToUntrustedVa(a2, 8uLL, &v5, 8uLL, 1uLL);
  }
  else
  {
    return 0;
  }
  return BitmapDimension;
}
