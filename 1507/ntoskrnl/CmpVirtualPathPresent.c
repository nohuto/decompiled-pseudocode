/*
 * XREFs of CmpVirtualPathPresent @ 0x1406591BC
 * Callers:
 *     CmpReparseToVirtualPath @ 0x140658F0C (CmpReparseToVirtualPath.c)
 * Callees:
 *     CmpFindPathByNameEx @ 0x1401DFBAC (CmpFindPathByNameEx.c)
 *     CmpUnblockTwoHiveWrites @ 0x140407838 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140407890 (CmpBlockTwoHiveWrites.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x140407970 (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualPathPresent(__m128i *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  char PathByName; // al
  __int64 v6; // rsi
  bool v7; // bl
  __int64 v8[5]; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = -1;
  v1 = CmpMasterHive;
  v2 = 0LL;
  v11 = 0LL;
  if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a1, (__int64)&v11) < 0 || (int)CmpBlockTwoHiveWrites(v1, v11, 1) < 0 )
    return 0;
  PathByName = CmpFindPathByNameEx(0LL, a1, 0LL, 0, &v10, v8);
  v6 = v8[0];
  v7 = PathByName;
  if ( v8[0] )
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v8[0] + 8))(v8[0], v10, &v9);
  if ( v7 )
    v7 = v2 && CmpVEEnabled && (*(_WORD *)(v2 + 2) & 0x100) != 0;
  if ( v2 )
    (*(void (__fastcall **)(__int64, int *))(v6 + 16))(v6, &v9);
  CmpUnblockTwoHiveWrites(v1, v11);
  return v7;
}
