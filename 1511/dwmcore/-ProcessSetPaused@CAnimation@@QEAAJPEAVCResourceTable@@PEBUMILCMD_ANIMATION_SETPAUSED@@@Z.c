/*
 * XREFs of ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x18001C1F8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::ProcessSetPaused(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETPAUSED *a3)
{
  unsigned __int64 v3; // rdx
  bool v4; // zf

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  if ( v3 >= *((_QWORD *)this + 15) )
  {
    if ( (*((_BYTE *)this + 96) & 0x10) != 0 || !*((_DWORD *)a3 + 2) )
    {
      if ( (*((_BYTE *)this + 96) & 0x10) != 0 )
      {
        v4 = *((_DWORD *)a3 + 2) == 0;
        if ( *((_DWORD *)a3 + 2) )
          goto LABEL_6;
        *((_QWORD *)this + 24) = v3;
      }
    }
    else
    {
      *((_QWORD *)this + 23) += v3 - *((_QWORD *)this + 24);
    }
  }
  v4 = *((_DWORD *)a3 + 2) == 0;
LABEL_6:
  *((_BYTE *)this + 96) &= ~0x10u;
  *((_BYTE *)this + 96) |= 16 * !v4;
  return 0LL;
}
