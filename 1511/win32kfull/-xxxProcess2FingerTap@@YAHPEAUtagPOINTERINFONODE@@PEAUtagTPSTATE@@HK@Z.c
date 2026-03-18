/*
 * XREFs of ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01F6240
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1AF4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z @ 0x1C01F2154 (-QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z.c)
 */

__int64 __fastcall xxxProcess2FingerTap(struct tagPOINTERINFONODE *a1, LARGE_INTEGER *a2, int a3, int a4)
{
  unsigned int HighPart; // ecx
  DWORD LowPart; // r9d
  int v8; // r10d
  LARGE_INTEGER *v9; // rsi
  unsigned int v10; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx

  HighPart = a2[163].HighPart;
  LowPart = a2[193].LowPart;
  v8 = *((_DWORD *)a1 + 17);
  v9 = &a2[27 * (*((unsigned __int16 *)a1 + 24) % HighPart)];
  if ( (LowPart & 0x800) != 0 )
  {
    if ( a4 == 1 )
    {
      if ( (v8 & 0x40000) != 0 && (LowPart & 1) == a3 && (v9[26].HighPart & 4) == 0 )
      {
        v10 = LowPart & 0xFFFFF7FF;
        a2[193].LowPart = v10;
        if ( (v10 & 0x20) == 0 )
        {
          a2[198] = KeQueryPerformanceCounter(0LL);
          UserSessionSwitchLeaveCrit(v13, v12);
          QueuePTPMouseEvent(gptCursorAsync, 8, v9[9].LowPart);
          QueuePTPMouseEvent(
            gptCursorAsync,
            16,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          EnterCrit(0LL, 1LL);
          if ( IsFirstActionAfterKey() )
            dword_1C0321C20 = 2;
          else
            dword_1C0321C24 = 2;
          ++dword_1C0321C68;
          ++dword_1C0321C78;
        }
        return 1LL;
      }
      if ( (v8 & 0x20000) != 0 && (LowPart & 1) == a3 && (v9[26].HighPart & 4) == 0 )
        return 1LL;
    }
    a2[193].LowPart = LowPart & 0xFFFFF7FF;
  }
  else
  {
    v14 = 27LL * (*((unsigned __int16 *)a1 + 132) % HighPart);
    if ( a2[v14 + 5].QuadPart - v9[5].QuadPart <= (unsigned __int64)(gliQpcFreq.QuadPart
                                                                   * (unsigned int)dword_1C0321EF0
                                                                   / 1000)
      && (v9[26].HighPart & 4) == 0
      && (a2[v14 + 26].HighPart & 4) == 0 )
    {
      if ( (v8 & 0x40000) != 0 && (*((_DWORD *)a1 + 71) & 0x40000) != 0 )
      {
        if ( (LowPart & 0x20) == 0 )
        {
          a2[198] = KeQueryPerformanceCounter(0LL);
          UserSessionSwitchLeaveCrit(v16, v15);
          QueuePTPMouseEvent(gptCursorAsync, 8, v9[9].LowPart);
          QueuePTPMouseEvent(
            gptCursorAsync,
            16,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          EnterCrit(0LL, 1LL);
        }
      }
      else if ( !a2[195].QuadPart )
      {
        a2[193].LowPart = LowPart | 0x800;
      }
      return 1LL;
    }
  }
  return 0LL;
}
