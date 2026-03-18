/*
 * XREFs of ObDereferenceObject @ 0x1400D2B58
 * Callers:
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     ObReferenceFileObjectForWrite @ 0x1404369A0 (ObReferenceFileObjectForWrite.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     ObpDeleteNameCheck @ 0x1404701A0 (ObpDeleteNameCheck.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall ObDereferenceObject(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
