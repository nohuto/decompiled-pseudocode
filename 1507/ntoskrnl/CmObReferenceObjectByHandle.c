/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140428ADC
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     NtQueryMultipleValueKey @ 0x140542CE4 (NtQueryMultipleValueKey.c)
 *     NtCompactKeys @ 0x14064FE10 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14065002C (NtCompressKey.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140651088 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140651558 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1406519CC (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x140651DA0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1406521DC (NtSaveMergedKeys.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
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
