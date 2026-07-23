/*
 * XREFs of CmpRegisterCallbackInternal @ 0x14055163C
 * Callers:
 *     CmRegisterCallbackEx @ 0x140551610 (CmRegisterCallbackEx.c)
 *     CmRegisterCallback @ 0x140581C4C (CmRegisterCallback.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpInsertCallbackInListByAltitude @ 0x14055171C (CmpInsertCallbackInListByAltitude.c)
 */

__int64 __fastcall CmpRegisterCallbackInternal(__int64 a1, __int64 a2, const void **a3, char a4, _QWORD *a5)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  PVOID v12; // rax
  __int64 v13; // rdx
  int inserted; // edi
  void *v16; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x62634D43u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    v11 = PoolWithTag + 8;
    v11[1] = v11;
    *v11 = v11;
    *((_DWORD *)v10 + 4) = 0;
    v10[4] = a2;
    v10[5] = a1;
    LOWORD(v11) = *(_WORD *)a3;
    *((_WORD *)v10 + 25) = *(_WORD *)a3;
    *((_WORD *)v10 + 24) = (_WORD)v11;
    v12 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a3, 0x61634D43u);
    v10[7] = v12;
    if ( v12 )
    {
      memmove(v12, a3[1], *(unsigned __int16 *)a3);
      LOBYTE(v13) = a4;
      inserted = CmpInsertCallbackInListByAltitude(v10, v13);
      *a5 = v10[3];
      if ( inserted >= 0 )
        return (unsigned int)inserted;
    }
    else
    {
      inserted = -1073741670;
    }
    v16 = (void *)v10[7];
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    ExFreePoolWithTag(v10, 0);
    return (unsigned int)inserted;
  }
  return 3221225626LL;
}
