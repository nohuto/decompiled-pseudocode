/*
 * XREFs of IopFreeResetRemovalContext @ 0x140602764
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x140602490 (IoRequestDeviceRemovalForReset.c)
 *     IopDeviceRemovalForResetComplete @ 0x14060263C (IopDeviceRemovalForResetComplete.c)
 *     IopRetryDeviceRemovalForReset @ 0x1406027D4 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

void __fastcall IopFreeResetRemovalContext(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 64), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 168), 0x4B706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  v3 = *(void **)(a1 + 184);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 200));
  ExFreePoolWithTag((PVOID)a1, 0);
}
