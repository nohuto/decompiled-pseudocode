/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180014D10
 * Callers:
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x180002690 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x180051BE8 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18005F59C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  __int64 v2; // rax
  wchar_t Buffer[1024]; // [rsp+20h] [rbp-818h] BYREF

  if ( *((_BYTE *)this + 968) )
  {
    v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 4) + 64LL))((char *)this - 32);
    StringCchPrintfW(Buffer, 0x400uLL, L"Session %ws is missing a transition to inactive", v2);
    LogProductionAssert(0x7206F6uLL, Buffer);
  }
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 104) + 32LL))(
    *((_QWORD *)this + 104),
    (char *)this - 32);
}
