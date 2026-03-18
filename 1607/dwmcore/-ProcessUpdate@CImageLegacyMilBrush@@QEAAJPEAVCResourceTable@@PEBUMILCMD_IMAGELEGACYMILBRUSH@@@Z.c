/*
 * XREFs of ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180032A6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1800321B4 (-RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x180032880 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::ProcessUpdate(
        CImageLegacyMilBrush *this,
        struct CResourceTable *a2,
        __m128i *a3)
{
  unsigned __int32 v3; // esi
  __m128d v6; // xmm6
  __m128i v7; // xmm7
  __int64 v8; // rdx
  struct CResourceTable *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 Resource; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[48]; // [rsp+58h] [rbp-29h]
  __m128i v20; // [rsp+88h] [rbp+7h]
  __m128i v21; // [rsp+98h] [rbp+17h]

  v3 = a3[7].m128i_u32[0];
  *(__m128i *)v19 = a3[2];
  v6 = (__m128d)*a3;
  *(__m128i *)&v19[32] = a3[4];
  v7 = a3[1];
  *(__m128i *)&v19[16] = a3[3];
  v21 = a3[6];
  v20 = a3[5];
  CImageLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
  v8 = (unsigned int)_mm_cvtsi128_si32(v7);
  *((_QWORD *)this + 58) = *(_OWORD *)&_mm_unpackhi_pd(v6, v6);
  if ( (_DWORD)v8 )
  {
    Resource = CResourceTable::GetResource(a2, v8, 46LL);
    *((_QWORD *)this + 59) = Resource;
    if ( !Resource )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF3Du);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 59) = 0LL;
  }
  if ( v7.m128i_i32[1] )
  {
    v16 = CResourceTable::GetResource(a2, v7.m128i_u32[1], 58LL);
    *((_QWORD *)this + 60) = v16;
    if ( !v16 )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF51u);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 60) = 0LL;
  }
  if ( v7.m128i_i32[2] )
  {
    v17 = CResourceTable::GetResource(a2, v7.m128i_u32[2], 58LL);
    *((_QWORD *)this + 61) = v17;
    if ( !v17 )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF65u);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 61) = 0LL;
  }
  *((_DWORD *)this + 124) = v7.m128i_i32[3];
  *((_DWORD *)this + 125) = *(_DWORD *)v19;
  *(_OWORD *)((char *)this + 504) = *(_OWORD *)&v19[4];
  if ( !*(_DWORD *)&v19[20] )
  {
    *((_QWORD *)this + 65) = 0LL;
    goto LABEL_9;
  }
  v14 = CResourceTable::GetResource(a2, *(unsigned int *)&v19[20], 50LL);
  *((_QWORD *)this + 65) = v14;
  if ( !v14 )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF7Bu);
LABEL_31:
    CImageLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
    goto LABEL_16;
  }
LABEL_9:
  v9 = (struct CResourceTable *)*(unsigned int *)&v19[40];
  *((_OWORD *)this + 33) = *(_OWORD *)&v19[24];
  if ( !*(_DWORD *)&v19[40] )
  {
    *((_QWORD *)this + 68) = 0LL;
    goto LABEL_11;
  }
  v18 = CResourceTable::GetResource(a2, *(unsigned int *)&v19[40], 50LL);
  *((_QWORD *)this + 68) = v18;
  if ( !v18 )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF8Fu);
    goto LABEL_31;
  }
LABEL_11:
  *((_DWORD *)this + 138) = *(_DWORD *)&v19[44];
  *(__m128i *)((char *)this + 556) = v20;
  *((__m128i *)this + 36) = v21;
  if ( !v3 )
  {
    *((_QWORD *)this + 74) = 0LL;
    goto LABEL_15;
  }
  v10 = CResourceTable::GetResource(a2, v3, 56LL);
  if ( v10 )
    v10 -= 16LL;
  *((_QWORD *)this + 74) = v10;
  if ( !v10 )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xFAAu);
    goto LABEL_31;
  }
LABEL_15:
  v11 = CImageLegacyMilBrush::RegisterNotifiers((struct CResource **)this, v9);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xFB4u);
    goto LABEL_31;
  }
LABEL_16:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v12;
}
