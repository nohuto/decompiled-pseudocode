/*
 * XREFs of ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x18000ED90
 * Callers:
 *     AudioSessionGetState @ 0x18000DAA0 (AudioSessionGetState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetState(CServerAudioSessionControl *this, enum _AudioSessionState *a2)
{
  CAudioSession *v2; // rcx
  __int64 (__fastcall *v3)(CAudioSession *__hidden, enum _AudioSessionState *); // rax

  v2 = (CAudioSession *)*((_QWORD *)this + 9);
  v3 = *(__int64 (__fastcall **)(CAudioSession *__hidden, enum _AudioSessionState *))(*(_QWORD *)v2 + 96LL);
  if ( v3 == CAudioSession::GetState )
    return CAudioSession::GetState(v2, a2);
  else
    return v3(v2, a2);
}
