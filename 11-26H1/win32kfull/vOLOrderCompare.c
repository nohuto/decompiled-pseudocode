/*
 * XREFs of vOLOrderCompare @ 0x1400562E0
 * Callers:
 *     ??0?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@0@Z @ 0x140055E78 (--0-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 *     ??0?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@AEAUtagObjLock@@00@Z @ 0x140056074 (--0-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vOLOrderCompare(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
