/*
 * XREFs of CmpSignalDeferredPosts @ 0x1403E3810
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpCloseKeyObject @ 0x1403E3690 (CmpCloseKeyObject.c)
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     CmpFreePostBlock @ 0x1403E38A8 (CmpFreePostBlock.c)
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
