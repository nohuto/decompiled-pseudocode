/*
 * XREFs of ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x180072D6C
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007350C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18011B1E0 (-PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x18003C36C (-RenderingStatusFromHr@CComposition@@QEAA-AW4RENDERING_STATUS@1@J@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18016967C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::HandlePresentErrors(CRenderTargetManager *this, int a2)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  int v7; // ecx

  v2 = a2;
  v3 = CComposition::RenderingStatusFromHr((__int64)this, a2);
  CComposition::ProcessRenderingStatus(*(_QWORD *)(v4 + 16), v3, v5);
  if ( v2 < 0 && v2 != -2147024769 && v2 != -2147024882 && !IsOOM(v2) )
  {
    if ( v2 == -2003304442 || v2 == -2003304307 )
      return 0;
    else
      MilUnexpectedError(v7, L"presentation error");
  }
  return (unsigned int)v2;
}
