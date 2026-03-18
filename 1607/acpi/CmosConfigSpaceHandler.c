/*
 * XREFs of CmosConfigSpaceHandler @ 0x1C0048090
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C00481AC (CmosConfigSpaceHandlerWorker.c)
 *     CmosGetOpRegionType @ 0x1C0048230 (CmosGetOpRegionType.c)
 */

__int64 __fastcall CmosConfigSpaceHandler(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  PVOID PoolWithTag; // rax
  void *v13; // rbx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int OpRegionType; // edi
  __int64 v18; // rdx
  __int64 v19; // rdx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  *(_DWORD *)v13 = a1;
  *((_QWORD *)v13 + 1) = a2;
  AMLIReferenceHandleEx(a2);
  *((_QWORD *)v13 + 3) = a5;
  *((_DWORD *)v13 + 8) = a6;
  *((_QWORD *)v13 + 5) = a7;
  *((_QWORD *)v13 + 6) = a8;
  *((_DWORD *)v13 + 4) = a3;
  *((_DWORD *)v13 + 5) = a4;
  *((_QWORD *)v13 + 7) = AMLIGetParent(v15);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 104LL) )
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  OpRegionType = CmosGetOpRegionType(a2, v16, v13);
  result = 259LL;
  if ( OpRegionType == 259 )
    return result;
  if ( OpRegionType >= 0 )
    return CmosConfigSpaceHandlerWorker(a2, 0LL, 0LL, v13);
  (*((void (__fastcall **)(_QWORD))v13 + 5))(*((_QWORD *)v13 + 6));
  AMLIDereferenceHandleEx(*((volatile signed __int32 **)v13 + 1), v18);
  AMLIDereferenceHandleEx(*((volatile signed __int32 **)v13 + 7), v19);
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)OpRegionType;
}
