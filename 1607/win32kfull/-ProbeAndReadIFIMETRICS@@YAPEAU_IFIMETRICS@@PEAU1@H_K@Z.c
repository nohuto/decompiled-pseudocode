/*
 * XREFs of ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C029C058
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02A0050 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1C029BB00 (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 */

struct _IFIMETRICS *__fastcall ProbeAndReadIFIMETRICS(struct _IFIMETRICS *Src, int a2, unsigned __int64 a3)
{
  size_t cjThis; // rbx
  struct _IFIMETRICS *v6; // rax
  struct _IFIMETRICS *v7; // rdi
  __int64 v8; // rdx

  if ( a3 < 0xC0 )
    return 0LL;
  if ( a2 && ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  cjThis = Src->cjThis;
  if ( a2 && (_DWORD)cjThis )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Src + cjThis > W32UserProbeAddress || (struct _IFIMETRICS *)((char *)Src + cjThis) < Src )
      *W32UserProbeAddress = 0;
  }
  if ( (unsigned int)cjThis < 0xC0 )
    return 0LL;
  if ( cjThis > a3 )
    return 0LL;
  if ( (unsigned int)cjThis > 0x2710000 )
    return 0LL;
  v6 = (struct _IFIMETRICS *)PALLOCMEM2((unsigned int)cjThis, 1886221639LL, 1);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  memmove(v6, Src, cjThis);
  if ( !IsValidIFIMETRICS(v7, cjThis) )
  {
    Win32FreePool(v7, v8);
    return 0LL;
  }
  return v7;
}
