/*
 * XREFs of ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000DA9C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetDevicePipeFormat@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000DF70 (-GetDevicePipeFormat@CSystemAudioDeviceSharedNew@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ConnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAXPEAUIStreamGroupInternal@@@Z @ 0x14000E430 (-ConnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAXPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012AF8 (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012BAC (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?IsActive@CStreamGroup@@UEAA_NXZ @ 0x140012CD0 (-IsActive@CStreamGroup@@UEAA_NXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013B70 (-QueryInterface@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?CreateFormatConverterPipe@CStreamGroup@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140034300 (-CreateFormatConverterPipe@CStreamGroup@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 */

__int64 __fastcall CStreamGroup::ConnectToDeviceGraph(__int64 a1, struct IUnknown *a2, char a3)
{
  struct IUnknown **v6; // r12
  int FormatConverterPipe; // r14d
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  CSystemAudioDeviceSharedNew *v9; // rbx
  __int64 (__fastcall *v10)(CSystemAudioDeviceSharedNew *, struct tWAVEFORMATEX **); // rsi
  int DevicePipeFormat; // eax
  CPipeInstance *v12; // rcx
  struct IStreamGroupInternal *v13; // rsi
  void (__fastcall *v14)(CSystemAudioDeviceSharedNew *, struct IStreamGroupInternal *); // rdi
  bool (__fastcall *v15)(CStreamGroup *__hidden); // rbx
  bool IsActive; // al
  const struct tWAVEFORMATEX *v18; // r13
  __int64 v19; // rax
  struct tWAVEFORMATEX *v20; // r14
  __int64 v21; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v23; // [rsp+28h] [rbp-30h]
  CSystemAudioDeviceSharedNew *v24; // [rsp+70h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+30h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 160);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (struct IUnknown **)(a1 + 256);
  if ( *(_QWORD *)(a1 + 256) )
  {
    FormatConverterPipe = -2005139410;
    goto LABEL_28;
  }
  FormatConverterPipe = 0;
  if ( *(_BYTE *)(a1 + 80) )
    goto LABEL_26;
  v24 = 0LL;
  if ( !a2 )
    goto LABEL_43;
  QueryInterface = a2->lpVtbl->QueryInterface;
  if ( (char *)QueryInterface == (char *)ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface )
    ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface(a2, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v24);
  else
    ((void (__fastcall *)(struct IUnknown *, GUID *, CSystemAudioDeviceSharedNew **))QueryInterface)(
      a2,
      &GUID_f023913b_e06a_4278_a498_925381e3c23a,
      &v24);
  v9 = v24;
  if ( !v24 )
  {
LABEL_43:
    FormatConverterPipe = -2147467262;
    goto LABEL_28;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( *(_QWORD *)(a1 + 216) < (*(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *))(*(_QWORD *)v24 + 56LL))(v24) )
    {
      FormatConverterPipe = -2005139386;
      goto LABEL_23;
    }
    v9 = v24;
  }
  pv = 0LL;
  v10 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *, struct tWAVEFORMATEX **))(*(_QWORD *)v9 + 104LL);
  if ( v10 == CSystemAudioDeviceSharedNew::GetDevicePipeFormat )
    DevicePipeFormat = CSystemAudioDeviceSharedNew::GetDevicePipeFormat(v9, (struct tWAVEFORMATEX **)&pv);
  else
    DevicePipeFormat = v10(v9, (struct tWAVEFORMATEX **)&pv);
  FormatConverterPipe = DevicePipeFormat;
  if ( DevicePipeFormat >= 0 )
  {
    if ( (unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 200), (const struct tWAVEFORMATEX *)pv) )
    {
      v12 = *(CPipeInstance **)(a1 + 272);
      if ( v12 )
        CPipeInstance::`scalar deleting destructor'(v12);
      *(_QWORD *)(a1 + 272) = 0LL;
      CoTaskMemFree(*(LPVOID *)(a1 + 280));
      *(_QWORD *)(a1 + 280) = 0LL;
      *(_BYTE *)(a1 + 296) = 0;
    }
    else
    {
      v18 = (const struct tWAVEFORMATEX *)pv;
      v19 = (*(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *))(*(_QWORD *)v24 + 56LL))(v24);
      if ( !*(_QWORD *)(a1 + 272)
        || *(_QWORD *)(a1 + 288) != v19
        || !(unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 280), v18) )
      {
        v20 = (struct tWAVEFORMATEX *)pv;
        v21 = (*(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *))(*(_QWORD *)v24 + 56LL))(v24);
        FormatConverterPipe = CStreamGroup::CreateFormatConverterPipe((CStreamGroup *)a1, v20, v21);
      }
    }
  }
  CoTaskMemFree(pv);
  if ( FormatConverterPipe >= 0 )
  {
    FormatConverterPipe = CStreamGroup::ConnectPipesToDeviceGraph((CStreamGroup *)a1, v24);
    if ( FormatConverterPipe < 0 )
    {
      CStreamGroup::DisconnectPipesFromDeviceGraph((CStreamGroup *)a1, v24);
    }
    else
    {
      v13 = (struct IStreamGroupInternal *)(a1 + 8);
      v14 = *(void (__fastcall **)(CSystemAudioDeviceSharedNew *, struct IStreamGroupInternal *))(*(_QWORD *)v24 + 64LL);
      if ( v14 == CSystemAudioDeviceSharedNew::ConnectStreamGroup )
        CSystemAudioDeviceSharedNew::ConnectStreamGroup(v24, v13);
      else
        v14(v24, v13);
      v15 = *(bool (__fastcall **)(CStreamGroup *__hidden))(*(_QWORD *)v13 + 24LL);
      if ( v15 == CStreamGroup::IsActive )
        IsActive = CStreamGroup::IsActive(v13);
      else
        IsActive = v15(v13);
      if ( IsActive )
        FormatConverterPipe = (*(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *, struct IStreamGroupInternal *))(*(_QWORD *)v24 + 72LL))(
                                v24,
                                v13);
    }
  }
LABEL_23:
  if ( v24 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedNew *))(*(_QWORD *)v24 + 16LL))(v24);
  if ( FormatConverterPipe >= 0 )
  {
LABEL_26:
    if ( *v6 != a2 )
      ATL::AtlComPtrAssign(v6, a2);
  }
LABEL_28:
  PublishDeviceGraphWnfState();
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)FormatConverterPipe;
}
