/*
 * XREFs of ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1800987E8
 * Callers:
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180035B88 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::SetInjectionRect(struct tagRECT *this, const struct tagRECT *a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  __int64 v4; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 2 * this[1].left;
  if ( a2->right - a2->left < v2 || a2->bottom - a2->top < v2 || (this[5].right & 0xFFFFFF7F) != 0 )
  {
    v3 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x584, v4, (const char *)v3);
    JUMPOUT(0x18009883ALL);
  }
  this[4] = *a2;
}
