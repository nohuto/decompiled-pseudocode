/*
 * XREFs of wcsncpy_s @ 0x1401537E4
 * Callers:
 *     _wsplitpath_s @ 0x140152CF4 (_wsplitpath_s.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     ExpFindArcName @ 0x1406B0998 (ExpFindArcName.c)
 *     ExpParseSignatureName @ 0x1406B14D4 (ExpParseSignatureName.c)
 *     LocalGetStringForControl @ 0x1406CB830 (LocalGetStringForControl.c)
 *     GetOperatorIndexByName @ 0x1406CD658 (GetOperatorIndexByName.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx
  wchar_t *v6; // r11
  rsize_t v7; // r10
  signed __int64 v8; // r11
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  if ( MaxCount )
  {
    if ( !Dst )
    {
LABEL_27:
      xHalFreeMessageTarget();
      return 22;
    }
  }
  else if ( !Dst )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_27;
  }
  if ( !SizeInWords )
    goto LABEL_27;
  if ( !MaxCount )
  {
    *Dst = 0;
    return 0;
  }
  if ( Src )
  {
    v6 = Dst;
    v7 = SizeInWords;
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Dst - (char *)Src;
      do
      {
        v9 = *Src;
        *(const wchar_t *)((char *)Src + v8) = *Src;
        ++Src;
        if ( !v9 )
          break;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v10 = (char *)Src - (char *)Dst;
      do
      {
        v11 = *(wchar_t *)((char *)v6 + v10);
        *v6++ = v11;
        if ( !v11 )
          break;
        if ( !--v7 )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
        *v6 = 0;
    }
    if ( v7 )
      return 0;
    if ( MaxCount == -1LL )
    {
      Dst[SizeInWords - 1] = 0;
      return 80;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  *Dst = 0;
  xHalFreeMessageTarget();
  return v5;
}
