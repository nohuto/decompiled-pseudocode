/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x1404A9D74
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x1404A9D3C (IoBuildSynchronousFsdRequest.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E5238 (IopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7, a8);
  v11 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = a6;
    IopQueueThreadIrp(result, v9, v10);
    return v11;
  }
  return result;
}
