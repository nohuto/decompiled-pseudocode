/*
 * XREFs of ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C02A30A8
 * Callers:
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A35C4 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3678 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3764 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3844 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A39B8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02A3DCC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C025CC8C (-LowerBound@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D4F10 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D4F84 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  volatile signed __int32 *v3; // rbx
  char v6; // di
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx

  v3 = (volatile signed __int32 *)UmfdFileviewLookup;
  v6 = 1;
  while ( 1 )
  {
    _InterlockedAdd(v3 + 6, 1u);
    if ( !*((_DWORD *)v3 + 7) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared((NSInstrumentation::CPlatformReaderWriterLock *)v3);
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
  v7 = *((_QWORD *)v3 + 5);
  if ( !v7 )
    goto LABEL_10;
  v8 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound((__int64)v3, a2);
  if ( v8 >= v7 || (v9 = *((_QWORD *)v3 + 6) + 16 * v8, *(_DWORD *)v9 != *a2) )
    v9 = 0LL;
  if ( v9 )
    *a3 = *(_QWORD *)(v9 + 8);
  else
LABEL_10:
    v6 = 0;
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
  return v6;
}
