/*
 * XREFs of PspApplyIFEOPerfOptions @ 0x1404CB58C
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x1400D1BB8 (MmGetDefaultPagePriority.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     PspSetProcessPriorityClass @ 0x1404C9A88 (PspSetProcessPriorityClass.c)
 */

__int64 __fastcall PspApplyIFEOPerfOptions(__int64 a1, unsigned int *a2, KPROCESSOR_MODE a3, __int64 a4)
{
  unsigned int DefaultPagePriority; // eax
  unsigned int v8; // r8d
  signed __int32 v9; // eax
  int v10; // r8d
  signed __int32 v11; // edx
  __int64 result; // rax
  unsigned int v13; // edi
  signed __int32 v14; // eax
  unsigned int v15; // edi
  signed __int32 v16; // edx

  if ( (*a2 & 1) != 0 )
  {
    v13 = a2[2];
    if ( v13 < 4 && (v13 <= 2 || (SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a3) & 1) != 0) )
    {
      v14 = *(_DWORD *)(a1 + 772);
      v15 = v13 << 27;
      do
      {
        v16 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 772), v15 | v14 & 0xC7FFFFFF, v14);
      }
      while ( v14 != v16 );
    }
  }
  if ( (*a2 & 2) != 0 )
  {
    DefaultPagePriority = MmGetDefaultPagePriority();
    if ( v8 < DefaultPagePriority )
    {
      v9 = *(_DWORD *)(a1 + 768);
      v10 = v8 << 12;
      do
      {
        v11 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 768), v10 | v9 & 0xFFFF8FFF, v9);
      }
      while ( v9 != v11 );
    }
  }
  result = *a2;
  if ( (result & 4) != 0 && a2[4] <= 0xFF )
  {
    LOBYTE(a4) = a3;
    return PspSetProcessPriorityClass(a1, *((_BYTE *)a2 + 16), 0LL, a4);
  }
  return result;
}
