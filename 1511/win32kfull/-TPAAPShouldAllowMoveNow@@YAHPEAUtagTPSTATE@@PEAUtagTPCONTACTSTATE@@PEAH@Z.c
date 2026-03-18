/*
 * XREFs of ?TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z @ 0x1C01F25EC
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     ?TPAAPGetLevel@@YA?AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z @ 0x1C01F2418 (-TPAAPGetLevel@@YA-AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F273C (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 */

__int64 __fastcall TPAAPShouldAllowMoveNow(struct tagTPSTATE *a1, struct tagTPCONTACTSTATE *a2, int *a3)
{
  int v3; // eax
  int v7; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // r14d
  LARGE_INTEGER PerformanceCounter; // r8
  signed __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r9
  int v16; // ecx

  v3 = *((_DWORD *)a2 + 53);
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
  if ( *((_DWORD *)a1 + 330) != 2 )
  {
    if ( v8 && (*((_DWORD *)a2 + 53) & 0x1000) != 0 )
      return 0LL;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( (__int64)((unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)a2 + 5))) / gliQpcFreq.QuadPart) < (unsigned int)dword_1C0323A68 )
      return 0LL;
    v13 = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)a1 + 198))) / gliQpcFreq.QuadPart;
    if ( v7 || (v14 = TPAAPGetLevel((__int64)a1), v15 < dword_1C0323A4C[v14]) )
    {
      v16 = 0;
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
      v16 = 1;
    }
    if ( v13 <= (unsigned int)dword_1C0323A60 || v16 )
      return 1LL;
    goto LABEL_20;
  }
  if ( v8 && !v9 )
  {
    *a3 = 1;
LABEL_21:
    *((_DWORD *)a2 + 53) |= 0x1000u;
    return 0LL;
  }
  return 1LL;
}
