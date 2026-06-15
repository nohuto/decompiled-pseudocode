/*
 * XREFs of ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800785E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnIconPathChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        size_t *a3,
        struct _GUID *a4)
{
  int MediaEvent; // edi
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  unsigned __int16 *v15; // rcx
  GUID *v16; // rax
  GUID v17; // xmm0
  __int64 v19; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION v20; // [rsp+30h] [rbp-38h] BYREF
  char v21; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      24,
      (unsigned int)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0,
      (__int64)a3);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v20, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v8 + 856) - 16LL);
    v10 = -1LL;
    v11 = 2 * v9 + 2;
    do
      ++v10;
    while ( *((_WORD *)a3 + v10) );
    v12 = 2 * v10 + 2;
    v13 = operator new((unsigned int)(v12 + 2 * v9 + 66));
    v14 = v13;
    if ( v13 )
    {
      *v13 = v12 + v11 + 64;
      v15 = (unsigned __int16 *)(v13 + 16);
      v16 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a4 )
        v16 = a4;
      v17 = *v16;
      v14[1] = 256;
      v14[6] = v11;
      *(GUID *)(v14 + 7) = v17;
      v14[12] = v12;
      v14[13] = v11 + 64;
      StringCbCopyW(v15, v11, *(size_t **)(*((_QWORD *)this + 9) + 856LL));
      StringCbCopyW((unsigned __int16 *)((char *)v14 + (unsigned int)v14[13]), v12, a3);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v19) = *((_DWORD *)this + 20);
        WPP_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x19u,
          (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
          v14,
          v19);
      }
      MediaEvent = GenerateMediaEvent(v14, *((unsigned int *)this + 20));
      operator delete(v14);
      if ( MediaEvent < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Au,
          (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
          MediaEvent);
      }
    }
  }
  if ( v21 )
    ATL::CCritSecLock::Unlock(&v20);
  return (unsigned int)MediaEvent;
}
