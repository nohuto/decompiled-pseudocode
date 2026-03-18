/*
 * XREFs of ?VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C0010830
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchIncrementNumberOfMmIoFlipCommandPackets(struct _VIDSCH_QUEUE_PACKET *a1, unsigned int a2)
{
  __int64 v3; // r11
  unsigned int v4; // eax
  bool v5; // zf
  int v6; // ecx

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL);
  if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
    v4 = (unsigned __int8)*((_DWORD *)a1 + 172) | *((unsigned __int8 *)a1 + 689);
  else
    v4 = (1 << *(_DWORD *)(v3 + 128)) - 1;
  v5 = !_BitScanForward((unsigned int *)&v6, v4);
  if ( v5 )
    LOBYTE(v6) = -1;
  while ( v4 )
  {
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v3 + 8LL * *((unsigned int *)a1 + 38) + 2968) + 272LL * (char)v6 + 160),
      a2);
    v4 &= ~(1 << v6);
    v5 = !_BitScanForward((unsigned int *)&v6, v4);
    if ( v5 )
      LOBYTE(v6) = -1;
  }
}
