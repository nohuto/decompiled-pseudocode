/*
 * XREFs of sub_1800055B0 @ 0x1800055B0
 * Callers:
 *     sub_180006200 @ 0x180006200 (sub_180006200.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800055B0(__int64 a1)
{
  signed __int32 v1; // r8d
  unsigned int v2; // r9d

  v1 = *(_DWORD *)(a1 + 36);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 36);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      return (unsigned int)(v1 + 1);
  }
  return v2;
}
