/*
 * XREFs of MiInitializeBlankPfns @ 0x140796EE0
 * Callers:
 *     MxCreateFreePfns @ 0x140796AA8 (MxCreateFreePfns.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall MiInitializeBlankPfns(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdi
  _QWORD v19[6]; // [rsp+20h] [rbp-38h] BYREF

  v5 = a2;
  v7 = a3;
  memset(v19, 0, sizeof(v19));
  if ( (_DWORD)v5 == -1 )
  {
    v9 = 1LL;
    v10 = v19[5] & 0xFFFFFFF000000000uLL;
  }
  else
  {
    v9 = MiLargePageSizes[v5];
    v10 = (v19[5] ^ MiLargePageContainingFrames[v5]) & 0xFFFFFFFFFLL ^ v19[5];
  }
  BYTE2(v19[4]) ^= (a5 ^ BYTE2(v19[4])) & 7;
  BYTE2(v19[4]) = BYTE2(v19[4]) & 0x3F | 0x40;
  v11 = a1 + 48 * v9;
  v19[5] = v10 & 0x3FFFFFFFFFFFFFFLL | (v7 << 58);
  result = 0x20000000000000LL;
  v13 = (v19[5] ^ ((unsigned __int64)a4 << 36)) & 0x3000000000LL ^ v19[5] | 0x20000000000000LL;
  if ( a1 != v11 )
  {
    v14 = v19[4];
    result = a1 + 16;
    v15 = v19[1];
    v16 = v19[3];
    v17 = v19[2];
    v18 = v19[0];
    do
    {
      *(_QWORD *)(result - 16) = v18;
      *(_QWORD *)(result - 8) = v15;
      *(_QWORD *)result = v17;
      *(_QWORD *)(result + 8) = v16;
      *(_QWORD *)(result + 16) = v14;
      *(_QWORD *)(result + 24) = v13;
      result += 48LL;
    }
    while ( result - 16 != v11 );
  }
  return result;
}
