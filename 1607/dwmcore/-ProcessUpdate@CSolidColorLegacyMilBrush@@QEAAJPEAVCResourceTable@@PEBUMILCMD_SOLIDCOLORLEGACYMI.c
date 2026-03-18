/*
 * XREFs of ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x180031B70
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x180031A40 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 *     ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180031B08 (-RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::ProcessUpdate(
        struct CResource **this,
        struct CResourceTable *a2,
        __m128i *a3)
{
  __m128i v3; // xmm1
  __m128d v6; // xmm6
  __int64 v7; // rdx
  struct CResourceTable *v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  __int64 Resource; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // [rsp+4Ch] [rbp-3Ch]

  v3 = a3[1];
  v6 = (__m128d)*a3;
  LODWORD(v15) = v3.m128i_i32[3];
  *(_QWORD *)((char *)&v15 + 4) = a3[2].m128i_i64[0];
  HIDWORD(v15) = a3[2].m128i_i32[2];
  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  v7 = (unsigned int)_mm_cvtsi128_si32(v3);
  this[16] = (struct CResource *)*(_OWORD *)&_mm_unpackhi_pd(v6, v6);
  if ( (_DWORD)v7 )
  {
    Resource = CResourceTable::GetResource(a2, v7, 46LL);
    this[17] = (struct CResource *)Resource;
    if ( !Resource )
    {
      v10 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE14u);
LABEL_16:
      CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
      goto LABEL_8;
    }
  }
  else
  {
    this[17] = 0LL;
  }
  if ( !v3.m128i_i32[1] )
  {
    this[18] = 0LL;
    goto LABEL_5;
  }
  v13 = CResourceTable::GetResource(a2, v3.m128i_u32[1], 58LL);
  this[18] = (struct CResource *)v13;
  if ( !v13 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE28u);
    goto LABEL_16;
  }
LABEL_5:
  v8 = (struct CResourceTable *)v3.m128i_u32[2];
  if ( !v3.m128i_i32[2] )
  {
    this[19] = 0LL;
    goto LABEL_7;
  }
  v14 = CResourceTable::GetResource(a2, v3.m128i_u32[2], 58LL);
  this[19] = (struct CResource *)v14;
  if ( !v14 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE3Cu);
    goto LABEL_16;
  }
LABEL_7:
  *((_OWORD *)this + 10) = v15;
  v9 = CSolidColorLegacyMilBrush::RegisterNotifiers(this, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xE47u);
    goto LABEL_16;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v10;
}
