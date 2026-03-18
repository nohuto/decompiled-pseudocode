/*
 * XREFs of CmGetKCBCacheSecurity @ 0x14042B39C
 * Callers:
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpSnapshotKCBSecurity @ 0x140659C90 (CmpSnapshotKCBSecurity.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CmListGetPrevElement @ 0x140448C64 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
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
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) && *(_DWORD *)(v7 + 68) == 9 )
      {
        if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(
                                 *(_QWORD *)(BugCheckParameter3 + 32),
                                 *(unsigned int *)(v7 + 80),
                                 &v8) )
          KeBugCheckEx(0x51u, 4uLL, 4uLL, BugCheckParameter3, *(unsigned int *)(v7 + 80));
        return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 32) + 3056LL) + 16LL * (unsigned int)v8 + 8);
      }
    }
  }
  return v3;
}
