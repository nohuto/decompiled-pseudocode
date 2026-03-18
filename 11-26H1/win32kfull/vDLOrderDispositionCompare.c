/*
 * XREFs of vDLOrderDispositionCompare @ 0x1400562B0
 * Callers:
 *     ??0?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@0@Z @ 0x140055E78 (--0-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 *     ??0?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@AEAUtagObjLock@@00@Z @ 0x140056074 (--0-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vDLOrderDispositionCompare(unsigned __int64 **a1, unsigned __int64 **a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax

  v2 = **a2;
  v3 = **a1;
  if ( v3 >= v2 )
    return v3 > v2;
  else
    return 0xFFFFFFFFLL;
}
