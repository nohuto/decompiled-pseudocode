/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z @ 0x180117E54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x180118FF0 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(struct CResource **this, struct CResourceTable *a2, __m128i *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edx
  __int64 Resource; // rax
  int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __m128i v13; // [rsp+30h] [rbp-18h]

  v3 = a3[1].m128i_u32[0];
  v13 = *a3;
  CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 12));
  *((_DWORD *)this + 28) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 61LL);
    this[15] = (struct CResource *)Resource;
    if ( !Resource )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xD8Eu);
LABEL_15:
      CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
      goto LABEL_16;
    }
  }
  else
  {
    this[15] = 0LL;
  }
  if ( v3 )
  {
    v9 = CResourceTable::GetResource((__int64)a2, v3, 61LL);
    this[16] = (struct CResource *)v9;
    if ( !v9 )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xDA2u);
      goto LABEL_15;
    }
  }
  else
  {
    this[16] = 0LL;
  }
  v10 = CResource::RegisterNotifier((CResource *)this, this[15]);
  v8 = v10;
  if ( v10 >= 0 )
  {
    v11 = CResource::RegisterNotifier((CResource *)this, this[16]);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xDC7u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xDC6u);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xDACu);
    goto LABEL_15;
  }
LABEL_16:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v8;
}
