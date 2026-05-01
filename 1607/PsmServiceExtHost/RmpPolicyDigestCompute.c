/*
 * XREFs of RmpPolicyDigestCompute @ 0x180014BA0
 * Callers:
 *     RmpActivityHostUpdateDigests @ 0x180014920 (RmpActivityHostUpdateDigests.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestCompute(__int64 a1)
{
  char v1; // al
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  __int16 v6; // r9
  __int16 v7; // cx
  unsigned __int64 v8; // r8

  v1 = *(_BYTE *)(a1 + 1458);
  v3 = 0x11000002000LL;
  if ( (v1 & 4) != 0
    || (v4 = *(int *)(a1 + 1416), (unsigned int)v4 <= 0x27) && (v5 = 0x8800001000LL, _bittest64(&v5, v4)) )
  {
    v6 = 2;
  }
  else if ( (*(_BYTE *)(a1 + 1456) & 0x10) != 0 || (unsigned int)v4 <= 0x28 && _bittest64(&v3, v4) )
  {
    v6 = 4;
  }
  else
  {
    v6 = 1;
  }
  v7 = *(_WORD *)(a1 + 1456);
  if ( (v7 & 0x10) == 0 && ((v8 = *(int *)(a1 + 1416), (unsigned int)v8 > 0x28) || !_bittest64(&v3, v8)) || v1 < 0 )
    v6 |= 8u;
  return (8 * (v7 & 8 | (2 * (v7 & 3 | (8 * ((*(_DWORD *)(a1 + 1412) >> 7) & 1)))))) | v6 & 0xFF0F;
}
