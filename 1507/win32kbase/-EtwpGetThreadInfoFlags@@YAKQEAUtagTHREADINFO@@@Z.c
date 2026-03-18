/*
 * XREFs of ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00A6EF8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     EtwTraceInputProcessDelay @ 0x1C0050350 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0050760 (EtwTraceMessageCheckDelay.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00A6A80 (-EtwCaptureStateCallback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetThreadInfoFlags(struct tagTHREADINFO *const a1)
{
  int v1; // r8d
  unsigned int v2; // edx
  int v3; // eax
  __int64 v4; // rax

  v1 = *((_DWORD *)a1 + 270);
  v2 = (v1 & 0x20000000) != 0;
  if ( (v1 & 0x40000000) != 0 )
    v2 |= 2u;
  if ( v1 < 0 )
    v2 |= 4u;
  if ( *((_DWORD *)a1 + 196) )
    v2 |= 8u;
  if ( *((_DWORD *)a1 + 195) )
    v2 |= 0x10u;
  v3 = *((_DWORD *)a1 + 112);
  if ( v3 < 0 )
    v2 |= 0x20u;
  if ( (v3 & 1) != 0 )
    v2 |= 0x40u;
  if ( (v3 & 0x400) != 0 )
    v2 |= 0x200u;
  if ( *((_QWORD *)a1 + 126) )
    v2 |= 0x80u;
  v4 = *((_QWORD *)a1 + 49);
  if ( v4 && *(_DWORD *)(v4 + 16) )
    v2 |= 0x100u;
  if ( gptiForeground == a1 )
    v2 |= 0x400u;
  if ( v4 == gpqForeground )
    v2 |= 0x800u;
  return v2;
}
