/*
 * XREFs of ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x18007B964
 * Callers:
 *     ?PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ @ 0x18007B12C (-PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007B3A4 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x180104C40 (-PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180094B94 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800B1D14 (-IsOOM@@YA_NJ@Z.c)
 *     ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x1800FB654 (-RenderingStatusFromHr@CComposition@@QEAA-AW4RENDERING_STATUS@1@J@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18013EF28 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::HandlePresentErrors(CRenderTargetManager *this, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rcx
  int v5; // ecx

  v2 = a2;
  v3 = CComposition::RenderingStatusFromHr(this, a2);
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
