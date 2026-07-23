/*
 * XREFs of MiSecureVad @ 0x140429950
 * Callers:
 *     MmSecureVirtualMemory @ 0x14042985C (MmSecureVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiComparePteProtections @ 0x1401E8F90 (MiComparePteProtections.c)
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiSecureVad(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  int v5; // edi
  int v6; // esi
  unsigned int v7; // ebx
  int v9; // r14d
  int v10; // r9d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rax

  v5 = a2 & 0xFFFFF000;
  v6 = (a2 + a3 - 1) | 0xFFF;
  v7 = 0;
  v9 = a1;
  if ( (a4 & 1) != 0 )
    goto LABEL_5;
  v10 = 4;
  v11 = (a2 + a3 - 1) | 0xFFF;
  v12 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 == 2 )
    v10 = 1;
  result = MiComparePteProtections(a1, v12, v11, v10, 0);
  if ( (int)result >= 0 )
  {
LABEL_5:
    v14 = MiAddSecureEntry(v9, v5, v6, a4, 0);
    *a5 = v14;
    if ( !v14 )
      return (unsigned int)-1073741670;
    return v7;
  }
  return result;
}
