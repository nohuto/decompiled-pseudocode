/*
 * XREFs of PiDevCfgParseVariableName @ 0x14012C8F0
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1401C0680 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405142AC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
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
      if ( v6 == 63 )
      {
        v5 |= 0x10000u;
      }
      else if ( v6 == 33 )
      {
        v5 |= 0x20000u;
      }
      else if ( v6 == 43 )
      {
        v5 |= 0x40000u;
      }
      else
      {
        if ( v6 != 45 )
        {
          if ( v6 == 36 )
            ++i;
          break;
        }
        v5 |= 0x80000u;
      }
    }
  }
  RtlInitUnicodeString(a2, i);
  *a3 = v5;
  return i != 0LL;
}
