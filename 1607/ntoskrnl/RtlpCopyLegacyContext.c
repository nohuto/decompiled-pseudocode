/*
 * XREFs of RtlpCopyLegacyContext @ 0x1400F1104
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1400F1048 (RtlpCopyExtendedContext.c)
 *     KeCopyContextFromUmsContext @ 0x1406514EC (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x140651900 (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x140651B80 (KeUpdatePrimaryThreadContext.c)
 *     RtlCopyContext @ 0x14068C258 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x1400F0E44 (RtlpCopyLegacyContextAmd64.c)
 */

void __fastcall RtlpCopyLegacyContext(char a1, __int64 a2, int a3, __int64 a4)
{
  if ( (a3 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm();
  }
  else if ( (a3 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64();
  }
}
