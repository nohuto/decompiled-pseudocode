/*
 * XREFs of CmpGetToken @ 0x1407AEEE8
 * Callers:
 *     CmpParseInfBuffer @ 0x1407AEC04 (CmpParseInfBuffer.c)
 * Callees:
 *     isspace @ 0x14014E284 (isspace.c)
 *     strchr @ 0x14014ECF8 (strchr.c)
 *     strncpy_s @ 0x140153368 (strncpy_s.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall CmpGetToken(const char **a1, unsigned __int64 a2, __int64 a3)
{
  const char *v6; // rdi
  char v7; // al
  const char *v8; // r14
  __int64 v9; // rbx
  char *PoolWithTag; // rax
  char *v11; // r15
  char v12; // al
  const char *v13; // rbx
  const char *v14; // rbx

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_BYTE *)(a3 + 16) = 0;
  while ( 1 )
  {
    v6 = *a1;
    if ( (unsigned __int64)*a1 >= a2 )
      break;
    do
    {
      if ( *v6 == 10 )
        break;
      if ( !isspace(*(unsigned __int8 *)v6) )
        break;
      ++v6;
    }
    while ( (unsigned __int64)v6 < a2 );
    if ( (unsigned __int64)v6 >= a2 )
      break;
    if ( *v6 == 59 || *v6 == 35 )
    {
      do
      {
        if ( *v6 == 10 )
          break;
        ++v6;
      }
      while ( (unsigned __int64)v6 < a2 );
    }
    if ( (unsigned __int64)v6 >= a2 )
      break;
    v7 = *v6;
    if ( *v6 == 26 )
      break;
    switch ( v7 )
    {
      case 10:
        *(_DWORD *)a3 = 1;
        break;
      case 34:
        v14 = ++v6;
        if ( (unsigned __int64)v6 >= a2 )
          goto LABEL_57;
        do
        {
          if ( strchr(&StringTerminators[6], *v6) )
            break;
          ++v6;
        }
        while ( (unsigned __int64)v6 < a2 );
        if ( (unsigned __int64)v6 >= a2 || *v6 != 34 )
        {
LABEL_57:
          *(_DWORD *)a3 = 7;
          goto LABEL_27;
        }
        *v6 = 0;
        *(_DWORD *)a3 = 4;
        *(_QWORD *)(a3 + 8) = v14;
        break;
      case 44:
        *(_DWORD *)a3 = 6;
        break;
      case 61:
        *(_DWORD *)a3 = 5;
        break;
      case 91:
        *(_DWORD *)a3 = 2;
        break;
      case 92:
        v13 = ++v6;
        if ( (unsigned __int64)v6 < a2 )
        {
          do
          {
            if ( *v13 == 10 )
              break;
            if ( !isspace(*(unsigned __int8 *)v13) )
              break;
            ++v13;
          }
          while ( (unsigned __int64)v13 < a2 );
        }
        if ( *v13 == 59 || *v13 == 35 )
        {
          v13 = ++v6;
          if ( (unsigned __int64)v6 >= a2 )
            goto LABEL_57;
          do
          {
            if ( *v13 == 10 )
              break;
            ++v13;
          }
          while ( (unsigned __int64)v13 < a2 );
        }
        if ( (unsigned __int64)v13 >= a2 )
          goto LABEL_57;
        if ( *v13 == 10 )
        {
          v6 = v13 + 1;
          v12 = 0;
          goto LABEL_28;
        }
LABEL_18:
        v8 = v6;
        if ( (unsigned __int64)v6 < a2 )
        {
          do
          {
            if ( strchr(StringTerminators, *v6) )
              break;
            ++v6;
          }
          while ( (unsigned __int64)v6 < a2 );
          if ( v6 != v8 )
          {
            v9 = (unsigned int)((_DWORD)v6 - (_DWORD)v8);
            if ( (int)v9 + 1 >= (unsigned int)v9
              && (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v9 + 1), 0x69704D43u),
                  (v11 = PoolWithTag) != 0LL) )
            {
              strncpy_s(PoolWithTag, (unsigned int)(v9 + 1), v8, (unsigned int)v9);
              v11[v9] = 0;
              *(_DWORD *)a3 = 4;
              *(_QWORD *)(a3 + 8) = v11;
              *(_BYTE *)(a3 + 16) = 1;
            }
            else
            {
              *(_DWORD *)a3 = 8;
            }
            goto LABEL_27;
          }
        }
        *(_DWORD *)a3 = 7;
        break;
      case 93:
        *(_DWORD *)a3 = 3;
        break;
      default:
        goto LABEL_18;
    }
    ++v6;
LABEL_27:
    v12 = 1;
LABEL_28:
    *a1 = v6;
    if ( v12 )
      return;
  }
  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *a1 = v6;
}
