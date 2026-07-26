/*
 * XREFs of ?NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z @ 0x1C00470F0
 * Callers:
 *     ndisMAllocSGList @ 0x1C0047730 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C0047B10 (ndisMAllocSGListS.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C004F4F0 (ndisMCopyFromPacketToBuffer.c)
 *     ndisMIsLoopbackPacket @ 0x1C0050698 (ndisMIsLoopbackPacket.c)
 * Callees:
 *     <none>
 */

void __fastcall NdisQueryPacket(
        struct _NDIS_PACKET *a1,
        unsigned int *a2,
        unsigned int *a3,
        struct _MDL **a4,
        unsigned int *a5)
{
  _MDL *Head; // r8
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 ByteCount; // rax
  unsigned __int64 v11; // rax

  if ( a4 )
    *a4 = a1->Private.Head;
  if ( a5 || a3 )
  {
    if ( !a1->Private.ValidCounts )
    {
      Head = a1->Private.Head;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      while ( Head )
      {
        ByteCount = Head->ByteCount;
        v7 += ByteCount;
        if ( (_DWORD)ByteCount )
          v11 = ((unsigned __int64)((LODWORD(Head->StartVa) + Head->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
        else
          LODWORD(v11) = 1;
        Head = Head->Next;
        v8 += v11;
        ++v9;
      }
      a1->Private.Count = v9;
      a1->Private.TotalLength = v7;
      a1->Private.PhysicalCount = v8;
      a1->Private.ValidCounts = 1;
    }
    if ( a3 )
      *a3 = a1->Private.Count;
    if ( a5 )
      *a5 = a1->Private.TotalLength;
  }
}
