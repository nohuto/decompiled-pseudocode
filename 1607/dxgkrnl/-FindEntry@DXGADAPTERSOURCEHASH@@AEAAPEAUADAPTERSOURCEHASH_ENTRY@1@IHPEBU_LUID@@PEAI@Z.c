/*
 * XREFs of ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C01694C4
 * Callers:
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C00F71F0 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C01695CC (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 * Callees:
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C00DB594 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::FindEntry(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        int a3,
        const struct _LUID *a4,
        unsigned int *a5)
{
  __int64 v5; // rbx
  unsigned int ActualBufferSize; // eax
  _QWORD *v9; // rdx
  __int64 v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  _DWORD *v15; // r11
  int v16; // r9d
  _DWORD *v17; // rdx
  BOOL v18; // r8d

  v5 = a2;
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40));
  v11 = *(unsigned int *)(v10 + 60);
  v12 = ActualBufferSize >> 4;
  if ( ActualBufferSize >> 4 > 1 << v11 )
    v12 = 1 << v11;
  if ( (unsigned int)v5 >= v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 32) = v12;
    *(_QWORD *)(v13 + 24) = v5;
    WdLogEvent5_WdAssertion(v13);
    return 0LL;
  }
  v15 = (_DWORD *)*v9;
  v16 = 0;
  v17 = (_DWORD *)(*v9 + 16 * v5);
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v18 = (v17[3] & 1) == (a3 != 0);
    if ( a4 && (a4->LowPart != *v17 || a4->HighPart != v17[1]) )
      v18 = 0;
    if ( a5 && *a5 != v17[2] )
      v18 = 0;
    if ( v18 )
      break;
    LODWORD(v5) = v5 + 1;
    v17 += 4;
    if ( (_DWORD)v5 == v12 )
    {
      LODWORD(v5) = 0;
      v17 = v15;
    }
    if ( ++v16 >= v12 )
      return 0LL;
  }
  return (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)v17;
}
