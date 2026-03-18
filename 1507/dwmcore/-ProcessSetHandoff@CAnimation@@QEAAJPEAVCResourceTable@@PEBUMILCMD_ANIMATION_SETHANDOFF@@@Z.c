/*
 * XREFs of ?ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z @ 0x18000E810
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnimation::ProcessSetHandoff(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETHANDOFF *a3)
{
  __int64 v6; // rdx
  __int64 Resource; // rax
  bool v9; // al

  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 2);
  *((_QWORD *)this + 26) = *(_QWORD *)((char *)a3 + 12);
  v6 = *((unsigned int *)a3 + 5);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 75LL);
    *((_QWORD *)this + 27) = Resource;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
    v9 = *((_DWORD *)a3 + 7) != 0;
    *((_BYTE *)this + 96) &= ~0x20u;
    *((_BYTE *)this + 96) |= 32 * v9;
    *((_QWORD *)this + 29) = *((_QWORD *)a3 + 4);
    *((_QWORD *)this + 30) = *((_QWORD *)a3 + 5);
  }
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 6);
  return 0LL;
}
