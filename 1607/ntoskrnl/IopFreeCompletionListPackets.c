/*
 * XREFs of IopFreeCompletionListPackets @ 0x1404FEDD0
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1400F4808 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x140055950 (IoFreeIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x1400EC1F8 (IopFreeWaitCompletionPacket.c)
 *     IopDropIrp @ 0x1400F56CC (IopDropIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1404FEE60 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(_QWORD *P, void *a2)
{
  _QWORD *v3; // rbx
  _BYTE *v4; // rcx
  char v5; // al
  __int64 v6; // rcx

  if ( P )
  {
    v3 = P;
    do
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      v5 = v4[16];
      if ( v5 )
      {
        if ( v5 == 2 )
          IopFreeWaitCompletionPacket((__int64)v4, a2);
        else
          IopFreeMiniCompletionPacket(v4);
      }
      else
      {
        v6 = (__int64)(v4 - 168);
        if ( (*(_DWORD *)(v6 + 16) & 0x2000) != 0 )
          IopDropIrp(v6, *(_QWORD *)(v6 + 192));
        else
          IoFreeIrp((PIRP)v6);
      }
    }
    while ( v3 );
  }
}
