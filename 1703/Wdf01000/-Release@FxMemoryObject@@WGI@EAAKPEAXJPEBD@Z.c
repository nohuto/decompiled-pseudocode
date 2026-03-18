/*
 * XREFs of ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z @ 0x1C0040580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxMemoryObject::Release(__int64 a1, FxObjectDebugLeakDetection *a2, unsigned int a3, const char *a4)
{
  return FxMemoryObject::Release((FxMemoryObject *)(a1 - 104), a2, a3, a4);
}
