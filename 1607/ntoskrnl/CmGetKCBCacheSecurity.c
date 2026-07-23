/*
 * XREFs of CmGetKCBCacheSecurity @ 0x14043F100
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14043F010 (CmpGetSecurityCacheEntryForKcbStack.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 *     CmListGetPrevElement @ 0x1404A77D0 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmGetKCBCacheSecurity(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v2; // rbx
  __int64 PrevElement; // rax
  __int64 v7; // rbp
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter3 + 80);
  v8 = 0LL;
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
                *(_QWORD *)(BugCheckParameter3 + 24),
                *(_DWORD *)(v7 + 88),
                (unsigned int *)&v8) )
          KeBugCheckEx(0x51u, 4uLL, 4uLL, BugCheckParameter3, *(unsigned int *)(v7 + 88));
        return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 24) + 3056LL) + 16LL * (unsigned int)v8 + 8);
      }
    }
  }
  return v2;
}
