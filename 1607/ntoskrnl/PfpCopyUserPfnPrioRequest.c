/*
 * XREFs of PfpCopyUserPfnPrioRequest @ 0x14041A0E0
 * Callers:
 *     PfpPfnPrioRequest @ 0x14041A310 (PfpPfnPrioRequest.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x14000F70C (MmGetHighestPhysicalPage.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpCopyUserPfnPrioRequest(unsigned __int64 a1, unsigned int a2, int a3, _QWORD *a4, char a5, int a6)
{
  unsigned int v9; // r15d
  _QWORD *v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // ecx
  char *PoolWithTag; // rax
  size_t v16; // r8
  void *v17; // rcx
  unsigned __int64 i; // rdx

  v9 = 0;
  v10 = 0LL;
  if ( a5 && a2 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = a1 + a2;
    if ( v11 > 0x7FFFFFFF0000LL || v11 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 <= 0xFFFFFFFF && 24 * (v12 + 8) <= 0xFFFFFFFF && v12 && v12 <= MmGetHighestPhysicalPage() + 1 && v14 <= v13 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x42506650u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_25;
    }
    *(_OWORD *)PoolWithTag = *(_OWORD *)a1;
    *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)(a1 + 32);
    *((_OWORD *)PoolWithTag + 3) = *(_OWORD *)(a1 + 48);
    *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)(a1 + 64);
    *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a1 + 80);
    *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)(a1 + 96);
    *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)(a1 + 112);
    *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)(a1 + 128);
    *((_OWORD *)PoolWithTag + 9) = *(_OWORD *)(a1 + 144);
    *((_OWORD *)PoolWithTag + 10) = *(_OWORD *)(a1 + 160);
    *((_OWORD *)PoolWithTag + 11) = *(_OWORD *)(a1 + 176);
    if ( *(_DWORD *)PoolWithTag == 1
      && (a3 == 22 || (*((_DWORD *)PoolWithTag + 1) & 0xFFFFFFFE) == 0)
      && *((_QWORD *)PoolWithTag + 1) == v12 )
    {
      v16 = (unsigned int)(24 * v12);
      v17 = PoolWithTag + 192;
      if ( a6 )
      {
        memset(v17, 0, v16);
        for ( i = 0LL; i < v12; ++i )
          v10[3 * i + 25] = *(_QWORD *)(24 * i + a1 + 200);
      }
      else
      {
        memmove(v17, (const void *)(a1 + 192), v16);
      }
      *a4 = v10;
      v10 = 0LL;
      goto LABEL_25;
    }
  }
  v9 = -1073741811;
LABEL_25:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v9;
}
