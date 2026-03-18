/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x1405F9BCC
 * Callers:
 *     CmpNameFromAttributes @ 0x1403DBE88 (CmpNameFromAttributes.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404B43D0 (IopOpenLinkOrRenameTarget.c)
 *     NtRestoreKey @ 0x1405DC6C0 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405DC954 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405DCB94 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1405DCE34 (NtSaveMergedKeys.c)
 *     ExpQueryElamCertInfo @ 0x14066B1D0 (ExpQueryElamCertInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 */

NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(
        void *a1,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4,
        _QWORD *Object)
{
  _QWORD *v5; // r14
  NTSTATUS result; // eax
  PVOID v10; // rsi
  NTSTATUS v11; // ebx
  int v12; // eax
  HANDLE v13; // rdi
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-10h] BYREF
  PVOID v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = Object;
  *Object = 0LL;
  if ( !a1 )
    return 0;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, (PVOID *)&Object, &HandleInformation);
  if ( result >= 0 )
  {
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v12 = ObDuplicateObject(
              (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process,
              a1,
              (ULONG_PTR)PsInitialSystemProcess,
              (__int64 *)Handle,
              a3,
              512,
              0,
              0);
      v10 = Object;
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = Handle[0];
        v11 = ObReferenceObjectByHandle(Handle[0], 0, (POBJECT_TYPE)IoFileObjectType, 0, &v16, 0LL);
        if ( v11 >= 0 )
        {
          if ( v16 == v10 )
          {
            *v5 = v13;
          }
          else
          {
            v11 = -1073741788;
            ObCloseHandle(v13, 0);
          }
          ObfDereferenceObject(v16);
        }
        else
        {
          ObCloseHandle(v13, 0);
        }
      }
    }
    else
    {
      v10 = Object;
      v11 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v11;
  }
  return result;
}
