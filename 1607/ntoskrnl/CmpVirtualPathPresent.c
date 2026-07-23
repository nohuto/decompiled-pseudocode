/*
 * XREFs of CmpVirtualPathPresent @ 0x140601DC0
 * Callers:
 *     CmpReparseToVirtualPath @ 0x14060180C (CmpReparseToVirtualPath.c)
 * Callees:
 *     CmpUnblockTwoHiveWrites @ 0x1403E164C (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1403E16A4 (CmpBlockTwoHiveWrites.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1403E176C (CmpGetCmHiveFromVirtualPath.c)
 *     CmpFindPathByNameEx @ 0x1406010C8 (CmpFindPathByNameEx.c)
 */

char __fastcall CmpVirtualPathPresent(__m128i *a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  char PathByName; // al
  __int64 v6; // rsi
  char v7; // bl
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+78h] [rbp+38h] BYREF
  int v10; // [rsp+80h] [rbp+40h] BYREF
  int v11; // [rsp+84h] [rbp+44h]
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  v10 = -1;
  v1 = CmpMasterHive;
  v2 = 0LL;
  v11 = 0;
  v12 = 0LL;
  if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a1, (__int64)&v12) < 0 || (int)CmpBlockTwoHiveWrites(v1, v12, 1) < 0 )
    return 0;
  PathByName = CmpFindPathByNameEx(0LL, a1, 0LL, 0, &v9, &v8);
  v6 = v8;
  v7 = PathByName;
  if ( v8 )
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v8 + 8))(v8, v9, &v10);
  if ( v7 )
  {
    if ( !v2 || !CmpVEEnabled || (v7 = 1, (*(_WORD *)(v2 + 2) & 0x100) == 0) )
      v7 = 0;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64, int *))(v6 + 16))(v6, &v10);
  CmpUnblockTwoHiveWrites(v1, v12);
  return v7;
}
