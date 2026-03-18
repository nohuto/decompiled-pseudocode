/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x1403BC1C8
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1403BC378 (CmpVEExecuteParseLogic.c)
 * Callees:
 *     CmpUnblockTwoHiveWrites @ 0x1403BC320 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x1403BC560 (CmpFindPathByName.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1403BC780 (CmpGetCmHiveFromVirtualPath.c)
 *     CmpBlockTwoHiveWrites @ 0x1403DE0D8 (CmpBlockTwoHiveWrites.c)
 */

char __fastcall CmpVirtualBranchIsReplicated(__int64 a1, _WORD *a2, char *a3)
{
  char *v3; // r12
  int v4; // esi
  int v5; // edi
  ULONG_PTR v6; // r15
  __int64 v7; // r14
  char PathByName; // al
  __int64 v9; // rsi
  char v10; // di
  __int64 v11; // rax
  bool v12; // zf
  char v13; // al
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // dx
  char v17; // bl
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v19 = -1;
  memset(v18, 0, sizeof(v18));
  v3 = a3;
  v4 = (int)a2;
  v5 = a1;
  v20 = 0LL;
  v6 = 0LL;
  *a3 = 0;
  if ( a1 )
  {
    if ( !*a2 )
    {
      if ( !CmpVEEnabled )
        return 0;
      v17 = 1;
      if ( (*(_WORD *)(a1 + 186) & 0x100) == 0 )
        return 0;
      return v17;
    }
    v7 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( (int)CmpGetCmHiveFromVirtualPath(a2, &v20) < 0 )
      return 0;
    v6 = CmpMasterHive;
    v7 = v20;
  }
  LOBYTE(a3) = 1;
  if ( (int)CmpBlockTwoHiveWrites(v6, v7, a3) < 0 )
    return 0;
  PathByName = CmpFindPathByName(v5, v4, (unsigned int)v18, (unsigned int)&v20, (__int64)&v21);
  v9 = v21;
  v10 = PathByName;
  if ( v21 && (v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v21 + 8))(v21, (unsigned int)v20, &v19)) != 0 )
  {
    if ( v10 )
    {
      if ( !CmpVEEnabled || (*(_WORD *)(v11 + 2) & 0x100) == 0 )
        v10 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v12 = (*(_WORD *)(v11 + 2) & 0x100) == 0, v13 = 1, v12) )
        v13 = 0;
      v14 = 0;
      v15 = LOWORD(v18[0]) >> 1;
      *v3 = v13;
      if ( v15 )
      {
        while ( *(_WORD *)(v18[1] + 2LL * v14) != 92 )
        {
          if ( ++v14 >= v15 )
            goto LABEL_16;
        }
        *v3 = 0;
      }
    }
LABEL_16:
    (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v19);
  }
  else
  {
    v10 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v7);
  return v10;
}
