/*
 * XREFs of VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406171F4
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14061736C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x14061792C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall VrpFindDiffHiveEntryForMountPointWithLock(PCUNICODE_STRING String1)
{
  __int64 v1; // rdi
  wchar_t *Buffer; // rbx
  __int64 v4; // rbp
  wchar_t *v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // r10
  __int64 v8; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  WCHAR v11; // [rsp+50h] [rbp+8h]
  __int64 v12; // [rsp+50h] [rbp+8h]

  v1 = 0LL;
  Buffer = String1->Buffer;
  v4 = 314159LL;
  v5 = &Buffer[(unsigned __int64)String1->Length >> 1];
  while ( Buffer < v5 )
  {
    v11 = RtlUpcaseUnicodeChar(*Buffer++);
    v4 = HIBYTE(v11) + 37 * ((unsigned __int8)v11 + 37 * v4);
  }
  v6 = -1LL << (dword_1403225C4 & 0x1F);
  v7 = v4 & v6;
  if ( (unsigned int)dword_1403225C4 >> 5 )
  {
    v12 = v4 & v6;
    v8 = qword_1403225C8
       + 8LL
       * ((37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v7 + 11623883)))))))
         + HIBYTE(v12)) & (((unsigned int)dword_1403225C4 >> 5) - 1));
    do
    {
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        goto LABEL_13;
    }
    while ( v7 != (v6 & *(_QWORD *)(v8 + 8)) );
LABEL_14:
    while ( v8 )
    {
      String2.Buffer = (wchar_t *)(v8 + 68);
      String2.Length = *(_WORD *)(v8 + 64);
      String2.MaximumLength = String2.Length;
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
        return v8;
      while ( 1 )
      {
        v8 = *(_QWORD *)v8;
        if ( (v8 & 1) != 0 )
          break;
        if ( (v4 & v6) == (v6 & *(_QWORD *)(v8 + 8)) )
          goto LABEL_14;
      }
LABEL_13:
      v8 = 0LL;
    }
  }
  return v1;
}
