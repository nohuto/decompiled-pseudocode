/*
 * XREFs of ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180020B88
 * Callers:
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180014CB0 (-Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x18002A8E0 (-Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CVisual::DisablePrefiltering(CVisual *this)
{
  __int64 v1; // rax
  void (__fastcall *v2)(CVisual *, int); // rax

  if ( (*((_BYTE *)this + 188) & 1) == 0 )
  {
    *((_DWORD *)this + 47) |= 1u;
    v1 = *(_QWORD *)this;
    *((_DWORD *)this + 51) = 1;
    v2 = *(void (__fastcall **)(CVisual *, int))(v1 + 24);
    if ( v2 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 64);
    else
      v2(this, 64);
  }
}
