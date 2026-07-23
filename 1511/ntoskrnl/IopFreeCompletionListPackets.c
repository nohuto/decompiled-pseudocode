/*
 * XREFs of IopFreeCompletionListPackets @ 0x1404A3290
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1400DF4A0 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     IopDropIrp @ 0x1400DF7D8 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x1400DF940 (IopFreeWaitCompletionPacket.c)
 *     IopFreeMiniCompletionPacket @ 0x14042F3B0 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(_QWORD *P, void *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx

  if ( P )
  {
    v3 = P;
    do
    {
      v4 = (__int64)v3;
      v3 = (_QWORD *)*v3;
      v5 = *(_BYTE *)(v4 + 16);
      if ( v5 )
      {
        if ( v5 == 2 )
          IopFreeWaitCompletionPacket(v4, a2);
        else
          IopFreeMiniCompletionPacket((_SLIST_ENTRY *)v4);
      }
      else
      {
        v6 = v4 - 168;
        if ( (*(_DWORD *)(v6 + 16) & 0x2000) != 0 )
          IopDropIrp(v6, *(_QWORD *)(v6 + 192));
        else
          IoFreeIrp((PIRP)v6);
      }
    }
    while ( v3 );
  }
}
