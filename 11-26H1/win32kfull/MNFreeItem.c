/*
 * XREFs of MNFreeItem @ 0x140034288
 * Callers:
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 * Callees:
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall MNFreeItem(__int64 a1, _QWORD *a2, int a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 *v7; // rbx
  void *v8; // r8
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  struct _HEAD *v11; // rbx
  __int64 result; // rax
  _QWORD **i; // rdx
  _QWORD **v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]

  *(_QWORD *)(*a2 + 96LL) = 0LL;
  v6 = PtiCurrent();
  v15 = gSmartObjNullRef;
  v7 = (__int64 *)(a1 + 152);
  if ( a1 )
  {
    v15 = *v7;
    ++*(_DWORD *)(*v7 + 8);
  }
  v16 = *((_QWORD *)v6 + 209);
  *((_QWORD *)v6 + 209) = &v16;
  v8 = (void *)a2[3];
  v17 = 0LL;
  if ( v8 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v15 + 24LL) + 136LL), 0, v8);
  *(_QWORD *)(*a2 + 40LL) = 0LL;
  a2[3] = 0LL;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v15);
  v9 = PtiCurrent();
  v15 = gSmartObjNullRef;
  if ( a1 )
  {
    v15 = *v7;
    ++*(_DWORD *)(*v7 + 8);
  }
  v16 = *((_QWORD *)v9 + 209);
  *((_QWORD *)v9 + 209) = &v16;
  v10 = a2[2];
  v17 = 0LL;
  if ( v10 )
  {
    for ( i = (_QWORD **)(v10 + 104); *i; i = (_QWORD **)*i )
    {
      if ( (*i)[1] == *(_QWORD *)v15 )
      {
        v14 = (_QWORD **)*i;
        *i = (_QWORD *)**i;
        Win32FreePool(v14);
        break;
      }
    }
    *(_QWORD *)(*a2 + 16LL) = 0LL;
    v11 = (struct _HEAD *)HMAssignmentUnlock(a2 + 2);
  }
  else
  {
    v11 = 0LL;
  }
  result = SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v15);
  if ( v11 )
  {
    if ( a3 )
      return DestroyMenu(v11);
  }
  return result;
}
