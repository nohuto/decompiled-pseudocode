/*
 * XREFs of UmfdUnloadFontFile @ 0x1C02D55E0
 * Callers:
 *     <none>
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C02D560C (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
