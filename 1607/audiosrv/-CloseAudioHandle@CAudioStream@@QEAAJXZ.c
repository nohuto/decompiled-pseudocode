/*
 * XREFs of ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18004F23C
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800288E8 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CAudioStream::CloseAudioHandle(CAudioStream *this)
{
  struct IUnknown **v2; // rdi
  int v3; // edi
  __int64 v4; // rcx
  char *v5; // rcx

  if ( *((_DWORD *)this + 31) == 2 )
  {
    v2 = (struct IUnknown **)((char *)this + 168);
    if ( *((_QWORD *)this + 21) )
    {
      ATL::CComPtrBase<IPart>::Release((char *)this + 168);
      if ( *v2 )
        ATL::AtlComPtrAssign(v2, 0LL);
    }
    if ( *((_QWORD *)this + 22) )
    {
      ATL::CComPtrBase<IPart>::Release((char *)this + 176);
      if ( *((_QWORD *)this + 22) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 22, 0LL);
    }
    if ( *((_QWORD *)this + 23) )
    {
      ATL::CComPtrBase<IAudioMeter>::Release((_QWORD *)this + 23);
      if ( *((_QWORD *)this + 23) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 23, 0LL);
    }
  }
  v3 = (*(__int64 (__fastcall **)(CAudioResourceManager *, _QWORD, char *))(*(_QWORD *)g_AudioResourceManager + 32LL))(
         g_AudioResourceManager,
         *((_QWORD *)this + 7),
         (char *)this + 8);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 7) + 192LL))(
    *((_QWORD *)this + 7),
    2LL,
    0xFFFFFFFFLL,
    *((unsigned int *)this + 87));
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::CloseAudioHandle", 513, v3);
  v5 = (char *)*((_QWORD *)this + 57);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v5);
  return (unsigned int)v3;
}
