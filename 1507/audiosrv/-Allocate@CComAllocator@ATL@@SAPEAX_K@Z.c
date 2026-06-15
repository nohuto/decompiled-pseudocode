/*
 * XREFs of ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x180073EB4
 * Callers:
 *     ?AllocateBytes@?$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800677E8 (-AllocateBytes@-$CHeapPtrBase@USYSTEM_AUDIO_STREAM_DESCRIPTOR@@VCComAllocator@ATL@@@ATL@@QEAA_N_.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall ATL::CComAllocator::Allocate(unsigned __int64 a1)
{
  if ( a1 <= 0x7FFFFFFF )
    return CoTaskMemAlloc((unsigned int)a1);
  else
    return 0LL;
}
