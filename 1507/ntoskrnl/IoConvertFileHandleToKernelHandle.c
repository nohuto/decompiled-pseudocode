/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x140673E58
 * Callers:
 *     CmpNameFromAttributes @ 0x14044565C (CmpNameFromAttributes.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404A6950 (IopOpenLinkOrRenameTarget.c)
 *     NtRestoreKey @ 0x140651558 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1406519CC (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x140651DA0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1406521DC (NtSaveMergedKeys.c)
 *     ExpQueryElamCertInfo @ 0x1406EE818 (ExpQueryElamCertInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
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
              (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
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
