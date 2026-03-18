/*
 * XREFs of ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x1800DE73C
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18004A190 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x1800E8BE0 (-PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ @ 0x1800E8D50 (-PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18008D248 (-IsOOM@@YA_NJ@Z.c)
 *     ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x1800DE5CC (-RenderingStatusFromHr@CComposition@@QEAA-AW4RENDERING_STATUS@1@J@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18012908C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::HandlePresentErrors(CRenderTargetManager *this, int a2)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ecx

  v2 = a2;
  v3 = CComposition::RenderingStatusFromHr((__int64)this, a2);
  CComposition::ProcessRenderingStatus(*(_QWORD *)(v4 + 16), v3);
  if ( v2 < 0 && v2 != -2147024769 && v2 != -2147024882 && !IsOOM(v2) )
  {
    if ( v2 == -2003304442 || v2 == -2003304307 )
      return 0;
    else
      MilUnexpectedError(v5, L"presentation error");
  }
  return (unsigned int)v2;
}
