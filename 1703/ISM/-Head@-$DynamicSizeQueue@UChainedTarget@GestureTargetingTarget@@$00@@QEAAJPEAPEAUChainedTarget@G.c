/*
 * XREFs of ?Head@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@GestureTargetingTarget@@@Z @ 0x180010D64
 * Callers:
 *     ??_GGestureTargetingTarget@@MEAAPEAXI@Z @ 0x18000F0E8 (--_GGestureTargetingTarget@@MEAAPEAXI@Z.c)
 *     ?CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180010110 (-CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Head(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  char v3; // al
  int v4; // r9d

  v2 = 0;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 20) )
    {
      *a2 = *(_QWORD *)a1 + 1904LL * *(unsigned int *)(a1 + 12);
      return v2;
    }
    v3 = 5;
    v2 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 155;
      goto LABEL_4;
    }
  }
  else
  {
    v3 = 87;
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 150;
LABEL_4:
      Template_qqq(a1, &MinInput_Warning_CheckResult, 4, v4, v3);
    }
  }
  return v2;
}
