/*
 * XREFs of WPP_SF_Sddd @ 0x18009033C
 * Callers:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x180027260 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180029CE8 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18008F9D0 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x1800A1A60 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sddd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  const wchar_t *v5; // rax

  if ( a4 && *a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( a4 )
  {
    v5 = L"<NULL>";
    if ( *a4 )
      v5 = a4;
  }
  else
  {
    v5 = L"NULL";
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, v5);
}
