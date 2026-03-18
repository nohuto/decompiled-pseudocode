/*
 * XREFs of ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F273C
 * Callers:
 *     ProcessMouseInputViaRim @ 0x1C014F024 (ProcessMouseInputViaRim.c)
 *     ProcessMouseInput @ 0x1C01DA5F0 (ProcessMouseInput.c)
 *     ?TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z @ 0x1C01F25EC (-TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?TPAAPGetLevel@@YA?AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z @ 0x1C01F2418 (-TPAAPGetLevel@@YA-AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z.c)
 */

__int64 __fastcall TPAAPShouldAllowNow(int a1, int a2, int a3, struct tagTPSTATE *a4)
{
  signed __int64 v5; // r15
  unsigned int v6; // edi
  int v7; // r14d
  LARGE_INTEGER PerformanceCounter; // r13
  int v11; // eax
  signed __int64 v12; // rdx
  __int64 v13; // r11
  unsigned int v14; // ebx
  union _LARGE_INTEGER v15; // rcx
  int v17; // r8d
  unsigned int v18; // r9d
  signed __int64 v19; // rax
  LONGLONG v20; // rax
  union _LARGE_INTEGER v21[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(v21);
  v11 = TPAAPGetLevel((__int64)a4);
  v14 = v12 + 1;
  if ( !v11 )
    goto LABEL_5;
  if ( v11 == 4 && a2 )
  {
    v6 = v12 + 1;
LABEL_5:
    a1 = v12;
LABEL_6:
    v15 = v21[0];
    goto LABEL_7;
  }
  if ( (a1 & 2) != 0 )
  {
    v7 = v12 + 1;
    if ( a4 )
    {
      if ( (*((_DWORD *)a4 + 386) & 0x2000) != 0 )
      {
        v6 = v12 + 1;
        a1 &= 2u;
      }
    }
  }
  v17 = a1 & 0x6C;
  if ( v6 || (a1 & 0x6C) == 0 )
    goto LABEL_6;
  v7 = v12 + 1;
  if ( v17 == 32 )
  {
    v18 = *((_DWORD *)&gAapState + v11 + 11);
  }
  else
  {
    v18 = *((_DWORD *)&gAapState + v11);
    if ( v17 == 64 )
      v18 = *((_DWORD *)&gAapState + v11 + 19);
  }
  v13 = _InterlockedCompareExchange64(&qword_1C0323A80, v12, 0LL);
  v19 = _InterlockedCompareExchange64(&qword_1C0323A88, v12, 0LL);
  v5 = v19;
  if ( v13 <= 0 )
    goto LABEL_6;
  if ( v19 <= v13 )
  {
    v18 = dword_1C0323A48;
    v20 = 1000 * (PerformanceCounter.QuadPart - v13);
  }
  else
  {
    v20 = 1000 * (PerformanceCounter.QuadPart - v19);
  }
  v15 = v21[0];
  if ( v20 / v21[0].QuadPart < v18 )
  {
    v6 = v12 + 1;
    a1 &= 0x6Cu;
  }
LABEL_7:
  EtwTraceTouchPadAAP(
    1000 * v13 / v15.QuadPart,
    (unsigned int)(1000 * v5 / v15.QuadPart),
    1000 * PerformanceCounter.QuadPart / v15.QuadPart,
    v6,
    a1);
  if ( a3 && v7 )
  {
    WinSqmIncrementDWORD(0LL, 11611LL, v14);
    if ( !v6 )
      return v14;
    WinSqmIncrementDWORD(0LL, 11610LL, v14);
  }
  if ( v6 )
    return 0;
  return v14;
}
