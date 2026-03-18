/*
 * XREFs of wcsncat_s @ 0x140177E08
 * Callers:
 *     NtLockProductActivationKeys @ 0x1405AD7FC (NtLockProductActivationKeys.c)
 *     PnprGetPluginDriverImagePath @ 0x14068FE44 (PnprGetPluginDriverImagePath.c)
 *     ExpConvertArcName @ 0x1406F0B40 (ExpConvertArcName.c)
 *     ExpFindArcName @ 0x1406F1454 (ExpFindArcName.c)
 *     ExpTranslateEfiPath @ 0x1406F3630 (ExpTranslateEfiPath.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  rsize_t v4; // r11
  wchar_t *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  v4 = SizeInWords;
  v5 = Dst;
  if ( MaxCount )
  {
    if ( !Dst )
    {
LABEL_10:
      PopPoCoalescinCallback();
      return 22;
    }
  }
  else if ( !Dst )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_10;
  }
  if ( !SizeInWords )
    goto LABEL_10;
  if ( MaxCount && !Src )
  {
    *Dst = 0;
    goto LABEL_10;
  }
  do
  {
    if ( !*Dst )
      break;
    ++Dst;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( SizeInWords )
  {
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
        --SizeInWords;
      }
      while ( SizeInWords );
    }
    else
    {
      if ( !MaxCount )
        goto LABEL_26;
      v10 = (char *)Src - (char *)Dst;
      do
      {
        v11 = *(wchar_t *)((char *)Dst + v10);
        *Dst++ = v11;
        if ( !v11 )
          break;
        if ( !--SizeInWords )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
LABEL_26:
        *Dst = 0;
    }
    if ( SizeInWords )
      return 0;
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
  }
  else
  {
    v7 = 22;
  }
  *v5 = 0;
  PopPoCoalescinCallback();
  return v7;
}
