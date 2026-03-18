/*
 * XREFs of NtGdiGetObjectBitmapHandle @ 0x14032AE50
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectBitmapHandle @ 0x140083A9C (GreGetObjectBitmapHandle.c)
 */

HBRUSH __fastcall NtGdiGetObjectBitmapHandle(HBRUSH a1, void *a2)
{
  __int64 ObjectBitmapHandle; // rbx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  if ( ((unsigned int)a1 & 0x7F0000) != 0x100000 && ((unsigned int)a1 & 0x7F0000) != 0x500000 )
    return a1;
  ObjectBitmapHandle = GreGetObjectBitmapHandle(a1, &v5);
  if ( ObjectBitmapHandle )
    GreProbeAndWriteToUntrustedVa(a2, 4uLL, &v5, 4uLL, 1uLL);
  return (HBRUSH)ObjectBitmapHandle;
}
