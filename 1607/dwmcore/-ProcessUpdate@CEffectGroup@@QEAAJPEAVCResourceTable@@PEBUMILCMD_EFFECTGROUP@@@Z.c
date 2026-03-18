/*
 * XREFs of ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x180055F58
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CEffectGroup::ProcessUpdate(
        CEffectGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTGROUP *a3)
{
  unsigned int v3; // edi
  char v4; // bp
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rdx
  struct CResource *Resource; // rax
  int v13; // eax

  v3 = 0;
  v4 = 0;
  *((_QWORD *)this + 17) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 4);
  if ( *((_QWORD *)this + 19) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    v4 = 1;
  }
  v8 = *((_DWORD *)a3 + 5);
  if ( v8 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v8, 0x18u);
    *((_QWORD *)this + 19) = Resource;
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
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( v4 )
  {
LABEL_10:
    v9 = *((_QWORD *)this + 19);
    v10 = 2LL;
    goto LABEL_7;
  }
  v9 = 0LL;
  v10 = 0LL;
LABEL_7:
  CResource::NotifyOnChanged(this, v10, v9);
  return v3;
}
