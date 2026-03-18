/*
 * XREFs of ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x180017904
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180017574 (-RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1800177F0 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::ProcessUpdate(
        CLinearGradientLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_LINEARGRADIENTLEGACYMILBRUSH *a3,
        const void *a4,
        unsigned int a5)
{
  __m128d v8; // xmm6
  __m128i v9; // xmm7
  __int64 v10; // rdx
  struct CResourceTable *v11; // rdx
  void **v12; // rsi
  int v13; // edi
  void *(__fastcall *v14)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v15; // rax
  int v16; // eax
  __int64 Resource; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v21[44]; // [rsp+58h] [rbp-1h]

  v8 = *(__m128d *)a3;
  v9 = *((__m128i *)a3 + 1);
  *(_OWORD *)v21 = *((_OWORD *)a3 + 2);
  *(_QWORD *)&v21[32] = *((_QWORD *)a3 + 8);
  *(_OWORD *)&v21[16] = *((_OWORD *)a3 + 3);
  *(_DWORD *)&v21[40] = *((_DWORD *)a3 + 18);
  CLinearGradientLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
  v10 = (unsigned int)_mm_cvtsi128_si32(v9);
  *((_QWORD *)this + 18) = *(_OWORD *)&_mm_unpackhi_pd(v8, v8);
  if ( (_DWORD)v10 )
  {
    Resource = CResourceTable::GetResource(a2, v10, 46LL);
    *((_QWORD *)this + 19) = Resource;
    if ( !Resource )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE93u);
LABEL_30:
      CLinearGradientLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
      goto LABEL_18;
    }
  }
  else
  {
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( !v9.m128i_i32[1] )
  {
    *((_QWORD *)this + 20) = 0LL;
    goto LABEL_5;
  }
  v19 = CResourceTable::GetResource(a2, v9.m128i_u32[1], 58LL);
  *((_QWORD *)this + 20) = v19;
  if ( !v19 )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xEA7u);
    goto LABEL_30;
  }
LABEL_5:
  v11 = (struct CResourceTable *)v9.m128i_u32[2];
  if ( !v9.m128i_i32[2] )
  {
    *((_QWORD *)this + 21) = 0LL;
    goto LABEL_7;
  }
  v20 = CResourceTable::GetResource(a2, v9.m128i_u32[2], 58LL);
  *((_QWORD *)this + 21) = v20;
  if ( !v20 )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xEBBu);
    goto LABEL_30;
  }
LABEL_7:
  *((_DWORD *)this + 44) = v9.m128i_i32[3];
  *(_QWORD *)((char *)this + 180) = *(_QWORD *)v21;
  *((_DWORD *)this + 47) = *(_DWORD *)&v21[8];
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)&v21[12];
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)&v21[28];
  if ( !*(_DWORD *)&v21[8] )
    goto LABEL_17;
  if ( *(_DWORD *)&v21[8] > a5 || *(unsigned int *)&v21[8] != 24 * (*(unsigned int *)&v21[8] / 0x18uLL) )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xED8u);
    goto LABEL_30;
  }
  v12 = (void **)((char *)this + 192);
  v13 = 0;
  if ( this == (CLinearGradientLegacyMilBrush *)-192LL )
  {
    v13 = -2147024809;
  }
  else
  {
    v14 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v14 == WPF::ProcessHeapImpl::Alloc )
      v15 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, *(unsigned int *)&v21[8]);
    else
      v15 = v14(WPF::g_pProcessHeap, *(unsigned int *)&v21[8]);
    *v12 = v15;
    if ( !v15 )
      v13 = -2147024882;
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xEE0u);
    goto LABEL_30;
  }
  memcpy_0(*v12, a4, *((unsigned int *)this + 47));
LABEL_17:
  v16 = CLinearGradientLegacyMilBrush::RegisterNotifiers((struct CResource **)this, v11);
  v13 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xEEBu);
    goto LABEL_30;
  }
LABEL_18:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v13;
}
