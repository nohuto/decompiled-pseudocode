/*
 * XREFs of ParseNameTail @ 0x1C000C990
 * Callers:
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     ParseName @ 0x1C00107B0 (ParseName.c)
 * Callees:
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ParseNameTail(char **a1, __int64 a2)
{
  __int64 v4; // r8
  char *v5; // rax
  char v6; // cl
  int v7; // esi
  unsigned int v8; // r11d
  _BYTE *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r10
  char v13; // al
  _BYTE *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  const char *v17; // r10
  char v18; // al
  char *v20; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = *a1;
  v6 = **a1;
  switch ( v6 )
  {
    case 0:
      *a1 = v5 + 1;
      return 0LL;
    case 47:
      v20 = v5 + 1;
      *a1 = v20;
      v7 = (unsigned __int8)*v20;
      *a1 = v20 + 1;
      if ( !v7 )
        return 0LL;
      break;
    case 46:
      v7 = 2;
      *a1 = v5 + 1;
      break;
    default:
      v7 = 1;
      break;
  }
  v8 = v4 + 1;
  while ( (unsigned __int64)(unsigned int)v4 + 4 < 0x100 )
  {
    v9 = (_BYTE *)((unsigned int)v4 + a2);
    v10 = (unsigned int)(256 - v4);
    if ( (unsigned __int64)(v10 - 1) > 0x7FFFFFFE )
    {
      if ( 256 == (_DWORD)v4 )
        goto LABEL_17;
    }
    else
    {
      v11 = 4 - v10;
      v12 = *a1 - v9;
      while ( v11 + v10 )
      {
        v13 = v9[v12];
        if ( !v13 )
          break;
        *v9++ = v13;
        if ( !--v10 )
          goto LABEL_33;
      }
      if ( v10 )
        goto LABEL_16;
LABEL_33:
      --v9;
    }
LABEL_16:
    *v9 = 0;
LABEL_17:
    *a1 += 4;
    LODWORD(v4) = v4 + 4;
    v8 += 4;
    if ( !--v7 )
      return 0LL;
    if ( v8 < 0x100 )
    {
      v14 = (_BYTE *)(a2 + (unsigned int)v4);
      v15 = (unsigned int)(256 - v4);
      if ( (unsigned __int64)(v15 - 1) <= 0x7FFFFFFE )
      {
        v16 = 2147483646 - v15;
        v17 = (const char *)("." - v14);
        while ( v16 + v15 )
        {
          v18 = v14[(_QWORD)v17];
          if ( !v18 )
            break;
          *v14++ = v18;
          if ( !--v15 )
            goto LABEL_24;
        }
        if ( !v15 )
LABEL_24:
          --v14;
LABEL_26:
        *v14 = 0;
        goto LABEL_27;
      }
      if ( 256 != (_DWORD)v4 )
        goto LABEL_26;
LABEL_27:
      LODWORD(v4) = v4 + 1;
      ++v8;
    }
  }
  LogError(3221225734LL);
  PrintDebugMessage(130, a2, 0, 0, 0LL);
  return 3221225734LL;
}
