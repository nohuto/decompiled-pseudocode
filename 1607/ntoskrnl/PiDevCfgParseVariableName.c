/*
 * XREFs of PiDevCfgParseVariableName @ 0x1401CED90
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1401CF080 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 */

bool __fastcall PiDevCfgParseVariableName(_WORD *a1, UNICODE_STRING *a2, _DWORD *a3)
{
  const WCHAR *i; // rbx
  int v5; // edi
  WCHAR v6; // ax

  i = 0LL;
  v5 = 0;
  if ( *a1 == 36 )
  {
    for ( i = a1 + 1; ; ++i )
    {
      v6 = *i;
      if ( !*i )
        break;
      switch ( v6 )
      {
        case '?':
          v5 |= 0x10000u;
          break;
        case '!':
          v5 |= 0x20000u;
          break;
        case '+':
          v5 |= 0x40000u;
          break;
        case '-':
          v5 |= 0x80000u;
          break;
        default:
          if ( *i == 36 )
            ++i;
          goto LABEL_16;
      }
    }
  }
LABEL_16:
  RtlInitUnicodeString(a2, i);
  *a3 = v5;
  return i != 0LL;
}
