/*
 * XREFs of ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0011068
 * Callers:
 *     CitProcessForegroundChange @ 0x1C0011020 (CitProcessForegroundChange.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C00F8230 (CitModerncoreProcessForegroundChange.c)
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B10 (IsRemoteConnection_0.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0011AA0 (-CitpTimeUpdate@@YAXI@Z.c)
 */

__int64 __fastcall CitpProcessForegroundChange(
        struct tagPROCESSINFO *a1,
        struct tagWND *a2,
        struct tagPROCESSINFO *a3,
        struct tagMONITOR *a4,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a5)
{
  struct _CIT_IMPACT_CONTEXT *v8; // rbx
  unsigned __int64 v9; // rsi

  if ( a3 )
    PsUpdateComponentPower(*(_QWORD *)a3, 4LL, 0LL);
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
    {
      a1 = 0LL;
      a2 = 0LL;
    }
    else
    {
      PsUpdateComponentPower(*(_QWORD *)a1, 4LL, 1LL);
    }
  }
  v8 = qword_1C011E5D0;
  if ( !qword_1C011E5D0 )
    return 0LL;
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CitpTimeUpdate(v9);
  if ( (unsigned int)IsRemoteConnection_0() )
  {
    if ( !*((_WORD *)v8 + 217) )
    {
      CitpStatIncrement((unsigned __int16 *)v8 + 98, 1u);
      *((_BYTE *)v8 + 432) |= 0x20u;
      ++*((_WORD *)v8 + 217);
    }
  }
  *((_QWORD *)v8 + 56) = a1;
  return CitpSetForegroundProcess(v8, v9, a1, a2, a4, a5);
}
