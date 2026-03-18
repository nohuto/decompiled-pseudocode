/*
 * XREFs of KdpSetContext @ 0x14072C71C
 * Callers:
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KdpCopyContext @ 0x14072D5E8 (KdpCopyContext.c)
 *     KdpSanitizeContextFlags @ 0x14072D7B8 (KdpSanitizeContextFlags.c)
 */

__int64 __fastcall KdpSetContext(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v6; // bx
  __int16 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v8 = 56;
  v4 = *(_WORD *)(a1 + 6);
  v9 = a1;
  if ( v4 < 0x280u && KiProcessorBlock[v4] && KdpContextSent )
  {
    v6 = *(_WORD *)(a1 + 6);
    *(_DWORD *)(a1 + 8) = 0;
    if ( v6 != (unsigned __int16)KeGetCurrentProcessorNumberEx(0LL) )
      a3 = *(_QWORD *)(KiProcessorBlock[v6] + 25216);
    KdpSanitizeContextFlags(*((_QWORD *)a2 + 1), *a2, &v10);
    KdpCopyContext(a3, v10, *((_QWORD *)a2 + 1));
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, &v8, 0LL, &KdpContext);
}
