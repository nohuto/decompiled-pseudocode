/*
 * XREFs of ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18008368C
 * Callers:
 *     ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180065164 (-GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_i.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x18007F618 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800851CC (-SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall GetProcessingModeSpecificDevicePipeFormatKey(struct _GUID *a1, int a2, struct _tagpropertykey *a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  _QWORD *v8; // rdx
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD *))(*(_QWORD *)g_PolicyManager + 80LL))(
         g_PolicyManager,
         v10);
  v7 = 0;
  if ( v6 >= 0 )
  {
    while ( v7 < *(_DWORD *)v10[0] )
    {
      v8 = (_QWORD *)(*(_QWORD *)(v10[0] + 8LL) + 16LL * v7);
      if ( *v8 == *(_QWORD *)&a1->Data1 && v8[1] == *(_QWORD *)a1->Data4 )
      {
        a3->pid = v7 + (a2 != 0 ? 602 : 2);
        result = 0LL;
        a3->fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
        return result;
      }
      ++v7;
    }
  }
  return 2147943568LL;
}
