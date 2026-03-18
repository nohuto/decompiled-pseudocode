/*
 * XREFs of MmProcessWorkingSetControl @ 0x1406A9564
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiEmptyWorkingSet @ 0x14007B85C (MiEmptyWorkingSet.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140213640 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     PsSwapProcessWorkingSet @ 0x1406BFCFC (PsSwapProcessWorkingSet.c)
 *     SmStoreCompressionStart @ 0x1406D9F78 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1406D9FF0 (SmStoreCompressionStop.c)
 */

NTSTATUS __fastcall MmProcessWorkingSetControl(HANDLE Handle, __int64 *a2, unsigned int a3, KPROCESSOR_MODE a4)
{
  NTSTATUS result; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  volatile signed __int32 *v9; // r15
  int v10; // r12d
  int v11; // edi
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // [rsp+40h] [rbp-78h]
  int v17; // [rsp+48h] [rbp-70h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v19[48]; // [rsp+58h] [rbp-60h] BYREF

  Object = Handle;
  if ( a3 < 0xC )
    return -1073741820;
  v7 = 0;
  v16 = *a2;
  v17 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return -1073741735;
  if ( HIDWORD(v16) >= 2 )
    return -1073741811;
  if ( !HIDWORD(v16) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return -1073741727;
  result = ObReferenceObjectByHandleWithTag(Handle, 0x2000u, (POBJECT_TYPE)PsProcessType, a4, 0x73576D4Du, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = (volatile signed __int32 *)Object;
    if ( KeGetCurrentThread()->ApcState.Process == Object )
    {
      v10 = 0;
    }
    else
    {
      v10 = 1;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v19);
    }
    if ( HIDWORD(v16) )
    {
      if ( (v17 & 0xFFFFFFE0) != 0 )
        goto LABEL_16;
      v13 = v17 & 2;
      v14 = v17 & 1;
      v15 = ((v17 & 1) == 0) ^ (unsigned int)((v17 & 2) == 0);
      if ( (_DWORD)v15 || (v17 & 8) != 0 && (v17 & 2) == 0 || (v17 & 0x10) != 0 && (v17 & 8) == 0 )
      {
        v11 = -1073741637;
        goto LABEL_34;
      }
      if ( (v17 & 1) != 0 )
      {
        if ( (v17 & 8) != 0 )
          SmStoreCompressionStart(v15, v13);
        v11 = MiEmptyWorkingSetPrivatePagesByVa(v9 + 318, v13, v14, v8);
        if ( (v17 & 8) != 0 )
        {
          LOBYTE(v7) = (v17 & 0x10) != 0;
          SmStoreCompressionStop(v7);
        }
        goto LABEL_34;
      }
      if ( (v17 & 4) != 0 )
        LOBYTE(v7) = 2;
      LOBYTE(v13) = 17;
      v12 = MiEmptyWorkingSet((__int64)(v9 + 318), v13, v7);
    }
    else
    {
      if ( (v17 & 0xFFFFFFFE) != 0 )
      {
LABEL_16:
        v11 = -1073741811;
LABEL_34:
        if ( v10 == 1 )
          KiUnstackDetachProcess((struct _KTHREAD *)v19, 0);
        ObfDereferenceObjectWithTag((PVOID)v9, 0x73576D4Du);
        return v11;
      }
      v12 = PsSwapProcessWorkingSet((PVOID)v9);
    }
    v11 = v12;
    goto LABEL_34;
  }
  return result;
}
