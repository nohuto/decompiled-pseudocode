/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x18005D2F0
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18005C970 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::SetValueForKey(
        __int64 a1,
        int *a2,
        _OWORD *a3)
{
  int v3; // r11d
  unsigned int v4; // ebx
  int v5; // r10d
  unsigned int v6; // r15d
  char v7; // r9
  __int64 v10; // rdi
  char v11; // bl
  int v12; // r9d
  unsigned int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // r14
  __int64 v16; // rax
  void *v17; // r14
  unsigned int v18; // ebx
  void *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx

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
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v12, v11);
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
    a1 = 152LL * v14;
    if ( *(_DWORD *)(a1 + v15) == v3 )
    {
      v16 = v15 + 152LL * v14;
      *(_OWORD *)(v16 + 8) = *a3;
      *(_OWORD *)(v16 + 24) = a3[1];
      *(_OWORD *)(v16 + 40) = a3[2];
      *(_OWORD *)(v16 + 56) = a3[3];
      *(_OWORD *)(v16 + 72) = a3[4];
      *(_OWORD *)(v16 + 88) = a3[5];
      *(_OWORD *)(v16 + 104) = a3[6];
      *(_OWORD *)(v16 + 120) = a3[7];
      *(_OWORD *)(v16 + 136) = a3[8];
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
    v22 = 152LL * v6;
    *(_DWORD *)(v22 + *(_QWORD *)v10) = *a2;
    v23 = v22 + *(_QWORD *)v10;
    *(_OWORD *)(v23 + 8) = *a3;
    *(_OWORD *)(v23 + 24) = a3[1];
    *(_OWORD *)(v23 + 40) = a3[2];
    *(_OWORD *)(v23 + 56) = a3[3];
    *(_OWORD *)(v23 + 72) = a3[4];
    *(_OWORD *)(v23 + 88) = a3[5];
    *(_OWORD *)(v23 + 104) = a3[6];
    *(_OWORD *)(v23 + 120) = a3[7];
    *(_OWORD *)(v23 + 136) = a3[8];
    ++*(_DWORD *)(v10 + 12);
    return v4;
  }
LABEL_16:
  if ( *(_DWORD *)(v10 + 12) == v13 )
  {
    v17 = *(void **)v10;
    v18 = 2 * v13;
    v6 = v13;
    v19 = operator new[](saturated_mul(2 * v13, 0x98uLL));
    *(_QWORD *)v10 = v19;
    if ( !v19 )
    {
      v11 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 386, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      v12 = 185;
      goto LABEL_4;
    }
    memcpy_0(v19, v17, 152LL * *(unsigned int *)(v10 + 8));
    if ( *(_DWORD *)(v10 + 8) < v18 )
    {
      v20 = 152LL * *(unsigned int *)(v10 + 8);
      v21 = v18 - *(_DWORD *)(v10 + 8);
      do
      {
        *(_DWORD *)(v20 + *(_QWORD *)v10) = *(_DWORD *)(v10 + 16);
        v20 += 152LL;
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
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 180, 5);
  return v4;
}
