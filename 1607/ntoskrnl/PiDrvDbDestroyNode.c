/*
 * XREFs of PiDrvDbDestroyNode @ 0x14064CD84
 * Callers:
 *     PiDrvDbRegisterNode @ 0x140551AE8 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x140551BDC (PiDrvDbCreateNode.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
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
