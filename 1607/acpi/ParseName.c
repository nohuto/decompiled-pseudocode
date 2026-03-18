/*
 * XREFs of ParseName @ 0x1C00199B0
 * Callers:
 *     ParseSuperName @ 0x1C0017D40 (ParseSuperName.c)
 *     ParseAndGetNameSpaceObject @ 0x1C001EDE8 (ParseAndGetNameSpaceObject.c)
 *     ParseObjName @ 0x1C002745C (ParseObjName.c)
 *     ParseFieldConnection @ 0x1C00614D8 (ParseFieldConnection.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1C00137F8 (RtlStringCchCopyA.c)
 *     ParseNameTail @ 0x1C00234A0 (ParseNameTail.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 */

__int64 __fastcall ParseName(__int64 a1, char **a2, char *a3)
{
  char v6; // r8
  unsigned int v7; // r14d
  __int64 v8; // rbx
  char *v9; // rcx
  char v10; // al
  int v11; // ebp
  unsigned int v12; // r15d
  char *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  signed __int64 v16; // r8
  char v17; // al
  _BYTE *v19; // rcx
  char *v20; // rax
  unsigned int v21; // ebp

  v6 = **a2;
  if ( v6 == 92 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "\\");
    ++*a2;
    goto LABEL_27;
  }
  if ( v6 == 94 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "^");
    ++*a2;
    v19 = a3 + 1;
    v20 = *a2;
    v21 = 1;
    do
    {
      if ( *v20 != 94 )
        break;
      *v19 = 94;
      ++v21;
      ++*a2;
      ++v19;
      v20 = *a2;
    }
    while ( v21 < 0xFF );
    a3[v21] = 0;
    if ( **a2 == 94 )
    {
      LogError(3221225734LL);
      AcpiDiagTraceAmlError(a1, 3221225734LL);
      PrintDebugMessage(129, (_DWORD)a3, 0, 0, 0LL);
      return 3221225734LL;
    }
LABEL_27:
    v7 = ParseNameTail(a1, a2, a3);
    goto LABEL_20;
  }
  v7 = 0;
  v8 = -1LL;
  *a3 = 0;
  do
    ++v8;
  while ( a3[v8] );
  v9 = *a2;
  v10 = **a2;
  switch ( v10 )
  {
    case 0:
      *a2 = v9 + 1;
      goto LABEL_20;
    case 47:
      *a2 = v9 + 1;
      v11 = (unsigned __int8)v9[1];
      *a2 = v9 + 2;
      if ( !v11 )
        goto LABEL_20;
      break;
    case 46:
      v11 = 2;
      *a2 = v9 + 1;
      break;
    default:
      v11 = 1;
      break;
  }
  v12 = v8 + 1;
  while ( (unsigned __int64)(unsigned int)v8 + 4 < 0x100 )
  {
    v13 = &a3[(unsigned int)v8];
    v14 = (unsigned int)(256 - v8);
    if ( (unsigned __int64)(v14 - 1) <= 0x7FFFFFFE )
    {
      v15 = 4 - v14;
      v16 = *a2 - v13;
      while ( v15 + v14 )
      {
        v17 = v13[v16];
        if ( !v17 )
          break;
        *v13++ = v17;
        if ( !--v14 )
          goto LABEL_36;
      }
      if ( v14 )
        goto LABEL_18;
LABEL_36:
      --v13;
LABEL_18:
      *v13 = 0;
      goto LABEL_19;
    }
    if ( 256 != (_DWORD)v8 )
      goto LABEL_18;
LABEL_19:
    *a2 += 4;
    LODWORD(v8) = v8 + 4;
    v12 += 4;
    if ( !--v11 )
      goto LABEL_20;
    if ( v12 < 0x100 )
    {
      RtlStringCchCopyA(&a3[(unsigned int)v8], (unsigned int)(256 - v8), ".");
      LODWORD(v8) = v8 + 1;
      ++v12;
    }
  }
  LogError(3221225734LL);
  AcpiDiagTraceAmlError(a1, 3221225734LL);
  PrintDebugMessage(130, (_DWORD)a3, 0, 0, 0LL);
  v7 = -1073741562;
LABEL_20:
  if ( !v7 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s");
  return v7;
}
