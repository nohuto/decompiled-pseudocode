/*
 * XREFs of ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x18008B41C
 * Callers:
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180009CE0 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?CreateInstance@?$CComObject@VCSaProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002DF24 (-CreateInstance@-$CComObject@VCSaProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800421D0 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVADServer::InternalFinalConstructRelease(CVADServer *this, volatile int *a2)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((CVADServer *)((char *)this + 8), a2);
}
