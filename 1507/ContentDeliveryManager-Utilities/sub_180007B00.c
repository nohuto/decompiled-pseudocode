/*
 * XREFs of sub_180007B00 @ 0x180007B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180007B00(__int64 a1)
{
  signed __int32 v1; // r9d
  unsigned int v2; // r8d

  v1 = *(_DWORD *)(a1 + 12);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 12), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 12);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      v2 = v1 + 1;
  }
  if ( (*(_BYTE *)(a1 + 32) & 4) == 0 && v2 == 2 )
    _InterlockedIncrement(&dword_18003AC88);
  return v2;
}
