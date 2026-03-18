/*
 * XREFs of ObpInsertHandleCount @ 0x140524B64
 * Callers:
 *     ObpLockHandleDataBaseEntry @ 0x1405249D0 (ObpLockHandleDataBaseEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char *__fastcall ObpInsertHandleCount(__int64 a1)
{
  int **v2; // rdi
  int *p_Src; // r12
  unsigned int v4; // ebp
  unsigned int v5; // esi
  int v6; // r15d
  int *PoolWithTag; // rax
  int *v8; // r14
  char v9; // al
  char *result; // rax
  int v11; // r15d
  int v12; // ebp
  int Src; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]

  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    v2 = (int **)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7]);
  else
    v2 = 0LL;
  if ( !v2 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 27) & 0x40) != 0 )
  {
    Src = 1;
    p_Src = &Src;
    v4 = 24;
    v5 = 40;
    v14 = *(_OWORD *)v2;
    v6 = 2;
  }
  else
  {
    p_Src = *v2;
    v11 = **v2;
    v12 = v11 - 1;
    v6 = v11 + 4;
    v4 = 16 * v12 + 24;
    v5 = 16 * (v6 - 1) + 24;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v5, 0x6448624Fu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memmove(PoolWithTag, p_Src, v4);
  v9 = *(_BYTE *)(a1 + 27);
  if ( (v9 & 0x40) != 0 )
    *(_BYTE *)(a1 + 27) = v9 & 0xBF;
  else
    ExFreePoolWithTag(p_Src, 0);
  memset((char *)v8 + v4, 0, v5 - v4);
  *v8 = v6;
  result = (char *)v8 + v4;
  *v2 = v8;
  return result;
}
