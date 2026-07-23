/*
 * XREFs of CmObReferenceObjectByHandle @ 0x1404025CC
 * Callers:
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x1404C0BFC (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     NtCompactKeys @ 0x1405F94B4 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405F9700 (NtCompressKey.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405FA3C0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405FA624 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405FA8B4 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405FAAF0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1405FAD88 (NtSaveMergedKeys.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
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
