/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4898
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A519C (UmfdDispatchEscape.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C01BF4D8 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C02A3EF4 (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C02A41CC (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 */

void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  int v3; // [rsp+50h] [rbp+8h] BYREF
  char v4; // [rsp+58h] [rbp+10h] BYREF
  struct _FILEVIEW *v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  AutoSharedUmfdFileViewLock::AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v4);
  v5 = 0LL;
  if ( UmfdFileviewLookup
    && (v3 = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v3, &v5))
    && (unsigned int)EngMapFontFileFDInternal(v5, &v6, &v3, 0) )
  {
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v4);
    ProbeForWrite(v1[1], 8uLL, 8u);
    ProbeForWrite(v1[2], 8uLL, 8u);
    *(_QWORD *)v1[1] = v6;
    *(_DWORD *)v1[2] = v3;
    *(_DWORD *)v1 = 1;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v4);
  }
}
