/*
 * XREFs of ??R?$default_delete@VCPdcActivationClient@@@std@@QEBAXPEAVCPdcActivationClient@@@Z @ 0x1800359C8
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180030C50 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     _dynamic_atexit_destructor_for__g_pdcActivationClient___0 @ 0x18003C950 (_dynamic_atexit_destructor_for__g_pdcActivationClient___0.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180053EC0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPdcActivationClient@@QEAA@XZ @ 0x1800797A4 (--1CPdcActivationClient@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CPdcActivationClient>::operator()(__int64 a1, CPdcActivationClient *a2)
{
  if ( a2 )
  {
    CPdcActivationClient::~CPdcActivationClient(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x70);
  }
}
