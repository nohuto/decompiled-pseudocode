/*
 * XREFs of PsDereferenceSiloContext @ 0x1400870F4
 * Callers:
 *     ObReferenceObjectByName @ 0x140405BE0 (ObReferenceObjectByName.c)
 *     ObpDeleteNameCheck @ 0x140406620 (ObpDeleteNameCheck.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     ObReferenceFileObjectForWrite @ 0x140446E50 (ObReferenceFileObjectForWrite.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     CmpCreateServerSiloCallback @ 0x14055F990 (CmpCreateServerSiloCallback.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PsDereferenceSiloContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
