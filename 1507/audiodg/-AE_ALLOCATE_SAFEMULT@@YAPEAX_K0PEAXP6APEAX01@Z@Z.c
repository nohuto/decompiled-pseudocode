/*
 * XREFs of ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x1400396B8
 * Callers:
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039EC0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall AE_ALLOCATE_SAFEMULT(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        __int64 (__fastcall *a4)(unsigned __int64, void *))
{
  if ( is_mul_ok(1uLL, a2) )
    return a4(a2, a3);
  else
    return 0LL;
}
