/*
 * XREFs of ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180059AE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x18005A470 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x18005A56C (-RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::ProcessUpdate(
        CImageLegacyMilBrush *this,
        struct CResourceTable *a2,
        __m128i *a3)
{
  unsigned __int32 v3; // esi
  __m128i v6; // xmm6
  __m128d v7; // xmm7
  __m128i v8; // xmm8
  __m128i v9; // xmm9
  __int64 v10; // rdx
  struct CResourceTable *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 Resource; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // [rsp+68h] [rbp-39h]
  __m128i v22; // [rsp+88h] [rbp-19h]
  __m128i v23; // [rsp+98h] [rbp-9h]

  v3 = a3[7].m128i_u32[0];
  v6 = a3[4];
  v7 = (__m128d)*a3;
  v8 = a3[1];
  v21 = a3[3];
  v9 = a3[2];
  v22 = a3[5];
  v23 = a3[6];
  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  v10 = (unsigned int)_mm_cvtsi128_si32(v6);
  *((_QWORD *)this + 48) = *(_OWORD *)&_mm_unpackhi_pd(v7, v7);
  if ( (_DWORD)v10 )
  {
    Resource = CResourceTable::GetResource(a2, v10, 45LL);
    *((_QWORD *)this + 49) = Resource;
    if ( !Resource )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF8Bu);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 49) = 0LL;
  }
  if ( v6.m128i_i32[1] )
  {
    v18 = CResourceTable::GetResource(a2, v6.m128i_u32[1], 57LL);
    *((_QWORD *)this + 50) = v18;
    if ( !v18 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF9Fu);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 50) = 0LL;
  }
  if ( v6.m128i_i32[2] )
  {
    v19 = CResourceTable::GetResource(a2, v6.m128i_u32[2], 57LL);
    *((_QWORD *)this + 51) = v19;
    if ( !v19 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xFB3u);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 51) = 0LL;
  }
  *((_DWORD *)this + 104) = v6.m128i_i32[3];
  *((_DWORD *)this + 105) = v22.m128i_i32[0];
  *(__m128i *)((char *)this + 424) = v8;
  if ( !v22.m128i_i32[1] )
  {
    *((_QWORD *)this + 55) = 0LL;
    goto LABEL_9;
  }
  v16 = CResourceTable::GetResource(a2, v22.m128i_u32[1], 49LL);
  *((_QWORD *)this + 55) = v16;
  if ( !v16 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xFC9u);
LABEL_31:
    CImageLegacyMilBrush::UnRegisterNotifiers(this);
    goto LABEL_16;
  }
LABEL_9:
  v11 = (struct CResourceTable *)v22.m128i_u32[2];
  *((__m128i *)this + 28) = v9;
  if ( !v22.m128i_i32[2] )
  {
    *((_QWORD *)this + 58) = 0LL;
    goto LABEL_11;
  }
  v20 = CResourceTable::GetResource(a2, v22.m128i_u32[2], 49LL);
  *((_QWORD *)this + 58) = v20;
  if ( !v20 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xFDDu);
    goto LABEL_31;
  }
LABEL_11:
  *((_DWORD *)this + 118) = v22.m128i_i32[3];
  *(__m128i *)((char *)this + 476) = v23;
  *((__m128i *)this + 31) = v21;
  if ( !v3 )
  {
    *((_QWORD *)this + 64) = 0LL;
    goto LABEL_15;
  }
  v12 = CResourceTable::GetResource(a2, v3, 55LL);
  if ( v12 )
    v12 -= 16LL;
  *((_QWORD *)this + 64) = v12;
  if ( !v12 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xFF8u);
    goto LABEL_31;
  }
LABEL_15:
  v13 = CImageLegacyMilBrush::RegisterNotifiers(this, v11);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1002u);
    goto LABEL_31;
  }
LABEL_16:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v14;
}
