/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1800CAD74
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18006CB9C (RtlRemoveInvertedFunctionTable.c)
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
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp+8h]

  v5 = 0;
  v6 = (int)a2;
  if ( a1 < *((_QWORD *)&xmmword_180157330 + 1)
    || a1 >= *((_QWORD *)&xmmword_180157330 + 1) + (unsigned __int64)(unsigned int)qword_180157340 )
  {
    v7 = RtlpxLookupFunctionTable(a1, (__int64 *)&v16);
  }
  else
  {
    v7 = xmmword_180157330;
    v16 = xmmword_180157330;
    v17 = qword_180157340;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)&v16 + 1);
    v5 = HIDWORD(v17);
  }
  else
  {
    v8 = v18;
  }
  LdrProtectMrdata(0, a2, a3, a4);
  *(_QWORD *)&xmmword_180157330 = v7;
  *((_QWORD *)&xmmword_180157330 + 1) = v8;
  LODWORD(qword_180157340) = v6;
  HIDWORD(qword_180157340) = v5;
  RtlRemoveInvertedFunctionTable(a1, v9, v10, v11);
  return LdrProtectMrdata(1, v12, v13, v14);
}
