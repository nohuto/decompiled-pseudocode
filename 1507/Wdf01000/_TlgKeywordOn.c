/*
 * XREFs of _TlgKeywordOn @ 0x1C0006FE4
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KK@Z @ 0x1C006AC0C (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KK@Z.c)
 *     LogDriverInfoStream @ 0x1C0080164 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall TlgKeywordOn(const _TlgProvider_t *keyword, unsigned __int64 hProvider)
{
  char v2; // r8

  v2 = 0;
  if ( !hProvider
    || (hProvider & Tlgg_TelemetryProviderProv.KeywordAny) != 0
    && (hProvider & Tlgg_TelemetryProviderProv.KeywordAll) == Tlgg_TelemetryProviderProv.KeywordAll )
  {
    return 1;
  }
  return v2;
}
