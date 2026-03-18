/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x1403FE290
 * Callers:
 *     CmpFindPathByName @ 0x1403BC560 (CmpFindPathByName.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14050EF5C (CmpSyncSubKeysAfterDelete.c)
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 *     CmpMarkCurrentValueDirty @ 0x140521970 (CmpMarkCurrentValueDirty.c)
 *     CmpFindSubKeyByName @ 0x1405239F8 (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x140523A10 (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x140523E0C (CmpWalkPath.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1405E22EC (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpFindSubKeyInLeafWithStatus @ 0x1403D9A84 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpFindSubKeyInRoot @ 0x1403D9BC0 (CmpFindSubKeyInRoot.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x1403FBB80 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(__int64 a1, __int64 a2, const UNICODE_STRING *a3, unsigned int *a4)
{
  int v4; // esi
  const UNICODE_STRING *v6; // rbp
  unsigned int SubKeyInLeafWithStatus; // ebx
  unsigned int v10; // r15d
  _WORD *v11; // rdi
  WCHAR *Buffer; // rbx
  __int64 v13; // rbp
  WCHAR v14; // ax
  int v15; // ecx
  unsigned __int16 v16; // bx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v21[18]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+8h] BYREF
  const UNICODE_STRING *v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h] BYREF

  v23 = a3;
  v4 = 0;
  v24 = -1;
  v6 = a3;
  SubKeyInLeafWithStatus = -1073741772;
  *a4 = -1;
  v10 = 0;
  if ( *(_DWORD *)(a1 + 192) )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a2 + 4LL * v10 + 20) )
      {
        v11 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(
                         a1,
                         *(unsigned int *)(a2 + 4LL * v10 + 28),
                         &v24);
        if ( !v11 )
          return 3221225626LL;
        if ( *v11 != 26994 )
          goto LABEL_5;
        if ( (int)CmpFindSubKeyInRoot(a1, (__int64)v11, (__int64)v6, &v22) < 0 )
        {
LABEL_37:
          SubKeyInLeafWithStatus = -1073741670;
          goto LABEL_26;
        }
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
        if ( v22 != -1 )
          break;
      }
LABEL_17:
      if ( ++v10 >= *(_DWORD *)(a1 + 192) )
        return SubKeyInLeafWithStatus;
    }
    v11 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v22, &v24);
    if ( !v11 )
      return 3221225626LL;
LABEL_5:
    if ( *v11 == 26732 )
    {
      Buffer = v6->Buffer;
      if ( v6->Length )
      {
        v13 = (((unsigned int)v6->Length - 1) >> 1) + 1;
        do
        {
          v14 = *Buffer;
          if ( *Buffer >= 0x61u )
          {
            if ( v14 > 0x7Au )
              v15 = RtlUpcaseUnicodeChar(v14);
            else
              v15 = v14 - 32;
          }
          else
          {
            v15 = v14;
          }
          ++Buffer;
          v4 = v15 + 37 * v4;
          --v13;
        }
        while ( v13 );
        v6 = v23;
      }
      v22 = -1;
      v16 = 0;
      if ( !v11[1] )
      {
LABEL_15:
        SubKeyInLeafWithStatus = -1073741772;
LABEL_16:
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
        v4 = 0;
        goto LABEL_17;
      }
      while ( 1 )
      {
        if ( v4 == *(_DWORD *)&v11[4 * v16 + 4] )
        {
          v17 = CmpDoCompareKeyName(a1, v6, *(_DWORD *)&v11[4 * v16 + 2]);
          if ( v17 == 2 )
            goto LABEL_37;
          if ( !v17 )
            break;
        }
        if ( ++v16 >= v11[1] )
          goto LABEL_15;
      }
      v18 = v16;
      SubKeyInLeafWithStatus = 0;
      v19 = *(_DWORD *)&v11[4 * v18 + 2];
      v22 = v19;
    }
    else
    {
      SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(a1, (__int64)v11, (__int64)v6, &v22, v21);
      if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
        goto LABEL_26;
      v19 = v22;
    }
    if ( v19 != -1 )
    {
      *a4 = v19;
      SubKeyInLeafWithStatus = 0;
LABEL_26:
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
      return SubKeyInLeafWithStatus;
    }
    goto LABEL_16;
  }
  return 3221225524LL;
}
