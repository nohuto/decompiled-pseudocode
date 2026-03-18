/*
 * XREFs of ProcessEvalObj @ 0x1C0004210
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 *     ListInsertTail @ 0x1C0017CB4 (ListInsertTail.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     DumpObject @ 0x1C0046324 (DumpObject.c)
 */

__int64 __fastcall ProcessEvalObj(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 *v10; // r9
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rcx
  _QWORD **v17; // rbx
  __int64 ObjectPath; // rax
  __int64 *v20; // rdx
  void *v21; // rbp
  __int64 v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // rax

  if ( (gDebugger & 0xD0) != 0 && !a3 )
  {
    ObjectPath = GetObjectPath(*(_QWORD *)(a2 + 32));
    v20 = qword_1C0023E70;
    v21 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v20) = ObjectPath;
    PrintDebugMessage(45, (_DWORD)v20, 0, 0, 0LL);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    DumpObject(*(_QWORD *)(a2 + 48), v22, 0LL);
    ConPrintf("\n");
  }
  v6 = *(_QWORD *)(a1 + 416);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = v6 - 16;
  *(_QWORD *)(a1 + 416) = v7;
  *(_DWORD *)v8 = 0;
  byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v10 = (__int64 *)(v8 + 16);
  v11 = *(_QWORD *)(v8 + 8);
  v12 = *(__int64 **)(v11 + 40);
  if ( !v12 )
  {
    *(_QWORD *)(v11 + 40) = v10;
    *(_QWORD *)(v8 + 24) = v8 + 16;
    *v10 = (__int64)v10;
LABEL_4:
    *(_QWORD *)(v11 + 40) = v10;
    goto LABEL_5;
  }
  v23 = *(__int64 **)(v11 + 40);
  while ( v10 >= v23 )
  {
    v23 = (__int64 *)v23[1];
    if ( v23 == v12 )
    {
      if ( v10 >= v23 )
      {
        ListInsertTail(v8 + 16, v11 + 40);
        goto LABEL_5;
      }
      break;
    }
  }
  *(_QWORD *)(v8 + 24) = v23;
  v24 = *v23;
  *v10 = *v23;
  *(_QWORD *)(v24 + 8) = v10;
  **(_QWORD **)(v8 + 24) = v10;
  if ( *(__int64 **)(v11 + 40) == v23 )
    goto LABEL_4;
LABEL_5:
  v13 = *(unsigned int *)(v8 + 4);
  v14 = v13 + v8 + 16;
  if ( *(_QWORD *)(v8 + 24) == v14 )
  {
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v13 + v8 + 4) + v13;
    ListRemoveEntry(v14, v11 + 40, v9, v10);
  }
  v15 = *v10 - 16;
  v16 = *(unsigned int *)(v15 + 4);
  if ( v8 == v15 + v16 )
  {
    *(_DWORD *)(v15 + 4) = v16 + *(_DWORD *)(v8 + 4);
    ListRemoveEntry(v10, v11 + 40, v9, v10);
    v8 = v25;
  }
  if ( *(_QWORD *)(v11 + 32) <= v8 + (unsigned __int64)*(unsigned int *)(v8 + 4) )
  {
    *(_QWORD *)(v11 + 32) = v8;
    v17 = (_QWORD **)(v8 + 16);
    if ( v17[1] == v17 )
    {
      *(_QWORD *)(v11 + 40) = 0LL;
    }
    else
    {
      v26 = *(_QWORD *)(v11 + 40);
      if ( v17 == (_QWORD **)v26 )
        *(_QWORD *)(v11 + 40) = *(_QWORD *)(v26 + 8);
      *v17[1] = *v17;
      (*v17)[1] = v17[1];
    }
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
  return a3;
}
