/*
 * XREFs of ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002310
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z @ 0x140001FB4 (-FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005550 (-StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011450 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamGroup::StopStream(CStreamGroup *this, __int64 a2)
{
  struct CStreamInstance *Stream; // rax
  unsigned int v5; // ebx
  void (__fastcall ***v6)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **); // rcx
  void (__fastcall *v7)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **); // rax
  CSystemAudioDeviceSharedBase *v8; // rcx
  struct IStreamGroupInternal *v9; // rdx
  __int64 (__fastcall *v10)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *); // rax
  unsigned int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]
  CSystemAudioDeviceSharedBase *v15; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  Stream = CStreamGroup::FindStream(this, a2);
  if ( Stream )
  {
    v5 = 0;
    v15 = 0LL;
    *((_BYTE *)Stream + 16) = 0;
    --*((_DWORD *)this + 36);
    v6 = (void (__fastcall ***)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **))*((_QWORD *)this + 32);
    if ( v6 )
    {
      v7 = **v6;
      if ( (char *)v7 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
        ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(v6, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v15);
      else
        v7(v6, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v15);
      v8 = v15;
      if ( v15 )
      {
        if ( !*((_DWORD *)this + 36) )
        {
          v9 = (CStreamGroup *)((char *)this + 8);
          v10 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *))(*(_QWORD *)v15 + 80LL);
          if ( v10 == CSystemAudioDeviceSharedBase::StopStreamGroup )
            v11 = CSystemAudioDeviceSharedBase::StopStreamGroup(v15, v9);
          else
            v11 = v10(v15, v9);
          v8 = v15;
          v5 = v11;
        }
        if ( v8 )
          (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  else
  {
    v5 = -2005139430;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
