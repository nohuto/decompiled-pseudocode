/*
 * XREFs of ?ProcessUpdate@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH@@PEBXI@Z @ 0x180118358
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x18005CB2C (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?RegisterNotifiers@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180118C90 (-RegisterNotifiers@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CLinearGradientBrush@@UEAAXXZ @ 0x180119110 (-UnRegisterNotifiers@CLinearGradientBrush@@UEAAXXZ.c)
 */

__int64 __fastcall CLinearGradientBrush::ProcessUpdate(
        CLinearGradientBrush *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  SIZE_T v6; // rdi
  __m128i v9; // xmm6
  __m128d v10; // xmm7
  __m128i v11; // xmm8
  __m128i v12; // xmm9
  void **v13; // r9
  unsigned int v14; // edx
  __int64 Resource; // rax
  unsigned int v16; // edi
  __int64 v17; // rax
  struct CResourceTable *v18; // rdx
  __int64 v19; // rax
  WPF *v20; // rcx
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-A8h]
  __int64 v24; // [rsp+70h] [rbp-58h]

  v6 = a3[4].m128i_u32[2];
  v9 = a3[3];
  v10 = (__m128d)*a3;
  v11 = a3[1];
  v12 = a3[2];
  v24 = a3[4].m128i_i64[0];
  CLinearGradientBrush::UnRegisterNotifiers(this);
  v14 = _mm_cvtsi128_si32(v9);
  *((_QWORD *)this + 9) = *(_OWORD *)&_mm_unpackhi_pd(v10, v10);
  if ( v14 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v14, 41LL);
    *((_QWORD *)this + 10) = Resource;
    if ( !Resource )
    {
      v16 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xEDBu);
LABEL_22:
      CLinearGradientBrush::UnRegisterNotifiers(this);
      goto LABEL_23;
    }
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( v9.m128i_i32[1] )
  {
    v17 = CResourceTable::GetResource((__int64)a2, v9.m128i_u32[1], 53LL);
    *((_QWORD *)this + 11) = v17;
    if ( !v17 )
    {
      v16 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xEEFu);
      goto LABEL_22;
    }
  }
  else
  {
    *((_QWORD *)this + 11) = 0LL;
  }
  v18 = (struct CResourceTable *)v9.m128i_u32[2];
  if ( v9.m128i_i32[2] )
  {
    v19 = CResourceTable::GetResource((__int64)a2, v9.m128i_u32[2], 53LL);
    *((_QWORD *)this + 12) = v19;
    if ( !v19 )
    {
      v16 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF03u);
      goto LABEL_22;
    }
  }
  else
  {
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 26) = v9.m128i_i32[3];
  *(_QWORD *)((char *)this + 108) = v24;
  *((_DWORD *)this + 29) = v6;
  *((__m128i *)this + 10) = v11;
  *((__m128i *)this + 11) = v12;
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)v6 > a5 || (v20 = (WPF *)(24 * (v6 / 0x18)), (WPF *)v6 != v20) )
    {
      v16 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF20u);
      goto LABEL_22;
    }
    v21 = WPF::HrAlloc(v20, v6, (_QWORD *)this + 15, v13);
    v16 = v21;
    if ( v21 < 0 )
    {
      v23 = 3880;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v23);
      goto LABEL_22;
    }
    memcpy_0(*((void **)this + 15), a4, *((unsigned int *)this + 29));
  }
  v21 = CLinearGradientBrush::RegisterNotifiers(this, v18);
  v16 = v21;
  if ( v21 < 0 )
  {
    v23 = 3891;
    goto LABEL_21;
  }
LABEL_23:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return v16;
}
