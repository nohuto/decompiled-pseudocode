/*
 * XREFs of ObpInsertHandleCount @ 0x1404A6DC4
 * Callers:
 *     ObpLockHandleDataBaseEntry @ 0x1404A6C30 (ObpLockHandleDataBaseEntry.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x140096064 (OBJECT_HEADER_TO_HANDLE_INFO.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall ObpInsertHandleCount(__int64 a1)
{
  int **v2; // rax
  int **v3; // r14
  int *p_Src; // r12
  unsigned int v5; // esi
  int v6; // ebp
  unsigned int v7; // edi
  int *PoolWithTag; // rax
  int *v9; // r15
  char v10; // al
  char *result; // rax
  int v12; // ebp
  int v13; // esi
  int Src; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+28h] [rbp-40h]

  v2 = (int **)OBJECT_HEADER_TO_HANDLE_INFO(a1);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 27) & 0x40) != 0 )
  {
    Src = 1;
    p_Src = &Src;
    v5 = 24;
    v6 = 2;
    v15 = *(_OWORD *)v2;
    v7 = 40;
  }
  else
  {
    p_Src = *v2;
    v12 = **v2;
    v13 = v12 - 1;
    v6 = v12 + 4;
    v5 = 16 * v13 + 24;
    v7 = 16 * (v6 - 1) + 24;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v7, 0x6448624Fu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memmove(PoolWithTag, p_Src, v5);
  v10 = *(_BYTE *)(a1 + 27);
  if ( (v10 & 0x40) != 0 )
    *(_BYTE *)(a1 + 27) = v10 & 0xBF;
  else
    ExFreePoolWithTag(p_Src, 0);
  memset((char *)v9 + v5, 0, v7 - v5);
  *v9 = v6;
  result = (char *)v9 + v5;
  *v3 = v9;
  return result;
}
