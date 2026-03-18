/*
 * XREFs of ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F23EC
 * Callers:
 *     ProcessMouseInputViaRim @ 0x1C012D104 (ProcessMouseInputViaRim.c)
 *     ProcessMouseInput @ 0x1C01D9FE0 (ProcessMouseInput.c)
 *     ?TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z @ 0x1C01F22A0 (-TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4538 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4B44 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TPAAPShouldAllowNow(int a1, int a2, int a3, struct tagTPSTATE *a4)
{
  signed __int64 v5; // r15
  unsigned int v6; // edi
  int v7; // ebp
  LARGE_INTEGER PerformanceCounter; // r13
  __int64 v11; // r11
  unsigned int v12; // ebx
  union _LARGE_INTEGER v13; // rcx
  unsigned int v15; // r9d
  signed __int64 v16; // rax
  LONGLONG v17; // rax
  union _LARGE_INTEGER v18[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(v18);
  v11 = 0LL;
  v12 = 1;
  if ( !DWORD2(gTouchPadParameters) )
    goto LABEL_5;
  if ( DWORD2(gTouchPadParameters) == 4 && a2 )
  {
    v6 = 1;
LABEL_5:
    a1 = 0;
LABEL_6:
    v13 = v18[0];
    goto LABEL_7;
  }
  if ( (a1 & 2) != 0 )
  {
    v7 = 1;
    if ( a4 )
    {
      if ( (*((_DWORD *)a4 + 316) & 0x2000) != 0 )
      {
        v6 = 1;
        a1 &= 2u;
      }
    }
  }
  if ( v6 || (a1 & 0x2C) == 0 )
    goto LABEL_6;
  v7 = 1;
  v15 = (a1 & 0x2C) == 0x20
      ? *((_DWORD *)&gAapState + SDWORD2(gTouchPadParameters) + 11)
      : *((_DWORD *)&gAapState + SDWORD2(gTouchPadParameters));
  v11 = _InterlockedCompareExchange64(&qword_1C0322DF0, 0LL, 0LL);
  v16 = _InterlockedCompareExchange64(&qword_1C0322DF8, 0LL, 0LL);
  v5 = v16;
  if ( v11 <= 0 )
    goto LABEL_6;
  if ( v16 <= v11 )
  {
    v15 = dword_1C0322DC8;
    v17 = 1000 * (PerformanceCounter.QuadPart - v11);
  }
  else
  {
    v17 = 1000 * (PerformanceCounter.QuadPart - v16);
  }
  v13 = v18[0];
  if ( v17 / v18[0].QuadPart < v15 )
  {
    v6 = 1;
    a1 &= 0x2Cu;
  }
LABEL_7:
  EtwTraceTouchPadAAP(
    1000 * v11 / v13.QuadPart,
    (unsigned int)(1000 * v5 / v13.QuadPart),
    1000 * PerformanceCounter.QuadPart / v13.QuadPart,
    v6,
    a1);
  if ( a3 && v7 )
  {
    WinSqmIncrementDWORD(0LL, 11611LL, 1LL);
    if ( !v6 )
      return v12;
    WinSqmIncrementDWORD(0LL, 11610LL, 1LL);
  }
  if ( v6 )
    return 0;
  return v12;
}
