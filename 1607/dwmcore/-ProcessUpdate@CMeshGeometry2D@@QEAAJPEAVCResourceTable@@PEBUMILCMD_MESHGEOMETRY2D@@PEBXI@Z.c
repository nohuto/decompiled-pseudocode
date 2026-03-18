/*
 * XREFs of ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x18010DA68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x180151BB0 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessUpdate(
        CMeshGeometry2D *this,
        struct CResourceTable *a2,
        __m128i *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r8d
  void **v10; // r14
  int v11; // ebx
  LPVOID (__fastcall *v12)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v13; // rax
  __int64 v14; // rax
  void **v15; // r14
  LPVOID (__fastcall *v16)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v17; // rax
  int v18; // r9d
  __int64 v19; // rax
  void **v20; // r14
  LPVOID (__fastcall *v21)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v22; // rax
  __int64 v23; // rax
  void **v24; // rsi
  LPVOID (__fastcall *v25)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v26; // rax
  unsigned int v27; // edx
  unsigned int *v28; // rax
  unsigned int v29; // r8d
  unsigned int v30; // ecx
  unsigned int v32; // [rsp+20h] [rbp-58h]
  __m128i v33; // [rsp+30h] [rbp-48h]
  __m128i v34; // [rsp+40h] [rbp-38h]
  unsigned __int64 v35; // [rsp+50h] [rbp-28h]

  v33 = *a3;
  v35 = a3[1].m128i_u64[0];
  v34 = *a3;
  CMeshGeometry2D::UnRegisterNotifiers(this);
  v7 = a5;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v33, 8));
  *((_DWORD *)this + 42) = v8;
  if ( v8 )
  {
    if ( v8 > a5 || (v9 = v8, v8 != 12 * (v8 / 0xCuLL)) )
    {
      v32 = 219;
LABEL_68:
      v18 = -2003303421;
      v11 = -2003303421;
      goto LABEL_69;
    }
    v10 = (void **)((char *)this + 176);
    v11 = 0;
    if ( this == (CMeshGeometry2D *)-176LL )
    {
      v11 = -2147024809;
    }
    else
    {
      v12 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v12 == WPF::ProcessHeapImpl::Alloc )
        v13 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v9);
      else
        v13 = v12(WPF::g_pProcessHeap, v9);
      *v10 = v13;
      if ( !v13 )
        v11 = -2147024882;
    }
    if ( v11 < 0 )
    {
      v32 = 227;
LABEL_20:
      v18 = v11;
LABEL_69:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v32);
      CMeshGeometry2D::UnRegisterNotifiers(this);
      goto LABEL_64;
    }
    memcpy_0(*v10, a4, *((unsigned int *)this + 42));
    v14 = *((unsigned int *)this + 42);
    v7 = a5 - v14;
    a4 += v14;
  }
  *((_DWORD *)this + 46) = v34.m128i_i32[3];
  if ( !v34.m128i_i32[3] )
    goto LABEL_28;
  if ( v34.m128i_i32[3] > v7 || (v34.m128i_i8[12] & 0xF) != 0 )
  {
    v32 = 252;
    goto LABEL_68;
  }
  v15 = (void **)((char *)this + 192);
  v11 = 0;
  if ( this == (CMeshGeometry2D *)-192LL )
  {
    v11 = -2147024809;
  }
  else
  {
    v16 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v16 == WPF::ProcessHeapImpl::Alloc )
      v17 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v34.m128i_u32[3]);
    else
      v17 = v16(WPF::g_pProcessHeap, v34.m128i_u32[3]);
    *v15 = v17;
    if ( !v17 )
      v11 = -2147024882;
  }
  if ( v11 < 0 )
  {
    v32 = 260;
    goto LABEL_20;
  }
  memcpy_0(*v15, a4, *((unsigned int *)this + 46));
  v19 = *((unsigned int *)this + 46);
  v7 -= v19;
  a4 += v19;
LABEL_28:
  *((_DWORD *)this + 50) = v35;
  if ( !(_DWORD)v35 )
    goto LABEL_42;
  if ( (unsigned int)v35 > v7 || (v35 & 3) != 0 )
  {
    v32 = 285;
    goto LABEL_68;
  }
  v20 = (void **)((char *)this + 208);
  v11 = 0;
  if ( this == (CMeshGeometry2D *)-208LL )
  {
    v11 = -2147024809;
  }
  else
  {
    v21 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v21 == WPF::ProcessHeapImpl::Alloc )
      v22 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v35);
    else
      v22 = v21(WPF::g_pProcessHeap, (unsigned int)v35);
    *v20 = v22;
    if ( !v22 )
      v11 = -2147024882;
  }
  if ( v11 < 0 )
  {
    v32 = 293;
    goto LABEL_20;
  }
  memcpy_0(*v20, a4, *((unsigned int *)this + 50));
  v23 = *((unsigned int *)this + 50);
  v7 -= v23;
  a4 += v23;
LABEL_42:
  *((_DWORD *)this + 54) = HIDWORD(v35);
  if ( !HIDWORD(v35) )
    goto LABEL_56;
  if ( HIDWORD(v35) > v7 || (v35 & 0x300000000LL) != 0 )
  {
    v32 = 318;
    goto LABEL_68;
  }
  v24 = (void **)((char *)this + 224);
  v11 = 0;
  if ( this == (CMeshGeometry2D *)-224LL )
  {
    v11 = -2147024809;
  }
  else
  {
    v25 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v25 == WPF::ProcessHeapImpl::Alloc )
      v26 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, HIDWORD(v35));
    else
      v26 = v25(WPF::g_pProcessHeap, HIDWORD(v35));
    *v24 = v26;
    if ( !v26 )
      v11 = -2147024882;
  }
  if ( v11 < 0 )
  {
    v32 = 326;
    goto LABEL_20;
  }
  memcpy_0(*v24, a4, *((unsigned int *)this + 54));
LABEL_56:
  v27 = *((_DWORD *)this + 42) / 0xCu;
  if ( v27 >= *((_DWORD *)this + 50) >> 2 )
    v27 = *((_DWORD *)this + 50) >> 2;
  v28 = (unsigned int *)*((_QWORD *)this + 28);
  if ( v27 >= *((_DWORD *)this + 46) >> 4 )
    v27 = *((_DWORD *)this + 46) >> 4;
  v29 = *((_DWORD *)this + 54) >> 2;
  v30 = 0;
  if ( v29 )
  {
    while ( *v28 < v27 )
    {
      ++v30;
      ++v28;
      if ( v30 >= v29 )
        goto LABEL_63;
    }
    v32 = 356;
    goto LABEL_68;
  }
LABEL_63:
  v11 = 0;
LABEL_64:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v11;
}
