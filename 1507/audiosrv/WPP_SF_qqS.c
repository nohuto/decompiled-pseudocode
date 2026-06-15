/*
 * XREFs of WPP_SF_qqS @ 0x18007EB20
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180018A00 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180018B50 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qqS(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v8; // [rsp+90h] [rbp+28h]
  _WORD *v9; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v6 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, _WORD *);
  if ( v9 && *v9 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v9[v4] );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, a2, (__int64 *)va);
}
