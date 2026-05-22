/*
 * XREFs of ?Create@GestureTargetingTarget@@SAJPEAVGestureTargetingComponent@@PEAUIInputTarget@@PEAPEAV1@@Z @ 0x18000F1FC
 * Callers:
 *     ?OnHitTest@GestureTargetingComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18000DFC0 (-OnHitTest@GestureTargetingComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0GestureTargetingTarget@@IEAA@PEAVGestureTargetingComponent@@PEAUIInputTarget@@@Z @ 0x18000EFA8 (--0GestureTargetingTarget@@IEAA@PEAVGestureTargetingComponent@@PEAUIInputTarget@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureTargetingTarget::Create(
        struct GestureTargetingComponent *a1,
        struct IInputTarget *a2,
        struct GestureTargetingTarget **a3)
{
  unsigned int v6; // ebx
  char v7; // al
  int v8; // r9d
  GestureTargetingTarget *v9; // rax
  GestureTargetingTarget *v10; // rdi
  struct GestureTargetingTarget *v11; // rax

  v6 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a1 )
    {
      v9 = (GestureTargetingTarget *)malloc(0x80uLL);
      v10 = v9;
      if ( v9 )
        memset(v9, 0, 0x80uLL);
      if ( v10 )
        v11 = GestureTargetingTarget::GestureTargetingTarget(v10, a1, a2);
      else
        v11 = 0LL;
      if ( v11 )
      {
        *a3 = v11;
        return v6;
      }
      v7 = 14;
      v6 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 83;
        goto LABEL_15;
      }
    }
    else
    {
      v7 = 87;
      v6 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 74;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v7 = 3;
    v6 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 67;
LABEL_15:
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 4, v8, v7);
    }
  }
  return v6;
}
