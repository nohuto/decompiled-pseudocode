/*
 * XREFs of KsepStringSplitMultiString @ 0x140653CC8
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140514ED8 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x140514AB8 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x140514F80 (KsepStringFree.c)
 */

__int64 __fastcall KsepStringSplitMultiString(__int64 a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  _QWORD *Paged; // rdi
  unsigned int v10; // esi
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  unsigned int v18; // r15d
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // al
  _QWORD *v23; // rbp

  v5 = a2 >> 1;
  v6 = 0LL;
  Paged = 0LL;
  if ( !a1 || (a2 & 1) != 0 || !a3 || !a4 )
  {
    v15 = -1073741811;
    goto LABEL_31;
  }
  if ( v5 < 3 || *(_WORD *)(a1 + 2 * v5 - 2) || *(_WORD *)(a1 + 2 * v5 - 4) )
    return (unsigned int)-1073741811;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  do
  {
    if ( !*(_WORD *)(a1 + 2 * v12) )
      ++v10;
    v12 = ++v11;
  }
  while ( v11 < v5 );
  if ( v10 < 2 )
  {
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v14 = KsepDebugFlag;
    KsepHistoryErrors[2 * v13 + 1] = -1073740768;
    KsepHistoryErrors[2 * v13] = 197560;
    if ( (v14 & 4) != 0 )
      RtlAssert("NullCount >= 2", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3B8u, 0LL);
  }
  v6 = v10 - 1;
  Paged = KsepPoolAllocatePaged(16LL * (unsigned int)v6);
  if ( !Paged )
    return (unsigned int)-1073741801;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = v5 - 1;
  if ( !v19 )
  {
LABEL_24:
    if ( v17 != (_DWORD)v6 )
    {
      v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      v22 = KsepDebugFlag;
      KsepHistoryErrors[2 * v21 + 1] = -1073740768;
      KsepHistoryErrors[2 * v21] = 197600;
      if ( (v22 & 4) != 0 )
        RtlAssert("Count == StringsVectorSize", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3E0u, 0LL);
    }
    *a3 = Paged;
    v15 = 0;
    *a4 = v6;
    return v15;
  }
  v20 = 0LL;
  while ( *(_WORD *)(a1 + 2 * v20) )
  {
LABEL_23:
    v20 = ++v18;
    if ( v18 >= v19 )
      goto LABEL_24;
  }
  if ( (int)KsepStringDuplicate((__int64)&Paged[2 * v17], (_WORD *)(a1 + 2LL * v16)) >= 0 )
  {
    v16 = v18 + 1;
    ++v17;
    goto LABEL_23;
  }
  v15 = -1073741801;
LABEL_31:
  if ( Paged )
  {
    if ( (_DWORD)v6 )
    {
      v23 = Paged;
      do
      {
        KsepStringFree(v23);
        v23 += 2;
        --v6;
      }
      while ( v6 );
    }
    KsepPoolFreePaged(Paged);
  }
  return v15;
}
