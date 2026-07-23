/*
 * XREFs of PspInitPhase3 @ 0x1407BD288
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     PsInitSystem @ 0x140793634 (PsInitSystem.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     strcpy_s @ 0x1401531F4 (strcpy_s.c)
 *     VslRegisterSecureSystemProcess @ 0x1401C2D78 (VslRegisterSecureSystemProcess.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PspMapSystemDll @ 0x14046ADA8 (PspMapSystemDll.c)
 *     PspReferenceSystemDll @ 0x14046AF3C (PspReferenceSystemDll.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 *     MmGetSectionStrongImageReference @ 0x140663080 (MmGetSectionStrongImageReference.c)
 */

bool PspInitPhase3()
{
  NTSTATUS v1; // eax
  void *v2; // rbx
  NTSTATUS SectionStrongImageReference; // edi
  int v4; // ebx
  PVOID Object; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v7[48]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v8[8]; // [rsp+80h] [rbp-88h] BYREF
  PVOID v9; // [rsp+88h] [rbp-80h]

  if ( !VslVsmEnabled )
    return 1;
  Handle = 0LL;
  if ( (int)PsCreateMinimalProcess(
              PsInitialSystemProcess,
              0LL,
              BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]),
              0LL,
              0,
              0,
              &Handle) < 0 )
    return 0;
  v1 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  PsSecureSystemProcess = (ULONG_PTR)Object;
  if ( v1 < 0 )
    return 0;
  strcpy_s((char *)Object + 1104, 0xFuLL, "Secure System");
  if ( VslRegisterSecureSystemProcess() < 0 )
    return 0;
  v2 = (void *)PspReferenceSystemDll((__int64)PspSystemDlls);
  SectionStrongImageReference = MmGetSectionStrongImageReference(0LL, v2, &Object);
  if ( v2 )
    ObFastDereferenceObject((signed __int64 *)PspSystemDlls, (unsigned __int64)v2);
  if ( SectionStrongImageReference < 0 )
    return 0;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v7);
  v4 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (signed __int64 *)PspSystemDlls, 0, 0);
  if ( v4 >= 0 )
  {
    v9 = Object;
    v4 = VslpEnterIumSecureMode(1, 3LL, 0LL, (__int64)v8);
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v7, 0);
  return v4 >= 0;
}
