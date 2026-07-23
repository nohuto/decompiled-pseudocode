/*
 * XREFs of SmIssueIo @ 0x140221DD0
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x14021DAA0 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x14021FA40 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x140003118 (SmKmStoreReference.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmKmIssueIo @ 0x140220894 (SmKmIssueIo.c)
 */

__int64 __fastcall SmIssueIo(
        unsigned __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rdi
  int v7; // esi
  int v9; // ebp
  int v13; // r14d
  int v14; // edi
  bool v15; // zf
  unsigned __int64 v16; // rax
  void (__stdcall *v17)(PVOID, PIO_STATUS_BLOCK, ULONG); // r8
  _QWORD v19[6]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a6;
  v7 = 0;
  v9 = 0;
  if ( (a6 & 1) != 0 )
  {
    v6 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  if ( (*(_DWORD *)(v6 + 28) & 4) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 5861) & 1) != 0 )
      return (unsigned int)-1073741058;
  }
  else
  {
    if ( !SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(a1 + 5856)) )
      return (unsigned int)-1073741058;
    v7 = 1;
  }
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 5944), 1u);
    v9 = 1;
  }
  memset(v19, 0, 0x28uLL);
  HIDWORD(v19[3]) = *(_DWORD *)(a1 + 6048);
  v19[1] = a5;
  LODWORD(v19[3]) = a2;
  v15 = (*(_DWORD *)a1 & 0x2000) == 0;
  v19[2] = __PAIR64__(a3, a4);
  LODWORD(v19[4]) ^= (LOBYTE(v19[4]) ^ (v13 != 0)) & 1;
  if ( v15 )
  {
    v16 = v6 + 48;
    *(_QWORD *)(v6 + 40) = a1;
    *(_DWORD *)(v6 + 32) = a4;
    v17 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))SmpDeviceIoCompletion;
  }
  else
  {
    v16 = v6 + 32;
    v6 = a1;
    v17 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))SmpIoCompletionApc;
  }
  v19[0] = v16;
  v14 = SmKmIssueIo(a1 + 6056, (__int64)v19, v17, (void *)v6, (*(_DWORD *)a1 >> 13) & 1);
  if ( v14 >= 0 )
  {
    v7 = 0;
    v9 = 0;
  }
  if ( v9 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 5944));
  if ( v7 )
    SmKmStoreDereference((__int64)&SmGlobals, *(_DWORD *)(a1 + 5856));
  return (unsigned int)v14;
}
