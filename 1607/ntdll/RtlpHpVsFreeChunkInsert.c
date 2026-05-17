/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x18006E608
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18001D100 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsChunkCompare @ 0x18001D3A0 (RtlpHpVsChunkCompare.c)
 *     RtlpHpVsChunkComputeCost @ 0x18006E790 (RtlpHpVsChunkComputeCost.c)
 */

void __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, _WORD *a3)
{
  __int16 v5; // ax
  unsigned __int64 *v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rdx
  bool v9; // bl
  _QWORD *v10; // rdi
  unsigned int v11; // esi
  _QWORD *v12; // rax
  __int16 v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v13, &v14);
  v6 = (unsigned __int64 *)(a1 + 8);
  v7 = RtlpLFHKey;
  v8 = (0x101010101010101LL
      * ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 48) += (unsigned int)v8;
  v9 = 0;
  *a3 = (unsigned __int16)a3 ^ v7 ^ (v13 + v5 - v8);
  v10 = (_QWORD *)*v6;
  if ( *v6 )
  {
    v11 = (unsigned int)a3 ^ v7 ^ *(_DWORD *)a3;
    while ( 1 )
    {
      if ( (int)RtlpHpVsChunkCompare(v11, (__int64)v10) < 0 )
      {
        v12 = (_QWORD *)*v10;
        if ( !*v10 )
          break;
      }
      else
      {
        v12 = (_QWORD *)v10[1];
        if ( !v12 )
        {
          v9 = 1;
          break;
        }
      }
      v10 = v12;
    }
  }
  RtlRbInsertNodeEx(v6, (unsigned __int64)v10, v9, (unsigned __int64)(a3 + 4));
}
