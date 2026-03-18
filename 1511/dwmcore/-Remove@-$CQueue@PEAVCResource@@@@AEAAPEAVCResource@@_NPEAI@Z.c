/*
 * XREFs of ?Remove@?$CQueue@PEAVCResource@@@@AEAAPEAVCResource@@_NPEAI@Z @ 0x1800FE6C0
 * Callers:
 *     ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x1800F9AA4 (-ReleasePendingReferences@CManipulationManager@@QEAAXXZ.c)
 *     ??1CManipulationManager@@EEAA@XZ @ 0x18013F42C (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CQueue<CResource *>::Remove(__int64 **a1)
{
  __int64 v2; // r15
  __int64 *v3; // r14
  __int64 *v4; // rax

  v2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 3));
  v3 = *a1;
  v4 = (__int64 *)**a1;
  if ( (__int64 **)(*a1)[1] != a1 || (__int64 *)v4[1] != v3 )
    __fastfail(3u);
  *a1 = v4;
  v4[1] = (__int64)a1;
  if ( v3 != (__int64 *)a1 )
  {
    v2 = v3[2];
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
    --*((_DWORD *)a1 + 4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 3));
  return v2;
}
