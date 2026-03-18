/*
 * XREFs of ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x180058928
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x180058B70 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 *     ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180058C24 (-RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::ProcessUpdate(
        CSolidColorLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SOLIDCOLORLEGACYMILBRUSH *a3)
{
  unsigned int v4; // esi
  __m128d v6; // xmm6
  __int128 v7; // xmm7
  struct CResourceTable *v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  __int64 Resource; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp-38h]

  v4 = *((_DWORD *)a3 + 10);
  v6 = *(__m128d *)a3;
  v7 = *((_OWORD *)a3 + 1);
  v15 = *((_QWORD *)a3 + 4);
  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  *((_QWORD *)this + 7) = *(_OWORD *)&_mm_unpackhi_pd(v6, v6);
  if ( (_DWORD)v15 )
  {
    Resource = CResourceTable::GetResource(a2, (unsigned int)v15, 45LL);
    *((_QWORD *)this + 8) = Resource;
    if ( !Resource )
    {
      v10 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE5Eu);
LABEL_16:
      CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
      goto LABEL_8;
    }
  }
  else
  {
    *((_QWORD *)this + 8) = 0LL;
  }
  v8 = (struct CResourceTable *)HIDWORD(v15);
  if ( !HIDWORD(v15) )
  {
    *((_QWORD *)this + 9) = 0LL;
    goto LABEL_5;
  }
  v13 = CResourceTable::GetResource(a2, HIDWORD(v15), 57LL);
  *((_QWORD *)this + 9) = v13;
  if ( !v13 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE72u);
    goto LABEL_16;
  }
LABEL_5:
  if ( !v4 )
  {
    *((_QWORD *)this + 10) = 0LL;
    goto LABEL_7;
  }
  v14 = CResourceTable::GetResource(a2, v4, 57LL);
  *((_QWORD *)this + 10) = v14;
  if ( !v14 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE86u);
    goto LABEL_16;
  }
LABEL_7:
  *(_OWORD *)((char *)this + 88) = v7;
  v9 = CSolidColorLegacyMilBrush::RegisterNotifiers(this, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xE91u);
    goto LABEL_16;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v10;
}
