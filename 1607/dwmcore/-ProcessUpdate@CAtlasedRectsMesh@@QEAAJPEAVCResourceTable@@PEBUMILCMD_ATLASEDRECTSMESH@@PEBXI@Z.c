/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x18009CE1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ @ 0x18009CA20 (-UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessUpdate(
        CAtlasedRectsMesh *this,
        struct CResourceTable *a2,
        __m128i *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v7; // esi
  unsigned int v8; // eax
  void **v9; // r14
  SIZE_T v10; // rdx
  int v11; // ebx
  LPVOID (__fastcall *v12)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v13; // rax
  __int64 v14; // rax
  void **v15; // r14
  LPVOID (__fastcall *v16)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v17; // rax
  __int64 v18; // rax
  void **v19; // rsi
  LPVOID (__fastcall *v20)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v21; // rax
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-58h]
  __m128i v25; // [rsp+30h] [rbp-48h]
  unsigned __int64 v26; // [rsp+50h] [rbp-28h]

  v25 = *a3;
  v26 = a3[1].m128i_u64[0];
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  v7 = a5;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 12));
  *((_DWORD *)this + 54) = _mm_cvtsi128_si32(_mm_srli_si128(v25, 8));
  *((_DWORD *)this + 55) = v8;
  if ( v8 )
  {
    if ( v8 > a5 || (v8 & 0xF) != 0 )
    {
      v24 = 560;
      goto LABEL_46;
    }
    v9 = (void **)((char *)this + 224);
    v10 = v8;
    v11 = 0;
    if ( this == (CAtlasedRectsMesh *)-224LL )
    {
      v11 = -2147024809;
    }
    else
    {
      v12 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v12 == WPF::ProcessHeapImpl::Alloc )
        v13 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v10);
      else
        v13 = v12(WPF::g_pProcessHeap, v10);
      *v9 = v13;
      if ( !v13 )
        v11 = -2147024882;
    }
    if ( v11 < 0 )
    {
      v24 = 568;
LABEL_39:
      v23 = v11;
LABEL_47:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v24);
      CAtlasedRectsMesh::UnRegisterNotifiers(this);
      goto LABEL_32;
    }
    memcpy_0(*v9, a4, *((unsigned int *)this + 55));
    v14 = *((unsigned int *)this + 55);
    v7 = a5 - v14;
    a4 += v14;
  }
  *((_DWORD *)this + 58) = v26;
  if ( !(_DWORD)v26 )
    goto LABEL_21;
  if ( (unsigned int)v26 > v7 || (v26 & 0xF) != 0 )
  {
    v24 = 593;
    goto LABEL_46;
  }
  v15 = (void **)((char *)this + 240);
  v11 = 0;
  if ( this == (CAtlasedRectsMesh *)-240LL )
  {
    v11 = -2147024809;
  }
  else
  {
    v16 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v16 == WPF::ProcessHeapImpl::Alloc )
      v17 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v26);
    else
      v17 = v16(WPF::g_pProcessHeap, (unsigned int)v26);
    *v15 = v17;
    if ( !v17 )
      v11 = -2147024882;
  }
  if ( v11 < 0 )
  {
    v24 = 601;
    goto LABEL_39;
  }
  memcpy_0(*v15, a4, *((unsigned int *)this + 58));
  v18 = *((unsigned int *)this + 58);
  v7 -= v18;
  a4 += v18;
LABEL_21:
  *((_DWORD *)this + 62) = HIDWORD(v26);
  if ( HIDWORD(v26) )
  {
    if ( HIDWORD(v26) <= v7 && (v26 & 0x300000000LL) == 0 )
    {
      v19 = (void **)((char *)this + 256);
      v11 = 0;
      if ( this == (CAtlasedRectsMesh *)-256LL )
      {
        v11 = -2147024809;
      }
      else
      {
        v20 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( v20 == WPF::ProcessHeapImpl::Alloc )
          v21 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, HIDWORD(v26));
        else
          v21 = v20(WPF::g_pProcessHeap, HIDWORD(v26));
        *v19 = v21;
        if ( !v21 )
          v11 = -2147024882;
      }
      if ( v11 >= 0 )
      {
        memcpy_0(*v19, a4, *((unsigned int *)this + 62));
        goto LABEL_31;
      }
      v24 = 634;
      goto LABEL_39;
    }
    v24 = 626;
LABEL_46:
    v23 = -2003303421;
    v11 = -2003303421;
    goto LABEL_47;
  }
LABEL_31:
  v11 = 0;
LABEL_32:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v11;
}
