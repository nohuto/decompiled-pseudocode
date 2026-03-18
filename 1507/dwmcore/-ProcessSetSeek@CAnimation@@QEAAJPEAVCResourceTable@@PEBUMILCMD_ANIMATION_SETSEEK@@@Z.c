/*
 * XREFs of ?ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETSEEK@@@Z @ 0x180047F08
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::ProcessSetSeek(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETSEEK *a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rax

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  v4 = *((_QWORD *)a3 + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 24) = v4;
  }
  else if ( v3 >= *((_QWORD *)this + 15) )
  {
    *((_QWORD *)this + 24) = v3;
  }
  *((_QWORD *)this + 23) = *((_QWORD *)a3 + 1);
  return 0LL;
}
