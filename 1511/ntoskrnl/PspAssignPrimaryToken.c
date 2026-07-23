/*
 * XREFs of PspAssignPrimaryToken @ 0x140640D98
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PspLockUnlockProcessExclusive @ 0x140096778 (PspLockUnlockProcessExclusive.c)
 *     SeIsTokenAssignableToProcess @ 0x1403C2698 (SeIsTokenAssignableToProcess.c)
 *     ObDereferenceDeviceMap @ 0x1403E3C30 (ObDereferenceDeviceMap.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     SeCheckPrivilegedObject @ 0x14050C338 (SeCheckPrivilegedObject.c)
 *     SeExchangePrimaryToken @ 0x140653498 (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  NTSTATUS result; // eax
  PVOID v8; // rsi
  NTSTATUS IsTokenAssignableToProcess; // ebx
  struct _KPROCESS *v10; // rdi
  PVOID v11; // rcx
  char v12[8]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+48h] [rbp-20h] BYREF
  PVOID v14; // [rsp+50h] [rbp-18h]
  PVOID v15; // [rsp+58h] [rbp-10h] BYREF

  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v15, 0LL);
  if ( result >= 0 )
  {
    v8 = v15;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v15, v12);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v12[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, (int)a3, 512, a2) )
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
          v10 = (struct _KPROCESS *)Object;
          v14 = 0LL;
          if ( (*((_DWORD *)Object + 192) & 0x8000) != 0 )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            PspLockProcessShared((__int64)Object, a1);
            if ( (v10[1].DirectoryTableBase & 0x8000) != 0 )
              IsTokenAssignableToProcess = -1073741637;
            else
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v10, v8);
            PspUnlockProcessShared((__int64)v10, a1);
          }
          if ( IsTokenAssignableToProcess >= 0 )
          {
            v10 = (struct _KPROCESS *)Object;
            v11 = Object;
            *((_QWORD *)Object + 242) = _InterlockedIncrement64(&PsNextSecurityDomain);
            PspLockUnlockProcessExclusive((__int64)v11, a1);
            ObfDereferenceObject(v14);
            ObDereferenceDeviceMap((__int64)v10);
            v8 = v15;
          }
          ObfDereferenceObjectWithTag(v10, 0x65537350u);
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
