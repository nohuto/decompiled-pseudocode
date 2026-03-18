/*
 * XREFs of imp_WdfMemoryCreateFromLookaside @ 0x1C00353E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetBuffer@FxMemoryBufferPreallocated@@UEAAPEAXXZ @ 0x1C00096F0 (-GetBuffer@FxMemoryBufferPreallocated@@UEAAPEAXXZ.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfMemoryCreateFromLookaside(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFLOOKASIDE__ *Lookaside,
        WDFMEMORY__ **Memory)
{
  FxLookasideList *v4; // rcx
  __int64 result; // rax
  int v6; // ebx
  _FX_DRIVER_GLOBALS *Buffer; // rax
  void *v8; // rdx
  FxLookasideList *pLookaside; // [rsp+40h] [rbp+8h] BYREF
  FxMemoryObject *pMemory; // [rsp+50h] [rbp+18h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+58h] [rbp+20h] BYREF

  pLookaside = 0LL;
  pMemory = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Lookaside,
    0x1009u,
    (void **)&pLookaside);
  v4 = pLookaside;
  if ( !Memory )
  {
    Buffer = FxMemoryBufferPreallocated::GetBuffer((FxMemoryBufferFromPool *)pLookaside);
    FxVerifierNullBugCheck(Buffer, v8);
  }
  *Memory = 0LL;
  result = ((__int64 (__fastcall *)(FxLookasideList *, FxMemoryObject **))v4->Allocate)(v4, &pMemory);
  if ( (int)result >= 0 )
  {
    v6 = FxObject::Commit(pMemory, &pLookaside->m_MemoryAttributes, (void **)&hMemory, 0LL, 1u);
    if ( v6 < 0 )
      FxObject::DeleteFromFailedCreate(pMemory);
    else
      *Memory = hMemory;
    return (unsigned int)v6;
  }
  return result;
}
