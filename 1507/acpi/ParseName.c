/*
 * XREFs of ParseName @ 0x1C00107B0
 * Callers:
 *     ParseAndGetNameSpaceObject @ 0x1C000C7C8 (ParseAndGetNameSpaceObject.c)
 *     ParseSuperName @ 0x1C00100D0 (ParseSuperName.c)
 *     ParseObjName @ 0x1C0020370 (ParseObjName.c)
 *     ParseFieldConnection @ 0x1C004A0F0 (ParseFieldConnection.c)
 * Callees:
 *     ParseNameTail @ 0x1C000C990 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1C000CB20 (RtlStringCchCopyA.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseName(char **a1, char *a2)
{
  char v4; // dl
  unsigned int v5; // r14d
  __int64 v6; // rbx
  char *v7; // rcx
  char v8; // al
  int v9; // ebp
  unsigned int v10; // r15d
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  signed __int64 v14; // r8
  char v15; // al
  _BYTE *v17; // rcx
  char *v18; // rax
  unsigned int v19; // ebp

  v4 = **a1;
  if ( v4 == 92 )
  {
    RtlStringCchCopyA(a2, 0x100uLL, "\\");
    ++*a1;
    goto LABEL_27;
  }
  if ( v4 == 94 )
  {
    RtlStringCchCopyA(a2, 0x100uLL, "^");
    ++*a1;
    v17 = a2 + 1;
    v18 = *a1;
    v19 = 1;
    do
    {
      if ( *v18 != 94 )
        break;
      *v17 = 94;
      ++v19;
      ++*a1;
      ++v17;
      v18 = *a1;
    }
    while ( v19 < 0xFF );
    a2[v19] = 0;
    if ( **a1 == 94 )
    {
      LogError(3221225734LL);
      PrintDebugMessage(129, (_DWORD)a2, 0, 0, 0LL);
      return 3221225734LL;
    }
LABEL_27:
    v5 = ParseNameTail(a1, (__int64)a2);
    goto LABEL_20;
  }
  v5 = 0;
  v6 = -1LL;
  *a2 = 0;
  do
    ++v6;
  while ( a2[v6] );
  v7 = *a1;
  v8 = *v7;
  if ( !*v7 )
  {
    *a1 = v7 + 1;
    goto LABEL_20;
  }
  if ( v8 == 47 )
  {
    *a1 = v7 + 1;
    v9 = (unsigned __int8)v7[1];
    *a1 = v7 + 2;
    if ( !v9 )
      goto LABEL_20;
  }
  else if ( v8 == 46 )
  {
    v9 = 2;
    *a1 = v7 + 1;
  }
  else
  {
    v9 = 1;
  }
  v10 = v6 + 1;
  while ( (unsigned __int64)(unsigned int)v6 + 4 < 0x100 )
  {
    v11 = &a2[(unsigned int)v6];
    v12 = (unsigned int)(256 - v6);
    if ( (unsigned __int64)(v12 - 1) <= 0x7FFFFFFE )
    {
      v13 = 4 - v12;
      v14 = *a1 - v11;
      while ( v13 + v12 )
      {
        v15 = v11[v14];
        if ( !v15 )
          break;
        *v11++ = v15;
        if ( !--v12 )
          goto LABEL_36;
      }
      if ( v12 )
        goto LABEL_18;
LABEL_36:
      --v11;
LABEL_18:
      *v11 = 0;
      goto LABEL_19;
    }
    if ( 256 != (_DWORD)v6 )
      goto LABEL_18;
LABEL_19:
    *a1 += 4;
    LODWORD(v6) = v6 + 4;
    v10 += 4;
    if ( !--v9 )
      goto LABEL_20;
    if ( v10 < 0x100 )
    {
      RtlStringCchCopyA(&a2[(unsigned int)v6], (unsigned int)(256 - v6), ".");
      LODWORD(v6) = v6 + 1;
      ++v10;
    }
  }
  LogError(3221225734LL);
  PrintDebugMessage(130, (_DWORD)a2, 0, 0, 0LL);
  v5 = -1073741562;
LABEL_20:
  if ( !v5 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s");
  return v5;
}
