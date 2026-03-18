/*
 * XREFs of PiDrvDbDestroyNode @ 0x140618064
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1405251A4 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x140525298 (PiDrvDbCreateNode.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
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
