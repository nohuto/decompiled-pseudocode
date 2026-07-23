/*
 * XREFs of CmQueryLayeredKey @ 0x1401B3CC8
 * Callers:
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpIsKeyStackSymlink @ 0x140402638 (CmpIsKeyStackSymlink.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x14040336C (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140403804 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsMasterHive @ 0x1404BCA00 (CmpIsMasterHive.c)
 *     CmGetKeyFlags @ 0x1405819C0 (CmGetKeyFlags.c)
 *     CmpCleanupKeyNodeStack @ 0x14060B964 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14060BD38 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C0B4 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmQueryLayeredKey(__int64 a1, int a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // rsi
  signed int started; // ebx
  unsigned int v11; // ebx
  const void **v12; // r9
  unsigned int v13; // ecx
  BOOL v14; // eax
  int v15; // ebx
  char v16; // al
  int v17; // ebx
  char v18; // al
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  unsigned int v22; // eax
  __int16 v23; // r8
  __int64 KcbAtLayerHeight; // rax
  __int16 v25; // r8
  __int64 v26; // rbx
  int v27; // r9d
  int v28; // eax
  char v30; // [rsp+30h] [rbp-108h]
  PVOID P; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v32[11]; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v33[80]; // [rsp+A0h] [rbp-98h] BYREF

  CmpInitializeKcbStack(v32);
  v30 = 0;
  CmpInitializeKeyNodeStack(v33);
  P = 0LL;
  memset(&v32[4], 0, 0x30uLL);
  v9 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v32, v9);
  if ( started < 0 )
    goto LABEL_57;
  CmpLockKcbStackShared(v32);
  v30 = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) && (*(_DWORD *)(a1 + 48) & 1) != 0 )
    {
      started = -1073740763;
    }
    else
    {
      started = CmpConstructNameWithStatus(v9, &P);
      if ( started >= 0 )
      {
        v11 = *(unsigned __int16 *)P + 4;
        *a5 = v11;
        if ( a4 >= 4 )
        {
          v12 = (const void **)P;
          *a3 = *(unsigned __int16 *)P;
          v13 = *(unsigned __int16 *)v12;
          if ( a4 - 4 < v13 )
            v13 = a4 - 4;
          memmove(a3 + 1, v12[1], v13);
          if ( v11 <= a4 )
            started = (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) != 0 ? 0xC000017C : 0;
          else
            started = -2147483643;
        }
        else
        {
          started = -1073741789;
        }
      }
    }
    goto LABEL_57;
  }
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
    goto LABEL_57;
  if ( a2 == 6 )
  {
    v14 = CmpVEEnabled
       && (*(_WORD *)(v9 + 178) & 0x200) == 0
       && !(unsigned __int8)CmpIsMasterHive(v9)
       && !(unsigned __int8)CmpIsSystemEntity(0LL);
    v15 = (LODWORD(v32[4]) ^ v14) & 1 ^ LODWORD(v32[4]);
    if ( !CmpVEEnabled
      || (*(_WORD *)(v9 + 178) & 0x200) != 0
      || (unsigned __int8)CmpIsMasterHive(v9)
      || (unsigned __int8)CmpIsSystemEntity(0LL)
      || (v16 = 1, (*(_DWORD *)(v9 + 176) & 0x20) != 0) )
    {
      v16 = 0;
    }
    v17 = ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v16)) & 2 ^ v15;
    if ( !CmpVEEnabled || (v18 = 1, (*(_WORD *)(v9 + 178) & 0x100) == 0) )
      v18 = 0;
    v19 = ((unsigned __int8)v17 ^ (unsigned __int8)(4 * v18)) & 4 ^ v17;
    v20 = ((unsigned __int8)v19 ^ (unsigned __int8)(8 * ((*(_WORD *)(v9 + 178) & 0x200) != 0))) & 8 ^ v19;
    v21 = ((unsigned __int8)v20 ^ (unsigned __int8)(16 * ((unsigned __int8)*(_WORD *)(v9 + 178) >> 7))) & 0x10 ^ v20;
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_57;
    }
    *a3 = v21;
    goto LABEL_34;
  }
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 5360LL) & 1) != 0 )
      v22 = v32[4] & 0xFFFFFFFE;
    else
      v22 = LODWORD(v32[4]) | 1;
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_57;
    }
    *a3 = v22;
    goto LABEL_34;
  }
  v23 = *(_WORD *)(v9 + 58);
  if ( v23 < 0 )
  {
LABEL_47:
    v26 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v32, (unsigned __int16)v23);
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
        break;
      v23 = v25 - 1;
      if ( v23 < 0 )
        goto LABEL_47;
    }
    v26 = KcbAtLayerHeight;
  }
  if ( a2 == 5 )
  {
    LODWORD(v32[4]) = CmGetKeyFlags(v26, 0LL);
    HIDWORD(v32[4]) = *(int *)(v26 + 32) < 0;
    if ( (unsigned __int8)CmpIsKeyStackSymlink(v32) )
      HIDWORD(v32[4]) = v27 | 2;
    v28 = (*(_DWORD *)(v26 + 176) >> 4) & 0xF;
    *a5 = 12;
    if ( a4 < 0xC )
    {
      started = -1073741789;
      goto LABEL_57;
    }
    *(_QWORD *)a3 = v32[4];
    a3[2] = v28;
LABEL_34:
    started = 0;
    goto LABEL_57;
  }
  started = CmpStartKeyNodeStackFromKcbStack(v33, v32, a1);
  if ( started >= 0 )
  {
    started = CmpQueryKeyDataFromKeyNodeStack((unsigned int)v33, a2, (_DWORD)a3, a4, (__int64)a5);
    if ( started >= 0 )
      started = 0;
  }
LABEL_57:
  CmpCleanupKeyNodeStack(v33);
  if ( P )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v30 )
    CmpUnlockKcbStack(v32);
  CmpCleanupKcbStack(v32);
  return (unsigned int)started;
}
