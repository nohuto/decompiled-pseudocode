/*
 * XREFs of KiInitializePrcbContext @ 0x1403D3AC4
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall KiInitializePrcbContext(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  char v5; // di
  unsigned int v6; // ebp
  void *IndependentPages; // rax
  void *v8; // rsi
  _DWORD *v9; // r8
  int v10; // eax
  int v11; // eax

  v3 = KeXStateLength;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    v4 = 2 * KeXStateLength + 885;
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v4 = 0;
  }
  if ( v4 )
  {
    v6 = v4;
    IndependentPages = (void *)MmAllocateIndependentPages(v4, a2);
    v8 = IndependentPages;
    if ( !IndependentPages )
      return 3221225626LL;
    memset(IndependentPages, 0, v6);
    *(_QWORD *)(a1 + 25360) = ((unsigned __int64)v8 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
    v3 = KeXStateLength;
  }
  if ( v5 )
  {
    v9 = (_DWORD *)((*(_QWORD *)(a1 + 25360) + 15LL + v3) & 0xFFFFFFFFFFFFFFF0uLL);
    v9[310] = -1232;
    v9[311] = 1232;
    v9[312] = (((_DWORD)v9 + 1319) & 0xFFFFFFC0) - ((_DWORD)v9 + 1232);
    v10 = KeXStateLength - 512;
    v9[308] = -1232;
    v9[313] = v10;
    v9[309] = (((_DWORD)v9 + 1319) & 0xFFFFFFC0) - (_DWORD)v9 + v10;
    *(_QWORD *)(a1 + 25344) = v9;
  }
  *(_DWORD *)(a1 + 25352) = 1048587;
  if ( v5 )
  {
    v11 = *(_DWORD *)(a1 + 25352);
    if ( !*(_DWORD *)(a1 + 36) )
      v11 = 1048651;
    *(_DWORD *)(a1 + 25352) = v11;
  }
  return 0LL;
}
