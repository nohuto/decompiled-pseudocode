/*
 * XREFs of ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140001C70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400055F0 (-StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011450 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamGroup::StartStream(CStreamGroup *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *Next; // rax
  unsigned int v6; // edi
  void (__fastcall ***v7)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **); // rcx
  void (__fastcall *v8)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **); // rax
  CSystemAudioDeviceSharedBase *v9; // rcx
  struct IStreamGroupInternal *v10; // rdx
  __int64 (__fastcall *v11)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *); // rax
  unsigned int started; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v15; // [rsp+28h] [rbp-8h]
  CSystemAudioDeviceSharedBase *v16; // [rsp+40h] [rbp+10h] BYREF

  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v16 = (CSystemAudioDeviceSharedBase *)*((_QWORD *)this + 12);
  if ( v16 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, (_QWORD **)&v16);
      v4 = *Next;
      if ( *(_QWORD *)(*Next + 8) == a2 )
        break;
      if ( !v16 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v4 = 0LL;
  }
  if ( v4 )
  {
    v6 = 0;
    *(_BYTE *)(v4 + 16) = 1;
    v16 = 0LL;
    ++*((_DWORD *)this + 36);
    v7 = (void (__fastcall ***)(_QWORD, GUID *, CSystemAudioDeviceSharedBase **))*((_QWORD *)this + 32);
    if ( v7 )
    {
      v8 = **v7;
      if ( (char *)v8 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
        ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(v7, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v16);
      else
        v8(v7, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v16);
      v9 = v16;
      if ( v16 )
      {
        if ( *((_DWORD *)this + 36) == 1 )
        {
          v10 = (CStreamGroup *)((char *)this + 8);
          v11 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, struct IStreamGroupInternal *))(*(_QWORD *)v16 + 72LL);
          if ( v11 == CSystemAudioDeviceSharedBase::StartStreamGroup )
            started = CSystemAudioDeviceSharedBase::StartStreamGroup(v16, v10);
          else
            started = v11(v16, v10);
          v9 = v16;
          v6 = started;
        }
        if ( v9 )
          (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  else
  {
    v6 = -2005139430;
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
