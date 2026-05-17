/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x180078754
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007881C (RtlRemoveInvertedFunctionTable.c)
 */

signed __int64 __fastcall RtlCreateInvertedFunctionTableCacheEntry(
        unsigned __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // edi
  int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // rsi
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp+8h]

  v5 = 0;
  v6 = (int)a2;
  if ( a1 < *((_QWORD *)&xmmword_180155330 + 1)
    || a1 >= *((_QWORD *)&xmmword_180155330 + 1) + (unsigned __int64)(unsigned int)qword_180155340 )
  {
    v7 = RtlpxLookupFunctionTable(a1, (__int64)&v13);
  }
  else
  {
    v7 = xmmword_180155330;
    v13 = xmmword_180155330;
    v14 = qword_180155340;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)&v13 + 1);
    v5 = HIDWORD(v14);
  }
  else
  {
    v8 = v15;
  }
  LdrProtectMrdata(0, a2, a3, a4);
  *(_QWORD *)&xmmword_180155330 = v7;
  *((_QWORD *)&xmmword_180155330 + 1) = v8;
  LODWORD(qword_180155340) = v6;
  HIDWORD(qword_180155340) = v5;
  RtlRemoveInvertedFunctionTable(a1);
  return LdrProtectMrdata(1, v9, v10, v11);
}
