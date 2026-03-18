/*
 * XREFs of CmGetKCBCacheSecurity @ 0x1404209D8
 * Callers:
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmpSnapshotKCBSecurity @ 0x1405E35F4 (CmpSnapshotKCBSecurity.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CmListGetPrevElement @ 0x1403DF088 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FB310 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 __fastcall CmGetKCBCacheSecurity(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v3; // rdi
  __int64 PrevElement; // rax
  __int64 v7; // rsi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(BugCheckParameter3 + 88);
  if ( a2 )
  {
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(BugCheckParameter3 + 200, &v8);
      v7 = PrevElement;
      if ( !PrevElement )
        break;
      if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) && *(_DWORD *)(v7 + 68) == 9 )
      {
        if ( !CmpFindSecurityCellCacheIndex(
                *(_QWORD *)(BugCheckParameter3 + 32),
                *(_DWORD *)(v7 + 80),
                (unsigned int *)&v8) )
          KeBugCheckEx(0x51u, 4uLL, 4uLL, BugCheckParameter3, *(unsigned int *)(v7 + 80));
        return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 32) + 3056LL) + 16LL * (unsigned int)v8 + 8);
      }
    }
  }
  return v3;
}
