/*
 * XREFs of MakeUpKeyboardCorrectionCalloutContents @ 0x1C01D8678
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall MakeUpKeyboardCorrectionCalloutContents(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  _BYTE *v3; // rsi
  __int64 v7; // r15
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // r9

  v3 = a3 + 4;
  v7 = *(_QWORD *)(gptiCurrent + 384LL);
  memset(a3, 0, 0x148uLL);
  v8 = 0;
  *a3 = *(_QWORD *)a1;
  *((_DWORD *)a3 + 2) = *(_DWORD *)(a1 + 8);
  a3[2] = *(_QWORD *)(a1 + 16);
  a3[3] = *(_QWORD *)(a1 + 24);
  *((_DWORD *)a3 + 72) = *(unsigned __int8 *)(gptiCurrent + 1176LL);
  *((_DWORD *)a3 + 73) = *(_DWORD *)(gptiCurrent + 1180LL);
  *((_DWORD *)a3 + 74) = *(_DWORD *)(a1 + 16);
  *((_DWORD *)a3 + 75) = (unsigned __int8)(*a2 & 2) >> 1;
  v9 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 40);
  else
    v10 = 0LL;
  a3[40] = v10;
  a3[38] = *(_QWORD *)(gptiCurrent + 1184LL);
  result = *(_QWORD *)(gptiCurrent + 1192LL);
  a3[39] = result;
  do
  {
    v12 = (unsigned __int64)(unsigned __int8)v8 >> 2;
    if ( ((unsigned __int8)(1 << (2 * (v8 & 3))) & *(_BYTE *)(v12 + v7 + 192)) != 0 )
      *v3 |= 0x80u;
    if ( ((unsigned __int8)(1 << (2 * (v8 & 3) + 1)) & *(_BYTE *)(v12 + v7 + 192)) != 0 )
      *v3 |= 1u;
    ++v8;
    ++v3;
  }
  while ( v8 < 0x100 );
  return result;
}
