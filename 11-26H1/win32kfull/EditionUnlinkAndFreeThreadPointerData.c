/*
 * XREFs of EditionUnlinkAndFreeThreadPointerData @ 0x140136030
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1401365C0 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 */

void __fastcall EditionUnlinkAndFreeThreadPointerData(
        struct tagTHREADINPUTPOINTERLIST *a1,
        struct tagTHREADPOINTERDATA *a2)
{
  UnlinkAndFreeThreadPointerData(a1, a2);
}
