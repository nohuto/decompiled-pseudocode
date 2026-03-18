/*
 * XREFs of ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C029BF1C
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02A0400 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??9@YA_NAEBU_FD_KERNINGPAIR@@0@Z @ 0x1C029B998 (--9@YA_NAEBU_FD_KERNINGPAIR@@0@Z.c)
 */

struct _FD_KERNINGPAIR *__fastcall ProbeAndReadFD_KERNINGPAIR(
        const struct _FD_KERNINGPAIR *Src,
        int a2,
        unsigned __int64 a3)
{
  unsigned int v4; // ebx
  const struct _FD_KERNINGPAIR *v5; // rcx
  unsigned int v6; // eax
  void *v8; // rsi
  __int64 v9; // rdx
  __int16 v10; // [rsp+68h] [rbp+20h] BYREF
  int v11; // [rsp+6Ah] [rbp+22h]

  v10 = 0;
  v11 = 0;
  v4 = 0;
  if ( !a2 )
  {
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = Src + 1;
    if ( (unsigned __int64)v5 > W32UserProbeAddress || v5 < Src )
      *W32UserProbeAddress = 0;
  }
  while ( a3 >= 6 )
  {
    v6 = v4 + 1;
    if ( v4 + 1 < v4 )
      break;
    ++v4;
    if ( !operator!=(&Src[v6 - 1].wcFirst, &v10) )
      goto LABEL_12;
  }
  v4 = 0;
LABEL_12:
  if ( !v4 )
    return 0LL;
  if ( v4 > 0x682AAA )
    return 0LL;
  v8 = PALLOCMEM2(6 * v4, 1886221639LL, 1);
  if ( !v8 )
    return 0LL;
  memmove(v8, Src, 6LL * v4);
  if ( operator!=((_WORD *)v8 + 3 * v4 - 3, &v10) )
  {
    Win32FreePool(v8, v9);
    return 0LL;
  }
  return (struct _FD_KERNINGPAIR *)v8;
}
