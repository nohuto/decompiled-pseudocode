/*
 * XREFs of ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x180024678
 * Callers:
 *     ?OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x180024250 (-OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?HitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z @ 0x180023114 (-HitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z.c)
 *     ?OnFlick@EdgeGestureTarget@@AEAAJXZ @ 0x180024924 (-OnFlick@EdgeGestureTarget@@AEAAJXZ.c)
 *     ?OnSwipe@EdgeGestureTarget@@AEAA?AW4State@1@W4EdgeGestureEdges@@0H@Z @ 0x180024A0C (-OnSwipe@EdgeGestureTarget@@AEAA-AW4State@1@W4EdgeGestureEdges@@0H@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnGestureUpdate(__int64 a1, __int16 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r11
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  _DWORD v23[6]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a1 + 40) )
    return (unsigned int)v2;
  if ( (a2 & 0x10) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 88);
    v23[0] = 24;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v4 + 88LL))(v4, 5LL, v23);
    v2 = v5;
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a1 + 40) = EdgeGestureTarget::OnSwipe(a1, 4LL, 8LL, v23[3]);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 733, v5);
    }
    if ( v2 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 678;
LABEL_41:
        Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v7, v2);
        return (unsigned int)v2;
      }
      return (unsigned int)v2;
    }
  }
  else if ( (a2 & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 88);
    v23[0] = 24;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v8 + 88LL))(v8, 5LL, v23);
    v2 = v9;
    if ( v9 >= 0 )
    {
      *(_DWORD *)(a1 + 40) = EdgeGestureTarget::OnSwipe(a1, 1LL, 2LL, v23[4]);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 750, v9);
    }
    if ( v2 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 682;
        goto LABEL_41;
      }
      return (unsigned int)v2;
    }
  }
  else if ( (a2 & 0x100) != 0 )
  {
    v10 = EdgeGestureTarget::OnFlick((EdgeGestureTarget *)a1);
    v2 = v10;
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 686, v10);
      return (unsigned int)v2;
    }
  }
  if ( *(_DWORD *)(a1 + 40) != 2 )
    return (unsigned int)v2;
  v2 = 0;
  if ( EdgeGestureComponent::HitTest(
         *(EdgeGestureComponent **)(a1 + 56),
         *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL),
         *(_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL),
         0LL) )
  {
    v12 = *(_QWORD *)(a1 + 56);
    v13 = *(_DWORD *)(v12 + 52);
    v14 = *(_DWORD *)(v12 + 56);
    v15 = *(_DWORD *)(v12 + 24) - *(_DWORD *)(v12 + 48);
    v16 = v13 < *(_DWORD *)(v12 + 44) ? 4 : 0;
    v23[0] = v13;
    v17 = v16 | 8;
    v23[1] = v14;
    if ( v13 < v15 )
      v17 = v16;
    v18 = v17 | 1;
    if ( v14 >= *(_DWORD *)(v12 + 36) )
      v18 = v17;
    v6 = (unsigned int)(*(_DWORD *)(v12 + 28) - *(_DWORD *)(v12 + 40));
    v19 = *(unsigned int *)(v12 + 144);
    v20 = v18 | 2;
    if ( v14 < (unsigned int)v6 )
      v20 = v18;
    v23[2] = v20;
    if ( (_DWORD)v19 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, __int64))(**(_QWORD **)(v12 + 120) + 160LL))(
              *(_QWORD *)(v12 + 120),
              v19,
              v23,
              12LL);
      v2 = v21;
      if ( v21 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 236, v21);
    }
    else
    {
      v2 = -2147024809;
    }
    if ( v2 >= 0 )
      return (unsigned int)v2;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 717, v2);
  }
  if ( v2 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 695;
    goto LABEL_41;
  }
  return (unsigned int)v2;
}
