/*
 * XREFs of ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x180049D04
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x180005C34 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18004B580 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800E3798 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 * Callees:
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004A540 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct COutOfFrameDirectFlipInfo *__fastcall CRenderTargetManager::FindOutOfFrameDirectFlipInfo(
        CRenderTargetManager *this)
{
  __int64 v1; // rdi
  unsigned int v3; // ebp
  __int64 (__fastcall *v4)(_QWORD, __int64); // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v4 = *(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8LL * v3) + 48LL);
      if ( v4 == CHwndRenderTarget::IsOfType
         ? CHwndRenderTarget::IsOfType(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v3), 36LL)
         : (unsigned __int8)v4(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v3), 36LL) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v3) + 552LL);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 624);
          if ( v7 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7) )
              break;
          }
        }
      }
      if ( ++v3 >= *((_DWORD *)this + 12) )
        return (struct COutOfFrameDirectFlipInfo *)v1;
    }
    return (struct COutOfFrameDirectFlipInfo *)v7;
  }
  return (struct COutOfFrameDirectFlipInfo *)v1;
}
