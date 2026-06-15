/*
 * XREFs of AudioSessionSetGroupingParam @ 0x18002A0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioSessionSetGroupingParam(
        CServerAudioSessionControl **a1,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  CServerAudioSessionControl *v3; // rcx
  __int64 (*v4)(void); // rax

  v3 = *a1;
  v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 224LL);
  if ( (char *)v4 == (char *)CServerAudioSessionControl::SetGroupingParam )
    return CServerAudioSessionControl::SetGroupingParam(v3, a2, a3);
  else
    return v4();
}
