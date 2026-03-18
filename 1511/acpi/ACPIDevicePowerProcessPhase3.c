/*
 * XREFs of ACPIDevicePowerProcessPhase3 @ 0x1C001CA64
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001C040 (ACPIDevicePowerDpc.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C00385E0 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C003982C (ACPIIsPowerNodeMissingDependencies.c)
 */

__int64 ACPIDevicePowerProcessPhase3()
{
  char v0; // bp
  char v1; // r13
  char v2; // r15
  char v3; // al
  __int64 *v4; // r12
  __int64 *v5; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r9
  __int32 v9; // ecx
  __int64 *v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 (__fastcall *v15)(); // r14
  unsigned int v16; // edi
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 *v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // esi

  v0 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  while ( 1 )
  {
    if ( Phase3PendingOffWorkCount )
    {
      v1 = 1;
    }
    else
    {
      Phase3CurrentOffResourceOrder = -1;
      v1 = 0;
    }
    if ( Phase3PendingOnWorkCount )
    {
      v2 = 1;
    }
    else
    {
      v2 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( !Phase3PendingOnWorkCount && !Phase3PendingOffWorkCount )
      v0 = 1;
    ++Phase3PendingOnWorkCount;
    v3 = 0;
    v4 = (__int64 *)AcpiPowerNodeList;
    if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
    {
      while ( 1 )
      {
        v7 = v4;
        v4 = (__int64 *)*v4;
        if ( v2 && *((unsigned __int8 *)v7 + 40) > (unsigned int)Phase3CurrentOnResourceOrder )
        {
LABEL_59:
          v3 = 0;
          goto LABEL_10;
        }
        if ( v1
          && *((unsigned __int8 *)v7 + 40) > (unsigned int)Phase3CurrentOffResourceOrder
          && _InterlockedCompareExchange((volatile signed __int32 *)v7 + 16, *((_DWORD *)v7 + 16), *((_DWORD *)v7 + 16)) == 3 )
        {
          v3 = 1;
          goto LABEL_10;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v7 + 16, 4, 3) == 3 )
        {
          v0 = 0;
          v8 = (__int64 *)v7[6];
          v9 = 0;
          while ( v8 != v7 + 6 )
          {
            v10 = v8 - 5;
            v11 = *(v8 - 1);
            v8 = (__int64 *)*v8;
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 496), 0, 0) || !*((_BYTE *)v10 + 24) )
            {
              v12 = *(_DWORD *)(v11 + 488);
              if ( v12 != *((_DWORD *)v10 + 5)
                || v12 == 4 && ((*(_DWORD *)v11 & 0x800LL) == 0 || (*(_DWORD *)(v11 + 904) & 0x10000000) != 0) )
              {
                continue;
              }
            }
            ++v9;
          }
          _InterlockedExchange((volatile __int32 *)v7 + 6, v9);
          v13 = v7[2];
          if ( (v13 & 0x440) == 0 && ((v13 & 0x2220) != 0 || v9) )
            break;
        }
LABEL_58:
        if ( v4 == &AcpiPowerNodeList )
          goto LABEL_59;
      }
      _InterlockedCompareExchange((volatile signed __int32 *)v7 + 16, 1, 4);
      ++Phase3PendingOnWorkCount;
      *((_DWORD *)v7 + 17) = 0;
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( (v7[2] & 0x2000) != 0 )
      {
        v14 = (__int64 *)v7[11];
        v15 = ACPIDeviceCompletePhase3Reset;
      }
      else
      {
        v14 = (__int64 *)v7[9];
        v15 = ACPIDeviceCompletePhase3On;
      }
      if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v7) )
      {
        v16 = -1073741661;
      }
      else
      {
        v17 = AMLIAsyncEvalObject(v14, 0LL, 0, 0LL, v15, v7);
        v18 = v7[2];
        v16 = v17;
        if ( (v18 & 0x2000) != 0 )
          v7[2] = v18 & 0xFFFFFFFFFFFFDFFFuLL;
        if ( v17 == 259 )
          goto LABEL_55;
      }
      ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64 *))v15)(v14, v16, 0LL, v7);
LABEL_55:
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      if ( v16 == 259 && !v2 )
      {
        v2 = 1;
        Phase3CurrentOnResourceOrder = *((unsigned __int8 *)v7 + 40);
      }
      goto LABEL_58;
    }
LABEL_10:
    if ( !--Phase3PendingOnWorkCount )
    {
      v2 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( v2 )
      break;
    if ( v4 == &AcpiPowerNodeList || v3 )
    {
      do
      {
        ++Phase3PendingOffWorkCount;
        v5 = (__int64 *)qword_1C0059BF8;
        while ( v5 != &AcpiPowerNodeList )
        {
          v19 = v5;
          v5 = (__int64 *)v5[1];
          v20 = *((unsigned __int8 *)v19 + 40);
          if ( v20 <= Phase3CurrentOffResourceOrder )
          {
            if ( v1 && v20 < Phase3CurrentOffResourceOrder )
              break;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v19 + 16, 1, 4) == 4 )
            {
              ++Phase3PendingOffWorkCount;
              v0 = 0;
              *((_DWORD *)v19 + 17) = 0;
              KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
              if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v19) )
              {
                v21 = -1073741661;
LABEL_69:
                ACPIDeviceCompletePhase3Off(v19[10], v21, 0LL, v19);
                goto LABEL_70;
              }
              v21 = AMLIAsyncEvalObject((__int64 *)v19[10], 0LL, 0, 0LL, ACPIDeviceCompletePhase3Off, v19);
              if ( v21 != 259 )
                goto LABEL_69;
LABEL_70:
              KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
              if ( v21 == 259 )
              {
                v1 = 1;
                Phase3CurrentOffResourceOrder = *((unsigned __int8 *)v19 + 40);
              }
            }
          }
        }
        if ( !--Phase3PendingOffWorkCount )
        {
          Phase3CurrentOffResourceOrder = -1;
          v1 = 0;
        }
        if ( v1 )
          goto LABEL_21;
      }
      while ( v5 != &AcpiPowerNodeList );
      if ( v0 )
        break;
    }
  }
LABEL_21:
  if ( Phase3PendingOnWorkCount > 0 || Phase3PendingOffWorkCount > 0 )
    v0 = 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v0 == 0 ? 0x103 : 0;
}
