/*
 * XREFs of PspAssignPrimaryToken @ 0x1406C3208
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ObDereferenceDeviceMap @ 0x14050423C (ObDereferenceDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x140545528 (SeIsTokenAssignableToProcess.c)
 *     SeCheckPrivilegedObject @ 0x140583928 (SeCheckPrivilegedObject.c)
 *     SeExchangePrimaryToken @ 0x1406D51C0 (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  NTSTATUS result; // eax
  NTSTATUS IsTokenAssignableToProcess; // ebx
  __int64 v9; // r9
  unsigned __int64 *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r9
  __int16 v13; // ax
  _QWORD *v14; // rcx
  unsigned __int64 *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r9
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  signed __int32 v22[8]; // [rsp+0h] [rbp-70h] BYREF
  char v23[8]; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+48h] [rbp-28h] BYREF
  PVOID v25; // [rsp+50h] [rbp-20h] BYREF
  PVOID v26; // [rsp+58h] [rbp-18h]

  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v25, 0LL);
  if ( result >= 0 )
  {
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v25, v23);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v23[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, (__int64)a3, 0x200u, a2) )
      {
        IsTokenAssignableToProcess = ObReferenceObjectByHandleWithTag(
                                       a3,
                                       0x200u,
                                       (POBJECT_TYPE)PsProcessType,
                                       a2,
                                       0x65537350u,
                                       &Object,
                                       0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v10 = (unsigned __int64 *)Object;
          v26 = 0LL;
          if ( (*((_DWORD *)Object + 192) & 0x8000) != 0 )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            --*(_WORD *)(a1 + 484);
            v11 = KeAbPreAcquire((ULONG_PTR)(v10 + 91), 0LL, 0LL, v9);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 91, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v10 + 91, v11, (ULONG_PTR)(v10 + 91), v12);
            if ( v11 )
              *(_BYTE *)(v11 + 26) |= 1u;
            if ( (v10[96] & 0x8000) != 0 )
              IsTokenAssignableToProcess = -1073741637;
            else
              IsTokenAssignableToProcess = SeExchangePrimaryToken((PEPROCESS)Object, v25);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 91, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v10 + 91);
            KeAbPostRelease((ULONG_PTR)(v10 + 91));
            v13 = *(_WORD *)(a1 + 484) + 1;
            *(_WORD *)(a1 + 484) = v13;
            if ( !v13 && *(_QWORD *)(a1 + 152) != a1 + 152 && !*(_WORD *)(a1 + 486) )
              KiCheckForKernelApcDelivery();
            v10 = (unsigned __int64 *)Object;
          }
          if ( IsTokenAssignableToProcess >= 0 )
          {
            v14 = Object;
            *((_QWORD *)Object + 244) = _InterlockedIncrement64(&PsNextSecurityDomain);
            --*(_WORD *)(a1 + 484);
            v15 = v14 + 91;
            _InterlockedOr(v22, 0);
            if ( (v14[91] & 1) != 0 )
            {
              v16 = KeAbPreAcquire((ULONG_PTR)(v14 + 91), 0LL, 0LL, v9);
              ExfAcquirePushLockExclusiveEx(v15, v16, (ULONG_PTR)v15, v17);
              if ( v16 )
                *(_BYTE *)(v16 + 26) |= 1u;
              ExfReleasePushLockExclusive((volatile signed __int64 *)v15);
              if ( v16 )
                KeAbPostRelease((ULONG_PTR)v15);
            }
            v18 = *(_WORD *)(a1 + 484) + 1;
            *(_WORD *)(a1 + 484) = v18;
            if ( !v18 && *(_QWORD *)(a1 + 152) != a1 + 152 && !*(_WORD *)(a1 + 486) )
              KiCheckForKernelApcDelivery();
            ObfDereferenceObject(v26);
            v10 = (unsigned __int64 *)Object;
            ObDereferenceDeviceMap((__int64)Object, v19, v20, v21);
          }
          ObfDereferenceObjectWithTag(v10, 0x65537350u);
        }
      }
      else
      {
        IsTokenAssignableToProcess = -1073741727;
      }
    }
    ObfDereferenceObject(v25);
    return IsTokenAssignableToProcess;
  }
  return result;
}
