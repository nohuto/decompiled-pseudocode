/*
 * XREFs of RtlWriteUCharToUser @ 0x1403E22DC
 * Callers:
 *     NtUserGetLayeredWindowAttributes @ 0x1402B3F60 (NtUserGetLayeredWindowAttributes.c)
 *     NtUserfnGETWINDOWDATA @ 0x1402C1170 (NtUserfnGETWINDOWDATA.c)
 *     RtlWriteUCharToUser$thunk$17166446407143655193 @ 0x140357090 (RtlWriteUCharToUser$thunk$17166446407143655193.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140298384 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteUCharToUser(_BYTE *a1, char a2)
{
  ProbeForRead_0(a1, 1uLL, 1u);
  *a1 = a2;
}
