/*
 * XREFs of ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x18007B894
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800067F4 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18007CC50 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x18009E0F0 (-ProcessOutOfFrameDirectFlipTokens@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA90 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
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
         ? CHwndRenderTarget::IsOfType(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v3), 37LL)
         : (unsigned __int8)v4(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v3), 37LL) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v3) + 544LL);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 712);
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
