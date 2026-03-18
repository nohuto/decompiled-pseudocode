/*
 * XREFs of ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3FF8
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A47DC (UmfdDispatchEscape.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C02A357C (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C02A385C (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 */

void __fastcall UmfdEscEngUnmapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR iFile; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  AutoSharedUmfdFileViewLock::AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)&v5);
  iFile = 0LL;
  if ( UmfdFileviewLookup )
  {
    v3 = *((_DWORD *)a1 + 2);
    if ( NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v3, &iFile) )
      EngUnmapFontFileFD(iFile);
  }
  if ( v5 )
  {
    GreReleasePushLockShared(v5);
    KeLeaveCriticalRegion();
  }
}
