/*
 * XREFs of ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x1800137D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x180013B70 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 *     ?RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180013F58 (-RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x1800AB220 (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::ProcessUpdate(
        CLinearGradientLegacyMilBrush *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rdi
  __m128i v9; // xmm6
  __m128d v10; // xmm7
  __m128i v11; // xmm8
  __m128i v12; // xmm9
  void **v13; // r9
  __int64 v14; // rdx
  struct CResourceTable *v15; // rdx
  WPF *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  __int64 Resource; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+20h] [rbp-A8h]
  __int64 v24; // [rsp+70h] [rbp-58h]

  v6 = a3[4].m128i_u32[2];
  v9 = a3[3];
  v10 = (__m128d)*a3;
  v11 = a3[1];
  v12 = a3[2];
  v24 = a3[4].m128i_i64[0];
  CLinearGradientLegacyMilBrush::UnRegisterNotifiers(this);
  v14 = (unsigned int)_mm_cvtsi128_si32(v9);
  *((_QWORD *)this + 9) = *(_OWORD *)&_mm_unpackhi_pd(v10, v10);
  if ( (_DWORD)v14 )
  {
    Resource = CResourceTable::GetResource(a2, v14, 45LL);
    *((_QWORD *)this + 10) = Resource;
    if ( !Resource )
    {
      v18 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xEDDu);
LABEL_24:
      CLinearGradientLegacyMilBrush::UnRegisterNotifiers(this);
      goto LABEL_13;
    }
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( !v9.m128i_i32[1] )
  {
    *((_QWORD *)this + 11) = 0LL;
    goto LABEL_5;
  }
  v21 = CResourceTable::GetResource(a2, v9.m128i_u32[1], 57LL);
  *((_QWORD *)this + 11) = v21;
  if ( !v21 )
  {
    v18 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xEF1u);
    goto LABEL_24;
  }
LABEL_5:
  v15 = (struct CResourceTable *)v9.m128i_u32[2];
  if ( !v9.m128i_i32[2] )
  {
    *((_QWORD *)this + 12) = 0LL;
    goto LABEL_7;
  }
  v22 = CResourceTable::GetResource(a2, v9.m128i_u32[2], 57LL);
  *((_QWORD *)this + 12) = v22;
  if ( !v22 )
  {
    v18 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF05u);
    goto LABEL_24;
  }
LABEL_7:
  *((_DWORD *)this + 26) = v9.m128i_i32[3];
  *(_QWORD *)((char *)this + 108) = v24;
  *((_DWORD *)this + 29) = v6;
  *((__m128i *)this + 10) = v11;
  *((__m128i *)this + 11) = v12;
  if ( !(_DWORD)v6 )
    goto LABEL_12;
  if ( (unsigned int)v6 > a5 || (v16 = (WPF *)(24 * (v6 / 0x18)), (WPF *)v6 != v16) )
  {
    v18 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF22u);
    goto LABEL_24;
  }
  v17 = WPF::HrAlloc(v16, v6, (unsigned __int64)this + 120, v13);
  v18 = v17;
  if ( v17 < 0 )
  {
    v23 = 3882;
LABEL_23:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v23);
    goto LABEL_24;
  }
  memcpy_0(*((void **)this + 15), a4, *((unsigned int *)this + 29));
LABEL_12:
  v17 = CLinearGradientLegacyMilBrush::RegisterNotifiers(this, v15);
  v18 = v17;
  if ( v17 < 0 )
  {
    v23 = 3893;
    goto LABEL_23;
  }
LABEL_13:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v18;
}
