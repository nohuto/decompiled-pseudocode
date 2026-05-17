/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x180028BE0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x180028D80 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned int v5; // edx
  __int64 v6; // r10
  __int16 v7; // r9
  unsigned int v8; // r10d
  unsigned int v9; // r10d
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  bool v12; // r8
  __int16 v13; // r10
  int v14; // r9d
  _QWORD *v15; // rdx
  _QWORD *v16; // rax

  v5 = ((_DWORD)a3 - a2 + 4127) & 0xFFFFF000;
  v6 = 16 * (WORD1(RtlpLFHKey) ^ ((unsigned int)a3 >> 16) ^ (unsigned __int16)a3[1]);
  v7 = ((v6 + (unsigned __int64)((unsigned __int16)a3 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v6 + 4095) >> 12);
  v8 = ((_DWORD)a3 + v6 - a2) & 0xFFFFF000;
  if ( v5 < v8 )
  {
    v9 = v8 - v5;
    v10 = *(_QWORD *)(a2 + 16) & (-1LL << (v5 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v9 + v5 - 1) >> 12)));
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
  }
  v11 = v10 - ((v10 >> 1) & 0x5555555555555555LL);
  v12 = 0;
  *(_QWORD *)(a1 + 48) += (unsigned int)((0x101010101010101LL
                                        * (((v11 & 0x3333333333333333LL)
                                          + ((v11 >> 2) & 0x3333333333333333LL)
                                          + (((v11 & 0x3333333333333333LL) + ((v11 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  v13 = v7
      + (v9 >> 12)
      - ((0x101010101010101LL
        * (((v11 & 0x3333333333333333LL)
          + ((v11 >> 2) & 0x3333333333333333LL)
          + (((v11 & 0x3333333333333333LL) + ((v11 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
  v14 = RtlpLFHKey;
  *a3 = RtlpLFHKey ^ (unsigned __int16)a3 ^ v13;
  v15 = *(_QWORD **)(a1 + 8);
  if ( v15 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ v14 ^ *(_DWORD *)a3) < (v14 ^ (unsigned int)((_DWORD)v15 - 8) ^ *((_DWORD *)v15 - 2)) )
      {
        v16 = (_QWORD *)*v15;
        if ( !*v15 )
        {
          v12 = 0;
          break;
        }
      }
      else
      {
        v16 = (_QWORD *)v15[1];
        if ( !v16 )
        {
          v12 = 1;
          break;
        }
      }
      v15 = v16;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 8), (unsigned __int64)v15, v12, (unsigned __int64)(a3 + 4));
}
