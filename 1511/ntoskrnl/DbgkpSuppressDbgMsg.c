/*
 * XREFs of DbgkpSuppressDbgMsg @ 0x1405F0B30
 * Callers:
 *     DbgkMapViewOfSection @ 0x140493500 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1404AC188 (DbgkUnMapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpSuppressDbgMsg(__int64 a1)
{
  unsigned int v2; // [rsp+0h] [rbp-18h]

  v2 = 0;
  if ( *(char *)(a1 + 6126) >= 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      return *(char *)(a1 + 12234) < 0;
  }
  else
  {
    return 1;
  }
  return v2;
}
