/*
 * XREFs of AslpFileVerQueryBlock @ 0x1406C90B4
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1406C8868 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x1406C8E7C (AslpFileQueryVersionString.c)
 * Callees:
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     AslpFileStringTokenize @ 0x140233AFC (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x140233B9C (AslpFileVerBlockGetValueOffset.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslStringDuplicate @ 0x1406C5378 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, const wchar_t *a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  const char *v7; // r9
  int v8; // r8d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  wchar_t *v14; // rcx
  char *v15; // rsi
  unsigned __int16 *v16; // rbx
  __int16 v17; // bp
  size_t v18; // rax
  const wchar_t *v19; // r15
  __int64 v21[9]; // [rsp+30h] [rbp-48h] BYREF
  size_t v22; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v23; // [rsp+98h] [rbp+20h] BYREF

  i = a1;
  v23 = 0LL;
  v21[0] = 0LL;
  v22 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
  {
    v7 = "Version block invalid";
    v8 = 1924;
LABEL_3:
    v9 = -1073741811;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileVerQueryBlock", v8, (_DWORD)v7);
    goto LABEL_26;
  }
  v11 = AslStringDuplicate(&v23, a2);
  v9 = v11;
  if ( v11 < 0 )
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileVerQueryBlock",
      1930,
      (unsigned int)"AslStringDuplicate failed [%x]",
      v11);
    goto LABEL_26;
  }
  v13 = *i;
  if ( *i > 0x7FFFu )
  {
    v7 = "VersionBlock is too long";
    v8 = 1942;
    goto LABEL_3;
  }
  if ( v13 < 8u )
  {
    v7 = "VersionBlock not long enough";
    v8 = 1947;
    goto LABEL_3;
  }
  v14 = v23;
  v15 = (char *)i + v13;
  v16 = (unsigned __int16 *)v15;
  v17 = *((_WORD *)v15 - 1);
  *((_WORD *)v15 - 1) = 0;
LABEL_23:
  v19 = AslpFileStringTokenize(v14, v12, v21);
  if ( v19 )
  {
    v10 = (unsigned int)((_DWORD)v15 - (_DWORD)i);
    if ( (unsigned int)v10 >= 8
      && *i <= (unsigned int)v10
      && AslpFileVerBlockGetValueOffset(&v22, (__int64)i, (unsigned int)v10) >= 0 )
    {
      v18 = ((i[1] + 3) & 0xFFFFFFFFFFFFFFFCuLL) + v22;
      v10 = *i;
      v22 = v18;
      if ( v18 <= v10 )
      {
        v16 = (unsigned __int16 *)((char *)i + v10);
        for ( i = (unsigned __int16 *)((char *)i + v18); i < v16; i = (unsigned __int16 *)((char *)i + v10) )
        {
          v10 = 8LL;
          if ( *i <= 8u )
            break;
          v10 = (char *)v16 - (char *)i;
          if ( *i > (unsigned __int64)((char *)v16 - (char *)i) )
            break;
          if ( !wcsicmp(v19, i + 3) )
          {
            v14 = 0LL;
            goto LABEL_23;
          }
          v10 = (*i + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        }
      }
    }
    v9 = -1073741275;
  }
  else
  {
    *a3 = i;
    *a4 = (char *)v16 - (char *)i;
    v9 = 0;
  }
  *((_WORD *)v15 - 1) = v17;
LABEL_26:
  AslFree(v10, v23);
  return v9;
}
