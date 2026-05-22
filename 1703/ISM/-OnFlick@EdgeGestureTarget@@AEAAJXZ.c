/*
 * XREFs of ?OnFlick@EdgeGestureTarget@@AEAAJXZ @ 0x180024924
 * Callers:
 *     ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x180024678 (-OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?OnSwipe@EdgeGestureTarget@@AEAA?AW4State@1@W4EdgeGestureEdges@@0H@Z @ 0x180024A0C (-OnSwipe@EdgeGestureTarget@@AEAA-AW4State@1@W4EdgeGestureEdges@@0H@Z.c)
 *     atan2f_0 @ 0x18009EACE (atan2f_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnFlick(EdgeGestureTarget *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebp
  float v5; // xmm0_4
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  int v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+34h] [rbp-14h]
  int v12; // [rsp+38h] [rbp-10h]

  v10 = 12;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 11) + 88LL))(
         *((_QWORD *)this + 11),
         7LL,
         &v10);
  v4 = v2;
  if ( v2 >= 0 )
  {
    if ( v11 || v12 )
    {
      v5 = atan2f_0((float)v12, (float)v11);
      if ( (v5 < 0.78539819 || v5 > 2.3561945) && (v5 < -2.3561945 || v5 > -0.78539819) )
      {
        v6 = (unsigned int)v11;
        v7 = 4LL;
        v8 = 8LL;
      }
      else
      {
        v6 = (unsigned int)v12;
        v7 = 1LL;
        v8 = 2LL;
      }
      *((_DWORD *)this + 10) = EdgeGestureTarget::OnSwipe(this, v7, v8, v6);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v3, &MinInput_Warning_CheckResult, 0, 767, v2);
  }
  return v4;
}
