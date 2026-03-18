/*
 * XREFs of CmpSignalDeferredPosts @ 0x1404218C4
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     CmpCloseKeyObject @ 0x14049A970 (CmpCloseKeyObject.c)
 *     CmpPostNotify @ 0x14049AAF4 (CmpPostNotify.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     CmpFreePostBlock @ 0x14049A918 (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpSignalDeferredPosts(_QWORD **a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  struct _KEVENT *v5; // rcx
  __int64 v6; // rax
  struct _WORK_QUEUE_ITEM *v7; // rcx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      return result;
    v3 = *result;
    if ( (_QWORD **)result[1] != a1 || *(_QWORD **)(v3 + 8) != result )
      __fastfail(3u);
    *a1 = (_QWORD *)v3;
    v4 = result - 2;
    *(_QWORD *)(v3 + 8) = a1;
    if ( (unsigned __int16)*((_DWORD *)result + 10) != 3 )
    {
      v5 = *(struct _KEVENT **)v4[8];
LABEL_6:
      KeSetEvent(v5, 0, 0);
      ObfDereferenceObject(*(PVOID *)v4[8]);
      goto LABEL_7;
    }
    v6 = v4[8];
    v7 = *(struct _WORK_QUEUE_ITEM **)(v6 + 8);
    if ( v7 )
      ExQueueWorkItem(v7, *(WORK_QUEUE_TYPE *)(v6 + 16));
    v5 = *(struct _KEVENT **)v4[8];
    if ( v5 )
      goto LABEL_6;
LABEL_7:
    CmpFreePostBlock(v4);
  }
}
