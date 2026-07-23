/*
 * XREFs of IopSymlinkApplyToOpenedName @ 0x140624E60
 * Callers:
 *     IopGraftName @ 0x140541568 (IopGraftName.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 *     IopReplaceSymlinkPath @ 0x140624B4C (IopReplaceSymlinkPath.c)
 */

__int64 __fastcall IopSymlinkApplyToOpenedName(__int64 a1, __int64 a2, _WORD *a3, IRP *a4, PVOID P, __int16 a6)
{
  void *v6; // r13
  PVOID PoolWithTag; // r14
  UNICODE_STRING *v13; // rsi
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // dx
  NTSTATUS v16; // edi

  v6 = *(void **)(a1 + 96);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a2 + 16), 0x63466F49u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v13 = (UNICODE_STRING *)(a1 + 88);
  v14 = *(_WORD *)(a1 + 88);
  if ( v14 > 2u && *(_WORD *)(*(_QWORD *)(a1 + 96) + 2 * ((unsigned __int64)v14 >> 1) - 2) == 92 )
  {
    if ( a3[3] < 2u )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225485LL;
    }
    v13->Length = v14 - 2;
    a3[3] -= 2;
  }
  memmove(P, *(const void **)(a2 + 24), *(unsigned __int16 *)(a2 + 4));
  memmove(
    PoolWithTag,
    (const void *)(*(_QWORD *)(a2 + 24) + *(unsigned __int16 *)(a2 + 4)),
    *(unsigned __int16 *)(a2 + 16) - *(unsigned __int16 *)(a2 + 4));
  *(_QWORD *)(a1 + 96) = PoolWithTag;
  v15 = *(_WORD *)(a2 + 16) - *(_WORD *)(a2 + 4);
  *(_WORD *)(a1 + 90) = v15;
  v13->Length = v15;
  ExFreePoolWithTag(v6, 0);
  v16 = IopReplaceSymlinkPath(
          (const wchar_t *)P,
          *(unsigned __int16 *)(a2 + 4) >> 1,
          a1,
          a3,
          *(unsigned __int16 *)(a2 + 4) >> 1,
          *(_WORD *)(a2 + 4),
          a6);
  if ( v16 < 0 )
    ExFreePoolWithTag(P, 0);
  else
    return (unsigned int)IopSymlinkUpdateECP(
                           a4,
                           (UNICODE_STRING *)a2,
                           0,
                           v13,
                           *(_WORD *)(a2 + 4),
                           *(_WORD *)(a2 + 2) & 0xFFFE);
  return (unsigned int)v16;
}
