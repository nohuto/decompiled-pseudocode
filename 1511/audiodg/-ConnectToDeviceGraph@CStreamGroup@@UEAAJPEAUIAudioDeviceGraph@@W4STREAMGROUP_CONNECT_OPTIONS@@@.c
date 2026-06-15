/*
 * XREFs of ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140003980
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x1400036BC (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140003760 (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?IsActive@CStreamGroup@@UEAA_NXZ @ 0x140004820 (-IsActive@CStreamGroup@@UEAA_NXZ.c)
 *     ?GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400056E0 (-GetDevicePipeFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ConnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAXPEAUIStreamGroupInternal@@@Z @ 0x140005AF0 (-ConnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAXPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008FE0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140013838 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?CreateFormatConverterPipe@CStreamGroup@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140034554 (-CreateFormatConverterPipe@CStreamGroup@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 */

__int64 __fastcall CStreamGroup::ConnectToDeviceGraph(__int64 a1, struct IUnknown *a2, char a3)
{
  struct IUnknown **v6; // r12
  int FormatConverterPipe; // r14d
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  CSystemAudioDeviceSharedBase *v9; // rbx
  int (*v10)(CSystemAudioDeviceSharedBase *__hidden, struct tWAVEFORMATEX **); // rsi
  int DevicePipeFormat; // eax
  unsigned int v12; // edx
  CPipeInstance *v13; // rcx
  struct IStreamGroupInternal *v14; // rsi
  void (__fastcall *v15)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *); // rdi
  bool (__fastcall *v16)(CStreamGroup *__hidden); // rbx
  bool IsActive; // al
  const struct tWAVEFORMATEX *v19; // r13
  __int64 v20; // rax
  struct tWAVEFORMATEX *v21; // r14
  __int64 v22; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v24; // [rsp+28h] [rbp-30h]
  CSystemAudioDeviceSharedBase *v25; // [rsp+70h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+30h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 160);
  v24 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = (struct IUnknown **)(a1 + 256);
  if ( *(_QWORD *)(a1 + 256) )
  {
    FormatConverterPipe = -2005139410;
    goto LABEL_28;
  }
  FormatConverterPipe = 0;
  if ( *(_BYTE *)(a1 + 80) )
    goto LABEL_26;
  v25 = 0LL;
  if ( !a2 )
    goto LABEL_43;
  QueryInterface = a2->lpVtbl->QueryInterface;
  if ( (char *)QueryInterface == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
    ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(a2, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v25);
  else
    ((void (__fastcall *)(struct IUnknown *, GUID *, CSystemAudioDeviceSharedBase **))QueryInterface)(
      a2,
      &GUID_f023913b_e06a_4278_a498_925381e3c23a,
      &v25);
  v9 = v25;
  if ( !v25 )
  {
LABEL_43:
    FormatConverterPipe = -2147467262;
    goto LABEL_28;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( *(_QWORD *)(a1 + 216) < (*(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v25 + 56LL))(v25) )
    {
      FormatConverterPipe = -2005139386;
      goto LABEL_23;
    }
    v9 = v25;
  }
  pv = 0LL;
  v10 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct tWAVEFORMATEX **))(*(_QWORD *)v9 + 104LL);
  if ( v10 == CSystemAudioDeviceSharedBase::GetDevicePipeFormat )
    DevicePipeFormat = CSystemAudioDeviceSharedBase::GetDevicePipeFormat(v9, (struct tWAVEFORMATEX **)&pv);
  else
    DevicePipeFormat = ((__int64 (__fastcall *)(CSystemAudioDeviceSharedBase *, LPVOID *))v10)(v9, &pv);
  FormatConverterPipe = DevicePipeFormat;
  if ( DevicePipeFormat >= 0 )
  {
    if ( (unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 200), (const struct tWAVEFORMATEX *)pv) )
    {
      v13 = *(CPipeInstance **)(a1 + 272);
      if ( v13 )
        CPipeInstance::`scalar deleting destructor'(v13, v12);
      *(_QWORD *)(a1 + 272) = 0LL;
      CoTaskMemFree(*(LPVOID *)(a1 + 280));
      *(_QWORD *)(a1 + 280) = 0LL;
      *(_BYTE *)(a1 + 296) = 0;
    }
    else
    {
      v19 = (const struct tWAVEFORMATEX *)pv;
      v20 = (*(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v25 + 56LL))(v25);
      if ( !*(_QWORD *)(a1 + 272)
        || *(_QWORD *)(a1 + 288) != v20
        || !(unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 280), v19) )
      {
        v21 = (struct tWAVEFORMATEX *)pv;
        v22 = (*(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v25 + 56LL))(v25);
        FormatConverterPipe = CStreamGroup::CreateFormatConverterPipe((CStreamGroup *)a1, v21, v22);
      }
    }
  }
  CoTaskMemFree(pv);
  if ( FormatConverterPipe >= 0 )
  {
    FormatConverterPipe = CStreamGroup::ConnectPipesToDeviceGraph((CStreamGroup *)a1, v25);
    if ( FormatConverterPipe < 0 )
    {
      CStreamGroup::DisconnectPipesFromDeviceGraph((CStreamGroup *)a1, v25);
    }
    else
    {
      v14 = (struct IStreamGroupInternal *)(a1 + 8);
      v15 = *(void (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *))(*(_QWORD *)v25 + 64LL);
      if ( v15 == CSystemAudioDeviceSharedBase::ConnectStreamGroup )
        CSystemAudioDeviceSharedBase::ConnectStreamGroup(v25, v14);
      else
        v15(v25, v14);
      v16 = *(bool (__fastcall **)(CStreamGroup *__hidden))(*(_QWORD *)v14 + 24LL);
      if ( v16 == CStreamGroup::IsActive )
        IsActive = CStreamGroup::IsActive(v14);
      else
        IsActive = v16(v14);
      if ( IsActive )
        FormatConverterPipe = (*(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, struct IStreamGroupInternal *))(*(_QWORD *)v25 + 72LL))(
                                v25,
                                v14);
    }
  }
LABEL_23:
  if ( v25 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v25 + 16LL))(v25);
  if ( FormatConverterPipe >= 0 )
  {
LABEL_26:
    if ( *v6 != a2 )
      ATL::AtlComPtrAssign(v6, a2);
  }
LABEL_28:
  PublishDeviceGraphWnfState();
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)FormatConverterPipe;
}
