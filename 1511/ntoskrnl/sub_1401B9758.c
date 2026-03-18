/*
 * XREFs of sub_1401B9758 @ 0x1401B9758
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1401BA414 (KeCapturePersistentThreadState.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 */

__int64 __fastcall sub_1401B9758(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  unsigned int v4; // r9d

  v2 = 0;
  v3 = a1;
  if ( a2 )
  {
    do
    {
      if ( !MiIsAddressValid(v3 + v2) )
        break;
      ++v2;
    }
    while ( v2 < v4 );
  }
  return v2;
}
