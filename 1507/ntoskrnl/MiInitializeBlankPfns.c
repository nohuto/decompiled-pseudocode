/*
 * XREFs of MiInitializeBlankPfns @ 0x1407C5470
 * Callers:
 *     MxCreateFreePfns @ 0x1407C5084 (MxCreateFreePfns.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall MiInitializeBlankPfns(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  _QWORD v17[5]; // [rsp+28h] [rbp-30h] BYREF

  memset(v17, 0, sizeof(v17));
  v9 = ((v17[4] & 0x3FFFFF000000000LL | 0xFFFFFFFFELL | ((unsigned __int64)a3 << 58)) ^ ((unsigned __int64)a4 << 36)) & 0x3000000000LL ^ (v17[4] & 0x3FFFFF000000000LL | 0xFFFFFFFFELL | ((unsigned __int64)a3 << 58));
  BYTE2(v17[3]) = ((a5 ^ BYTE2(v17[3])) & 7 ^ BYTE2(v17[3])) & 0x3F | 0x40;
  result = 0x20000000000000LL;
  v11 = a1 + 48 * a2;
  v12 = v9 | 0x20000000000000LL;
  if ( a1 != v11 )
  {
    v13 = v17[3];
    result = a1 + 16;
    v14 = v17[2];
    v15 = v17[1];
    v16 = v17[0];
    do
    {
      *(_QWORD *)(result - 16) = 0LL;
      *(_QWORD *)(result - 8) = v16;
      *(_QWORD *)result = v15;
      *(_QWORD *)(result + 8) = v14;
      *(_QWORD *)(result + 16) = v13;
      *(_QWORD *)(result + 24) = v12;
      result += 48LL;
    }
    while ( result - 16 != v11 );
  }
  return result;
}
