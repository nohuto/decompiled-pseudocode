/*
 * XREFs of ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C02DA71C
 * Callers:
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02DA7A0 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C02DA920 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C02DA9C0 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02DADF0 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C02DAEF0 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FontDriverDdiRequest::CaptureUsermodeFontObj(struct _FONTOBJ *a1, struct _FONTOBJ *a2)
{
  a1->pvProducer = a2->pvProducer;
  a1->flFontType = a2->flFontType;
  return 1;
}
