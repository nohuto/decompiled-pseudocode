/*
 * XREFs of KiSystemStartup @ 0x1403C8010
 * Callers:
 *     <none>
 * Callees:
 *     KiIdleLoop @ 0x140161FE0 (KiIdleLoop.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 *     KiInitializeXSave @ 0x1403D6360 (KiInitializeXSave.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __stdcall __noreturn KiSystemStartup(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  DRIVER_DISPATCH *v2; // rdx
  DRIVER_DISPATCH *v3; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  __int64 v9; // r8
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  void *v13; // rsp
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  _SINGLE_LIST_ENTRY *v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v23; // zf

  KeLoaderBlock_0 = (__int64)DriverObject;
  v2 = DriverObject->MajorFunction[3];
  if ( !v2 )
    v2 = (DRIVER_DISPATCH *)&unk_140344180;
  DriverObject->MajorFunction[3] = v2;
  v3 = v2;
  _RDX = (unsigned __int64)v2 - 384;
  *(_QWORD *)(_RDX + 24) = _RDX;
  *(_QWORD *)(_RDX + 32) = v3;
  v5 = __readcr0();
  *(_QWORD *)(_RDX + 448) = v5;
  v6 = __readcr2();
  *(_QWORD *)(_RDX + 456) = v6;
  v7 = __readcr3();
  *(_QWORD *)(_RDX + 464) = v7;
  v8 = __readcr4();
  *(_QWORD *)(_RDX + 472) = v8;
  __sgdt((void *)(_RDX + 534));
  v9 = *(_QWORD *)(_RDX + 536);
  *(_QWORD *)_RDX = v9;
  __sidt((void *)(_RDX + 550));
  *(_QWORD *)(_RDX + 56) = *(_QWORD *)(_RDX + 552);
  __asm
  {
    str     word ptr [rdx+230h]
    sldt    word ptr [rdx+232h]
  }
  *(_DWORD *)(_RDX + 384) = 8064;
  _mm_setcsr(*(_DWORD *)(_RDX + 384));
  if ( !*((_DWORD *)v3 + 9) )
    *(_WORD *)(v9 + 80) = 15360;
  _AX = 0;
  __asm { lldt    ax }
  *MK_FP(43, _RDX + 8) = *MK_FP(43, v9 + 66);
  *MK_FP(43, _RDX + 10) = *MK_FP(43, v9 + 68);
  *MK_FP(43, _RDX + 11) = *MK_FP(43, v9 + 71);
  *MK_FP(43, _RDX + 12) = *MK_FP(43, v9 + 72);
  v11 = _RDX;
  v12 = HIDWORD(_RDX);
  __writemsr(0xC0000101, __PAIR64__(v12, v11));
  __writemsr(0xC0000102, __PAIR64__(v12, v11));
  _guard_dispatch_icall_fptr = guard_dispatch_icall;
  _guard_check_icall_fptr[0] = (__int64 (__fastcall *)())xHalFreeMessageTarget;
  KiInitializeBootStructures(KeLoaderBlock_0, v12);
  if ( !*MK_FP(43, *MK_FP(43, KeLoaderBlock_0 + 136) + 36LL) )
    KdInitSystem(0LL, KeLoaderBlock_0);
  KiInitializeXSave(KeLoaderBlock_0, (unsigned int)*MK_FP(43, *MK_FP(43, KeLoaderBlock_0 + 136) + 36LL));
  __writecr8(0xFuLL);
  v13 = alloca((unsigned int)KeXStateLength);
  v14 = *MK_FP(43, KeLoaderBlock_0 + 144);
  v15 = *MK_FP(43, KeLoaderBlock_0 + 152);
  if ( (KiKvaShadow & 1) != 0 )
  {
    v16 = *MK_FP(43, *MK_FP(43, &KeGetPcr()->IdtBase) + 4216LL);
    __writegsqword(0x7008u, v16);
  }
  else
  {
    v16 = *MK_FP(43, *MK_FP(43, &KeGetPcr()->TssBase) + 4LL);
  }
  __writegsqword(0x1A8u, v16);
  KiInitializeKernel(v14, v15);
  if ( !*MK_FP(43, &KeGetPcr()->Prcb.Number) )
  {
    v20 = __rdtsc();
    v17 = __ROR8__(v20, 49);
    v21 = __ROL8__(ExpSecurityCookieRandomData ^ v17 ^ v20, 16);
    LOWORD(v21) = 0;
    _security_cookie = __ROR8__(v21, 16);
    _security_cookie_complement = ~_security_cookie;
  }
  CurrentThread = KeGetCurrentThread();
  *MK_FP(43, &CurrentThread->WaitBlockFill11[70]) = 2;
  do
  {
    v23 = KiBarrierWait == 0;
    _mm_pause();
  }
  while ( !v23 );
  KiIdleLoop((__int64)CurrentThread, v17, v18, v19);
}
