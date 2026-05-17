/*
 * XREFs of LdrpInitializeExceptionTable @ 0x1800D25A4
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F770 (RtlInsertInvertedFunctionTable.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA84 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall LdrpInitializeExceptionTable(unsigned __int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rbp
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v14);
  v2 = *(_DWORD *)(v14 + 80);
  RtlInsertInvertedFunctionTable(a1, v2);
  v5 = 0;
  if ( a1 < *((_QWORD *)&xmmword_180163430 + 1)
    || a1 >= *((_QWORD *)&xmmword_180163430 + 1) + (unsigned __int64)(unsigned int)qword_180163440 )
  {
    v6 = RtlpxLookupFunctionTable(a1, (char *)&v12, v3, v4);
  }
  else
  {
    v6 = xmmword_180163430;
    v12 = xmmword_180163430;
    v13 = qword_180163440;
  }
  if ( v6 )
  {
    v7 = *((_QWORD *)&v12 + 1);
    v5 = HIDWORD(v13);
  }
  else
  {
    v7 = v14;
  }
  LdrProtectMrdata(0);
  *(_QWORD *)&xmmword_180163430 = v6;
  HIDWORD(qword_180163440) = v5;
  *((_QWORD *)&xmmword_180163430 + 1) = v7;
  LODWORD(qword_180163440) = v2;
  RtlRemoveInvertedFunctionTable(a1, v8, v9, v10);
  return LdrProtectMrdata(1);
}
