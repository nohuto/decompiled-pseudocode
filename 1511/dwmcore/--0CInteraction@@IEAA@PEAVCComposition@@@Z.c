/*
 * XREFs of ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800A7840
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180092D40 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800A7CCC (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800A88DC (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

CInteraction *__fastcall CInteraction::CInteraction(CInteraction *this, struct CComposition *a2)
{
  char *v2; // rdi
  __int64 v4; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 8;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = &CResource::`vftable';
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CInteraction::`vftable'{for `IInteractionResource'};
  *((_QWORD *)this + 1) = &CInteraction::`vftable'{for `CResource'};
  *((_QWORD *)this + 20) = 0LL;
  CInteractionProcessor::CInteractionProcessor((CInteraction *)((char *)this + 224));
  *((_DWORD *)this + 218) = 0;
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  if ( (int)HANDLE_TABLE::GetNewEntry(
              (HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable,
              96,
              (unsigned int *)this + 218) >= 0 )
    *((_QWORD *)CInteraction::GetEntry(*((_DWORD *)this + 218)) + 1) = this;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 110) = PerformanceCount;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_x(v4, &INTERACTION_CREATED, v2);
  return this;
}
