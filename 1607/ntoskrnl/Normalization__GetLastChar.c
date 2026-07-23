/*
 * XREFs of Normalization__GetLastChar @ 0x14068AC28
 * Callers:
 *     Normalization__IsNormalized @ 0x14068AEDC (Normalization__IsNormalized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__GetLastChar(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _WORD *v6; // r10
  __int64 result; // rax
  unsigned int v10; // r9d
  unsigned __int8 v11; // dl
  char v12; // r8

  v6 = (_WORD *)(a2 - 2);
  if ( *a3 == a2 - 2 )
    return *a4;
  if ( (unsigned __int16)(*v6 + 10240) <= 0x7FFu )
  {
    v6 = (_WORD *)(a2 - 4);
    if ( *a3 == a2 - 4 )
      return *a4;
  }
  v10 = (unsigned __int16)*v6;
  if ( v10 - 55296 <= 0x7FF )
    v10 += ((unsigned __int16)*(v6 - 1) - 55287) << 10;
  v11 = *(_BYTE *)(((__int64)(int)v10 >> 7) + *(_QWORD *)(a1 + 32));
  if ( v11 )
  {
    v12 = *(_BYTE *)((v10 & 0x7F) + ((__int64)(v11 - 1) << 7) + *(_QWORD *)(a1 + 40));
    *a5 = v12 & 0x3F;
    *a6 = v12 & 0xC0;
  }
  else
  {
    *a6 = 0;
    *a5 = 0;
  }
  *a3 = v6;
  result = v10;
  *a4 = v10;
  return result;
}
