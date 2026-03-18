/*
 * XREFs of MmProcessWorkingSetControl @ 0x140517540
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     MiEmptyWorkingSet @ 0x14001F584 (MiEmptyWorkingSet.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14012D814 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x14012D9C4 (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SmStoreCompressionStop @ 0x140517730 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x14051779C (SmStoreCompressionStart.c)
 *     PsSwapProcessWorkingSet @ 0x14063EE24 (PsSwapProcessWorkingSet.c)
 */

NTSTATUS __fastcall MmProcessWorkingSetControl(HANDLE Handle, __int64 *a2, unsigned int a3, KPROCESSOR_MODE a4)
{
  unsigned int v6; // ebx
  NTSTATUS result; // eax
  PVOID v8; // r14
  int v9; // r13d
  unsigned __int64 v10; // rdx
  int v11; // edi
  int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-88h]
  int v14; // [rsp+48h] [rbp-80h]
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v16; // [rsp+58h] [rbp-70h] BYREF

  Object = Handle;
  if ( a3 < 0xC )
    return -1073741820;
  v6 = 0;
  v13 = *a2;
  v14 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return -1073741735;
  if ( HIDWORD(v13) >= 2 )
    return -1073741811;
  if ( !HIDWORD(v13) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return -1073741727;
  result = ObReferenceObjectByHandleWithTag(Handle, 0x2000u, (POBJECT_TYPE)PsProcessType, a4, 0x73576D4Du, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = Object;
    if ( KeGetCurrentThread()->ApcState.Process == Object )
    {
      v9 = 0;
    }
    else
    {
      v9 = 1;
      KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v16);
    }
    if ( HIDWORD(v13) )
    {
      if ( (v14 & 0xFFFFFFE0) == 0 )
      {
        if ( ((v14 & 1) == 0) == ((v14 & 2) == 0)
          && ((v14 & 8) == 0 || (v14 & 2) != 0)
          && ((v14 & 0x10) == 0 || (v14 & 8) != 0) )
        {
          MiLogWsEmptyControl((__int64)v8 + 1280);
          if ( (v14 & 1) != 0 )
          {
            if ( (v14 & 8) != 0 )
              SmStoreCompressionStart();
            v11 = MiEmptyWorkingSetPrivatePagesByVa((volatile LONG *)v8 + 320);
            if ( (v14 & 8) != 0 )
            {
              LOBYTE(v6) = (v14 & 0x10) != 0;
              SmStoreCompressionStop(v6);
            }
            goto LABEL_19;
          }
          if ( (v14 & 4) != 0 )
            LOBYTE(v6) = 2;
          LOBYTE(v10) = 17;
          v12 = MiEmptyWorkingSet((volatile LONG *)v8 + 320, v10, v6);
          goto LABEL_38;
        }
        v11 = -1073741637;
LABEL_19:
        if ( v9 == 1 )
          KiUnstackDetachProcess(&v16, 0LL);
        ObfDereferenceObjectWithTag(v8, 0x73576D4Du);
        return v11;
      }
    }
    else if ( (v14 & 0xFFFFFFFE) == 0 )
    {
      v12 = PsSwapProcessWorkingSet((PEPROCESS)v8);
LABEL_38:
      v11 = v12;
      goto LABEL_19;
    }
    v11 = -1073741811;
    goto LABEL_19;
  }
  return result;
}
