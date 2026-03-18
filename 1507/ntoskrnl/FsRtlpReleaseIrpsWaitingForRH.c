/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x14006D71C
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x140070B48 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400746BC (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x140070F7C (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
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
