/*
 * XREFs of _wsplitpath_s @ 0x1800A1A30
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     wcsncpy_s @ 0x1800A2680 (wcsncpy_s.c)
 */

errno_t __cdecl wsplitpath_s(
        const wchar_t *FullPath,
        wchar_t *Drive,
        size_t DriveCount,
        wchar_t *Dir,
        size_t DirCount,
        wchar_t *Filename,
        size_t FilenameCount,
        wchar_t *Ext,
        size_t ExtCount)
{
  const wchar_t *v9; // rdi
  size_t v11; // rsi
  int v13; // r9d
  __int64 v14; // rax
  const wchar_t *v15; // rbx
  wchar_t v16; // ax
  const wchar_t *v17; // rbp
  const wchar_t *v18; // rsi
  const wchar_t *v19; // rbx
  size_t v20; // r9
  size_t v21; // r9
  size_t v22; // rbx
  size_t v23; // rbx

  v9 = FullPath;
  v11 = DriveCount;
  v13 = 0;
  if ( !FullPath )
    goto LABEL_4;
  if ( Drive )
  {
    if ( !DriveCount )
      goto LABEL_4;
  }
  else if ( DriveCount )
  {
LABEL_4:
    v13 = 1;
    goto LABEL_57;
  }
  if ( Dir )
  {
    if ( !DirCount )
      goto LABEL_4;
  }
  else if ( DirCount )
  {
    goto LABEL_4;
  }
  if ( Filename )
  {
    if ( !FilenameCount )
      goto LABEL_4;
  }
  else if ( FilenameCount )
  {
    goto LABEL_4;
  }
  if ( Ext )
  {
    if ( !ExtCount )
      goto LABEL_4;
  }
  else if ( ExtCount )
  {
    goto LABEL_4;
  }
  v14 = 1LL;
  v15 = FullPath;
  do
  {
    if ( !*v15 )
      break;
    ++v15;
    --v14;
  }
  while ( v14 );
  if ( *v15 == 58 )
  {
    if ( Drive )
    {
      if ( DriveCount < 3 )
        goto LABEL_57;
      wcsncpy_s(Drive, DriveCount, FullPath, 2uLL);
    }
    v9 = v15 + 1;
  }
  else if ( Drive )
  {
    *Drive = 0;
  }
  v16 = *v9;
  v17 = 0LL;
  v18 = 0LL;
  v19 = v9;
  if ( !*v9 )
    goto LABEL_40;
  do
  {
    if ( v16 == 47 || v16 == 92 )
    {
      v17 = v19 + 1;
    }
    else if ( v16 == 46 )
    {
      v18 = v19;
    }
    v16 = *++v19;
  }
  while ( *v19 );
  if ( v17 )
  {
    if ( Dir )
    {
      v20 = v17 - v9;
      if ( DirCount <= v20 )
        goto LABEL_56;
      wcsncpy_s(Dir, DirCount, v9, v20);
    }
    v9 = v17;
  }
  else
  {
LABEL_40:
    if ( Dir )
      *Dir = 0;
  }
  if ( !v18 || v18 < v9 )
  {
    if ( Filename )
    {
      v23 = v19 - v9;
      if ( FilenameCount <= v23 )
        goto LABEL_56;
      wcsncpy_s(Filename, FilenameCount, v9, v23);
    }
    if ( Ext )
      *Ext = 0;
    return 0;
  }
  if ( !Filename )
  {
LABEL_47:
    if ( !Ext )
      return 0;
    v22 = v19 - v18;
    if ( ExtCount > v22 )
    {
      wcsncpy_s(Ext, ExtCount, v18, v22);
      return 0;
    }
    goto LABEL_56;
  }
  v21 = v18 - v9;
  if ( FilenameCount > v21 )
  {
    wcsncpy_s(Filename, FilenameCount, v9, v21);
    goto LABEL_47;
  }
LABEL_56:
  v13 = 0;
  v11 = DriveCount;
LABEL_57:
  if ( Drive && v11 )
    *Drive = 0;
  if ( Dir && DirCount )
    *Dir = 0;
  if ( Filename && FilenameCount )
    *Filename = 0;
  if ( Ext && ExtCount )
    *Ext = 0;
  if ( v9 && !v13 )
    return 34;
  invalid_parameter();
  return 22;
}
