/*
 * XREFs of ?VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C0012D50
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchIncrementNumberOfMmIoFlipCommandPackets(struct _VIDSCH_QUEUE_PACKET *a1, unsigned int a2)
{
  unsigned int v4; // r10d
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rdi
  char v8; // cl
  int v9; // eax
  char v10; // dl

  v4 = (unsigned __int8)*((_DWORD *)a1 + 154);
  v5 = !_BitScanForward((unsigned int *)&v6, v4);
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 32LL);
  v8 = -1;
  if ( !v5 )
    v8 = v6;
  while ( v4 )
  {
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v7 + 8LL * *((unsigned int *)a1 + 36) + 2592) + 280LL * v8 + 160),
      a2);
    v4 &= ~(1 << v8);
    v5 = !_BitScanForward((unsigned int *)&v9, v4);
    v10 = -1;
    if ( !v5 )
      v10 = v9;
    v8 = v10;
  }
}
