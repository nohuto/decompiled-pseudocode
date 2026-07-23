/*
 * XREFs of AslpFileVerQueryBlock @ 0x1406C91EC
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1406C89A0 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x1406C8FB4 (AslpFileQueryVersionString.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     AslpFileStringTokenize @ 0x140233928 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1402339C8 (AslpFileVerBlockGetValueOffset.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslStringDuplicate @ 0x1406C54B0 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, const wchar_t *a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  int v7; // ebx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  wchar_t *v11; // rcx
  char *v12; // rsi
  unsigned __int16 *v13; // rbx
  __int16 v14; // bp
  size_t v15; // rax
  const wchar_t *v16; // r15
  __int64 v18[9]; // [rsp+30h] [rbp-48h] BYREF
  size_t v19; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v20; // [rsp+98h] [rbp+20h] BYREF

  i = a1;
  v20 = 0LL;
  v18[0] = 0LL;
  v19 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
    goto LABEL_2;
  v7 = AslStringDuplicate(&v20, a2);
  if ( v7 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_23;
  }
  v10 = *i;
  if ( *i > 0x7FFFu || v10 < 8u )
  {
LABEL_2:
    v7 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else
  {
    v11 = v20;
    v12 = (char *)i + v10;
    v13 = (unsigned __int16 *)v12;
    v14 = *((_WORD *)v12 - 1);
    *((_WORD *)v12 - 1) = 0;
LABEL_20:
    v16 = AslpFileStringTokenize(v11, v9, v18);
    if ( v16 )
    {
      v8 = (unsigned int)((_DWORD)v12 - (_DWORD)i);
      if ( (unsigned int)v8 >= 8
        && *i <= (unsigned int)v8
        && AslpFileVerBlockGetValueOffset(&v19, (__int64)i, (unsigned int)v8) >= 0 )
      {
        v15 = ((i[1] + 3) & 0xFFFFFFFFFFFFFFFCuLL) + v19;
        v8 = *i;
        v19 = v15;
        if ( v15 <= v8 )
        {
          v13 = (unsigned __int16 *)((char *)i + v8);
          for ( i = (unsigned __int16 *)((char *)i + v15); i < v13; i = (unsigned __int16 *)((char *)i + v8) )
          {
            v8 = 8LL;
            if ( *i <= 8u )
              break;
            v8 = (char *)v13 - (char *)i;
            if ( *i > (unsigned __int64)((char *)v13 - (char *)i) )
              break;
            if ( !wcsicmp(v16, i + 3) )
            {
              v11 = 0LL;
              goto LABEL_20;
            }
            v8 = (*i + 3) & 0xFFFFFFFFFFFFFFFCuLL;
          }
        }
      }
      v7 = -1073741275;
    }
    else
    {
      *a3 = i;
      *a4 = (char *)v13 - (char *)i;
      v7 = 0;
    }
    *((_WORD *)v12 - 1) = v14;
  }
LABEL_23:
  AslFree(v8, v20);
  return (unsigned int)v7;
}
