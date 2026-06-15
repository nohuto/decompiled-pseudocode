/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x180011EBC
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x180014E70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180012000 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?GetModuleName@CProcess@@UEAAPEBGXZ @ 0x180028C40 (-GetModuleName@CProcess@@UEAAPEBGXZ.c)
 *     ?GetApplicationId@CProcess@@UEAAPEBGXZ @ 0x18002A260 (-GetApplicationId@CProcess@@UEAAPEBGXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAppAudioSessionId::Initialize(GUID *this, struct IAudioProcess *a2, const struct _GUID *a3, int a4)
{
  unsigned int v7; // ebx
  GUID v8; // xmm0
  const unsigned __int16 *(__fastcall *v9)(CProcess *__hidden); // rsi
  const unsigned __int16 *ApplicationId; // rax
  const unsigned __int16 *(__fastcall *v11)(CProcess *__hidden); // rsi
  const unsigned __int16 *ModuleName; // rax

  if ( a4
    && (!a3
     || *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
     && *(_QWORD *)a3->Data4 == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    v7 = -2147024809;
LABEL_18:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids, v7);
    }
    return v7;
  }
  if ( a3 )
    v8 = *a3;
  else
    v8 = GUID_00000000_0000_0000_0000_000000000000;
  this[1] = v8;
  if ( !a4 )
  {
    v9 = *(const unsigned __int16 *(__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 72LL);
    if ( v9 == CProcess::GetApplicationId )
      ApplicationId = CProcess::GetApplicationId(a2);
    else
      ApplicationId = v9(a2);
    ATL::CSimpleStringT<unsigned short,0>::SetString(this->Data4, ApplicationId);
    v11 = *(const unsigned __int16 *(__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 80LL);
    if ( v11 == CProcess::GetModuleName )
      ModuleName = CProcess::GetModuleName(a2);
    else
      ModuleName = v11(a2);
    ATL::CSimpleStringT<unsigned short,0>::SetString(this, ModuleName);
  }
  *(_DWORD *)this[2].Data4 = a4;
  v7 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)this);
  if ( (v7 & 0x80000000) != 0 )
    goto LABEL_18;
  return v7;
}
