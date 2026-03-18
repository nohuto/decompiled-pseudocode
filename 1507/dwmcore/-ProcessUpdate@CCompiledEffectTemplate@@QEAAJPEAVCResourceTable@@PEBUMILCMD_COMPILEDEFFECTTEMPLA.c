/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1801155E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEAA_NXZ @ 0x18005D520 (-ShouldNotify@CNotificationResource@@IEAA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800DCEA0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800E9808 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1800F8378 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CCompiledEffectTemplate *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  int v3; // esi
  int v6; // edi
  CSharedSection *Resource; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // r14
  int v11; // eax
  int v12; // eax
  struct Windows::UI::Composition::IEffectDescription *v13; // rax
  __int64 v14; // r14
  int v15; // eax
  struct Windows::UI::Composition::IEffectDescription *v16; // rsi
  _DWORD v18[4]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v19; // [rsp+70h] [rbp+20h] BYREF
  BSTR bstrString; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v19 = 0LL;
  if ( *((_QWORD *)this + 6) )
  {
    v6 = -2003303422;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303422, 0x1Du);
  }
  else
  {
    Resource = (CSharedSection *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 82LL);
    if ( Resource )
    {
      v10 = CSharedSection::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
      if ( v10 )
      {
        SetRestrictedErrorInfo(0LL, v8, v9);
        v11 = DeserializeEffectDescription(v10, *((unsigned int *)a3 + 4), &v19);
        v3 = v11;
        v6 = v11;
        if ( v11 >= 0 )
        {
          v12 = CEffectCompilationService::BeginCompile(
                  *(CEffectCompilationService **)(*((_QWORD *)this + 2) + 72LL),
                  this,
                  v19,
                  (PVOID *)this + 7);
          v6 = v12;
          if ( v12 >= 0 )
          {
            v13 = v19;
            v19 = 0LL;
            *((_QWORD *)this + 6) = v13;
            CResource::NotifyOnChanged(this, 0, 0LL);
            v6 = 0;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x33u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x30u);
        }
        if ( v6 >= 0 )
          goto LABEL_21;
      }
      else
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Au);
      }
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x25u);
    }
  }
  if ( (unsigned __int8)CNotificationResource::ShouldNotify(this) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1160LL) + 56LL);
    bstrString = 0LL;
    if ( v3 < 0 )
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
    v18[0] = *((_DWORD *)this + 11);
    v18[1] = *((_DWORD *)this + 10);
    v15 = CoreUICallSend(v14, v18, 4LL, 1LL, &unk_180162B6A);
    v6 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x51u);
    SysFreeString(bstrString);
  }
LABEL_21:
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  return (unsigned int)v6;
}
