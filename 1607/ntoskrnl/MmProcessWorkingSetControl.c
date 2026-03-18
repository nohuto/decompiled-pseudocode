/*
 * XREFs of MmProcessWorkingSetControl @ 0x14054BAF8
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x14069B5D4 (VmpPauseResumeNotify.c)
 * Callees:
 *     MiEmptyWorkingSet @ 0x140015ED4 (MiEmptyWorkingSet.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140133E5C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x14013402C (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     SmStoreCompressionStop @ 0x14054BCFC (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x14054BD68 (SmStoreCompressionStart.c)
 *     PsSwapProcessWorkingSet @ 0x14067D48C (PsSwapProcessWorkingSet.c)
 */

NTSTATUS __fastcall MmProcessWorkingSetControl(HANDLE Handle, __int64 *a2, unsigned int a3, KPROCESSOR_MODE a4)
{
  unsigned int v6; // edi
  NTSTATUS result; // eax
  PVOID v8; // r14
  int v9; // r13d
  int v10; // ebx
  int v11; // eax
  __int64 v12; // [rsp+40h] [rbp-88h]
  int v13; // [rsp+48h] [rbp-80h]
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v15[48]; // [rsp+58h] [rbp-70h] BYREF

  Object = Handle;
  if ( a3 < 0xC )
    return -1073741820;
  v6 = 0;
  v12 = *a2;
  v13 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return -1073741735;
  if ( HIDWORD(v12) >= 2 )
    return -1073741811;
  if ( !HIDWORD(v12) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
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
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v15);
    }
    if ( HIDWORD(v12) )
    {
      if ( (v13 & 0xFFFFFFE0) == 0 )
      {
        if ( ((v13 & 1) == 0) != ((v13 & 2) == 0)
          || (v13 & 8) != 0 && (v13 & 2) == 0
          || (v13 & 0x10) != 0 && (v13 & 8) == 0 )
        {
          v10 = -1073741637;
LABEL_19:
          if ( v9 == 1 )
            KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
          ObfDereferenceObjectWithTag(v8, 0x73576D4Du);
          return v10;
        }
        MiLogWsEmptyControl((__int64)v8 + 1280);
        if ( (v13 & 1) != 0 )
        {
          if ( (v13 & 8) != 0 )
            SmStoreCompressionStart();
          v10 = MiEmptyWorkingSetPrivatePagesByVa((ULONG_PTR)v8 + 1280);
          if ( (v13 & 8) != 0 )
          {
            LOBYTE(v6) = (v13 & 0x10) != 0;
            SmStoreCompressionStop(v6);
          }
          goto LABEL_19;
        }
        if ( (v13 & 4) != 0 )
          v6 = 2;
        v11 = MiEmptyWorkingSet((ULONG_PTR)v8 + 1280, 17, v6);
LABEL_37:
        v10 = v11;
        goto LABEL_19;
      }
    }
    else if ( (v13 & 0xFFFFFFFE) == 0 )
    {
      v11 = PsSwapProcessWorkingSet((ULONG_PTR)v8);
      goto LABEL_37;
    }
    v10 = -1073741811;
    goto LABEL_19;
  }
  return result;
}
