/*
 * XREFs of NewContext @ 0x1C00062E8
 * Callers:
 *     AMLILoadDDB @ 0x1C008606C (AMLILoadDDB.c)
 * Callees:
 *     InitContext @ 0x1C00063AC (InitContext.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001720C (ExAllocateFromNPagedLookasideList.c)
 *     ListInsertTail @ 0x1C0017CB4 (ListInsertTail.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall NewContext(PVOID *a1)
{
  unsigned int v2; // ebx
  PVOID v3; // rax
  KIRQL v4; // dl
  int v5; // eax
  KIRQL v6; // al
  __int64 v7; // rcx

  v2 = 0;
  v3 = ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList);
  *a1 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x200uLL);
    v4 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    v5 = gdwcCTObjs + 1;
    gdwcCTObjs = v5;
    if ( v5 > 0 && v5 > (unsigned int)gdwcCTObjsMax )
      gdwcCTObjsMax = v5;
    KeReleaseSpinLock(&gdwGContextSpinLock, v4);
    InitContext(*a1);
    v6 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v7 = (__int64)*a1 + 16;
    byte_1C005A4A8 = v6;
    ListInsertTail(v7, &gplistCtxtHead);
    KeReleaseSpinLock(&gmutCtxtList, byte_1C005A4A8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
