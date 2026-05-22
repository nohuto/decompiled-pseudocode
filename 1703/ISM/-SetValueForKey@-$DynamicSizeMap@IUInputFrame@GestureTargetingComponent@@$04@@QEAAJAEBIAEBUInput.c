/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInputFrame@GestureTargetingComponent@@@Z @ 0x18000ECC4
 * Callers:
 *     ?OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x18000E420 (-OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 *     ?RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z @ 0x18000E714 (-RouteInputToTarget@GestureTargetingComponent@@AEAAJIPEAX0IAEBUtagMsgRoutingInfo@@IPEAI@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned int,GestureTargetingComponent::InputFrame,5>::SetValueForKey(
        __int64 a1,
        int *a2,
        _OWORD *a3)
{
  int v3; // r14d
  unsigned int v4; // ebx
  int v5; // r11d
  unsigned int v6; // r15d
  char v7; // r10
  __int64 v10; // rdi
  char v11; // bl
  int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // r14
  unsigned int v18; // ebx
  void *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  char *v23; // rcx

  v3 = *a2;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  v7 = 0;
  v10 = a1;
  if ( *a2 == v5 )
  {
    v11 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v12 = 153;
LABEL_4:
    Template_qqq(a1, &MinInput_Warning_CheckResult, 4, v12, v11);
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v13 = *(_DWORD *)(a1 + 8);
  v14 = 0;
  if ( !v13 )
    goto LABEL_16;
  v15 = *(_QWORD *)a1;
  do
  {
    a1 = 88LL * v14;
    if ( *(_DWORD *)(a1 + v15) == v3 )
    {
      v16 = 88LL * v14;
      *(_OWORD *)(v16 + v15 + 8) = *a3;
      *(_OWORD *)(v16 + v15 + 24) = a3[1];
      *(_OWORD *)(v16 + v15 + 40) = a3[2];
      *(_OWORD *)(v16 + v15 + 56) = a3[3];
      *(_OWORD *)(v16 + v15 + 72) = a3[4];
      return v4;
    }
    if ( !v7 && *(_DWORD *)(a1 + v15) == v5 )
    {
      v6 = v14;
      v7 = 1;
    }
    ++v14;
  }
  while ( v14 < v13 );
  if ( v7 )
  {
LABEL_28:
    v22 = 88LL * v6;
    *(_DWORD *)(v22 + *(_QWORD *)v10) = *a2;
    v23 = *(char **)v10;
    *(_OWORD *)&v23[v22 + 8] = *a3;
    *(_OWORD *)&v23[v22 + 24] = a3[1];
    *(_OWORD *)&v23[v22 + 40] = a3[2];
    *(_OWORD *)&v23[v22 + 56] = a3[3];
    *(_OWORD *)&v23[v22 + 72] = a3[4];
    ++*(_DWORD *)(v10 + 12);
    return v4;
  }
LABEL_16:
  if ( *(_DWORD *)(v10 + 12) == v13 )
  {
    v17 = *(char **)v10;
    v18 = 2 * v13;
    v6 = v13;
    v19 = operator new[](saturated_mul(2 * v13, 0x58uLL));
    *(_QWORD *)v10 = v19;
    if ( !v19 )
    {
      v11 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      Template_qqq(0LL, &MinInput_Warning_CheckResult, 4, 386, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      v12 = 185;
      goto LABEL_4;
    }
    memcpy_0(v19, v17, 88LL * *(unsigned int *)(v10 + 8));
    if ( *(_DWORD *)(v10 + 8) < v18 )
    {
      v20 = 88LL * *(unsigned int *)(v10 + 8);
      v21 = v18 - *(_DWORD *)(v10 + 8);
      do
      {
        *(_DWORD *)(v20 + *(_QWORD *)v10) = *(_DWORD *)(v10 + 16);
        v20 += 88LL;
        --v21;
      }
      while ( v21 );
    }
    *(_DWORD *)(v10 + 8) = v18;
    operator delete(v17);
    v4 = 0;
    goto LABEL_28;
  }
  v4 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(a1, &MinInput_Warning_CheckResult, 4, 180, 5);
  return v4;
}
