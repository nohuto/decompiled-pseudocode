/*
 * XREFs of sub_18001B360 @ 0x18001B360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001B360(__int64 a1, _DWORD *a2)
{
  signed __int32 v2; // ecx
  unsigned int v3; // ebx
  signed __int32 v5; // [rsp+30h] [rbp+8h] BYREF

  *a2 = *(_DWORD *)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 40);
  v5 = -2;
  _InterlockedCompareExchange(&v5, v2, -2);
  if ( v5 == 4 )
  {
    v3 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v3 = 0;
    if ( v5 == -1 )
      return (unsigned int)-2147483623;
  }
  return v3;
}
