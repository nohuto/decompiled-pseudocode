/*
 * XREFs of FsRtlAcquireToCreateMappedSection @ 0x14042DD98
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14007DB60 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042E010 (FsRtlAcquireFileExclusiveCommon.c)
 */

__int64 __fastcall FsRtlAcquireToCreateMappedSection(struct _FILE_OBJECT *a1, char a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // edi
  PFAST_MUTEX *FsContext; // rbx
  struct _FAST_MUTEX *v9; // rcx

  *a3 = 0;
  *a4 = 0;
  v6 = FsRtlAcquireFileExclusiveCommon(a1);
  if ( v6 >= 0 && (a2 & 0x44) != 0 )
  {
    FsContext = (PFAST_MUTEX *)a1->FsContext;
    if ( FsContext )
    {
      ExAcquireFastMutex(FsContext[6]);
      v9 = FsContext[6];
      *((_BYTE *)FsContext + 6) |= 0x10u;
      KeReleaseGuardedMutex(v9);
    }
  }
  return (unsigned int)v6;
}
