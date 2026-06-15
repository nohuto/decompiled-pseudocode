/*
 * XREFs of ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003C90
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000383C (-FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005A40 (-StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008FE0 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CStreamGroup::StartStream(CStreamGroup *this, __int64 a2)
{
  struct CStreamInstance *Stream; // rax
  unsigned int v5; // esi
  void (__fastcall ***v6)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **); // rbx
  void (__fastcall *v7)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **); // rbp
  CSystemAudioDeviceSharedBase *v8; // rbx
  struct IStreamGroupInternal *v9; // rsi
  __int64 (__fastcall *v10)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *); // rdi
  unsigned int started; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]
  CSystemAudioDeviceSharedBase *v15; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  Stream = CStreamGroup::FindStream(this, a2);
  if ( Stream )
  {
    v5 = 0;
    *((_BYTE *)Stream + 16) = 1;
    v15 = 0LL;
    ++*((_DWORD *)this + 36);
    v6 = (void (__fastcall ***)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **))*((_QWORD *)this + 32);
    if ( v6 )
    {
      v7 = **v6;
      if ( (char *)v7 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
        ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(
          *((_QWORD *)this + 32),
          &GUID_f023913b_e06a_4278_a498_925381e3c23a,
          &v15);
      else
        v7(*((_QWORD *)this + 32), &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v15);
      v8 = v15;
      if ( v15 )
      {
        if ( *((_DWORD *)this + 36) == 1 )
        {
          v9 = (CStreamGroup *)((char *)this + 8);
          v10 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *))(*(_QWORD *)v15 + 72LL);
          if ( v10 == CSystemAudioDeviceSharedBase::StartStreamGroup )
            started = CSystemAudioDeviceSharedBase::StartStreamGroup(v15, v9);
          else
            started = v10(v15, v9);
          v8 = v15;
          v5 = started;
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
