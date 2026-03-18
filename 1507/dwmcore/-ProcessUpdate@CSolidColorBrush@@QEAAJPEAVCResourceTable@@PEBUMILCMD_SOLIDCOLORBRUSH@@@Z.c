/*
 * XREFs of ?ProcessUpdate@CSolidColorBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORBRUSH@@@Z @ 0x180083F24
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CSolidColorBrush@@UEAAXXZ @ 0x180083E10 (-UnRegisterNotifiers@CSolidColorBrush@@UEAAXXZ.c)
 *     ?RegisterNotifiers@CSolidColorBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180083EC4 (-RegisterNotifiers@CSolidColorBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 */

__int64 __fastcall CSolidColorBrush::ProcessUpdate(
        CSolidColorBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SOLIDCOLORBRUSH *a3)
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
  CSolidColorBrush::UnRegisterNotifiers((struct CResource **)this);
  *((_QWORD *)this + 7) = *(_OWORD *)&_mm_unpackhi_pd(v6, v6);
  if ( (_DWORD)v15 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v15, 41LL);
    *((_QWORD *)this + 8) = Resource;
    if ( !Resource )
    {
      v10 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE5Cu);
LABEL_16:
      CSolidColorBrush::UnRegisterNotifiers((struct CResource **)this);
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
  v13 = CResourceTable::GetResource((__int64)a2, HIDWORD(v15), 53LL);
  *((_QWORD *)this + 9) = v13;
  if ( !v13 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE70u);
    goto LABEL_16;
  }
LABEL_5:
  if ( !v4 )
  {
    *((_QWORD *)this + 10) = 0LL;
    goto LABEL_7;
  }
  v14 = CResourceTable::GetResource((__int64)a2, v4, 53LL);
  *((_QWORD *)this + 10) = v14;
  if ( !v14 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xE84u);
    goto LABEL_16;
  }
LABEL_7:
  *(_OWORD *)((char *)this + 88) = v7;
  v9 = CSolidColorBrush::RegisterNotifiers((struct CResource **)this, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xE8Fu);
    goto LABEL_16;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return v10;
}
