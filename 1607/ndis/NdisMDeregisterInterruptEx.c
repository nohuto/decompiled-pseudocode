/*
 * XREFs of NdisMDeregisterInterruptEx @ 0x1C00F5C70
 * Callers:
 *     NdisMRegisterInterruptEx @ 0x1C00EC840 (NdisMRegisterInterruptEx.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1C005FEA0 (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 */

void __stdcall NdisMDeregisterInterruptEx(NDIS_HANDLE NdisInterruptHandle)
{
  __int64 v1; // rdi
  int v3; // ecx
  void *v4; // rcx
  KIRQL v5; // r8
  _QWORD *v6; // rcx
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)NdisInterruptHandle + 12);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x15u, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, v1, NdisInterruptHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 1904), 0xFFFFFFFF) == 1 )
    *(_DWORD *)(*((_QWORD *)NdisInterruptHandle + 12) + 120LL) |= 0x20u;
  *(_QWORD *)&Parameters.Version = 0LL;
  v3 = -(*((_BYTE *)NdisInterruptHandle + 193) != 0);
  Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)NdisInterruptHandle + 15);
  *(_QWORD *)&Parameters.Version = (unsigned int)(2 - v3);
  IoDisconnectInterruptEx(&Parameters);
  v4 = (void *)*((_QWORD *)NdisInterruptHandle + 26);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)NdisInterruptHandle + 26) = 0LL;
  }
  ndisWaitForDpcCompletion(
    (volatile int *)NdisInterruptHandle + 26,
    (volatile unsigned __int8 *)NdisInterruptHandle + 4,
    (struct _KEVENT *)((char *)NdisInterruptHandle + 128));
  ndisReferencePackage((__int64)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  v6 = (_QWORD *)(v1 + 784);
  *(_DWORD *)(v1 + 1856) = 657415;
  while ( *v6 )
  {
    if ( (NDIS_HANDLE)*v6 == NdisInterruptHandle )
    {
      *v6 = *((_QWORD *)NdisInterruptHandle + 20);
      break;
    }
    v6 = (_QWORD *)(*v6 + 160LL);
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
  ndisDereferencePackage((__int64)&ndisPkgs);
  ExFreePoolWithTag(NdisInterruptHandle, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x16u, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, v1);
}
