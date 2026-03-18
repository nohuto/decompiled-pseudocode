/*
 * XREFs of rimProcessInput @ 0x1C0086E0C
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1C0086D80 (rimStackAttachAndProcessInput.c)
 *     rimProcessHidInput @ 0x1C00C8EA0 (rimProcessHidInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C001152C (RimDeviceTypeToRimInputType.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     RIMAllocUserMem @ 0x1C00C3BD0 (RIMAllocUserMem.c)
 *     RIMFreeUserMem @ 0x1C00C3BF0 (RIMFreeUserMem.c)
 *     rimFixupCompleteFrame @ 0x1C00C9CB0 (rimFixupCompleteFrame.c)
 */

unsigned __int64 __fastcall rimProcessInput(__int64 a1, __int64 a2, const void *a3, __m128i *a4, int a5)
{
  __m128i v8; // xmm6
  int v9; // r12d
  size_t v10; // xmm0_8
  __int64 v11; // rax
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  unsigned __int64 *v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __m128i *v18; // rcx
  char *v19; // rcx
  __m128i v20; // [rsp+38h] [rbp-50h]

  v8 = *a4;
  v20 = *a4;
  v9 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v10 = _mm_srli_si128(v8, 8).m128i_u64[0];
  if ( *(_BYTE *)(a1 + 824) )
  {
    result = *(unsigned int *)(a1 + 864);
    if ( v10 > result )
    {
      result = RIMAllocUserMem(a1, v10);
      if ( result )
      {
        v14 = *(unsigned __int64 **)(a1 + 856);
        if ( v14 >= W32UserProbeAddress )
          v14 = (unsigned __int64 *)W32UserProbeAddress;
        *v14 = result;
      }
      else
      {
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   3u,
                   4u,
                   0xDu,
                   (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids);
        v20.m128i_i32[0] = -1073741801;
        v8 = v20;
      }
    }
    if ( v20.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 760) = 1;
    }
    else
    {
      v15 = *(_DWORD **)(a1 + 832);
      if ( v15 >= W32UserProbeAddress )
        v15 = W32UserProbeAddress;
      *v15 = v9;
      v16 = *(_QWORD *)(a2 + 344);
      if ( !v16 )
        v16 = *(_QWORD *)(a2 + 16);
      v17 = *(_QWORD **)(a1 + 840);
      if ( v17 >= W32UserProbeAddress )
        v17 = W32UserProbeAddress;
      *v17 = v16;
      v18 = *(__m128i **)(a1 + 848);
      if ( v18 >= W32UserProbeAddress )
        v18 = (__m128i *)W32UserProbeAddress;
      *v18 = v8;
      v19 = **(char ***)(a1 + 856);
      if ( &v19[v10] > W32UserProbeAddress || &v19[v10] <= v19 )
        *(_BYTE *)W32UserProbeAddress = 0;
      result = (unsigned __int64)memmove(v19, a3, v10);
      if ( a5 )
        return rimFixupCompleteFrame(a1, a2, **(_QWORD **)(a1 + 856), a3);
    }
  }
  else
  {
    if ( v10 > *(unsigned int *)(a1 + 864) )
    {
      v11 = Win32AllocPool();
      if ( v11 )
      {
        **(_QWORD **)(a1 + 856) = v11;
      }
      else
      {
        v20.m128i_i32[0] = -1073741801;
        v8 = v20;
      }
    }
    result = *(_QWORD *)(a1 + 848);
    *(__m128i *)result = v8;
    if ( v20.m128i_i32[0] >= 0 )
    {
      **(_DWORD **)(a1 + 832) = v9;
      if ( (*(_DWORD *)(a2 + 176) & 0x800) != 0 )
      {
        v13 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v13 = *(_QWORD *)(a2 + 344);
        if ( !v13 )
          v13 = *(_QWORD *)(a2 + 16);
      }
      **(_QWORD **)(a1 + 840) = v13;
      result = (unsigned __int64)memmove(**(void ***)(a1 + 856), a3, v10);
      if ( a5 )
        return rimFixupCompleteFrame(a1, a2, **(_QWORD **)(a1 + 856), a3);
    }
  }
  return result;
}
