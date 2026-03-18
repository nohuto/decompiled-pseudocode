/*
 * XREFs of rimProcessInput @ 0x1C006F0BC
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1C006F030 (rimStackAttachAndProcessInput.c)
 *     rimProcessHidInput @ 0x1C00C7FA0 (rimProcessHidInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C001A844 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     RIMAllocUserMem @ 0x1C00C2DB0 (RIMAllocUserMem.c)
 *     RIMFreeUserMem @ 0x1C00C2DD0 (RIMFreeUserMem.c)
 *     rimFixupCompleteFrame @ 0x1C00C8DB0 (rimFixupCompleteFrame.c)
 */

unsigned __int64 __fastcall rimProcessInput(__int64 a1, __int64 a2, const void *a3, __m128i *a4, int a5)
{
  __m128i v8; // xmm6
  int v9; // r12d
  size_t v10; // xmm0_8
  __int64 v11; // rax
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __m128i *v17; // rcx
  char *v18; // rcx
  __m128i v19; // [rsp+38h] [rbp-50h]

  v8 = *a4;
  v19 = *a4;
  v9 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v10 = _mm_srli_si128(v8, 8).m128i_u64[0];
  if ( *(_BYTE *)(a1 + 776) )
  {
    result = *(unsigned int *)(a1 + 816);
    if ( v10 > result )
    {
      result = RIMAllocUserMem(a1, v10);
      if ( result )
      {
        **(_QWORD **)(a1 + 808) = result;
      }
      else
      {
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   3u,
                   4u,
                   0xDu,
                   (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids);
        v19.m128i_i32[0] = -1073741801;
        v8 = v19;
      }
    }
    if ( v19.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 728) = 1;
    }
    else
    {
      v14 = *(_DWORD **)(a1 + 784);
      if ( v14 >= W32UserProbeAddress )
        v14 = W32UserProbeAddress;
      *v14 = v9;
      v15 = *(_QWORD *)(a2 + 352);
      if ( !v15 )
        v15 = *(_QWORD *)(a2 + 16);
      v16 = *(_QWORD **)(a1 + 792);
      if ( v16 >= W32UserProbeAddress )
        v16 = W32UserProbeAddress;
      *v16 = v15;
      v17 = *(__m128i **)(a1 + 800);
      if ( v17 >= W32UserProbeAddress )
        v17 = (__m128i *)W32UserProbeAddress;
      *v17 = v8;
      v18 = **(char ***)(a1 + 808);
      if ( &v18[v10] > W32UserProbeAddress || &v18[v10] <= v18 )
        *(_BYTE *)W32UserProbeAddress = 0;
      result = (unsigned __int64)memmove(v18, a3, v10);
      if ( a5 )
        return rimFixupCompleteFrame(a1, a2, **(_QWORD **)(a1 + 808), a3);
    }
  }
  else
  {
    if ( v10 > *(unsigned int *)(a1 + 816) )
    {
      v11 = Win32AllocPool();
      if ( v11 )
      {
        **(_QWORD **)(a1 + 808) = v11;
      }
      else
      {
        v19.m128i_i32[0] = -1073741801;
        v8 = v19;
      }
    }
    result = *(_QWORD *)(a1 + 800);
    *(__m128i *)result = v8;
    if ( v19.m128i_i32[0] >= 0 )
    {
      **(_DWORD **)(a1 + 784) = v9;
      if ( (*(_DWORD *)(a2 + 184) & 0x800) != 0 )
      {
        v13 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v13 = *(_QWORD *)(a2 + 352);
        if ( !v13 )
          v13 = *(_QWORD *)(a2 + 16);
      }
      **(_QWORD **)(a1 + 792) = v13;
      result = (unsigned __int64)memmove(**(void ***)(a1 + 808), a3, v10);
      if ( a5 )
        return rimFixupCompleteFrame(a1, a2, **(_QWORD **)(a1 + 808), a3);
    }
  }
  return result;
}
