/*
 * XREFs of ndisUnprocessAllOpens @ 0x1C001FF0C
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisUnprocessAllOpens(__int64 a1)
{
  KIRQL v2; // r15
  __int64 v3; // rdi
  __int64 v4; // rbp
  struct _KEVENT *v5; // rcx

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(24LL, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1639044;
  if ( v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 392);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 232));
      if ( (*(_DWORD *)(v3 + 224) & 0x80010) == 0x80010 )
      {
        *(_DWORD *)(v3 + 224) &= 0xFFF7FFEF;
        v5 = *(struct _KEVENT **)(v3 + 1008);
        if ( v5 )
        {
          KeSetEvent(v5, 0, 0);
          *(_QWORD *)(v3 + 1008) = 0LL;
        }
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
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(25LL, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a1);
}
