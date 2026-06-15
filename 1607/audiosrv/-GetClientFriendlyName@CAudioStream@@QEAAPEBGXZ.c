/*
 * XREFs of ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x180018598
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x1800059DC (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180015F70 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
wchar_t *__fastcall CAudioStream::GetClientFriendlyName(CAudioStream *this)
{
  CAudioSession *v1; // r8
  wchar_t *v2; // rbx
  struct IAudioProcess *v3; // rcx
  __int64 (__fastcall *v4)(CAudioSession *, struct IAudioProcess **); // rax
  wchar_t *v5; // rax
  const wchar_t *v6; // rax
  wchar_t *v7; // rax
  struct IAudioProcess *v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CAudioSession *)*((_QWORD *)this + 8);
  v2 = 0LL;
  v3 = 0LL;
  v9 = 0LL;
  if ( v1 )
  {
    v4 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess **))(*(_QWORD *)v1 + 24LL);
    if ( v4 == CAudioSession::GetProcess )
      CAudioSession::GetProcess(v1, &v9);
    else
      v4(v1, &v9);
    v3 = v9;
    if ( v9 )
    {
      v5 = (wchar_t *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 72LL))(v9);
      v2 = v5;
      if ( v5 && *v5
        || (v6 = (const wchar_t *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 80LL))(v9)) == 0LL
        || !*v6 )
      {
        v3 = v9;
      }
      else
      {
        v7 = wcsrchr(v6, 0x5Cu);
        v3 = v9;
        if ( v7 )
          v2 = v7 + 1;
        else
          v2 = 0LL;
      }
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
