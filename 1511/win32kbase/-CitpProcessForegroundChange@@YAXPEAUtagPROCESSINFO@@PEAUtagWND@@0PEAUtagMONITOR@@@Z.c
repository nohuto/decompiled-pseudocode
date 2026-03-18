/*
 * XREFs of ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z @ 0x1C004B210
 * Callers:
 *     CitProcessForegroundChange @ 0x1C004B1F0 (CitProcessForegroundChange.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C00E6460 (CitModerncoreProcessForegroundChange.c)
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B40 (IsRemoteConnection_0.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0047AD0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C004A1C0 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

void __fastcall CitpProcessForegroundChange(
        struct tagPROCESSINFO *a1,
        struct tagWND *a2,
        struct tagPROCESSINFO *a3,
        struct tagMONITOR *a4)
{
  struct _CIT_IMPACT_CONTEXT *v4; // rbx
  unsigned __int64 v8; // rsi
  __int16 v9; // dx

  v4 = qword_1C0107180;
  if ( qword_1C0107180 )
  {
    v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CitpTimeUpdate(v8);
    if ( (unsigned int)IsRemoteConnection_0() && !*((_WORD *)v4 + 217) )
    {
      CitpStatIncrement((unsigned __int16 *)v4 + 98, 1);
      *((_BYTE *)v4 + 432) |= 0x20u;
      *((_WORD *)v4 + 217) += v9;
    }
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
      {
        a1 = 0LL;
        a2 = 0LL;
      }
    }
    *((_QWORD *)v4 + 56) = a1;
    CitpSetForegroundProcess(v4, v8, a1, a2, a4);
  }
}
