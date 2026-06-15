/*
 * XREFs of ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E340 (-StartStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013B70 (-QueryInterface@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CStreamGroup::StartStream(CStreamGroup *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *Next; // rax
  unsigned int v6; // esi
  void (__fastcall ***v7)(_QWORD, GUID *, CSystemAudioDeviceSharedNew **); // rbx
  void (__fastcall *v8)(_QWORD, GUID *, CSystemAudioDeviceSharedNew **); // rbp
  CSystemAudioDeviceSharedNew *v9; // rbx
  struct IStreamGroupInternal *v10; // rsi
  __int64 (__fastcall *v11)(CSystemAudioDeviceSharedNew *, struct IStreamGroupInternal *); // rdi
  unsigned int started; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]
  CSystemAudioDeviceSharedNew *v16; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v16 = (CSystemAudioDeviceSharedNew *)*((_QWORD *)this + 12);
  if ( v16 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, (_QWORD **)&v16);
      v4 = *Next;
      if ( *(_QWORD *)(*Next + 8) == a2 )
        break;
      if ( !v16 )
        goto LABEL_17;
    }
    *(_BYTE *)(v4 + 16) = 1;
    v6 = 0;
    ++*((_DWORD *)this + 36);
    v7 = (void (__fastcall ***)(_QWORD, GUID *, CSystemAudioDeviceSharedNew **))*((_QWORD *)this + 32);
    v16 = 0LL;
    if ( v7 )
    {
      v8 = **v7;
      if ( (char *)v8 == (char *)ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface )
        ATL::CComObject<CSystemAudioDeviceSharedNew>::QueryInterface(
          v7,
          &GUID_f023913b_e06a_4278_a498_925381e3c23a,
          &v16);
      else
        v8(v7, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &v16);
      v9 = v16;
      if ( v16 )
      {
        if ( *((_DWORD *)this + 36) == 1 )
        {
          v10 = (CStreamGroup *)((char *)this + 8);
          v11 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedNew *, struct IStreamGroupInternal *))(*(_QWORD *)v16 + 72LL);
          if ( v11 == CSystemAudioDeviceSharedNew::StartStreamGroup )
            started = CSystemAudioDeviceSharedNew::StartStreamGroup(v16, v10);
          else
            started = v11(v16, v10);
          v9 = v16;
          v6 = started;
        }
        if ( v9 )
          (*(void (__fastcall **)(CSystemAudioDeviceSharedNew *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  else
  {
LABEL_17:
    v6 = -2005139430;
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
