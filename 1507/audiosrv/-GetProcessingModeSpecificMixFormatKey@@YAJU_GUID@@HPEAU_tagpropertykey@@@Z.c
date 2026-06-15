/*
 * XREFs of ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180034A84
 * Callers:
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180034840 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x180084BB8 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?GetSupportedModes@CWindowsPolicyManager@@UEAAJPEAPEBUModeList@@@Z @ 0x180021E20 (-GetSupportedModes@CWindowsPolicyManager@@UEAAJPEAPEBUModeList@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall GetProcessingModeSpecificMixFormatKey(struct _GUID *a1, int a2, struct _tagpropertykey *a3)
{
  __int64 (__fastcall *v6)(CWindowsPolicyManager *, const struct ModeList **); // rdi
  int SupportedModes; // eax
  unsigned int v8; // ecx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  const struct ModeList *v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v12[0] = 0LL;
  v6 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, const struct ModeList **))(*(_QWORD *)g_PolicyManager + 80LL);
  if ( v6 == CWindowsPolicyManager::GetSupportedModes )
    SupportedModes = CWindowsPolicyManager::GetSupportedModes(g_PolicyManager, v12);
  else
    SupportedModes = v6(g_PolicyManager, v12);
  v8 = 0;
  if ( SupportedModes >= 0 )
  {
    while ( v8 < *(_DWORD *)v12[0] )
    {
      v9 = (_QWORD *)(*((_QWORD *)v12[0] + 1) + 16LL * v8);
      v10 = *v9 - *(_QWORD *)&a1->Data1;
      if ( *v9 == *(_QWORD *)&a1->Data1 )
        v10 = v9[1] - *(_QWORD *)a1->Data4;
      if ( !v10 )
      {
        a3->pid = v8 + (a2 != 0 ? 602 : 2);
        result = 0LL;
        a3->fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
        return result;
      }
      ++v8;
    }
  }
  return 2147943568LL;
}
