/*
 * XREFs of ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x18003C830
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CEffectGroup::ProcessUpdate(
        CEffectGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTGROUP *a3)
{
  unsigned int v3; // edi
  char v4; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  struct CResource *Resource; // rax
  int v13; // eax

  v3 = 0;
  v4 = 0;
  *((_QWORD *)this + 5) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 12) = *((_DWORD *)a3 + 4);
  if ( *((_QWORD *)this + 7) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
    *((_QWORD *)this + 7) = 0LL;
    v4 = 1;
  }
  v8 = *((unsigned int *)a3 + 5);
  if ( (_DWORD)v8 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v8, 24LL);
    *((_QWORD *)this + 7) = Resource;
    if ( Resource )
    {
      v13 = CResource::RegisterNotifier(this, Resource);
      v3 = v13;
      if ( v13 >= 0 )
        goto LABEL_10;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2Fu);
    }
    else
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2Bu);
    }
  }
  else
  {
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( v4 )
  {
LABEL_10:
    v9 = *((_QWORD *)this + 7);
    v10 = 2LL;
    goto LABEL_7;
  }
  v9 = 0LL;
  v10 = 0LL;
LABEL_7:
  CResource::NotifyOnChanged(this, v10, v9);
  return v3;
}
