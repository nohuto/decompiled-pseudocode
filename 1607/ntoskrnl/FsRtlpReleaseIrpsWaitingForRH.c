/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x1400A0EB4
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x140078674 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x14007AAF4 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A0D78 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x14007B258 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A0FEC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpReleaseIrpsWaitingForRH(__int64 a1)
{
  __int64 *v1; // r14
  char v2; // bp
  __int64 *v3; // rbx
  _QWORD *v4; // rdi
  __int64 *v5; // r15
  _QWORD *i; // rsi

  v1 = (__int64 *)(a1 + 88);
  v2 = 1;
  v3 = *(__int64 **)(a1 + 88);
  if ( v3 != (__int64 *)(a1 + 88) )
  {
    v4 = (_QWORD *)(a1 + 72);
    do
    {
      v5 = v3;
      if ( (_QWORD *)*v4 == v4 )
        goto LABEL_5;
      if ( !*((_BYTE *)v3 + 52) )
      {
        for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
        {
          if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(*(_QWORD *)(v3[2] + 184) + 48LL), i[3], 0) )
          {
            v2 = 0;
            break;
          }
        }
        if ( v2 )
        {
LABEL_5:
          v3 = (__int64 *)v3[1];
          FsRtlpRemoveAndCompleteWaitingIrp(v5);
        }
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v1 );
  }
}
