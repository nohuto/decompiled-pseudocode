/*
 * XREFs of SepRmGlobalSaclFind @ 0x140655EC0
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x140200A24 (SepExamineGlobalSaclEx.c)
 *     NtSetSecurityObject @ 0x140495070 (NtSetSecurityObject.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14053C468 (SepRmGlobalSaclSetWrkr.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1406515FC (SeAuditingFileOrGlobalEvents.c)
 *     SeExamineGlobalSacl @ 0x140655D28 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140655E28 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x140200B98 (SepRmAcquireGlobalSaclReadLock.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
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
