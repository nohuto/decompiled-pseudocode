/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18010ACE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800241F0 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800B0084 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18011BC14 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x18012A9A4 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CCompiledEffectTemplate *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  int v3; // esi
  unsigned int v6; // ebx
  int v7; // r9d
  CSharedSection *Resource; // rax
  void *v9; // r14
  int v10; // eax
  struct Windows::UI::Composition::IEffectDescription *v11; // rax
  int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // eax
  struct Windows::UI::Composition::IEffectDescription *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-30h]
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v21; // [rsp+70h] [rbp+20h] BYREF
  BSTR bstrString; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v21 = 0LL;
  if ( *((_QWORD *)this + 16) )
  {
    v6 = -2003303422;
    v19 = 31;
LABEL_3:
    v7 = v6;
    goto LABEL_14;
  }
  Resource = (CSharedSection *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x5Fu);
  if ( !Resource )
  {
    v6 = -2003303421;
    v19 = 39;
    goto LABEL_3;
  }
  v9 = CSharedSection::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
  if ( !v9 )
  {
    v6 = -2147024882;
    v19 = 44;
    goto LABEL_3;
  }
  SetRestrictedErrorInfo(0LL);
  v10 = DeserializeEffectDescription(v9, *((unsigned int *)a3 + 4), &v21);
  v3 = v10;
  v6 = v10;
  if ( v10 < 0 )
  {
    v19 = 50;
  }
  else
  {
    v10 = CEffectCompilationService::BeginCompile(
            *(CEffectCompilationService **)(*((_QWORD *)this + 2) + 72LL),
            this,
            v21,
            (struct CEffectCompilationTask **)this + 17);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v11 = v21;
      v21 = 0LL;
      *((_QWORD *)this + 16) = v11;
      CResource::NotifyOnChanged(this, 0, 0LL);
      v6 = 0;
      goto LABEL_23;
    }
    v19 = 53;
  }
  v7 = v10;
LABEL_14:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v19);
  if ( (unsigned __int8)CNotificationResource::ShouldNotify(this) )
  {
    v12 = -2147467259;
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1232LL) + 56LL);
    bstrString = 0LL;
    if ( v3 < 0 )
    {
      v12 = v3;
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
    }
    v14 = *((_QWORD *)this + 14);
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 52);
    else
      v15 = 0;
    v20[0] = v15;
    v20[1] = *((unsigned int *)this + 30);
    v16 = CoreUICallSend(v13, v20, 2LL, 3LL, 1, &unk_1801AD3AA, v12);
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x53u);
    SysFreeString(bstrString);
  }
LABEL_23:
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  return v6;
}
