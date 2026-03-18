/*
 * XREFs of ?GetLatestValidSpriteImage@CWindowNode@@AEAAPEAVISpriteImage@@XZ @ 0x180026534
 * Callers:
 *     ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x180029928 (-NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct ISpriteImage *__fastcall CWindowNode::GetLatestValidSpriteImage(CWindowNode *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  struct ISpriteImage *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (unsigned int)(*((_DWORD *)this + 208) - 1);
  v3 = (int)v2;
  if ( (int)v2 < 0 )
    return (struct ISpriteImage *)*((_QWORD *)this + 100);
  while ( 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 101) + 8 * v3);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 200LL))(v5) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 101) + 8 * v3);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6) )
        break;
    }
    v2 = (unsigned int)(v2 - 1);
    if ( --v3 < 0 )
      return (struct ISpriteImage *)*((_QWORD *)this + 100);
  }
  result = *(struct ISpriteImage **)(*((_QWORD *)this + 101) + 8 * v2);
  if ( !result )
    return (struct ISpriteImage *)*((_QWORD *)this + 100);
  return result;
}
