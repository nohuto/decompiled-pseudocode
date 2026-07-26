/*
 * XREFs of ndisUnprocessAllOpens @ 0x1C000EFC0
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisUnprocessAllOpens(__int64 a1)
{
  KIRQL v2; // r15
  __int64 v3; // rdi
  __int64 v4; // rbp

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(24LL, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1639123;
  if ( v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 392);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 232));
      if ( (*(_DWORD *)(v3 + 224) & 0x80010) == 0x80010 )
      {
        *(_DWORD *)(v3 + 224) &= 0xFFF7FFEF;
      }
      else if ( (*(_DWORD *)(v3 + 224) & 0x80000) != 0 )
      {
        *(_DWORD *)(v3 + 224) &= ~0x80000u;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 232));
      v3 = v4;
    }
    while ( v4 );
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(25LL, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a1);
}
