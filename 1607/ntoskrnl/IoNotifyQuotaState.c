/*
 * XREFs of IoNotifyQuotaState @ 0x1401CBF68
 * Callers:
 *     <none>
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400B3F34 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PsIoRateControlOverQuotaNotify @ 0x14020F5EC (PsIoRateControlOverQuotaNotify.c)
 */

__int64 __fastcall IoNotifyQuotaState(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v7; // edi
  PVOID v8; // rbx
  __int64 v9; // rbx
  PVOID Object; // [rsp+20h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v12; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  Object = 0LL;
  v7 = IopAcquireReferencesFromIoAttributionHandle(a1, (__int64 *)&v12, &Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    if ( ObReferenceObjectSafe((__int64)Object) )
    {
      PsIoRateControlOverQuotaNotify(v8, a2, a3, a4);
      v7 = 0;
      ObfDereferenceObject(v8);
    }
    else
    {
      v7 = -1073741431;
    }
  }
  v9 = (__int64)v12;
  if ( v12 )
  {
    ExReleaseRundownProtection(v12 + 19);
    IoDiskIoAttributionDereference(v9);
  }
  return (unsigned int)v7;
}
