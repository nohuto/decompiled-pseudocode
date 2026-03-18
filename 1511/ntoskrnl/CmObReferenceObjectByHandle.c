/*
 * XREFs of CmObReferenceObjectByHandle @ 0x1403F3664
 * Callers:
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     NtQueryMultipleValueKey @ 0x1404A8360 (NtQueryMultipleValueKey.c)
 *     NtCompactKeys @ 0x1405DB720 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405DB93C (NtCompressKey.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405DC458 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405DC6C0 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405DC954 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405DCB94 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1405DCE34 (NtSaveMergedKeys.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        void *a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        struct _OBJECT_HANDLE_INFORMATION *a6)
{
  NTSTATUS v6; // eax
  _DWORD *v7; // rcx
  unsigned int v8; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = a3;
  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, &Object, a6);
  v7 = Object;
  v8 = v6;
  *a5 = Object;
  if ( v6 >= 0 && *v7 != 1803104306 )
  {
    v8 = -1073741816;
    ObfDereferenceObject(v7);
  }
  return v8;
}
