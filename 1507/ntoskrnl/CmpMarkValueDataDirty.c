/*
 * XREFs of CmpMarkValueDataDirty @ 0x14042B6CC
 * Callers:
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     CmpMarkKeyDirty @ 0x14042C620 (CmpMarkKeyDirty.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1404F0898 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpMarkKeyValuesDirty @ 0x140585CFC (CmpMarkKeyValuesDirty.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkValueDataDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // eax
  char v6; // bl
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int16 v12; // bx
  ULONG_PTR v13; // rdx
  int v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v3 == -1 )
    return 1;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 >= 0x80000000 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 4u || v5 - 16345 > 0x7FFFC026 )
    goto LABEL_5;
  v15 = -1;
  v14 = -1;
  v8 = 0LL;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v3, &v15);
  v10 = v9;
  if ( !v9 )
    return 0;
  v11 = *(unsigned int *)(v9 + 4);
  if ( (_DWORD)v11 == -1 )
    goto LABEL_16;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v11, &v14);
  if ( !v8 )
  {
    v6 = 0;
    goto LABEL_19;
  }
  v12 = 0;
  if ( *(_WORD *)(v10 + 2) )
  {
    while ( 1 )
    {
      v13 = *(unsigned int *)(v8 + 4LL * v12);
      if ( (_DWORD)v13 != -1 && !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v13) )
        break;
      if ( ++v12 >= *(_WORD *)(v10 + 2) )
        goto LABEL_15;
    }
    v6 = 0;
    goto LABEL_17;
  }
LABEL_15:
  v6 = 0;
  if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v10 + 4)) )
LABEL_16:
    v6 = 1;
LABEL_17:
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
LABEL_19:
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
  if ( !v6 )
    return v6;
LABEL_5:
  v6 = 0;
  if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 8)) )
    return 1;
  return v6;
}
