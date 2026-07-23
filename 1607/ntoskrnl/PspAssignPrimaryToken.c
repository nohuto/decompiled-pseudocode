/*
 * XREFs of PspAssignPrimaryToken @ 0x14067F0C0
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x1400A8F34 (PspLockUnlockProcessExclusive.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObDereferenceDeviceMap @ 0x14045FCC0 (ObDereferenceDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x1404753D4 (SeIsTokenAssignableToProcess.c)
 *     SeCheckPrivilegedObject @ 0x140547ABC (SeCheckPrivilegedObject.c)
 *     SeExchangePrimaryToken @ 0x140692858 (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  NTSTATUS result; // eax
  PVOID v8; // rsi
  NTSTATUS IsTokenAssignableToProcess; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdi
  PVOID v13; // rcx
  char v14[8]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+48h] [rbp-20h] BYREF
  PVOID v16; // [rsp+50h] [rbp-18h] BYREF
  PVOID v17; // [rsp+58h] [rbp-10h] BYREF

  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v17, 0LL);
  if ( result >= 0 )
  {
    v8 = v17;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v17, v14);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v14[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, (int)a3, 512, a2) )
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
          v12 = Object;
          v16 = 0LL;
          if ( (*((_DWORD *)Object + 192) & 0x8000) != 0 )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            PspLockProcessShared((__int64)Object, a1);
            if ( (v12[192] & 0x8000) != 0 )
              IsTokenAssignableToProcess = -1073741637;
            else
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v12, v8, &v16);
            PspUnlockProcessShared((__int64)v12, a1);
          }
          if ( IsTokenAssignableToProcess >= 0 )
          {
            v12 = Object;
            v13 = Object;
            *((_QWORD *)Object + 247) = _InterlockedIncrement64(&PsNextSecurityDomain);
            PspLockUnlockProcessExclusive((__int64)v13, a1, v10, v11);
            ObfDereferenceObject(v16);
            ObDereferenceDeviceMap((__int64)v12);
            v8 = v17;
          }
          ObfDereferenceObjectWithTag(v12, 0x65537350u);
        }
      }
      else
      {
        IsTokenAssignableToProcess = -1073741727;
      }
    }
    ObfDereferenceObject(v8);
    return IsTokenAssignableToProcess;
  }
  return result;
}
