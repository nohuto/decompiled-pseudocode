/*
 * XREFs of CmpVirtualPathPresent @ 0x1405E2D38
 * Callers:
 *     CmpReparseToVirtualPath @ 0x1405E2990 (CmpReparseToVirtualPath.c)
 * Callees:
 *     CmpUnblockTwoHiveWrites @ 0x1403BC320 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x1403BC560 (CmpFindPathByName.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1403BC780 (CmpGetCmHiveFromVirtualPath.c)
 *     CmpBlockTwoHiveWrites @ 0x1403DE0D8 (CmpBlockTwoHiveWrites.c)
 */

bool __fastcall CmpVirtualPathPresent(__m128i *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  char PathByName; // al
  ULONG_PTR v6; // rsi
  bool v7; // bl
  ULONG_PTR v8[5]; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = -1;
  v1 = CmpMasterHive;
  v2 = 0LL;
  v11 = 0LL;
  if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a1, (__int64)&v11) < 0 || (int)CmpBlockTwoHiveWrites(v1, v11, 1) < 0 )
    return 0;
  PathByName = CmpFindPathByName(0LL, a1, 0LL, &v10, v8);
  v6 = v8[0];
  v7 = PathByName;
  if ( v8[0] )
    v2 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v8[0] + 8))(v8[0], v10, &v9);
  if ( v7 )
    v7 = v2 && CmpVEEnabled && (*(_WORD *)(v2 + 2) & 0x100) != 0;
  if ( v2 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v9);
  CmpUnblockTwoHiveWrites(v1, v11);
  return v7;
}
