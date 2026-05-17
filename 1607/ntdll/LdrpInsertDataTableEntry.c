/*
 * XREFs of LdrpInsertDataTableEntry @ 0x18002F158
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000E5C8 (LdrpMapDllSearchPath.c)
 *     LdrpLoadKnownDll @ 0x180012040 (LdrpLoadKnownDll.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x180018D08 (LdrpHashUnicodeString.c)
 */

void __fastcall LdrpInsertDataTableEntry(__int64 a1, __int64 a2)
{
  int v3; // eax
  char *v4; // rdx
  char *v5; // rcx
  char **v6; // rax
  bool v7; // zf
  __int64 *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx

  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
  {
    v3 = LdrpHashUnicodeString(a1 + 88, a2);
    *(_DWORD *)(a1 + 264) = v3;
    v4 = (char *)(a1 + 112);
    v5 = (char *)&LdrpHashTable + 16 * (v3 & 0x1F);
    v6 = (char **)*((_QWORD *)v5 + 1);
    if ( *v6 != v5 )
      __fastfail(3u);
    v7 = a1 == LdrpImageEntry;
    *(_QWORD *)(a1 + 120) = v6;
    *(_QWORD *)v4 = v5;
    *v6 = v4;
    *((_QWORD *)v5 + 1) = v4;
    if ( v7 )
    {
      v11 = qword_1801523D0;
      if ( *(__int64 **)(qword_1801523D0 + 8) != &qword_1801523D0 )
        __fastfail(3u);
      *(_QWORD *)a1 = qword_1801523D0;
      *(_QWORD *)(a1 + 8) = &qword_1801523D0;
      v12 = (_QWORD *)(a1 + 16);
      *(_QWORD *)(v11 + 8) = a1;
      v13 = qword_1801523E0;
      qword_1801523D0 = a1;
      if ( *(__int64 **)(qword_1801523E0 + 8) != &qword_1801523E0 )
        __fastfail(3u);
      *v12 = qword_1801523E0;
      *(_QWORD *)(a1 + 24) = &qword_1801523E0;
      *(_QWORD *)(v13 + 8) = v12;
      qword_1801523E0 = a1 + 16;
    }
    else
    {
      v8 = (__int64 *)qword_1801523D8;
      if ( *(__int64 **)qword_1801523D8 != &qword_1801523D0 )
        __fastfail(3u);
      *(_QWORD *)a1 = &qword_1801523D0;
      v9 = (_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v8;
      *v8 = a1;
      v10 = (_QWORD *)qword_1801523E8;
      qword_1801523D8 = a1;
      if ( *(__int64 **)qword_1801523E8 != &qword_1801523E0 )
        __fastfail(3u);
      *v9 = &qword_1801523E0;
      *(_QWORD *)(a1 + 24) = v10;
      *v10 = v9;
      qword_1801523E8 = a1 + 16;
    }
    *(_DWORD *)(a1 + 104) |= 0x40u;
  }
}
