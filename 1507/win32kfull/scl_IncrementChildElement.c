/*
 * XREFs of scl_IncrementChildElement @ 0x1C00B4C24
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_IncrementChildElement(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  _QWORD *v5; // r8
  __int64 v6; // r11
  __int64 v7; // rcx

  result = *(unsigned __int16 *)(a2 + 80);
  if ( (_WORD)result )
  {
    v4 = 6LL;
    v5 = (_QWORD *)a1;
    v6 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 64) + 2LL * (__int16)result - 2) + 1);
    do
    {
      *v5 = *(_QWORD *)((char *)v5 + a2 - a1) + 4 * v6;
      ++v5;
      --v4;
    }
    while ( v4 );
    *(_QWORD *)(a1 + 48) = v6 + *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a1 + 72) = v6 + *(_QWORD *)(a2 + 72);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88) + *(__int16 *)(a2 + 80);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104) + 12 * v6;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56) + 2LL * *(__int16 *)(a2 + 80);
    v7 = *(__int16 *)(a2 + 80);
    result = *(_QWORD *)(a2 + 64);
    *(_WORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 64) = result + 2 * v7;
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  }
  return result;
}
