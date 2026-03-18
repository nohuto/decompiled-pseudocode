/*
 * XREFs of ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D4F10
 * Callers:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C02A30A8 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C02D503C (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C02D52A0 (-Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C02D53A0 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ??$Enumerate@P6AXPEAX00@Z@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02D5590 (--$Enumerate@P6AXPEAX00@Z@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTrace.c)
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C02D582C (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C02D59D4 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02D5AFC (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C02D6C2C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(
        NSInstrumentation::CPlatformReaderWriterLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
}
