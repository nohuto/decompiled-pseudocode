/*
 * XREFs of ObpDeleteDirectoryEntry @ 0x1404ABE68
 * Callers:
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1404701A0 (ObpDeleteNameCheck.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

char __fastcall ObpDeleteDirectoryEntry(__int64 a1)
{
  _QWORD **v1; // rdx
  void *v2; // rdi
  _QWORD *v3; // rbx

  v1 = *(_QWORD ***)(a1 + 16);
  v2 = *(void **)a1;
  v3 = *v1;
  *v1 = (_QWORD *)**v1;
  *v3 = 0LL;
  *(_QWORD *)(v3[1] - 48LL - ObpInfoMaskToOffset[*(_BYTE *)(v3[1] - 48LL + 26) & 3]) = 0LL;
  ObfDereferenceObject((PVOID)v3[1]);
  ExFreePoolWithTag(v3, 0);
  ObfDereferenceObject(v2);
  return 1;
}
