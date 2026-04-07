/*
 * XREFs of ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180017854
 * Callers:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x18002A730 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180044F8C (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x180082AE8 (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTimelineBase::CTimelineBase(__int64 a1, double a2, double a3, double a4, int a5)
{
  struct _SINGLE_LIST_ENTRY *v6; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)a1 = &CTimelineBase::`vftable';
  *(_DWORD *)(a1 + 56) = a5;
  *(_DWORD *)(a1 + 8) = 1;
  *(double *)(a1 + 32) = a3;
  *(double *)(a1 + 40) = a4;
  *(double *)(a1 + 24) = a2;
  *(double *)(a1 + 48) = a3;
  *(_WORD *)(a1 + 72) = 256;
  v6 = (struct _SINGLE_LIST_ENTRY *)(a1 + 16);
  CDesktopManager::s_fTimelineDirty = 1;
  v6->Next = CDesktopManager::s_listTimeline.Next;
  result = a1;
  CDesktopManager::s_listTimeline.Next = v6;
  return result;
}
