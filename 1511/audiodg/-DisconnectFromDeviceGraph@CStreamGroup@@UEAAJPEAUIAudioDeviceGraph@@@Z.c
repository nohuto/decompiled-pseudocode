/*
 * XREFs of ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140003860
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x1400036BC (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400058B0 (-DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008FE0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CStreamGroup::DisconnectFromDeviceGraph(
        CStreamGroup *this,
        void (__fastcall ***a2)(struct IAudioDeviceGraph *, GUID *, CSystemAudioDeviceSharedBase **))
{
  int v4; // esi
  void (__fastcall *v5)(struct IAudioDeviceGraph *, GUID *, CSystemAudioDeviceSharedBase **); // rdi
  int (*v6)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *); // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]
  CSystemAudioDeviceSharedBase *v10; // [rsp+50h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = 0;
  if ( *((_BYTE *)this + 80) )
    goto LABEL_20;
  v10 = 0LL;
  if ( a2 )
  {
    v5 = **a2;
    if ( (char *)v5 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
      ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(a2, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v10);
    else
      v5((struct IAudioDeviceGraph *)a2, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v10);
  }
  v4 = CStreamGroup::DisconnectPipesFromDeviceGraph(this, v10);
  if ( v4 >= 0 )
  {
    v6 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *))(*(_QWORD *)v10 + 88LL);
    if ( v6 == CSystemAudioDeviceSharedBase::DisconnectStreamGroup )
      CSystemAudioDeviceSharedBase::DisconnectStreamGroup(v10, (CStreamGroup *)((char *)this + 8));
    else
      ((void (__fastcall *)(CSystemAudioDeviceSharedBase *, char *))v6)(v10, (char *)this + 8);
  }
  if ( v10 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v4 >= 0 )
  {
LABEL_20:
    if ( *((_QWORD *)this + 32) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 32, 0LL);
  }
  PublishDeviceGraphWnfState();
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
