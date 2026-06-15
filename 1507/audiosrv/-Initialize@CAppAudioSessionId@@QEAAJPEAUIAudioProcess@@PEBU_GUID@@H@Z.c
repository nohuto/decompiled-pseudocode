/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18000CE44
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18000BE18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18000CF40 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?GetModuleName@CProcess@@UEAAPEBGXZ @ 0x180010E90 (-GetModuleName@CProcess@@UEAAPEBGXZ.c)
 *     ?GetApplicationId@CProcess@@UEAAPEBGXZ @ 0x180012240 (-GetApplicationId@CProcess@@UEAAPEBGXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAppAudioSessionId::Initialize(GUID *this, struct IAudioProcess *a2, const struct _GUID *a3, int a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  GUID v9; // xmm0
  const unsigned __int16 *(__fastcall *v11)(CProcess *__hidden); // rsi
  const unsigned __int16 *ApplicationId; // rax
  const unsigned __int16 *(__fastcall *v13)(CProcess *__hidden); // rsi
  const unsigned __int16 *ModuleName; // rax

  if ( a4 )
  {
    if ( !a3 )
      goto LABEL_6;
    v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v7 )
    {
LABEL_6:
      v8 = -2147024809;
LABEL_20:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          16LL,
          &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
          v8);
      }
      return v8;
    }
  }
  if ( a3 )
    v9 = *a3;
  else
    v9 = GUID_00000000_0000_0000_0000_000000000000;
  this[1] = v9;
  if ( !a4 )
  {
    v11 = *(const unsigned __int16 *(__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 72LL);
    if ( v11 == CProcess::GetApplicationId )
      ApplicationId = CProcess::GetApplicationId(a2);
    else
      ApplicationId = v11(a2);
    ATL::CSimpleStringT<unsigned short,0>::SetString(this->Data4, ApplicationId);
    v13 = *(const unsigned __int16 *(__fastcall **)(CProcess *__hidden))(*(_QWORD *)a2 + 80LL);
    if ( v13 == CProcess::GetModuleName )
      ModuleName = CProcess::GetModuleName(a2);
    else
      ModuleName = v13(a2);
    ATL::CSimpleStringT<unsigned short,0>::SetString(this, ModuleName);
  }
  *(_DWORD *)this[2].Data4 = a4;
  v8 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)this);
  if ( (v8 & 0x80000000) != 0 )
    goto LABEL_20;
  return v8;
}
