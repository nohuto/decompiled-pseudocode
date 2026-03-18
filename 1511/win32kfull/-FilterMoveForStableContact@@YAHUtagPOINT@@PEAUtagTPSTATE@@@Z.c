/*
 * XREFs of ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@@Z @ 0x1C01F12B4
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3568 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FilterMoveForStableContact(struct tagPOINT a1, LARGE_INTEGER *a2)
{
  LONG HighPart; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  int v5; // edx
  LONG v6; // ecx
  struct tagPOINT v8; // [rsp+30h] [rbp+8h]

  v8 = a1;
  if ( (dword_1C0321F50 & 0x80u) == 0 )
    return 0LL;
  if ( !*(_QWORD *)&a1 )
  {
    HighPart = a2[193].HighPart;
    if ( (HighPart & 1) == 0 )
    {
      a2[193].HighPart = HighPart | 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      a1.x = v8.x;
      a2[187] = PerformanceCounter;
    }
  }
  v5 = a2[193].HighPart & 1;
  if ( a1.x || v8.y )
    a2[193].HighPart &= ~1u;
  if ( (a2[193].HighPart & 8) != 0
    && v5
    && (a1.x || v8.y)
    && *(_QWORD *)&KeQueryPerformanceCounter(0LL) - a2[187].QuadPart >= gliQpcFreq.QuadPart
                                                                      * (unsigned __int64)(unsigned int)dword_1C0321F80
                                                                      / 0x3E8 )
  {
    a2[193].HighPart &= ~2u;
    goto LABEL_16;
  }
  if ( (a2[193].HighPart & 2) == 0
    || *(_QWORD *)&KeQueryPerformanceCounter(0LL) - a2[186].QuadPart > gliQpcFreq.QuadPart
                                                                     * (unsigned __int64)(unsigned int)dword_1C0321F7C
                                                                     / 0x3E8 )
  {
    a2[193].HighPart &= ~2u;
    return 0LL;
  }
LABEL_16:
  v6 = a2[193].HighPart;
  if ( (v6 & 2) == 0 )
  {
    a2[193].HighPart = v6 | 2;
    a2[186] = KeQueryPerformanceCounter(0LL);
  }
  return 1LL;
}
