/*
 * XREFs of ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C0058020
 * Callers:
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00569F4 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0014D80 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0058100 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpUTCToMS@@YAI_KI@Z @ 0x1C00587FC (-CitpUTCToMS@@YAI_KI@Z.c)
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0058854 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessEnsureContext(struct tagPROCESSINFO *a1)
{
  unsigned int v1; // ebp
  _DWORD *v3; // rax
  const char *v4; // rdx
  _DWORD *v5; // r14
  struct _CIT_IMPACT_CONTEXT *v6; // rsi
  LONGLONG TimeQuadPart; // rax
  unsigned __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rcx
  int ProgramId; // eax

  v1 = 0;
  if ( !*((_QWORD *)a1 + 112) )
  {
    v3 = CitAllocZero(0x68uLL);
    *((_QWORD *)a1 + 112) = v3;
    v5 = v3;
    if ( v3 )
    {
      v6 = qword_1C0101FE0;
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)a1);
      v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v9 = CitpUTCToMS(TimeQuadPart, v8);
      *(_QWORD *)v5 = a1;
      v5[15] = v9;
      v5[18] = v9;
      memset(v5 + 4, 0, 0x28uLL);
      CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)v6 + 544), v8);
      v5[16] = *(_DWORD *)(v10 + 12);
      ProgramId = CitpProcessGetProgramId(a1, (struct _CIT_PROGRAM_ID *)(v5 + 4));
      if ( ProgramId >= 0 )
        return 0;
      return (unsigned int)ProgramId;
    }
    else
    {
      v1 = -1073741670;
      CitpLogFailureWorker(-1073741670, v4, 0xD69u);
    }
  }
  return v1;
}
