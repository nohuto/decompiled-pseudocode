/*
 * XREFs of MiConvertContiguousPages @ 0x14010FEA0
 * Callers:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

char __fastcall MiConvertContiguousPages(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 DemandZeroPte; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rsi
  char v11; // cl
  unsigned int v12; // eax
  bool v13; // zf
  __int64 v14; // rcx
  signed __int32 v16[14]; // [rsp+0h] [rbp-38h] BYREF

  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v8 = DemandZeroPte;
  v9 = a1 + 48 * v7;
  v10 = 0LL;
  if ( a1 != v9 )
  {
    do
    {
      LODWORD(DemandZeroPte) = *(unsigned __int8 *)(a1 + 34) >> 6;
      if ( (_DWORD)DemandZeroPte != a3 )
      {
        if ( a3 == 1
          && ((*(_BYTE *)(a1 + 34) & 0xC0) == 0xC0
           || (v11 = *(_BYTE *)(a1 + 31) & 0xF,
               _InterlockedOr(v16, 0),
               v12 = ((_BYTE)KiTbFlushTimeStamp - v11) & 0xF,
               v12 > 2)
           || (v11 & 1) == 0 && v12 >= 2) )
        {
          LOBYTE(DemandZeroPte) = MiChangePageAttribute(a1, 1u, 4LL, v6);
        }
        else
        {
          v13 = *(_QWORD *)(a1 + 16) == 0LL;
          *(_QWORD *)(a1 + 16) = v10;
          v10 = a1;
          DemandZeroPte = !v13;
          *(_QWORD *)a1 = DemandZeroPte;
        }
      }
      a1 += 48LL;
    }
    while ( a1 != v9 );
    if ( v10 )
    {
      MiChangePageAttributeBatch((volatile signed __int32 *)v10, a3, -1LL, v6);
      do
      {
        DemandZeroPte = v8;
        v14 = *(_QWORD *)(v10 + 16);
        if ( !*(_QWORD *)v10 )
          DemandZeroPte = 0LL;
        *(_QWORD *)(v10 + 16) = DemandZeroPte;
        v10 = v14;
      }
      while ( v14 );
    }
  }
  return DemandZeroPte;
}
