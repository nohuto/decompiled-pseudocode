/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z @ 0x180020418
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x180020240 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(struct CResource **this, struct CResourceTable *a2, __m128i *a3)
{
  unsigned __int32 v3; // ebx
  __int64 v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  __m128i v13; // [rsp+30h] [rbp-18h]

  v3 = a3[1].m128i_u32[0];
  v13 = *a3;
  CCombinedGeometry::UnRegisterNotifiers(this);
  v6 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 12));
  *((_DWORD *)this + 50) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 66LL);
    this[26] = (struct CResource *)Resource;
    if ( !Resource )
    {
      v10 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xD46u);
      goto LABEL_16;
    }
  }
  else
  {
    this[26] = 0LL;
  }
  if ( v3 )
  {
    v8 = CResourceTable::GetResource(a2, v3, 66LL);
    this[27] = (struct CResource *)v8;
    if ( v8 )
      goto LABEL_5;
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xD5Au);
LABEL_16:
    CCombinedGeometry::UnRegisterNotifiers(this);
    goto LABEL_9;
  }
  this[27] = 0LL;
LABEL_5:
  v9 = CResource::RegisterNotifier((CResource *)this, this[26]);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xD7Eu);
  }
  else
  {
    v11 = CResource::RegisterNotifier((CResource *)this, this[27]);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xD7Fu);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xD64u);
    goto LABEL_16;
  }
LABEL_9:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
