/*
 * XREFs of ?AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x180012E68
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x1800199E0 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18002890C (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::AddPendingStreamCreate(CAudioSession *this, struct CAudioStream *a2)
{
  CAudioStream *v2; // rbx
  unsigned int v4; // esi
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r14
  CAudioStream **v7; // rcx
  unsigned int (__fastcall *v8)(CAudioStream *__hidden); // rax
  __int64 result; // rax
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+38h] [rbp-20h]

  v2 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 272);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = 0;
  try
  {
    v5 = (_QWORD *)((char *)this + 312);
    v6 = v5[1];
    if ( v6 >= v5[2]
      && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                             v5,
                             v6 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v7 = (CAudioStream **)(*v5 + 8 * v6);
    if ( v7 )
      *v7 = v2;
    ++v5[1];
  }
  catch ( ATL::CAtlException *v11 )
  {
    v10 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _o__resetstkoflw();
    v4 = *(_DWORD *)v10;
    if ( *(int *)v10 >= 0 )
    {
      v2 = a2;
      goto LABEL_6;
    }
LABEL_8:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    result = v4;
  }
LABEL_6:
  v8 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v2 + 64LL);
  if ( v8 == CAudioStream::AddClientReference )
    CAudioStream::AddClientReference(v2);
  else
    v8(v2);
  goto LABEL_8;
}
