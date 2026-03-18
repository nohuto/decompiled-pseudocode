/*
 * XREFs of ObpDeleteDirectoryEntry @ 0x14053BE00
 * Callers:
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x1404D3780 (ObpDeleteNameCheck.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
