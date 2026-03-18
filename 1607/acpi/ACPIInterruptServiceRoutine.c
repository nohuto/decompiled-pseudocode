/*
 * XREFs of ACPIInterruptServiceRoutine @ 0x1C002B920
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPccSciReceived @ 0x1C0003AC4 (ACPIPccSciReceived.c)
 *     CLEAR_PM1_STATUS_BITS @ 0x1C0003FA8 (CLEAR_PM1_STATUS_BITS.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0006AF8 (ACPIReadGpeStatusRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0006DB0 (ACPIGpeEnableDisableEvents.c)
 *     READ_PM1_STATUS @ 0x1C002309C (READ_PM1_STATUS.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ACPIInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  __int64 v5; // rdx
  int v6; // edi
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  signed __int32 v9; // edx

  v3 = 0;
  v4 = (unsigned __int16)(READ_PM1_STATUS() & (*((_WORD *)AcpiInformation + 56) | 0x8401));
  if ( *((_WORD *)AcpiInformation + 51) )
  {
    while ( (*((_BYTE *)GpeCurEnable + v3) & (unsigned __int8)ACPIReadGpeStatusRegister(v3)) == 0 )
    {
      if ( ++v3 >= *((unsigned __int16 *)AcpiInformation + 51) )
        goto LABEL_4;
    }
    v4 |= 0x10000u;
  }
LABEL_4:
  if ( (AcpiOverrideAttributes & 0x200) != 0 && !v4 )
    v4 = 0x10000;
  if ( ACPIPccSciReceived() )
    v4 |= 0x20000u;
  v6 = v4 & 0x11;
  if ( (v4 & 0x11) != 0 )
  {
    CLEAR_PM1_STATUS_BITS(v4 & 0x11);
    if ( (v4 & 1) != 0 )
      (*(void (**)(void))(PmHalDispatchTable + 8))();
    v4 &= ~v6;
  }
  if ( v4 )
  {
    if ( (~*(_DWORD *)(a2 + 88) & v4) == 0 )
      v4 |= 0x10000u;
    if ( (v4 & 0x10000) != 0 )
      ACPIGpeEnableDisableEvents(0, v5);
    CLEAR_PM1_STATUS_BITS(v4);
    v7 = *(_DWORD *)(a2 + 88);
    v8 = v4 | 0x80000000;
    do
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), v8 | v7, v7);
    }
    while ( v9 != v7 );
    v6 |= v8 & ~v7;
    if ( v6 < 0 )
      KeInsertQueueDpc((PRKDPC)(a2 + 96), 0LL, 0LL);
  }
  return v6 != 0;
}
