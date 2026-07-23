/*
 * XREFs of CmpPromoteKey @ 0x1401B3308
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B3550 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockHiveFlusherShared @ 0x1403FC424 (CmpLockHiveFlusherShared.c)
 *     CmpUnlockHiveFlusher @ 0x1403FC4C8 (CmpUnlockHiveFlusher.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140403804 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStack @ 0x140403F80 (CmpStartKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x140403FD0 (CmpIsKeyStackDeleted.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpPopulateKcbStack @ 0x14043EFE0 (CmpPopulateKcbStack.c)
 *     CmpSwapPointers @ 0x140581CA8 (CmpSwapPointers.c)
 */

__int64 __fastcall CmpPromoteKey(__int64 a1, char a2, char a3)
{
  unsigned __int16 v4; // di
  int started; // ebx
  unsigned int v6; // r15d
  PVOID PoolWithTag; // rax
  _QWORD *v8; // r13
  __int64 v9; // rdi
  __int64 i; // rdx
  _BYTE *v11; // r12
  _BYTE *v12; // r14
  bool v13; // si
  _QWORD *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE *v19; // [rsp+20h] [rbp-49h] BYREF
  __int64 KcbAtLayerHeight; // [rsp+28h] [rbp-41h]
  PVOID P; // [rsp+30h] [rbp-39h]
  _BYTE v22[32]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v23[96]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE *v24; // [rsp+D0h] [rbp+67h] BYREF
  char v25; // [rsp+D8h] [rbp+6Fh]
  char v26; // [rsp+E0h] [rbp+77h]
  _QWORD *v27; // [rsp+E8h] [rbp+7Fh]

  v26 = a3;
  v25 = a2;
  CmpInitializeKcbStack(v22);
  CmpInitializeKcbStack(v23);
  v4 = *(_WORD *)(a1 + 2);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v4);
  started = CmpStartKcbStack(v22, v4);
  if ( started < 0 )
    goto LABEL_26;
  started = CmpStartKcbStack(v23, v4);
  if ( started < 0 )
    goto LABEL_26;
  v6 = ((*(_DWORD *)(KcbAtLayerHeight + 4) >> 21) & 0x3FF) + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x37364D43u);
  P = PoolWithTag;
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    started = -1073741670;
    goto LABEL_26;
  }
  memset(PoolWithTag, 0, 8LL * v6);
  LODWORD(v9) = v6;
  for ( i = KcbAtLayerHeight; (*(_BYTE *)(i + 178) & 4) == 0; i = *(_QWORD *)(i + 64) )
  {
    v9 = (*(_DWORD *)(i + 4) >> 21) & 0x3FF;
    v8[v9] = i;
  }
  v11 = v22;
  v12 = v23;
  v19 = v22;
  v24 = v23;
  CmpPopulateKcbStack(v23, i);
  CmpLockKcbStackTopExclusiveRestShared(v23);
  v13 = 1;
  if ( (unsigned int)v9 >= v6 )
  {
LABEL_22:
    started = 0;
    v13 = v26 == 0;
    goto LABEL_23;
  }
  v14 = &v8[(unsigned int)v9];
  v27 = v14;
  while ( 1 )
  {
    v15 = *v14;
    CmpPopulateKcbStack(v11, *v14);
    CmpLockKcbStackTopExclusiveRestShared(v16);
    if ( (unsigned __int8)CmpIsKeyStackDeleted(v11, 0LL) )
      break;
    if ( v15 == KcbAtLayerHeight )
    {
      if ( *(_DWORD *)(v15 + 32) != -1 && !v25 )
        goto LABEL_18;
      CmpLockHiveFlusherShared(*(_QWORD *)(v15 + 24));
      LOBYTE(v17) = v25;
    }
    else
    {
      if ( *(_DWORD *)(v15 + 32) != -1 )
        goto LABEL_18;
      CmpLockHiveFlusherShared(*(_QWORD *)(v15 + 24));
      v17 = 0LL;
    }
    started = CmpPromoteSingleKeyFromKcbStacks(v12, v11, v17);
    CmpUnlockHiveFlusher(*(_QWORD *)(v15 + 24));
    if ( started < 0 )
      goto LABEL_21;
LABEL_18:
    CmpUnlockKcbStack(v12);
    CmpSwapPointers(&v19, &v24);
    LODWORD(v9) = v9 + 1;
    v12 = v24;
    v14 = ++v27;
    v13 = 1;
    if ( (unsigned int)v9 >= v6 )
      goto LABEL_22;
    v11 = v19;
  }
  started = -1073741444;
LABEL_21:
  CmpUnlockKcbStack(v11);
LABEL_23:
  if ( v13 )
    CmpUnlockKcbStack(v12);
  ExFreePoolWithTag(P, 0);
LABEL_26:
  CmpCleanupKcbStack(v22);
  CmpCleanupKcbStack(v23);
  return (unsigned int)started;
}
