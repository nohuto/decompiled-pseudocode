/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18005A950
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18005B308 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x18005B550 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE *a3)
{
  CCachedVisualImage *v3; // rsi
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

  v3 = (CCachedVisualImage *)((char *)this + 16);
  CCachedVisualImage::UnRegisterNotifiers((CCachedVisualImage *)((char *)this + 16));
  *((_OWORD *)this + 4) = *(_OWORD *)((char *)a3 + 8);
  v7 = *((unsigned int *)a3 + 10);
  if ( (_DWORD)v7 )
  {
    Resource = CResourceTable::GetResource(a2, v7, 49LL);
    *((_QWORD *)this + 10) = Resource;
    if ( !Resource )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x5Eu);
LABEL_26:
      CCachedVisualImage::UnRegisterNotifiers(v3);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
  }
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a3 + 24);
  v8 = *((unsigned int *)a3 + 11);
  if ( !(_DWORD)v8 )
  {
    *((_QWORD *)this + 13) = 0LL;
    goto LABEL_5;
  }
  v18 = CResourceTable::GetResource(a2, v8, 50LL);
  *((_QWORD *)this + 13) = v18;
  if ( !v18 )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x72u);
    goto LABEL_26;
  }
LABEL_5:
  v9 = *((unsigned int *)a3 + 12);
  if ( !(_DWORD)v9 )
  {
    *((_QWORD *)this + 14) = 0LL;
    goto LABEL_11;
  }
  v10 = CResourceTable::GetResource(a2, v9, 31LL);
  *((_QWORD *)this + 14) = v10;
  if ( !v10 )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x85u);
    goto LABEL_26;
  }
  if ( *((_BYTE *)this + 283) )
  {
    *((_BYTE *)this + 283) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
  if ( *((_BYTE *)this + 280) )
  {
    *((_BYTE *)this + 280) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
LABEL_11:
  v11 = (struct CResource *)*((_QWORD *)this + 14);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 15);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 16);
  v12 = CResource::RegisterNotifier(v3, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xBFu);
  }
  else
  {
    v14 = CResource::RegisterNotifier(v3, *((struct CResource **)this + 10));
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
    }
    else
    {
      v15 = CResource::RegisterNotifier(v3, *((struct CResource **)this + 13));
      v13 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC1u);
    }
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA0u);
    goto LABEL_26;
  }
LABEL_16:
  CResource::NotifyOnChanged(v3, 0LL, 0LL);
  return (unsigned int)v13;
}
