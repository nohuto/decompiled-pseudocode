/*
 * XREFs of CmpDoAccessCheckOnSubtree @ 0x140659598
 * Callers:
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpFindSubKeyByNumber @ 0x1404C7350 (CmpFindSubKeyByNumber.c)
 *     CmpCheckKeyAccess @ 0x140659298 (CmpCheckKeyAccess.c)
 */

__int64 __fastcall CmpDoAccessCheckOnSubtree(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3, unsigned int a4, int a5)
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
  unsigned int v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = a4;
  a5 = -1;
  SubKeyByNumber = -1073741670;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x2800uLL, 0x74634D43u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[3] = 0;
  *PoolWithTag = a2;
  v12 = 0LL;
  *((_BYTE *)PoolWithTag + 16) = 0;
  v13 = PoolWithTag;
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
    v15 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *v13, &a5);
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
      SubKeyByNumber = CmpFindSubKeyByNumber(a1, v15, v16, &v18);
      if ( SubKeyByNumber < 0 )
        goto LABEL_16;
      v17 = v18;
      if ( v18 == -1 || (++v13[3], ++v12, v13 += 5, v12 == 512) )
      {
        SubKeyByNumber = -1073741670;
LABEL_16:
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &a5);
        break;
      }
      v13[3] = 0;
      *v13 = v17;
      *((_BYTE *)v13 + 16) = 0;
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &a5);
  }
  while ( v12 >= 0 );
  ExFreePoolWithTag(v10, 0x74634D43u);
  return (unsigned int)SubKeyByNumber;
}
