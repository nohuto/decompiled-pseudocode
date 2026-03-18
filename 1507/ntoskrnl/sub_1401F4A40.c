/*
 * XREFs of sub_1401F4A40 @ 0x1401F4A40
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1401F561C (KeCapturePersistentThreadState.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 */

__int64 __fastcall sub_1401F4A40(__int64 a1, int a2)
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
