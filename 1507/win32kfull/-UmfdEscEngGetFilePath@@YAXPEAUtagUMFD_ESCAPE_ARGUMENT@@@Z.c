/*
 * XREFs of ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3E2C
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A47DC (UmfdDispatchEscape.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C01C132C (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     EngGetFilePath @ 0x1C026BEB0 (EngGetFilePath.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C02A357C (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C02A385C (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 */

void __fastcall UmfdEscEngGetFilePath(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  int v3; // [rsp+20h] [rbp-258h] BYREF
  _BYTE v4[8]; // [rsp+28h] [rbp-250h] BYREF
  HANDLE h[4]; // [rsp+30h] [rbp-248h] BYREF
  WCHAR pDest[261]; // [rsp+50h] [rbp-228h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  h[1] = (char *)a1 + 8;
  AutoSharedUmfdFileViewLock::AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v4);
  h[0] = 0LL;
  if ( UmfdFileviewLookup
    && (v3 = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v3, h))
    && EngGetFilePath(h[0], (WCHAR (*)[261])pDest) )
  {
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v4);
    ProbeForWrite(v1[1], 0x20AuLL, 2u);
    if ( (int)RtlStringCchCopyW((char *)v1[1], 522LL, (char *)pDest) < 0 )
      *(_DWORD *)v1 = 0;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v4);
  }
}
