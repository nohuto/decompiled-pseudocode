/*
 * XREFs of rimProcessInput @ 0x1C000FF78
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1C000FEEC (rimStackAttachAndProcessInput.c)
 *     rimProcessHidInput @ 0x1C00D84F0 (rimProcessHidInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     RIMAllocUserMem @ 0x1C00D24F0 (RIMAllocUserMem.c)
 *     RIMFreeUserMem @ 0x1C00D2510 (RIMFreeUserMem.c)
 *     RIMFixUpCompleteFrame @ 0x1C00D9B58 (RIMFixUpCompleteFrame.c)
 */

unsigned __int64 __fastcall rimProcessInput(__int64 a1, __int64 a2, const void *a3, __m128i *a4, int a5)
{
  __m128i v8; // xmm6
  int v9; // r12d
  size_t v10; // xmm0_8
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  unsigned __int64 *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __m128i *v19; // rcx
  char *v20; // rcx
  __m128i v21; // [rsp+38h] [rbp-50h]

  v8 = *a4;
  v21 = *a4;
  v9 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v10 = _mm_srli_si128(v8, 8).m128i_u64[0];
  if ( !*(_BYTE *)(a1 + 776) )
  {
    if ( v10 > *(unsigned int *)(a1 + 816) )
    {
      v13 = Win32AllocPool(v10, 1701661522LL);
      if ( v13 )
      {
        **(_QWORD **)(a1 + 808) = v13;
      }
      else
      {
        v21.m128i_i32[0] = -1073741801;
        v8 = v21;
      }
    }
    result = *(_QWORD *)(a1 + 800);
    *(__m128i *)result = v8;
    if ( v21.m128i_i32[0] < 0 )
      return result;
    **(_DWORD **)(a1 + 784) = v9;
    if ( (*(_DWORD *)(a2 + 184) & 0x800) != 0 )
    {
      v12 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 360);
      if ( !v12 )
        v12 = *(_QWORD *)(a2 + 16);
    }
    **(_QWORD **)(a1 + 792) = v12;
    result = (unsigned __int64)memmove(**(void ***)(a1 + 808), a3, v10);
    if ( !a5 )
      return result;
    return RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 808), a3);
  }
  result = *(unsigned int *)(a1 + 816);
  if ( v10 > result )
  {
    result = RIMAllocUserMem(a1, v10);
    if ( result )
    {
      v15 = *(unsigned __int64 **)(a1 + 808);
      if ( (unsigned __int64)v15 >= W32UserProbeAddress )
        v15 = (unsigned __int64 *)W32UserProbeAddress;
      *v15 = result;
    }
    else
    {
      LOBYTE(v14) = 3;
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 v14,
                 4,
                 15,
                 (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids);
      v21.m128i_i32[0] = -1073741801;
      v8 = v21;
    }
  }
  if ( v21.m128i_i32[0] < 0 )
  {
    *(_BYTE *)(a1 + 712) = 1;
    return result;
  }
  v16 = *(_DWORD **)(a1 + 784);
  if ( (unsigned __int64)v16 >= W32UserProbeAddress )
    v16 = (_DWORD *)W32UserProbeAddress;
  *v16 = v9;
  v17 = *(_QWORD *)(a2 + 360);
  if ( !v17 )
    v17 = *(_QWORD *)(a2 + 16);
  v18 = *(_QWORD **)(a1 + 792);
  if ( (unsigned __int64)v18 >= W32UserProbeAddress )
    v18 = (_QWORD *)W32UserProbeAddress;
  *v18 = v17;
  v19 = *(__m128i **)(a1 + 800);
  if ( (unsigned __int64)v19 >= W32UserProbeAddress )
    v19 = (__m128i *)W32UserProbeAddress;
  *v19 = v8;
  v20 = **(char ***)(a1 + 808);
  if ( (unsigned __int64)&v20[v10] > W32UserProbeAddress || &v20[v10] <= v20 )
    *(_BYTE *)W32UserProbeAddress = 0;
  result = (unsigned __int64)memmove(v20, a3, v10);
  if ( a5 )
    return RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 808), a3);
  return result;
}
