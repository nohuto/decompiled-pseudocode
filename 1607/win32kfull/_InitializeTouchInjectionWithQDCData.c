/*
 * XREFs of _InitializeTouchInjectionWithQDCData @ 0x1C01D4958
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01D3D14 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     _InitializeTouchInjection @ 0x1C01D48E4 (_InitializeTouchInjection.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CleanupInjectedTouchProcess @ 0x1C01D4600 (CleanupInjectedTouchProcess.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01D631C (CreatePseudoDigitizerDevice.c)
 */

__int64 __fastcall InitializeTouchInjectionWithQDCData(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 PseudoDigitizerDevice; // r14
  int v13; // ecx
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax

  v5 = a1;
  v6 = 0LL;
  gullTouchInjectionMaxTimeOffset = 5000 * gliQpcFreq.QuadPart / 1000;
  if ( *(_QWORD *)(a3 + 840) )
    CleanupInjectedTouchProcess(a3, 5000 * gliQpcFreq.QuadPart / 1000, a3);
  v9 = Win32AllocPoolWithQuotaZInit(96LL, 1953067861LL);
  v10 = v9;
  if ( !v9 )
    goto LABEL_4;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v5, a2, a4, v9);
  if ( !PseudoDigitizerDevice )
    goto LABEL_4;
  if ( !gbEnforceUIPI || (v13 = 1, *(int *)(a3 + 12) >= 0) )
    v13 = 0;
  *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 480) + 252LL) ^= (*(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 480)
                                                                              + 252LL) ^ (v13 << 6)) & 0x40;
  if ( !*(_QWORD *)(a3 + 840) )
  {
    v14 = (_QWORD *)Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    if ( !v14 )
    {
LABEL_4:
      UserSetLastError(14LL);
      return 0LL;
    }
    v14[1] = a3;
    *v14 = gpTouchInjectorProcesses;
    gpTouchInjectorProcesses = (__int64)v14;
  }
  *(_QWORD *)(a3 + 840) = v10;
  HMAssignmentLock(v10 + 8, PseudoDigitizerDevice);
  v15 = v5;
  *(_QWORD *)v10 = *(_QWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 480) + 280LL);
  *(_DWORD *)(v10 + 16) = a2;
  *(_DWORD *)(v10 + 20) = v5;
  v16 = Win32AllocPoolWithQuotaZInit(12 * v5, 1953067861LL);
  if ( !v16 )
    goto LABEL_4;
  *(_QWORD *)(v10 + 72) = v16;
  if ( (_DWORD)v5 )
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
