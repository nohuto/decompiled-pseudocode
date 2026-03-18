/*
 * XREFs of ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800A4CA8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180037E40 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800A4F0C (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800A639C (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 */

CInteraction *__fastcall CInteraction::CInteraction(CInteraction *this, struct CComposition *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 8);
  CResource::CResource((CInteraction *)((char *)this + 8), a2);
  *(_QWORD *)this = &CInteraction::`vftable'{for `IInteractionResource'};
  *v2 = &CInteraction::`vftable'{for `CResource'};
  *((_DWORD *)this + 62) = 0;
  *((_BYTE *)this + 256) &= ~8u;
  *((_QWORD *)this + 33) = 0LL;
  CInteractionProcessor::CInteractionProcessor((CInteraction *)((char *)this + 408));
  *((_DWORD *)this + 336) = 0;
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  if ( (int)HANDLE_TABLE::GetNewEntry(
              (HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable,
              102,
              (unsigned int *)this + 336) >= 0 )
    *((_QWORD *)CInteraction::GetEntry(*((_DWORD *)this + 336)) + 1) = this;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 169) = PerformanceCount;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_x(v4, &INTERACTION_CREATED, v2);
  return this;
}
