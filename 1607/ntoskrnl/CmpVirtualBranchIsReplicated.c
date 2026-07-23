/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x1403E14A8
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1403E1228 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140601B14 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpUnblockTwoHiveWrites @ 0x1403E164C (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1403E16A4 (CmpBlockTwoHiveWrites.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1403E176C (CmpGetCmHiveFromVirtualPath.c)
 *     CmpFindPathByNameEx @ 0x1406010C8 (CmpFindPathByNameEx.c)
 */

char __fastcall CmpVirtualBranchIsReplicated(__int64 a1, _WORD *a2, char *a3)
{
  char *v3; // r12
  int v4; // esi
  int v5; // edi
  __int64 v6; // r15
  __int64 v8; // r14
  char v9; // bl
  char PathByName; // al
  __int64 v11; // rsi
  char v12; // di
  __int64 v13; // rax
  bool v14; // zf
  char v15; // al
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // dx
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  int v20; // [rsp+90h] [rbp+50h] BYREF
  int v21; // [rsp+94h] [rbp+54h]
  __int64 v22; // [rsp+98h] [rbp+58h] BYREF

  v20 = -1;
  v21 = 0;
  memset(v18, 0, sizeof(v18));
  v3 = a3;
  v4 = (int)a2;
  v5 = a1;
  v6 = 0LL;
  v19 = 0LL;
  *a3 = 0;
  if ( a1 )
  {
    if ( !*a2 )
    {
      if ( !CmpVEEnabled )
        return 0;
      v9 = 1;
      if ( (*(_WORD *)(a1 + 178) & 0x100) == 0 )
        return 0;
      return v9;
    }
    v8 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( (int)CmpGetCmHiveFromVirtualPath(a2, &v19) < 0 )
      return 0;
    v6 = CmpMasterHive;
    v8 = v19;
  }
  LOBYTE(a3) = 1;
  if ( (int)CmpBlockTwoHiveWrites(v6, v8, a3) < 0 )
    return 0;
  PathByName = CmpFindPathByNameEx(v5, v4, (unsigned int)v18, 0, (__int64)&v19, (__int64)&v22);
  v11 = v22;
  v12 = PathByName;
  if ( v22 && (v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v22 + 8))(v22, (unsigned int)v19, &v20)) != 0 )
  {
    if ( v12 )
    {
      if ( !CmpVEEnabled || (*(_WORD *)(v13 + 2) & 0x100) == 0 )
        v12 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v14 = (*(_WORD *)(v13 + 2) & 0x100) == 0, v15 = 1, v14) )
        v15 = 0;
      v16 = 0;
      v17 = LOWORD(v18[0]) >> 1;
      *v3 = v15;
      if ( v17 )
      {
        while ( *(_WORD *)(v18[1] + 2LL * v16) != 92 )
        {
          if ( ++v16 >= v17 )
            goto LABEL_27;
        }
        *v3 = 0;
      }
    }
LABEL_27:
    (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v20);
  }
  else
  {
    v12 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v8);
  return v12;
}
