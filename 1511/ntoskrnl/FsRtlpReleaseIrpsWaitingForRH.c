/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x1400C9078
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140035F48 (FsRtlpOplockCleanup.c)
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400C90E0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400CB16C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x1400CBE68 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
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
          if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(*(_QWORD *)(v3[2] + 184) + 48LL), i[3], 0LL) )
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
