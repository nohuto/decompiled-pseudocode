/*
 * XREFs of ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18012FC2C
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1800F3274 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18001DCC8 (-HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008557C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008562C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800AA970 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CGeometryGroup::ProcessAppend(
        const void **this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  unsigned int v6; // esi
  void *v7; // r13
  __m128i v8; // xmm0
  char v9; // di
  int v11; // eax
  struct CResource **v12; // r15
  __int64 v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  WPF *v18; // rcx
  int v20; // eax
  char *v21; // r13
  WPF::ProcessHeapImpl *v22; // rdi
  __int64 v23; // [rsp+20h] [rbp-40h]
  void *v24; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+50h] BYREF
  const void *v27; // [rsp+B8h] [rbp+58h] BYREF

  v5 = *a3;
  v6 = 0;
  v27 = a4;
  v26 = 0;
  v7 = 0LL;
  v8 = _mm_srli_si128(v5, 8);
  v9 = 0;
  v24 = 0LL;
  if ( !v8.m128i_i32[1] )
    return v6;
  v11 = UnmarshalResourceArray(
          (WPF *)&v27,
          &a5,
          _mm_cvtsi128_si32(v8),
          0x41u,
          v23,
          &v26,
          (__int64 **)&Src,
          (__int64)a2,
          0);
  v12 = (struct CResource **)Src;
  v6 = v11;
  v13 = v26;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xD03u);
LABEL_8:
    if ( (v6 & 0x80000000) == 0 )
      return v6;
    if ( v9 )
      CResource::UnRegisterNNotifiersInternal((CResource *)this, v12, v13);
    goto LABEL_11;
  }
  if ( !v26 )
    goto LABEL_8;
  v14 = *((_DWORD *)this + 30);
  v15 = v14 + v26;
  LODWORD(v27) = v14 + v26;
  if ( v14 + v26 >= v14 )
  {
    v16 = CResource::RegisterNNotifiersInternal((CResource *)this, (struct CResource **)Src, v26);
    v6 = v16;
    if ( v16 >= 0 )
    {
      v9 = 1;
      LOBYTE(v26) = 1;
      v20 = WPF::HrMallocClear(v18, v17, v15, (__int64 *)&v24);
      v6 = v20;
      if ( v20 >= 0 )
      {
        v21 = (char *)v24;
        if ( *((_DWORD *)this + 30) )
          memcpy_0(v24, this[16], 8LL * *((unsigned int *)this + 30));
        memcpy_0(&v21[8 * *((unsigned int *)this + 30)], v12, 8 * v13);
        Src = (void *)this[16];
        if ( Src )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            Src);
          v15 = (unsigned int)v27;
        }
        v22 = WPF::g_pProcessHeap;
        this[16] = v21;
        v7 = 0LL;
        *((_DWORD *)this + 30) = v15;
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)v22 + 32LL))(v22, v12);
        v9 = v26;
        v12 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xD15u);
        v7 = v24;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xD0Cu);
    }
    goto LABEL_8;
  }
  v6 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xD09u);
LABEL_11:
  if ( v12 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v12);
  if ( v7 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v7);
  return v6;
}
