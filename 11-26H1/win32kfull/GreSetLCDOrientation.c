/*
 * XREFs of GreSetLCDOrientation @ 0x14025BF20
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetLCDOrientation(int a1, __int64 a2)
{
  char v2; // bl
  __int64 SessionState; // rax
  void *v4; // rcx
  __int64 result; // rax

  v2 = a1;
  SessionState = W32GetSessionState(a1, a2);
  v4 = &unk_140366ED0;
  if ( (v2 & 1) == 0 )
    v4 = &unk_140366D00;
  result = *(_QWORD *)(SessionState + 96);
  *(_QWORD *)(result + 13456) = v4;
  return result;
}
