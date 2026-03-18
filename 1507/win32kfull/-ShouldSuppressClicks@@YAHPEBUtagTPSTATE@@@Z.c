/*
 * XREFs of ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F20AC
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3238 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01F3CDC (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4538 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     DetermineInputTarget @ 0x1C008BA5C (DetermineInputTarget.c)
 */

_BOOL8 __fastcall ShouldSuppressClicks(const struct tagTPSTATE *a1)
{
  __int64 v1; // rbx
  _BOOL8 result; // rax
  struct tagPOINT v3; // [rsp+40h] [rbp+8h] BYREF

  result = 0;
  if ( (*((_DWORD *)a1 + 316) & 0x800000) != 0 )
  {
    v1 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 159), 1);
    if ( v1 )
    {
      v3 = gptCursorAsync;
      if ( *(_QWORD *)(*((_QWORD *)DetermineInputTarget(
                                     (__int64 *)&v3,
                                     ((unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                                       * gliQpcFreq.QuadPart)
                                    * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64,
                                     0LL,
                                     0LL)
                       + 2)
                     + 392LL) == *(_QWORD *)(*(_QWORD *)(v1 + 16) + 392LL) )
        return 1;
    }
  }
  return result;
}
