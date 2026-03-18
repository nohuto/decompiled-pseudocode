/*
 * XREFs of SepRmGlobalSaclFind @ 0x140695604
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14021A318 (SepExamineGlobalSaclEx.c)
 *     NtSetSecurityObject @ 0x140520B3C (NtSetSecurityObject.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14056B668 (SepRmGlobalSaclSetWrkr.c)
 *     SeAuditingFileOrGlobalEvents @ 0x140690884 (SeAuditingFileOrGlobalEvents.c)
 *     SeExamineGlobalSacl @ 0x14069546C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14069556C (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14021A48C (SepRmAcquireGlobalSaclReadLock.c)
 *     RtlCompareUnicodeString @ 0x1404FF850 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall SepRmGlobalSaclFind(__int64 **a1, __int64 **a2, const UNICODE_STRING *a3, char a4)
{
  __int64 v4; // rax
  char v5; // r14
  unsigned int v9; // esi
  __int64 *v10; // rbp
  __int64 v11; // rcx

  v4 = SepRmGlobalSaclHead;
  v5 = 0;
  v9 = -1073741772;
  if ( SepRmGlobalSaclHead )
  {
    if ( a4 )
    {
      SepRmAcquireGlobalSaclReadLock();
      v4 = SepRmGlobalSaclHead;
      v5 = 1;
    }
    *a1 = (__int64 *)v4;
    if ( a2 )
      *a2 = 0LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v10 = *a1;
        if ( !RtlCompareUnicodeString(a3, (PCUNICODE_STRING)(*a1 + 1), 0) )
          break;
        if ( a2 )
          *a2 = v10;
        v11 = *v10;
        *a1 = (__int64 *)*v10;
        if ( !v11 )
          goto LABEL_11;
      }
      v9 = 0;
    }
    else
    {
LABEL_11:
      if ( a2 )
        *a2 = 0LL;
    }
    if ( v5 )
    {
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegion();
    }
  }
  return v9;
}
