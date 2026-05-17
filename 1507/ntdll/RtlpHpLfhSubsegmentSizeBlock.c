/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlock @ 0x1800377BC
 * Callers:
 *     RtlpHpSegAllocSizeInternal @ 0x180036F30 (RtlpHpSegAllocSizeInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x180037888 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r9
  unsigned int v9; // edx
  char v10; // cl
  unsigned __int64 v11; // r8
  int v12; // edx

  v7 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v8 = *(_QWORD *)(a1
                 + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4]
                 + 192);
  v9 = a3 - HIWORD(v7) - a2;
  if ( *(_DWORD *)(v8 + 72) )
  {
    v11 = (v9 * (unsigned __int64)*(unsigned int *)(v8 + 72)) >> *(_BYTE *)(v8 + 76);
    v12 = v9 - v11 * (unsigned __int16)v7;
  }
  else
  {
    v10 = *(_BYTE *)(v8 + 76);
    v11 = v9 >> v10;
    v12 = ((1 << v10) - 1) & v9;
  }
  if ( v12
    || ((*(_QWORD *)(a2 + 8 * ((unsigned __int64)(unsigned int)(2 * v11) >> 6) + 48) >> ((2 * v11) & 0x3F)) & 1) == 0 )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return RtlpHpLfhSubsegmentSizeBlockInternal(a2, a3, v11, a4);
  }
}
