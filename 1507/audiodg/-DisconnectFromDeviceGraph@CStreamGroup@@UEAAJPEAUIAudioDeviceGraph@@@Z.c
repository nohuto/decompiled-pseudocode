/*
 * XREFs of ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140011830
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E160 (-DisconnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012AF8 (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013B70 (-QueryInterface@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CStreamGroup::DisconnectFromDeviceGraph(
        CStreamGroup *this,
        void (__fastcall ***a2)(struct IAudioDeviceGraph *, GUID *, CSystemAudioDeviceSharedNew **))
{
  int v4; // edi
  void (__fastcall *v5)(struct IAudioDeviceGraph *, GUID *, CSystemAudioDeviceSharedNew **); // rdi
  __int64 (__fastcall *v6)(CSystemAudioDeviceSharedNew *, struct IStreamGroupInternal *); // r14
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]
  CSystemAudioDeviceSharedNew *v10; // [rsp+50h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  if ( *((_BYTE *)this + 80) )
    goto LABEL_20;
  v10 = 0LL;
  if ( a2 )
  {
    v5 = **a2;
    if ( (char *)v5 == (char *)ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface )
      ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface(a2, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v10);
    else
      v5((struct IAudioDeviceGraph *)a2, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v10);
  }
  v4 = CStreamGroup::DisconnectPipesFromDeviceGraph(this, v10);
  if ( v4 >= 0 )
  {
    v6 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *, struct IStreamGroupInternal *))(*(_QWORD *)v10 + 88LL);
    if ( v6 == CSystemAudioDeviceSharedNew::DisconnectStreamGroup )
      CSystemAudioDeviceSharedNew::DisconnectStreamGroup(v10, (CStreamGroup *)((char *)this + 8));
    else
      v6(v10, (CStreamGroup *)((char *)this + 8));
  }
  if ( v10 )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedNew *))(*(_QWORD *)v10 + 16LL))(v10);
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
