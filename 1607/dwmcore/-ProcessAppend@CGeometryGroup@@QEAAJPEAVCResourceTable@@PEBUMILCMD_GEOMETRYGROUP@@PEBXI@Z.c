/*
 * XREFs of ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180151690
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180106DF0 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008DCA4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008DCF0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800ADA54 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometryGroup::ProcessAppend(
        const void **this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned int *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  int v6; // ebx
  char *v7; // r14
  __m128i v8; // xmm0
  char v9; // r12
  int v11; // eax
  struct CResource **v12; // rsi
  __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // r15d
  unsigned int v16; // eax
  WPF::ProcessHeapImpl *v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-68h]
  unsigned int v20; // [rsp+20h] [rbp-68h]
  void *Src; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int *v23; // [rsp+A8h] [rbp+20h] BYREF

  v5 = *a3;
  v6 = 0;
  v23 = a4;
  v22 = 0;
  v7 = 0LL;
  v8 = _mm_srli_si128(v5, 8);
  v9 = 0;
  if ( !v8.m128i_i32[1] )
    return (unsigned int)v6;
  v11 = UnmarshalResourceArray(&v23, &a5, _mm_cvtsi128_si32(v8), 66LL, v19, &v22, (__int64 **)&Src, (__int64)a2, 0);
  v12 = (struct CResource **)Src;
  v6 = v11;
  v13 = v22;
  if ( v11 < 0 )
  {
    v20 = 3257;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v20);
    goto LABEL_22;
  }
  if ( !v22 )
  {
LABEL_22:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    if ( v9 )
      CResource::UnRegisterNNotifiersInternal((CResource *)this, v12, v13);
    goto LABEL_25;
  }
  v14 = *((_DWORD *)this + 50);
  v15 = v14 + v22;
  if ( v14 + v22 >= v14 )
  {
    v11 = CResource::RegisterNNotifiersInternal((CResource *)this, (struct CResource **)Src, v22);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v9 = 1;
      v6 = 0;
      if ( v15 && 0xFFFFFFFFFFFFFFFFuLL / v15 > 8 )
      {
        v7 = (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       8LL * v15);
        if ( !v7 )
          v6 = -2147024882;
      }
      else
      {
        v6 = -2147024809;
      }
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xCCBu);
      }
      else
      {
        v16 = *((_DWORD *)this + 50);
        if ( v16 )
          memcpy_0(v7, this[26], 8LL * v16);
        memcpy_0(&v7[8 * *((unsigned int *)this + 50)], v12, 8 * v13);
        if ( this[26] )
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
        v17 = WPF::g_pProcessHeap;
        this[26] = v7;
        v7 = 0LL;
        *((_DWORD *)this + 50) = v15;
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)v17 + 32LL))(v17, v12);
        v12 = 0LL;
      }
      goto LABEL_22;
    }
    v20 = 3266;
    goto LABEL_21;
  }
  v6 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xCBFu);
LABEL_25:
  if ( v12 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v12);
  if ( v7 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, char *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v7);
  return (unsigned int)v6;
}
