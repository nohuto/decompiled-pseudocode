/*
 * XREFs of LdrpInitializeExceptionTable @ 0x1800D2664
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F760 (RtlInsertInvertedFunctionTable.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007AA74 (RtlRemoveInvertedFunctionTable.c)
 */

void __fastcall LdrpInitializeExceptionTable(PVOID BaseAddress)
{
  unsigned int SizeOfImage; // r14d
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // esi
  __int64 v6; // rdi
  PIMAGE_NT_HEADERS v7; // rbp
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders);
  SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
  RtlInsertInvertedFunctionTable(BaseAddress, SizeOfImage);
  v5 = 0;
  if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_180163430 + 1)
    || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_180163430 + 1)
                                      + (unsigned __int64)(unsigned int)qword_180163440 )
  {
    v6 = RtlpxLookupFunctionTable((unsigned __int64)BaseAddress, (char *)&v8, v3, v4);
  }
  else
  {
    v6 = xmmword_180163430;
    v8 = xmmword_180163430;
    v9 = qword_180163440;
  }
  if ( v6 )
  {
    v7 = (PIMAGE_NT_HEADERS)*((_QWORD *)&v8 + 1);
    v5 = HIDWORD(v9);
  }
  else
  {
    v7 = OutHeaders;
  }
  LdrProtectMrdata(0);
  *(_QWORD *)&xmmword_180163430 = v6;
  HIDWORD(qword_180163440) = v5;
  *((_QWORD *)&xmmword_180163430 + 1) = v7;
  LODWORD(qword_180163440) = SizeOfImage;
  RtlRemoveInvertedFunctionTable((__int64)BaseAddress);
  LdrProtectMrdata(1);
}
