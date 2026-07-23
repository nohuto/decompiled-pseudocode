/*
 * XREFs of IopFreeResetRemovalContext @ 0x14062C880
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x14062C590 (IoRequestDeviceRemovalForReset.c)
 *     IopDeviceRemovalForResetComplete @ 0x14062C74C (IopDeviceRemovalForResetComplete.c)
 *     IopRetryDeviceRemovalForReset @ 0x14062C8F0 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
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
