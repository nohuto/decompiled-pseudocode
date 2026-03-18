/*
 * XREFs of _InitializeTouchInjectionWithQDCData @ 0x1C01DC9E8
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHXZ @ 0x1C01DBCC8 (-RealizePendingRecreateTouchInjectionDevices@@YAHXZ.c)
 *     _InitializeTouchInjection @ 0x1C01DC964 (_InitializeTouchInjection.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     CleanupInjectedTouchProcess @ 0x1C01DC600 (CleanupInjectedTouchProcess.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DEB78 (CreatePseudoDigitizerDevice.c)
 */

__int64 __fastcall InitializeTouchInjectionWithQDCData(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 PseudoDigitizerDevice; // r14
  int v13; // ecx
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax

  v4 = a1;
  v6 = 0LL;
  gullTouchInjectionMaxTimeOffset = 5000 * gliQpcFreq.QuadPart / 0x3E8uLL;
  if ( *(_QWORD *)(a3 + 848) )
    CleanupInjectedTouchProcess(a3);
  v9 = Win32AllocPoolWithQuotaZInit(96LL, 1953067861LL);
  v10 = v9;
  if ( !v9 )
    goto LABEL_4;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v4, a2, a4, v9);
  if ( !PseudoDigitizerDevice )
    goto LABEL_4;
  if ( !gbEnforceUIPI || (v13 = 1, *(int *)(a3 + 12) >= 0) )
    v13 = 0;
  *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 416) + 236LL) ^= (*(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 416)
                                                                              + 236LL) ^ (16 * v13)) & 0x10;
  if ( !*(_QWORD *)(a3 + 848) )
  {
    v14 = (_QWORD *)Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    if ( !v14 )
    {
LABEL_4:
      UserSetLastError(14);
      return 0LL;
    }
    v14[1] = a3;
    *v14 = gpTouchInjectorProcesses;
    gpTouchInjectorProcesses = (__int64)v14;
  }
  *(_QWORD *)(a3 + 848) = v10;
  HMAssignmentLock(v10 + 8, PseudoDigitizerDevice);
  v15 = v4;
  *(_QWORD *)v10 = *(_QWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 416) + 264LL);
  *(_DWORD *)(v10 + 16) = a2;
  *(_DWORD *)(v10 + 20) = v4;
  v16 = Win32AllocPoolWithQuotaZInit(12 * v4, 1953067861LL);
  if ( !v16 )
    goto LABEL_4;
  *(_QWORD *)(v10 + 72) = v16;
  if ( (_DWORD)v4 )
  {
    do
    {
      v6 += 12LL;
      *(_DWORD *)(v6 + *(_QWORD *)(v10 + 72) - 4) = 0x40000;
      --v15;
    }
    while ( v15 );
  }
  return 1LL;
}
