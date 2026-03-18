/*
 * XREFs of ZwGetNlsSectionPtr @ 0x140180D30
 * Callers:
 *     RtlpGetNormalization @ 0x1406D0328 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNlsSectionPtr(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
