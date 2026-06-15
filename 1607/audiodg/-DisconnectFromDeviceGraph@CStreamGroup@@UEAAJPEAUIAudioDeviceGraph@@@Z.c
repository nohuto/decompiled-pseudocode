/*
 * XREFs of ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140002000
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140001E14 (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140004BD0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005470 (-DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011450 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamGroup::DisconnectFromDeviceGraph(
        CStreamGroup *this,
        void (__fastcall ***a2)(struct IAudioDeviceGraph *, GUID *, CSystemAudioDeviceSharedBase **))
{
  int v4; // ebx
  void (__fastcall *v5)(struct IAudioDeviceGraph *, GUID *, CSystemAudioDeviceSharedBase **); // rax
  struct IStreamGroupInternal *v6; // rdx
  int (*v7)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]
  CSystemAudioDeviceSharedBase *v11; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = 0;
  if ( *((_BYTE *)this + 80) )
    goto LABEL_20;
  v11 = 0LL;
  if ( a2 )
  {
    v5 = **a2;
    if ( (char *)v5 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
      ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(a2, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v11);
    else
      v5((struct IAudioDeviceGraph *)a2, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v11);
  }
  v4 = CStreamGroup::DisconnectPipesFromDeviceGraph(this, v11);
  if ( v4 >= 0 )
  {
    v6 = (CStreamGroup *)((char *)this + 8);
    v7 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *))(*(_QWORD *)v11 + 88LL);
    if ( v7 == CSystemAudioDeviceSharedBase::DisconnectStreamGroup )
      CSystemAudioDeviceSharedBase::DisconnectStreamGroup(v11, v6);
    else
      ((void (__fastcall *)(CSystemAudioDeviceSharedBase *, struct IStreamGroupInternal *))v7)(v11, v6);
  }
  if ( v11 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v4 >= 0 )
  {
LABEL_20:
    if ( *((_QWORD *)this + 32) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 32, 0LL);
  }
  PublishDeviceGraphWnfState();
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
