/*
 * XREFs of ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x180078A14
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800904F8 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicAnimatedVisual(
        CImmersiveIconicBitmapRegistry *this,
        struct CIconicAnimatedVisual *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  struct CIconicAnimatedVisual *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 18);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x220u);
    return v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 17) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 8u, 1, &v7);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xC0u);
      goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *((unsigned int *)this + 18)) = v7;
    *((_DWORD *)this + 18) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  return v4;
}
