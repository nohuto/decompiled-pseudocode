/*
 * XREFs of RaspLoadBearings @ 0x140128E84
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x14012842C (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     FioFwReadUshortAtOffset @ 0x140129078 (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x1401294A4 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall RaspLoadBearings(__int64 a1, unsigned int a2, __int64 a3, int *a4)
{
  unsigned int v4; // eax
  unsigned int v9; // ebp
  __int64 result; // rax
  unsigned __int16 v11; // ax
  int v12; // esi
  __int16 v13; // di
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // r14d
  __int16 v20; // [rsp+60h] [rbp+8h] BYREF
  __int16 v21; // [rsp+62h] [rbp+Ah]
  __int16 v22; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a1 + 88);
  v22 = 0;
  v9 = v4;
  if ( a2 >= v4 )
  {
    v19 = 4 * v4 - 4 + *(_DWORD *)(a1 + 68);
    result = FioFwReadBytesAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v19, 4LL, &v20);
    if ( (int)result < 0 )
      return result;
    v12 = (unsigned __int16)__ROR2__(v20, 8);
    result = FioFwReadUshortAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v19 + 2 * (a2 - v9 + 2), &v22);
    if ( (int)result < 0 )
      return result;
    v13 = v22;
  }
  else
  {
    result = FioFwReadBytesAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), *(_DWORD *)(a1 + 68) + 4 * a2, 4LL, &v20);
    if ( (int)result < 0 )
      return result;
    v11 = __ROR2__(v20, 8);
    v12 = v11;
    v13 = __ROR2__(v21, 8);
    if ( !v11 )
    {
      result = FioFwReadBytesAtOffset(
                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                 *(_DWORD *)(a1 + 68) - 4 + 4 * v9,
                 4LL,
                 &v20);
      if ( (int)result < 0 )
        return result;
      v12 = (unsigned __int16)__ROR2__(v20, 8);
    }
  }
  if ( v13 < 0 )
    v13 = 0;
  v14 = *(_DWORD *)(a3 + 18);
  v15 = *(unsigned __int16 *)(a3 + 24);
  if ( v12 < v13 + *(_DWORD *)(a3 + 10) - v14 )
    v12 = v13 + *(_DWORD *)(a3 + 10) - v14;
  v16 = *(_QWORD *)(a3 + 50);
  *a4 = v12;
  *(_DWORD *)(v16 + 4 * v15) = v14 - v13;
  *(_DWORD *)(v16 + 4 * v15 + 4) = v12 + *(_DWORD *)(a3 + 18) - v13;
  v17 = *(unsigned __int16 *)(a3 + 24);
  v18 = *(_QWORD *)(a3 + 58);
  *(_DWORD *)(v18 + 4 * v17) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  result = 0LL;
  *(_DWORD *)(v18 + 4 * v17 + 4) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  *(_WORD *)(a3 + 24) += 2;
  return result;
}
