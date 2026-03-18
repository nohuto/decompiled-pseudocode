/*
 * XREFs of ?GetLatestValidSpriteImage@CWindowNode@@AEAAPEAVISpriteImage@@XZ @ 0x180079B78
 * Callers:
 *     ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x18007CDE4 (-NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct ISpriteImage *__fastcall CWindowNode::GetLatestValidSpriteImage(CWindowNode *this)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  struct ISpriteImage *result; // rax

  v2 = (unsigned int)(*((_DWORD *)this + 268) - 1);
  v3 = (int)v2;
  if ( (int)v2 < 0 )
    return (struct ISpriteImage *)*((_QWORD *)this + 130);
  while ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 131) + 8 * v3) + 288LL))(*(_QWORD *)(*((_QWORD *)this + 131) + 8 * v3))
       || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 131) + 8 * v3) + 264LL))(*(_QWORD *)(*((_QWORD *)this + 131) + 8 * v3)) )
  {
    v2 = (unsigned int)(v2 - 1);
    if ( --v3 < 0 )
      return (struct ISpriteImage *)*((_QWORD *)this + 130);
  }
  result = *(struct ISpriteImage **)(*((_QWORD *)this + 131) + 8 * v2);
  if ( !result )
    return (struct ISpriteImage *)*((_QWORD *)this + 130);
  return result;
}
