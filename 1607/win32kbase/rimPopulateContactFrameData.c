/*
 * XREFs of rimPopulateContactFrameData @ 0x1C00DDD00
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C00DE1A8 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     rimExtractPointerDeviceUsages @ 0x1C00DD0D8 (rimExtractPointerDeviceUsages.c)
 *     rimTransformGeometry @ 0x1C00DE5E8 (rimTransformGeometry.c)
 */

__int64 __fastcall rimPopulateContactFrameData(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v13; // r13
  __int64 v16; // rdi
  int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // edx
  int PointerDeviceUsages; // ebx
  int v22; // r8d
  struct _HIDP_PREPARSED_DATA *v24; // [rsp+A0h] [rbp+8h]

  v13 = *(_QWORD *)(a2 + 480);
  v16 = *(_QWORD *)(v13 + 1432);
  v17 = *(_DWORD *)(v13 + 1404);
  v18 = a7 + 2328;
  v24 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a13 = *(_QWORD *)(a7 + 36);
  *a12 = (*(unsigned __int8 *)(a7 + 8) >> 3) & 1;
  *(_DWORD *)(a7 + 2320) |= 2u;
  memset((void *)(a7 + 2328), 0, 0xD8uLL);
  *(_DWORD *)(a7 + 2328) = *(_DWORD *)a7;
  *(_DWORD *)(a7 + 2376) = a6;
  *(_WORD *)(a7 + 2384) = *(_WORD *)(a7 + 4);
  *(_WORD *)(a7 + 2386) = a5;
  *(_DWORD *)(a7 + 2456) = v17;
  *(_QWORD *)(a7 + 2472) = v16;
  if ( (*(_DWORD *)(a2 + 184) & 0x800) != 0 )
    v19 = *(_QWORD *)(a2 + 24);
  else
    v19 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a7 + 2408) = v19;
  PointerDeviceUsages = rimExtractPointerDeviceUsages(
                          v13,
                          v24,
                          a3,
                          a4,
                          *(_QWORD *)(a1 + 760) == 0LL,
                          *(unsigned __int8 *)(a1 + 953),
                          v18,
                          a8,
                          a9,
                          a10,
                          a11);
  if ( PointerDeviceUsages >= 0 )
  {
    if ( !*a8 )
    {
      v22 = (*(unsigned __int8 *)(a7 + 8) >> 3) & 1;
      *(_DWORD *)(a7 + 2320) ^= (*(_DWORD *)(a7 + 2320) ^ (4 * ((*(_DWORD *)(a7 + 2404) & 0x400000) == 0))) & 4;
      rimTransformGeometry(v13, -__CFSHR__(*(_DWORD *)(a2 + 184), 22), v22, v18, (__int64)a13, (__int64)a12);
    }
  }
  else
  {
    LOBYTE(v20) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      5,
      50,
      (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
  }
  return (unsigned int)PointerDeviceUsages;
}
