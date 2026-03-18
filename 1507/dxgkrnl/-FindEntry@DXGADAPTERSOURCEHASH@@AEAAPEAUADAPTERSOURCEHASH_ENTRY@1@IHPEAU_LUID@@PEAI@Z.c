/*
 * XREFs of ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEAU_LUID@@PEAI@Z @ 0x1C013F534
 * Callers:
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEAU_LUID@@IH@Z @ 0x1C00D1904 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEAU_LUID@@IH@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z @ 0x1C013F618 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z.c)
 * Callees:
 *     ?CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ @ 0x1C000A9C8 (-CalcCurrentTableSize@DXGADAPTERSOURCEHASH@@AEAAIXZ.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::FindEntry(
        DXGADAPTERSOURCEHASH *this,
        unsigned int a2,
        int a3,
        struct _LUID *a4,
        unsigned int *a5)
{
  __int64 v6; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  int v17; // r8d
  _DWORD *v18; // rcx
  BOOL v19; // edx

  v6 = a2;
  v9 = DXGADAPTERSOURCEHASH::CalcCurrentTableSize(this);
  v14 = v9;
  if ( (unsigned int)v6 >= v9 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = v6;
    *(_QWORD *)(v15 + 32) = v14;
    WdLogEvent5_WdAssertion(v15);
    return 0LL;
  }
  v17 = 0;
  v18 = (_DWORD *)(*((_QWORD *)this + 5) + 16 * v6);
  if ( !v9 )
    return 0LL;
  while ( 1 )
  {
    v19 = (v18[3] & 1) == a3;
    if ( a4 && (a4->LowPart != *v18 || a4->HighPart != v18[1]) )
      v19 = 0;
    if ( a5 && *a5 != v18[2] )
      v19 = 0;
    if ( v19 )
      break;
    LODWORD(v6) = v6 + 1;
    v18 += 4;
    if ( (_DWORD)v6 == v9 )
    {
      LODWORD(v6) = 0;
      v18 = (_DWORD *)*((_QWORD *)this + 5);
    }
    if ( ++v17 >= v9 )
      return 0LL;
  }
  return (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)v18;
}
