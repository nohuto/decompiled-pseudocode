/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x1400A258C
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400785F4 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x14007A080 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x14007AA74 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A2450 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1401343CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14046A818 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x14007B1D8 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A26C4 (FsRtlpRemoveAndCompleteWaitingIrp.c)
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
