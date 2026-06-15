/*
 * XREFs of ?Initialize@CAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x180064AB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::Initialize(CAudioStream *this, struct CVADServer *a2, const struct tWAVEFORMATEX *a3)
{
  HANDLE EventW; // rax
  signed int LastError; // eax
  int v7; // ebx

  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 36) = EventW;
  if ( EventW )
  {
    v7 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)this + 152LL))(this, a3->nChannels);
    if ( v7 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v7);
    }
  }
  else
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      return (unsigned __int16)LastError | 0x80070000;
  }
  return (unsigned int)v7;
}
