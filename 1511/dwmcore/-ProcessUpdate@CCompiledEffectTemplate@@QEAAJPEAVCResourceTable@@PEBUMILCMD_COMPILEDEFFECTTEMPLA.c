/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800F8828
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEAA_NXZ @ 0x180065004 (-ShouldNotify@CNotificationResource@@IEAA_NXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800F92C0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180105788 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1801126F8 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CCompiledEffectTemplate *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  int v3; // esi
  int v6; // edi
  CSharedSection *Resource; // rax
  void *v8; // r14
  int v9; // eax
  int v10; // eax
  struct Windows::UI::Composition::IEffectDescription *v11; // rax
  int v12; // edi
  __int64 v13; // r14
  int v14; // eax
  struct Windows::UI::Composition::IEffectDescription *v15; // rsi
  _DWORD v17[4]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v18; // [rsp+70h] [rbp+20h] BYREF
  BSTR bstrString; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v18 = 0LL;
  if ( *((_QWORD *)this + 6) )
  {
    v6 = -2003303422;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303422, 0x1Fu);
  }
  else
  {
    Resource = (CSharedSection *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x5Au);
    if ( Resource )
    {
      v8 = CSharedSection::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
      if ( v8 )
      {
        SetRestrictedErrorInfo(0LL);
        v9 = DeserializeEffectDescription(v8, *((unsigned int *)a3 + 4), &v18);
        v3 = v9;
        v6 = v9;
        if ( v9 >= 0 )
        {
          v10 = CEffectCompilationService::BeginCompile(
                  *(CEffectCompilationService **)(*((_QWORD *)this + 2) + 72LL),
                  this,
                  v18,
                  (struct CEffectCompilationTask **)this + 7);
          v6 = v10;
          if ( v10 >= 0 )
          {
            v11 = v18;
            v18 = 0LL;
            *((_QWORD *)this + 6) = v11;
            CResource::NotifyOnChanged(this, 0, 0LL);
            v6 = 0;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x35u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x32u);
        }
        if ( v6 >= 0 )
          goto LABEL_21;
      }
      else
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Cu);
      }
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x27u);
    }
  }
  if ( (unsigned __int8)CNotificationResource::ShouldNotify(this) )
  {
    v12 = -2147467259;
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1128LL) + 56LL);
    bstrString = 0LL;
    if ( v3 < 0 )
    {
      v12 = v3;
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
    }
    v17[0] = *((_DWORD *)this + 11);
    v17[1] = *((_DWORD *)this + 10);
    v14 = CoreUICallSend(v13, v17, 4LL, 1LL, &unk_18016DC48, v12);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x53u);
    SysFreeString(bstrString);
  }
LABEL_21:
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  return (unsigned int)v6;
}
