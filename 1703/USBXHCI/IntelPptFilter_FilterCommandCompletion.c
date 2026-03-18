/*
 * XREFs of IntelPptFilter_FilterCommandCompletion @ 0x1C00571D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     IntelPptFilter_DecreaseEndpointCount @ 0x1C005707C (IntelPptFilter_DecreaseEndpointCount.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C005727C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 */

void __fastcall IntelPptFilter_FilterCommandCompletion(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp
  __int64 v5; // r8

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  v5 = (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2;
  if ( (_DWORD)v5 == 10 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      4u,
      0xFu,
      0x13u,
      (__int64)&WPP_67c7445f99ae30086f9893c21d85c536_Traceguids);
    IntelPptFilter_DecreaseEndpointCount(a1, 1);
  }
  else if ( (_DWORD)v5 == 12 )
  {
    LOBYTE(v5) = 1;
    IntelPptFilter_FilterEndpointConfigureCommand(a1, a2, v5);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v4);
}
