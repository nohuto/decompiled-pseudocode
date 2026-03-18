/*
 * XREFs of CmObReferenceObjectByHandle @ 0x14040370C
 * Callers:
 *     NtDeleteValueKey @ 0x1403FA9B8 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FBA58 (NtDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x140403098 (NtSetValueKey.c)
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x1404DD5F8 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x1404E88CC (NtFlushKey.c)
 *     NtCompactKeys @ 0x1405F9400 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405F964C (NtCompressKey.c)
 *     NtRenameKey @ 0x1405F9DF0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405FA30C (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405FA570 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405FA800 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405FAA3C (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1405FACD4 (NtSaveMergedKeys.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
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
  PVOID *v7; // rdi
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = a3;
  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, &Object, a6);
  v7 = a5;
  v8 = v6;
  v9 = Object;
  *a5 = Object;
  if ( v6 >= 0 && *v9 != 1803104306 )
  {
    v8 = -1073741816;
    ObfDereferenceObject(v9);
    *v7 = 0LL;
  }
  return v8;
}
