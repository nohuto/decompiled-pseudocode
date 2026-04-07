/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18002A324
 * Callers:
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800281D0 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180028544 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F09C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CTopLevelWindow3D::OnWindowSizeUpdated(CTopLevelWindow3D *this)
{
  int v1; // eax
  __int64 v3; // rax
  int v4; // eax
  int started; // eax
  unsigned int v6; // r8d
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 89);
  if ( !v1 || *((_DWORD *)this + 88) == v1 )
  {
    v3 = *((_QWORD *)this + 43);
    if ( v3 )
    {
      if ( !*(_BYTE *)(v3 + 72) )
      {
        v4 = *((_DWORD *)this + 88);
        if ( v4 != 3 && v4 != 6 )
          CVisual::ClearInstructions(this);
      }
    }
  }
  else if ( !EqualRect((const RECT *)(*((_QWORD *)this + 39) + 48LL), (const RECT *)((char *)this + 292)) )
  {
    if ( *((_QWORD *)this + 43) )
      CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
    started = CTopLevelWindow3D::StartAnimation((__int64)this, *((_DWORD *)this + 89));
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x15A, v6, (const char *)(unsigned int)started, v7);
  }
}
