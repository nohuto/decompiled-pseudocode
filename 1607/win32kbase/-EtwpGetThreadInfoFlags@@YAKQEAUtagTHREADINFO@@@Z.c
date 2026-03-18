/*
 * XREFs of ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00B4B78
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     EtwTraceInputProcessDelay @ 0x1C0015690 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0015AA0 (EtwTraceMessageCheckDelay.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00B47B0 (-EtwCaptureStateCallback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall EtwpGetThreadInfoFlags(struct tagTHREADINFO *const a1)
{
  int v1; // edx
  unsigned int result; // eax
  int v3; // edx
  __int64 v4; // rdx

  v1 = *((_DWORD *)a1 + 274);
  result = (v1 & 0x20000000) != 0;
  if ( (v1 & 0x40000000) != 0 )
    result |= 2u;
  if ( v1 < 0 )
    result |= 4u;
  if ( *((_DWORD *)a1 + 196) )
    result |= 8u;
  if ( *((_DWORD *)a1 + 195) )
    result |= 0x10u;
  v3 = *((_DWORD *)a1 + 110);
  if ( v3 < 0 )
    result |= 0x20u;
  if ( (v3 & 1) != 0 )
    result |= 0x40u;
  if ( (v3 & 0x400) != 0 )
    result |= 0x200u;
  if ( *((_QWORD *)a1 + 128) )
    result |= 0x80u;
  v4 = *((_QWORD *)a1 + 48);
  if ( v4 && *(_DWORD *)(v4 + 16) )
    result |= 0x100u;
  if ( gptiForeground == a1 )
    result |= 0x400u;
  if ( v4 == gpqForeground )
    result |= 0x800u;
  return result;
}
