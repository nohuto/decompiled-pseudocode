/*
 * XREFs of ?ClearMixFormats@CPolicyConfig@@SAJPEBG@Z @ 0x180084E40
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x180084BB8 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::ClearMixFormats(const unsigned __int16 *a1)
{
  struct IMMDevice *v1; // rbx
  int v2; // esi
  struct IMMDevice *v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                          + 40LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           a1,
           &v4);
    if ( v2 >= 0 )
    {
      v2 = CPolicyConfig::ClearMixFormats(v4);
      if ( v2 >= 0 )
        goto LABEL_10;
    }
    v1 = v4;
  }
  else
  {
    v2 = -2147467261;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Bu,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v2);
LABEL_10:
    v1 = v4;
  }
  if ( v1 )
    ((void (__fastcall *)(struct IMMDevice *))v1->lpVtbl->Release)(v1);
  return (unsigned int)v2;
}
