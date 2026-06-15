/*
 * XREFs of ?Initialize@CAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x18004F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::Initialize(CAudioStream *this, struct CVADServer *a2, const struct tWAVEFORMATEX *a3)
{
  HANDLE EventW; // rax
  signed int LastError; // eax
  unsigned int v7; // ebx
  int v8; // eax

  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 58) = EventW;
  if ( EventW )
  {
    v8 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)this + 152LL))(this, a3->nChannels);
    v7 = v8;
    if ( v8 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioStream::Initialize", 314, v8);
  }
  else
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      return (unsigned __int16)LastError | 0x80070000;
  }
  return v7;
}
