/*
 * XREFs of imp_WdfMemoryCreateFromLookaside @ 0x1C00737A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfMemoryCreateFromLookaside(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Lookaside,
        WDFMEMORY__ **Memory)
{
  FxLookasideList *v4; // rcx
  __int64 Offset; // r8
  __int64 result; // rax
  int v7; // edi
  WDFMEMORY__ *hMemory; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxLookasideList *pLookaside; // [rsp+58h] [rbp+10h] BYREF
  FxMemoryObject *pMemory; // [rsp+68h] [rbp+20h] BYREF

  pLookaside = 0LL;
  pMemory = 0LL;
  if ( !Lookaside )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1009uLL);
  v4 = (FxLookasideList *)(~Lookaside & 0xFFFFFFFFFFFFFFF8uLL);
  Offset = 0LL;
  if ( (Lookaside & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxLookasideList *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4105 )
  {
    pLookaside = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pLookaside, (void *)Lookaside, 0x1009u, Offset);
    v4 = pLookaside;
  }
  if ( !Memory )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  *Memory = 0LL;
  result = ((__int64 (__fastcall *)(FxLookasideList *, FxMemoryObject **, __int64))v4->Allocate)(v4, &pMemory, Offset);
  if ( (int)result >= 0 )
  {
    v7 = FxObject::Commit(pMemory, &pLookaside->m_MemoryAttributes, (void **)&hMemory, 0LL, 1u);
    if ( v7 < 0 )
      FxObject::DeleteFromFailedCreate(pMemory);
    else
      *Memory = hMemory;
    return (unsigned int)v7;
  }
  return result;
}
