/*
 * XREFs of GreNamedEscape @ 0x1C029A5B4
 * Callers:
 *     NtGdiExtEscape @ 0x1C0125230 (NtGdiExtEscape.c)
 * Callees:
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0114568 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall GreNamedEscape(wchar_t *Str1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5, void *a6)
{
  struct PDEV *v10; // rbx
  struct PDEV *v11; // rax
  __int64 v12; // rcx
  const UNICODE_STRING *v13; // rcx
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  struct PDEV *v16; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v18[264]; // [rsp+70h] [rbp-90h] BYREF

  memset(v18, 0, 520);
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = v18;
  RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\");
  RtlAppendUnicodeToString(&Destination, Str1);
  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v10 = gppdevList;
  while ( 1 )
  {
    v16 = v10;
    v11 = v10;
    if ( (*((_DWORD *)v10 + 14) & 0x2000) != 0 )
      break;
LABEL_9:
    v10 = (struct PDEV *)*((_QWORD *)v10 + 3);
    if ( !v10 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      return 0LL;
    }
  }
  if ( v10 == gppdevATMFD )
  {
    if ( !_wcsicmp(Str1, L"atmfd.dll") )
      goto LABEL_8;
    v11 = v16;
  }
  v12 = *((_QWORD *)v11 + 227);
  String2 = Destination;
  v13 = *(const UNICODE_STRING **)(v12 + 16);
  if ( !v13 || !RtlEqualUnicodeString(v13, &String2, 1u) )
    goto LABEL_9;
LABEL_8:
  if ( !*((_QWORD *)v16 + 364) )
    goto LABEL_9;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return PDEVOBJ::Escape((PDEVOBJ *)&v16, 0LL, a2, a3, a4, a5, a6);
}
