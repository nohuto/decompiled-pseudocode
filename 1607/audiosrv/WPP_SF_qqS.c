/*
 * XREFs of WPP_SF_qqS @ 0x180061808
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x18000EFD0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x18000F100 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qqS(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v7; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  __int64 v9; // [rsp+98h] [rbp+30h]
  va_list va2; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _QWORD);
  v9 = va_arg(va2, _QWORD);
  if ( v9 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v9 + 2 * v3) );
  }
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1);
}
