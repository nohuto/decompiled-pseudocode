/*
 * XREFs of KdpSetContext @ 0x1406F3564
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyContext @ 0x1406F2344 (KdpCopyContext.c)
 *     KdpSanitizeContextFlags @ 0x1406F3610 (KdpSanitizeContextFlags.c)
 */

__int64 __fastcall KdpSetContext(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v4; // r8
  __int64 v5; // rbx
  __int16 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  v7 = 56;
  v4 = *(_WORD *)(a1 + 6);
  if ( v4 < 0x280u && KiProcessorBlock[v4] && KdpContextSent )
  {
    *(_DWORD *)(a1 + 8) = 0;
    if ( v4 != (unsigned __int16)KeGetPcr()->Prcb.Number )
      a3 = *(_QWORD *)(KiProcessorBlock[v4] + 25344);
    v5 = *((_QWORD *)a2 + 1);
    KdpSanitizeContextFlags(v5, *a2, &v9);
    KdpCopyContext(a3, v9, v5);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, &v7, 0LL, &KdpContext);
}
