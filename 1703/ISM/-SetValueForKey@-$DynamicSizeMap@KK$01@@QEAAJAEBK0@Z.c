/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z @ 0x18005D588
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18005C970 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,unsigned long,2>::SetValueForKey(__int64 a1, int *a2, _DWORD *a3)
{
  int v3; // r11d
  unsigned int v4; // ebx
  int v5; // r10d
  unsigned int v6; // r14d
  char v7; // r9
  char v11; // bl
  int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // rcx
  _DWORD *v15; // r8
  _DWORD *v16; // rsi
  unsigned int v17; // ebx
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v3 = *a2;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  v7 = 0;
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
  v14 = 0LL;
  if ( !v13 )
    goto LABEL_16;
  v15 = *(_DWORD **)a1;
  do
  {
    if ( v15[2 * v14] == v3 )
    {
      v15[2 * v14 + 1] = *a3;
      return v4;
    }
    if ( !v7 && v15[2 * v14] == v5 )
    {
      v6 = v14;
      v7 = 1;
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < v13 );
  if ( v7 )
  {
LABEL_28:
    *(_DWORD *)(*(_QWORD *)a1 + 8LL * v6) = *a2;
    *(_DWORD *)(*(_QWORD *)a1 + 8LL * v6 + 4) = *a3;
    ++*(_DWORD *)(a1 + 12);
    return v4;
  }
LABEL_16:
  if ( *(_DWORD *)(a1 + 12) == v13 )
  {
    v16 = *(_DWORD **)a1;
    v17 = 2 * v13;
    v6 = v13;
    v18 = operator new[](saturated_mul(2 * v13, 8uLL));
    *(_QWORD *)a1 = v18;
    if ( !v18 )
    {
      v11 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 386, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      v12 = 185;
      goto LABEL_4;
    }
    memcpy_0(v18, v16, 8LL * *(unsigned int *)(a1 + 8));
    if ( *(_DWORD *)(a1 + 8) < v17 )
    {
      v20 = 8LL * *(unsigned int *)(a1 + 8);
      v21 = v17 - *(_DWORD *)(a1 + 8);
      do
      {
        *(_DWORD *)(v20 + *(_QWORD *)a1) = *(_DWORD *)(a1 + 16);
        v20 += 8LL;
        --v21;
      }
      while ( v21 );
    }
    *(_DWORD *)(a1 + 8) = v17;
    operator delete(v16);
    v4 = 0;
    goto LABEL_28;
  }
  v4 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 180, 5);
  return v4;
}
