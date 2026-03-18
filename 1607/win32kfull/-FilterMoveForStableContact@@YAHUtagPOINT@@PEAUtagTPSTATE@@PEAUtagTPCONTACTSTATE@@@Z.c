/*
 * XREFs of ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01E75B0
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01E9BB8 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FilterMoveForStableContact(struct tagPOINT a1, struct tagTPSTATE *a2, LARGE_INTEGER *a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LONG x; // ecx
  LARGE_INTEGER v7; // rdi
  LONG y; // edx
  DWORD LowPart; // r8d
  LARGE_INTEGER v10; // rax
  int v11; // r9d
  DWORD v12; // r10d
  DWORD v13; // edx

  if ( (dword_1C0328110 & 0x80u) == 0 )
    return 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  x = a1.x;
  v7 = PerformanceCounter;
  y = a1.y;
  if ( !*(_QWORD *)&a1 )
  {
    LowPart = a3[33].LowPart;
    if ( (LowPart & 0x1000000) == 0 )
    {
      a3[33].LowPart = LowPart | 0x1000000;
      v10 = KeQueryPerformanceCounter(0LL);
      x = a1.x;
      y = a1.y;
      a3[12] = v10;
    }
  }
  v11 = HIBYTE(a3[33].LowPart) & 1;
  if ( x || y )
    a3[33].LowPart &= ~0x1000000u;
  if ( *((int *)a2 + 480) < 0
    && v11
    && (x || y)
    && v7.QuadPart - a3[12].QuadPart >= (unsigned __int64)(gliQpcFreq.QuadPart * (unsigned int)dword_1C0328140 / 1000) )
  {
    a3[33].LowPart &= ~0x2000000u;
    goto LABEL_16;
  }
  v12 = a3[33].LowPart;
  if ( (v12 & 0x2000000) == 0
    || v7.QuadPart - a3[11].QuadPart >= (unsigned __int64)(gliQpcFreq.QuadPart * (unsigned int)dword_1C032813C / 1000) )
  {
    a3[33].LowPart = v12 & 0xFDFFFFFF;
    return 0LL;
  }
LABEL_16:
  v13 = a3[33].LowPart;
  if ( (v13 & 0x2000000) == 0 )
  {
    a3[2] = a3[1];
    a3[3] = (LARGE_INTEGER)gptCursorAsync;
    a3[33].LowPart = v13 | 0x2000000;
    a3[11] = v7;
  }
  return 1LL;
}
