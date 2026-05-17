/*
 * XREFs of RtlpHpVirtHeapTableFindEntry @ 0x1800EAEDC
 * Callers:
 *     RtlpHpVirtHeapTableDereferenceHeap @ 0x1800EAD60 (RtlpHpVirtHeapTableDereferenceHeap.c)
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 * Callees:
 *     RtlpHpVirtHeapTableFindByHeap @ 0x1800EAEAC (RtlpHpVirtHeapTableFindByHeap.c)
 *     RtlpHpVirtHeapTableFindById @ 0x1800EAEBC (RtlpHpVirtHeapTableFindById.c)
 */

__int64 __fastcall RtlpHpVirtHeapTableFindEntry(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v11; // [rsp+48h] [rbp+20h]
  __int64 v12; // [rsp+48h] [rbp+20h]

  v3 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v6 = -1LL << (dword_18014484C & 0x1F);
      v7 = a1 & v6;
      if ( v3 )
        goto LABEL_5;
      if ( !((unsigned int)dword_18014484C >> 5) )
        break;
      v11 = a1 & v6;
      v3 = qword_180144850
         + 8LL
         * ((37
           * (BYTE6(v11)
            + 37
            * (BYTE5(v11)
             + 37
             * (BYTE4(v11)
              + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v7 + 11623883)))))))
           + HIBYTE(v11)) & (((unsigned int)dword_18014484C >> 5) - 1));
LABEL_5:
      while ( 1 )
      {
        v3 = *(_QWORD *)v3;
        if ( (v3 & 1) != 0 )
          break;
        if ( v7 == (v6 & *(_QWORD *)(v3 + 8)) )
          goto LABEL_9;
      }
      v3 = 0LL;
LABEL_9:
      if ( !v3 || RtlpHpVirtHeapTableFindById(v3, a3) )
        return v3;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = -1LL << (dword_18014484C & 0x1F);
      v9 = a1 & v8;
      if ( v3 )
        goto LABEL_15;
      if ( !((unsigned int)dword_18014484C >> 5) )
        break;
      v12 = a1 & v8;
      v3 = qword_180144850
         + 8LL
         * ((37
           * (BYTE6(v12)
            + 37
            * (BYTE5(v12)
             + 37
             * (BYTE4(v12)
              + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v9 + 11623883)))))))
           + HIBYTE(v12)) & (((unsigned int)dword_18014484C >> 5) - 1));
LABEL_15:
      while ( 1 )
      {
        v3 = *(_QWORD *)v3;
        if ( (v3 & 1) != 0 )
          break;
        if ( v9 == (v8 & *(_QWORD *)(v3 + 8)) )
          goto LABEL_19;
      }
      v3 = 0LL;
LABEL_19:
      if ( !v3 || RtlpHpVirtHeapTableFindByHeap(v3, (__int64)a3) )
        return v3;
    }
  }
  return 0LL;
}
