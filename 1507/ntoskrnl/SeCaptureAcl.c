/*
 * XREFs of SeCaptureAcl @ 0x14046BDC8
 * Callers:
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x14046EF1C (NtCreateTokenEx.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepCheckAcl @ 0x14046BECC (SepCheckAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureAcl(
        char *Src,
        char a2,
        __int64 a3,
        __int64 a4,
        POOL_TYPE PoolType,
        int a6,
        PVOID *a7,
        unsigned int *a8)
{
  _WORD *v9; // rdx
  unsigned int v10; // ebx
  char *v11; // rcx
  PVOID PoolWithTag; // rax

  if ( a2 )
  {
    v9 = Src + 2;
    if ( (unsigned __int64)(Src + 2) >= MmUserProbeAddress )
      v9 = (_WORD *)MmUserProbeAddress;
    v10 = (unsigned __int16)*v9;
    if ( *v9 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = &Src[(unsigned __int16)*v9];
      if ( (unsigned __int64)v11 > MmUserProbeAddress || v11 < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    v10 = *((unsigned __int16 *)Src + 1);
  }
  if ( v10 < 8 )
    return 3221225591LL;
  *a8 = (v10 + 3) & 0xFFFFFFFC;
  PoolWithTag = ExAllocatePoolWithTag(PoolType, v10, 0x63416553u);
  *a7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Src, v10);
    if ( (unsigned __int8)SepCheckAcl(*a7, v10) )
      return 0LL;
    ExFreePoolWithTag(*a7, 0);
    *a7 = 0LL;
    return 3221225591LL;
  }
  return 3221225626LL;
}
