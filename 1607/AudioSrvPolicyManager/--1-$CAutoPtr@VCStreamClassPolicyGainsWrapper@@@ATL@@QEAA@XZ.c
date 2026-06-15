/*
 * XREFs of ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x18001E8B0
 * Callers:
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$2 @ 0x180025B97 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$2.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180024298 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall ATL::CAutoPtr<CStreamClassPolicyGainsWrapper>::~CAutoPtr<CStreamClassPolicyGainsWrapper>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  if ( *a1 )
  {
    `eh vector destructor iterator'(
      &v1[26].LockCount,
      0x30uLL,
      0x15uLL,
      (void (*)(void *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
    `eh vector destructor iterator'(
      &v1[1],
      0x30uLL,
      0x15uLL,
      (void (*)(void *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
    DeleteCriticalSection(v1);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
  *a1 = 0LL;
}
