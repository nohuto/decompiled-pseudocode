/*
 * XREFs of PspInitPhase3 @ 0x140772470
 * Callers:
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 *     PsInitSystem @ 0x140763DCC (PsInitSystem.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     strcpy_s @ 0x1401498A4 (strcpy_s.c)
 *     HvlRegisterSecureSystemProcess @ 0x1401B3340 (HvlRegisterSecureSystemProcess.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PspMapSystemDll @ 0x1404643E4 (PspMapSystemDll.c)
 *     PspReferenceSystemDll @ 0x140464590 (PspReferenceSystemDll.c)
 *     MmGetSectionStrongImageReference @ 0x14062CA98 (MmGetSectionStrongImageReference.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 */

bool __fastcall PspInitPhase3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  NTSTATUS v6; // eax
  void *v7; // rbx
  NTSTATUS SectionStrongImageReference; // edi
  int v9; // ebx
  PVOID Object; // [rsp+30h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-61h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v12; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int8 v13[8]; // [rsp+70h] [rbp-29h] BYREF
  PVOID v14; // [rsp+78h] [rbp-21h]
  unsigned int v15; // [rsp+80h] [rbp-19h]

  v4 = 0;
  if ( HvlpVsmVtlCallVa && HvlpEnterIumSecureMode(1u, 231, 0, v13) >= 0 )
  {
    a1 = v15;
    v4 = 4;
    if ( (v15 & 1) != 0 )
      v4 = 6;
    if ( (v15 & 2) != 0 )
      v4 |= 0x20u;
    if ( (v15 & 4) == 0 )
      v4 |= 0x10u;
  }
  if ( (v4 & 4) == 0 )
    return 1;
  Handle = 0LL;
  if ( (int)PspCreateMinimalProcess(a1, BYTE2(PsInitialSystemProcess[2].SwapListEntry.Next), a3, a4, &Handle) < 0 )
    return 0;
  v6 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  PsSecureSystemProcess = (ULONG_PTR)Object;
  if ( v6 < 0 )
    return 0;
  strcpy_s((char *)Object + 1104, 0xFuLL, "Secure System");
  if ( HvlRegisterSecureSystemProcess() < 0 )
    return 0;
  v7 = (void *)PspReferenceSystemDll((__int64)PspSystemDlls);
  SectionStrongImageReference = MmGetSectionStrongImageReference(0LL, v7, &Object);
  if ( v7 )
    ObFastDereferenceObject((signed __int64 *)PspSystemDlls, (unsigned __int64)v7);
  if ( SectionStrongImageReference < 0 )
    return 0;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)&v12);
  v9 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (signed __int64 *)PspSystemDlls, 0, 0);
  if ( v9 >= 0 )
  {
    v14 = Object;
    v9 = HvlpEnterIumSecureMode(1u, 3, 0, v13);
  }
  KiUnstackDetachProcess(&v12, 0LL);
  return v9 >= 0;
}
