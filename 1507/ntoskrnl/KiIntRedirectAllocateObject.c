/*
 * XREFs of KiIntRedirectAllocateObject @ 0x14014FABC
 * Callers:
 *     KiIntRedirectConnnect @ 0x14014FA28 (KiIntRedirectConnnect.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KiIntRedirectAllocateObject(__int64 a1, _QWORD *a2)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v5; // r8d

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x5249654Bu);
  v5 = 0;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_WORD *)PoolWithTag + 4) = *(_WORD *)(a1 + 32);
    *PoolWithTag = *(_QWORD *)(a1 + 24);
    *((_BYTE *)PoolWithTag + 16) = 0;
  }
  else
  {
    v5 = -1073741670;
  }
  *a2 = PoolWithTag;
  return v5;
}
