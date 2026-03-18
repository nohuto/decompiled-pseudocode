/*
 * XREFs of ?TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z @ 0x1C01F22A0
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4538 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F23EC (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 */

__int64 __fastcall TPAAPShouldAllowMoveNow(struct tagTPSTATE *a1, struct tagTPCONTACTSTATE *a2, int *a3)
{
  int v3; // eax
  int v7; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // r14d
  LARGE_INTEGER PerformanceCounter; // r8
  signed __int64 v13; // r9
  signed __int64 v14; // r8
  int v15; // ecx

  v3 = *((_DWORD *)a2 + 42);
  if ( (v3 & 0x800) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( (v3 & 0x80u) != 0 )
    {
      v8 = 1;
      goto LABEL_6;
    }
  }
  v8 = 0;
LABEL_6:
  v9 = TPAAPShouldAllowNow(0x20u, 0, 0, 0LL);
  v10 = v9;
  if ( *((_DWORD *)a1 + 270) != 2 )
  {
    if ( v8 && (*((_DWORD *)a2 + 42) & 0x1000) != 0 )
      return 0LL;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)a2 + 5))) / gliQpcFreq.QuadPart;
    if ( v13 < (unsigned int)dword_1C0322DE8 )
      return 0LL;
    v14 = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)a1 + 162))) / gliQpcFreq.QuadPart;
    if ( v7 || v13 < dword_1C0322DCC[SDWORD2(gTouchPadParameters)] )
    {
      v15 = 0;
      if ( v7 )
      {
LABEL_20:
        if ( !v10 )
          goto LABEL_21;
        return 1LL;
      }
    }
    else
    {
      v15 = 1;
    }
    if ( v14 <= (unsigned int)dword_1C0322DE0 || v15 )
      return 1LL;
    goto LABEL_20;
  }
  if ( v8 && !v9 )
  {
    *a3 = 1;
LABEL_21:
    *((_DWORD *)a2 + 42) |= 0x1000u;
    return 0LL;
  }
  return 1LL;
}
