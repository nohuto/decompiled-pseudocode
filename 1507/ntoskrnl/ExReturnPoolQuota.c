/*
 * XREFs of ExReturnPoolQuota @ 0x140119294
 * Callers:
 *     IopFreeIrp @ 0x14004BC80 (IopFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1404BE310 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x14005ED6C (MmIsSpecialPoolAddress.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsReturnPoolQuota @ 0x140119324 (PsReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall ExReturnPoolQuota(unsigned __int64 a1)
{
  char v2; // dl
  unsigned __int64 v3; // rdi
  struct _KPROCESS *v4; // rbx
  unsigned int v5; // ecx
  unsigned __int64 v6; // r8
  __int16 v7; // ax

  if ( !ExpSpecialAllocations || !(unsigned int)MmIsSpecialPoolAddress(a1) )
  {
    v2 = *(_BYTE *)(a1 - 13);
    v3 = a1 - 16;
    if ( (v2 & 8) != 0 )
    {
      v4 = (struct _KPROCESS *)(v3 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v3 + 8));
      if ( v4 )
      {
        if ( v4 < MmSystemRangeStart || (v4->Header.Type & 0x7F) != 3 )
          KeBugCheckEx(0xC2u, 0xDuLL, v3 + 16, *(unsigned int *)(v3 + 4), v3 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v3 + 8));
        v5 = (unsigned __int8)*(_WORD *)(v3 + 2);
        if ( (v2 & 4) != 0 )
        {
          v6 = v3 - 16LL * (unsigned __int8)*(_WORD *)v3;
          v7 = *(_WORD *)(v6 + 2);
          *(_BYTE *)(v6 + 3) &= ~8u;
          v5 = (unsigned __int8)v7;
        }
        *(_BYTE *)(v3 + 3) &= ~8u;
        PsReturnPoolQuota(v4, (POOL_TYPE)(v2 & 1), 16LL * v5);
        ObDereferenceObjectDeferDeleteWithTag(v4, *(_DWORD *)(v3 + 4));
      }
    }
  }
}
