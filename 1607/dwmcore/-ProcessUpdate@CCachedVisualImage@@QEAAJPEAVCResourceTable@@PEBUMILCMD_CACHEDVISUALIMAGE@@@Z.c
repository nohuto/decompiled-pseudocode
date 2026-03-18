/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x180033F7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x180033798 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800339D0 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE *a3)
{
  struct CResource **v3; // rbp
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  struct CResource *v11; // rdx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // eax
  __int64 Resource; // rax
  __int64 v18; // rax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-18h]

  v3 = (struct CResource **)((char *)this + 16);
  CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this + 2);
  *((_OWORD *)this + 9) = *(_OWORD *)((char *)a3 + 8);
  v7 = *((unsigned int *)a3 + 10);
  if ( (_DWORD)v7 )
  {
    Resource = CResourceTable::GetResource(a2, v7, 50LL);
    *((_QWORD *)this + 20) = Resource;
    if ( !Resource )
    {
      v20 = 96;
LABEL_22:
      v19 = -2003303421;
      v13 = -2003303421;
LABEL_27:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v20);
      CCachedVisualImage::UnRegisterNotifiers(v3);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 20) = 0LL;
  }
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 24);
  v8 = *((unsigned int *)a3 + 11);
  if ( !(_DWORD)v8 )
  {
    *((_QWORD *)this + 23) = 0LL;
    goto LABEL_5;
  }
  v18 = CResourceTable::GetResource(a2, v8, 51LL);
  *((_QWORD *)this + 23) = v18;
  if ( !v18 )
  {
    v20 = 116;
    goto LABEL_22;
  }
LABEL_5:
  v9 = *((unsigned int *)a3 + 12);
  if ( !(_DWORD)v9 )
  {
    *((_QWORD *)this + 24) = 0LL;
    goto LABEL_11;
  }
  v10 = CResourceTable::GetResource(a2, v9, 32LL);
  *((_QWORD *)this + 24) = v10;
  if ( !v10 )
  {
    v20 = 135;
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 371) )
  {
    *((_BYTE *)this + 371) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
  if ( *((_BYTE *)this + 368) )
  {
    *((_BYTE *)this + 368) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
LABEL_11:
  v11 = (struct CResource *)*((_QWORD *)this + 24);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 51) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 15);
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 16);
  v12 = CResource::RegisterNotifier((CResource *)v3, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC1u);
  }
  else
  {
    v14 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 20));
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC2u);
    }
    else
    {
      v15 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 23));
      v13 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC3u);
    }
  }
  if ( v13 < 0 )
  {
    v20 = 162;
    v19 = v13;
    goto LABEL_27;
  }
LABEL_16:
  CResource::NotifyOnChanged(v3, 0LL, 0LL);
  return (unsigned int)v13;
}
