/*
 * XREFs of ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x18004E500
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
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
  *((_QWORD *)this + 7) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 16) = *((_DWORD *)a3 + 4);
  if ( *((_QWORD *)this + 9) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
    v4 = 1;
  }
  v8 = *((unsigned int *)a3 + 5);
  if ( (_DWORD)v8 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v8, 24LL);
    *((_QWORD *)this + 9) = Resource;
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
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( v4 )
  {
LABEL_10:
    v9 = *((_QWORD *)this + 9);
    v10 = 2LL;
    goto LABEL_7;
  }
  v9 = 0LL;
  v10 = 0LL;
LABEL_7:
  CResource::NotifyOnChanged(this, v10, v9);
  return v3;
}
