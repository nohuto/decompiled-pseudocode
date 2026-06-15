/*
 * XREFs of ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18001934C
 * Callers:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18002B330 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x18002B9D0 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::SetEndpointId(int **this, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // rsi
  int **v5; // r14
  int v6; // esi
  struct IUnknown *v7; // rbx
  ATL::CAtlException *v9; // rbx
  _QWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  ATL::CAtlException *v11; // [rsp+30h] [rbp-38h] BYREF
  struct IUnknown *v14; // [rsp+88h] [rbp+20h] BYREF

  v10[1] = -2LL;
  v4 = a2;
  v5 = this;
  v10[0] = 0LL;
  v14 = 0LL;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(this + 30, a2, a3, a4);
  }
  catch ( ATL::CAtlException *v11 )
  {
    v9 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _resetstkoflw();
    v6 = *(_DWORD *)v9;
    if ( *(int *)v9 < 0 )
      goto LABEL_11;
    v5 = this;
    v4 = a2;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v4,
         v10);
  if ( v6 >= 0 )
  {
    ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(&v14);
    v7 = v14;
    if ( !v14 )
    {
      v6 = -2147024809;
      goto LABEL_15;
    }
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, int **))v14->lpVtbl[2].Release)(v14, v5 + 31);
    if ( v6 >= 0 )
    {
LABEL_5:
      v7 = v14;
      goto LABEL_6;
    }
  }
LABEL_11:
  v7 = v14;
LABEL_15:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      64LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)v6);
    goto LABEL_5;
  }
LABEL_6:
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  return (unsigned int)v6;
}
