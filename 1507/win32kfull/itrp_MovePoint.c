/*
 * XREFs of itrp_MovePoint @ 0x1C00BFA38
 * Callers:
 *     itrp_MIAP @ 0x1C00BC8C0 (itrp_MIAP.c)
 *     itrp_MDAP @ 0x1C00BD320 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C00BD810 (itrp_MDRP.c)
 *     InvokeMovePoint @ 0x1C00BF968 (InvokeMovePoint.c)
 * Callees:
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
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

  v3 = word_1C0323188;
  v4 = a1;
  result = (unsigned __int16)dword_1C032313C;
  v6 = HIWORD(dword_1C032313C);
  v7 = a3;
  v8 = a2;
  if ( word_1C0323188 == 0x4000 )
  {
    if ( (_WORD)dword_1C032313C )
    {
      *(_DWORD *)(*a1 + 4LL * a2) += ((unsigned __int64)(a3 * (__int64)(__int16)dword_1C032313C) >> 32 << 18)
                                   + ((((unsigned int)(a3 * (__int16)dword_1C032313C) >> 13) + 1) >> 1);
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
    if ( (_WORD)dword_1C032313C )
    {
      if ( word_1C0323188 == (_WORD)dword_1C032313C )
      {
        *(_DWORD *)(*a1 + 4LL * a2) += a3;
      }
      else
      {
        v9 = CompDiv((unsigned int)word_1C0323188, a3 * (__int64)(__int16)dword_1C032313C);
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
