/*
 * XREFs of _TlgCreateWsz @ 0x1C02263B4
 * Callers:
 *     ?TraceLoggingHIDDeviceArrivedEvent@@YAXGPEAUDEVICEINFO@@@Z @ 0x1C0225548 (-TraceLoggingHIDDeviceArrivedEvent@@YAXGPEAUDEVICEINFO@@@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HH@Z @ 0x1C0225CC0 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HH@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = &word_1C0153C60;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
