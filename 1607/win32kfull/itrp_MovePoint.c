/*
 * XREFs of itrp_MovePoint @ 0x1C00D1A00
 * Callers:
 *     itrp_MDAP @ 0x1C00CD1C0 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C00CE020 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C00CF700 (itrp_MIAP.c)
 *     InvokeMovePoint @ 0x1C00D0084 (InvokeMovePoint.c)
 * Callees:
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall itrp_MovePoint(_QWORD *a1, int a2, int a3)
{
  __int16 v3; // r11
  _QWORD *v4; // r10
  __int64 result; // rax
  __int16 v6; // bx
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // eax
  int v10; // eax

  v3 = word_1C0329508;
  v4 = a1;
  result = (unsigned __int16)dword_1C03294BC;
  v6 = HIWORD(dword_1C03294BC);
  v7 = a3;
  v8 = a2;
  if ( word_1C0329508 == 0x4000 )
  {
    if ( (_WORD)dword_1C03294BC )
    {
      *(_DWORD *)(*a1 + 4LL * a2) += ((unsigned __int64)(a3 * (__int64)(__int16)dword_1C03294BC) >> 32 << 18)
                                   + ((((unsigned int)(a3 * (__int16)dword_1C03294BC) >> 13) + 1) >> 1);
      result = a1[9];
      *(_BYTE *)(result + a2) |= 1u;
    }
    if ( v6 )
    {
      *(_DWORD *)(a1[1] + 4LL * a2) += ((unsigned __int64)(a3 * (__int64)v6) >> 32 << 18)
                                     + ((((unsigned int)(a3 * v6) >> 13) + 1) >> 1);
      result = a1[9];
      *(_BYTE *)(result + a2) |= 2u;
    }
  }
  else
  {
    if ( (_WORD)dword_1C03294BC )
    {
      if ( word_1C0329508 == (_WORD)dword_1C03294BC )
      {
        *(_DWORD *)(*a1 + 4LL * a2) += a3;
      }
      else
      {
        v9 = CompDiv((unsigned int)word_1C0329508, a3 * (__int64)(__int16)dword_1C03294BC);
        *(_DWORD *)(*v4 + 4 * v8) += v9;
      }
      result = v4[9];
      *(_BYTE *)(result + v8) |= 1u;
    }
    if ( v6 )
    {
      if ( v3 == v6 )
      {
        *(_DWORD *)(v4[1] + 4 * v8) += v7;
      }
      else
      {
        v10 = CompDiv((unsigned int)v3, v7 * v6);
        *(_DWORD *)(v4[1] + 4 * v8) += v10;
      }
      result = v4[9];
      *(_BYTE *)(result + v8) |= 2u;
    }
  }
  return result;
}
