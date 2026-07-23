/*
 * XREFs of CmpDoAccessCheckOnSubtree @ 0x140602518
 * Callers:
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpCheckKeyAccess @ 0x140601FB0 (CmpCheckKeyAccess.c)
 */

__int64 __fastcall CmpDoAccessCheckOnSubtree(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        unsigned int a5)
{
  int SubKeyByNumber; // edi
  unsigned int *PoolWithTag; // rax
  void *v10; // r14
  __int64 v12; // rbp
  unsigned int *v13; // rbx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  unsigned int v16; // r8d
  unsigned int v17; // eax
  _DWORD v18[14]; // [rsp+20h] [rbp-38h] BYREF

  v18[0] = -1;
  v18[1] = 0;
  SubKeyByNumber = -1073741670;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x2800uLL, 0x74634D43u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = a2;
  v12 = 0LL;
  v13 = PoolWithTag;
  PoolWithTag[3] = 0;
  *((_BYTE *)PoolWithTag + 16) = 0;
  do
  {
    if ( !*((_BYTE *)v13 + 16) )
    {
      v14 = *v13;
      *((_BYTE *)v13 + 16) = 1;
      SubKeyByNumber = CmpCheckKeyAccess(a1, v14, a3, 0x10000u);
      if ( SubKeyByNumber < 0 )
        break;
    }
    v15 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *v13, v18);
    if ( !v15 )
    {
      SubKeyByNumber = -1073741670;
      break;
    }
    v16 = v13[3];
    if ( v16 >= v15[5] + v15[6] )
    {
      --v12;
      v13 -= 5;
    }
    else
    {
      SubKeyByNumber = CmpFindSubKeyByNumber(a1, v15, v16, &a5);
      if ( SubKeyByNumber < 0 )
        goto LABEL_16;
      v17 = a5;
      if ( a5 == -1 || (++v13[3], ++v12, v13 += 5, v12 == 512) )
      {
        SubKeyByNumber = -1073741670;
LABEL_16:
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v18);
        break;
      }
      *v13 = v17;
      v13[3] = 0;
      *((_BYTE *)v13 + 16) = 0;
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v18);
  }
  while ( v12 >= 0 );
  ExFreePoolWithTag(v10, 0x74634D43u);
  return (unsigned int)SubKeyByNumber;
}
