/*
 * XREFs of ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F2358
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3568 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01F4054 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     DetermineInputTarget @ 0x1C0066180 (DetermineInputTarget.c)
 */

_BOOL8 __fastcall ShouldSuppressClicks(const struct tagTPSTATE *a1)
{
  __int64 v1; // rbx
  _BOOL8 result; // rax
  struct tagPOINT v3; // [rsp+40h] [rbp+8h] BYREF

  result = 0;
  if ( (*((_DWORD *)a1 + 386) & 0x800000) != 0 )
  {
    v1 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 195), 1);
    if ( v1 )
    {
      v3 = gptCursorAsync;
      if ( *(_QWORD *)(*((_QWORD *)DetermineInputTarget(
                                     (__int64 *)&v3,
                                     gliQpcFreq.QuadPart
                                   * (unsigned int)((MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                   / 1000,
                                     0LL,
                                     0LL)
                       + 2)
                     + 384LL) == *(_QWORD *)(*(_QWORD *)(v1 + 16) + 384LL) )
        return 1;
    }
  }
  return result;
}
