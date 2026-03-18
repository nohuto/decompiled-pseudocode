/*
 * XREFs of ?AllocateOcclusionInfo@CWindowNode@@MEAAPEAVCOcclusionInfo@@XZ @ 0x180079AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct COcclusionInfo *__fastcall CWindowNode::AllocateOcclusionInfo(CWindowNode *this)
{
  struct COcclusionInfo *result; // rax

  result = (struct COcclusionInfo *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                      WPF::g_pProcessHeap,
                                      40LL);
  if ( result )
    *(_QWORD *)result = &CWindowOcclusionInfo::`vftable';
  return result;
}
