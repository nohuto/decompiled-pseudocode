/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x140137B50
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NtUserfnPOINTERINPUT @ 0x1401370F0 (NtUserfnPOINTERINPUT.c)
 *     IsPointerParentNotify @ 0x140137BE0 (IsPointerParentNotify.c)
 *     NtUserfnEMPTY @ 0x140137C10 (NtUserfnEMPTY.c)
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  PtiCurrent(a1);
  if ( (unsigned int)IsPointerParentNotify(a2, a3) )
    return NtUserfnPOINTERINPUT(a1, a2, a3, a4, a5, a6);
  else
    return NtUserfnEMPTY(a1, a2, a3, a4, a5, a6);
}
