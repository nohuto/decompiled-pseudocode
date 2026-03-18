/*
 * XREFs of ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01E8654
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01E9BB8 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01EA898 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     QueryInertiaInfo @ 0x1C022A1F0 (QueryInertiaInfo.c)
 */

_BOOL8 __fastcall ShouldSuppressClicks(const struct tagTPSTATE *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 480);
  return (v1 & 0x400000) != 0
      && (v1 & 0x200000) != 0
      && ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))QueryInertiaInfo)((char *)a1 + 1944, gptCursorAsync, 3LL);
}
