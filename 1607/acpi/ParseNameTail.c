/*
 * XREFs of ParseNameTail @ 0x1C00234A0
 * Callers:
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseName @ 0x1C00199B0 (ParseName.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 */

__int64 __fastcall ParseNameTail(__int64 a1, char **a2, __int64 a3)
{
  __int64 v6; // r9
  char *v7; // rax
  char v8; // cl
  int v9; // esi
  unsigned int v10; // r11d
  _BYTE *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r10
  char v15; // al
  _BYTE *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r10
  char v20; // al
  __int64 result; // rax
  char *v22; // rax
  char *v23; // rcx

  v6 = -1LL;
  do
    ++v6;
  while ( *(_BYTE *)(a3 + v6) );
  v7 = *a2;
  v8 = **a2;
  switch ( v8 )
  {
    case 0:
      v23 = v7 + 1;
      result = 0LL;
      *a2 = v23;
      return result;
    case 47:
      v22 = v7 + 1;
      *a2 = v22;
      v9 = (unsigned __int8)*v22;
      *a2 = v22 + 1;
      if ( !v9 )
        return 0LL;
      break;
    case 46:
      v9 = 2;
      *a2 = v7 + 1;
      break;
    default:
      v9 = 1;
      break;
  }
  v10 = v6 + 1;
  while ( (unsigned __int64)(unsigned int)v6 + 4 < 0x100 )
  {
    v11 = (_BYTE *)((unsigned int)v6 + a3);
    v12 = (unsigned int)(256 - v6);
    if ( (unsigned __int64)(v12 - 1) > 0x7FFFFFFE )
    {
      if ( 256 == (_DWORD)v6 )
        goto LABEL_17;
    }
    else
    {
      v13 = 4 - v12;
      v14 = *a2 - v11;
      while ( v13 + v12 )
      {
        v15 = v11[v14];
        if ( !v15 )
          break;
        *v11++ = v15;
        if ( !--v12 )
          goto LABEL_33;
      }
      if ( v12 )
        goto LABEL_16;
LABEL_33:
      --v11;
    }
LABEL_16:
    *v11 = 0;
LABEL_17:
    *a2 += 4;
    LODWORD(v6) = v6 + 4;
    v10 += 4;
    if ( !--v9 )
      return 0LL;
    if ( v10 < 0x100 )
    {
      v16 = (_BYTE *)(a3 + (unsigned int)v6);
      v17 = (unsigned int)(256 - v6);
      if ( (unsigned __int64)(v17 - 1) <= 0x7FFFFFFE )
      {
        v18 = 2147483646 - v17;
        v19 = (const char *)("." - v16);
        while ( v18 + v17 )
        {
          v20 = v16[(_QWORD)v19];
          if ( !v20 )
            break;
          *v16++ = v20;
          if ( !--v17 )
            goto LABEL_24;
        }
        if ( !v17 )
LABEL_24:
          --v16;
LABEL_26:
        *v16 = 0;
        goto LABEL_27;
      }
      if ( 256 != (_DWORD)v6 )
        goto LABEL_26;
LABEL_27:
      LODWORD(v6) = v6 + 1;
      ++v10;
    }
  }
  LogError(3221225734LL);
  AcpiDiagTraceAmlError(a1, 3221225734LL);
  PrintDebugMessage(130, a3, 0, 0, 0LL);
  return 3221225734LL;
}
