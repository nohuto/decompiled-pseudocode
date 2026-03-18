/*
 * XREFs of PiDrvDbDestroyNode @ 0x140696258
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1405955BC (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x1405956B0 (PiDrvDbCreateNode.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 */

void __fastcall PiDrvDbDestroyNode(__int64 a1)
{
  void *v2; // rcx

  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 16));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 32));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 48));
  if ( *(_BYTE *)(a1 + 192) )
    ExDeleteResourceLite((PERESOURCE)(a1 + 88));
  v2 = *(void **)(a1 + 472);
  if ( v2 )
    ZwClose(v2);
  ExFreePoolWithTag((PVOID)a1, 0);
}
