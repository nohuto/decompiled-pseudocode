/*
 * XREFs of PFTOBJ::EnumeratePFFs__vUnlinkAllEudcRFONTsAndPFEs_::_5_::_lambda_3___ @ 0x140323C28
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x140287590 (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x140325234 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 */

__int64 __fastcall PFTOBJ::EnumeratePFFs__vUnlinkAllEudcRFONTsAndPFEs_::_5_::_lambda_3___(
        __int64 *a1,
        unsigned int **a2)
{
  __int64 result; // rax
  unsigned int i; // ebx
  unsigned int *v6; // rcx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  result = *a1;
  for ( i = 0; i < *(_DWORD *)(*a1 + 24); ++i )
  {
    PFT::PffBucket(result, (PffIterator *)&v8, i);
    while ( v8 )
    {
      v6 = *a2;
      v7[0] = v8;
      vUnlinkAllEudcRFONTsAndPFEsWorker(*v6, v7);
      PffIterator::operator++(&v8);
    }
    result = *a1;
  }
  return result;
}
