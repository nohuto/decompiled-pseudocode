/*
 * XREFs of ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00106DC
 * Callers:
 *     CitSetInfo @ 0x1C0004FF0 (CitSetInfo.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00F62C0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?CitpUTCToMS@@YAI_KI@Z @ 0x1C000ECD8 (-CitpUTCToMS@@YAI_KI@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C000ED30 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C004F780 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessEnsureContext(struct tagPROCESSINFO *a1)
{
  unsigned int v1; // esi
  _DWORD *v4; // rax
  const char *v5; // rdx
  _DWORD *v6; // r14
  struct _CIT_IMPACT_CONTEXT *v7; // rbx
  LONGLONG TimeQuadPart; // rax
  int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // rcx
  int ProgramId; // eax

  v1 = 0;
  if ( !*((_QWORD *)a1 + 109) )
  {
    v4 = (_DWORD *)Win32AllocPool(88LL, 1231254357LL);
    *((_QWORD *)a1 + 109) = v4;
    v6 = v4;
    if ( v4 )
    {
      memset(v4, 0, 0x58uLL);
      memset(v6 + 4, 0, 0x28uLL);
      v7 = qword_1C011E5D0;
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)a1);
      v9 = CitpUTCToMS(TimeQuadPart, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      *(_QWORD *)v6 = a1;
      v6[14] = v9;
      v6[16] = v9;
      CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)v7 + 592), v10);
      v6[15] = *(_DWORD *)(v11 + 12);
      ProgramId = CitpProcessGetProgramId(a1, (struct _CIT_PROGRAM_ID *)(v6 + 4));
      if ( ProgramId >= 0 )
        return 0;
      return (unsigned int)ProgramId;
    }
    else
    {
      v1 = -1073741670;
      CitpLogFailureWorker(-1073741670, v5, 0xF5Du);
    }
  }
  return v1;
}
