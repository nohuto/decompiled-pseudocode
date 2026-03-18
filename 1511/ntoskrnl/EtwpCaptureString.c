/*
 * XREFs of EtwpCaptureString @ 0x1404CC270
 * Callers:
 *     EtwpFlushTrace @ 0x1404B5FCC (EtwpFlushTrace.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1404CC0A0 (EtwpAcquireLoggerContext.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpCaptureString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  unsigned int v4; // esi
  char PreviousMode; // di
  ULONG64 v6; // rcx
  ULONG64 v7; // rdx
  WCHAR *PoolWithTag; // rax
  WCHAR *v9; // rdi

  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RtlInitUnicodeString(a2, 0LL);
  if ( PreviousMode && *a1 )
  {
    v6 = *((_QWORD *)a1 + 1);
    if ( (v6 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = v6 + *a1;
    if ( v7 > MmUserProbeAddress || v7 < v6 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, *a1 + 2LL, 0x50777445u);
  v9 = PoolWithTag;
  if ( !PoolWithTag
    || (memmove(PoolWithTag, *((const void **)a1 + 1), *a1),
        v9[(unsigned __int64)*a1 >> 1] = 0,
        !RtlCreateUnicodeString(a2, v9)) )
  {
    v4 = -1073741801;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v4;
}
