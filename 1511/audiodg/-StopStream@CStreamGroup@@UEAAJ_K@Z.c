/*
 * XREFs of ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000383C (-FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ??0?$CComQIPtr@UISaDeviceInternal@@$1?_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140005464 (--0-$CComQIPtr@UISaDeviceInternal@@$1-_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@.c)
 *     ?StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400059A0 (-StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CStreamGroup::StopStream(CStreamGroup *this, __int64 a2)
{
  struct CStreamInstance *Stream; // rax
  unsigned int v5; // esi
  __int64 v6; // rdx
  CSystemAudioDeviceSharedBase *v7; // rbx
  struct IStreamGroupInternal *v8; // rsi
  __int64 (__fastcall *v9)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *); // rdi
  unsigned int v10; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  CSystemAudioDeviceSharedBase *v14; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  Stream = CStreamGroup::FindStream(this, a2);
  if ( Stream )
  {
    v5 = 0;
    *((_BYTE *)Stream + 16) = 0;
    v6 = *((_QWORD *)this + 32);
    --*((_DWORD *)this + 36);
    ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(
      &v14,
      v6);
    v7 = v14;
    if ( v14 )
    {
      if ( !*((_DWORD *)this + 36) )
      {
        v8 = (CStreamGroup *)((char *)this + 8);
        v9 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *))(*(_QWORD *)v14 + 80LL);
        if ( v9 == CSystemAudioDeviceSharedBase::StopStreamGroup )
          v10 = CSystemAudioDeviceSharedBase::StopStreamGroup(v14, v8);
        else
          v10 = v9(v14, v8);
        v7 = v14;
        v5 = v10;
      }
      if ( v7 )
        (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else
  {
    v5 = -2005139430;
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
