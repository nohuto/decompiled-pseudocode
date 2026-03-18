/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C00754B4
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C00753EC (RIMObjectManagerCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     rimFreeAllUserMem @ 0x1C0071D2C (rimFreeAllUserMem.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00734E8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0073508 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00755F8 (RIMFreeSpecificDevWorker.c)
 *     rimFreePointerRawDataListWorker @ 0x1C00C80C8 (rimFreePointerRawDataListWorker.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C00D189C (rimObsReleaseAllTrackedHandles.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  _QWORD *v3; // rdx
  int v4; // eax
  struct _KTHREAD **v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  void *v10; // rcx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  RIMLockExclusive((__int64)&gObListLock);
  v2 = *(_QWORD *)(v1 + 16);
  v3 = *(_QWORD **)(v1 + 24);
  if ( *(_QWORD *)(v2 + 8) != v1 + 16 || *v3 != v1 + 16 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  RIMUnlockExclusive((__int64)&gObListLock);
  v4 = *(_DWORD *)(v1 + 4);
  if ( v4 == 2 )
  {
    if ( !*(_BYTE *)(v1 + 8) )
    {
      v5 = *(struct _KTHREAD ***)(v1 + 408);
      RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v12, v5 + 12);
      RIMFreeSpecificDevWorker(v5, v1 + 64);
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v12);
      ObfDereferenceObject(v5);
    }
  }
  else if ( v4 == 1 )
  {
    v6 = *(_QWORD **)(v1 + 680);
    while ( v6 != (_QWORD *)(v1 + 680) )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      if ( v7[8] )
        Win32FreePool();
      rimFreePointerRawDataListWorker(v7[6]);
      v8 = *v7;
      v9 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      Win32FreePool();
    }
    rimFreeAllUserMem(v1);
  }
  else
  {
    v10 = *(void **)(v1 + 72);
    if ( v10 != (void *)-1LL )
    {
      ZwClose(v10);
      *(_QWORD *)(v1 + 72) = -1LL;
    }
    rimObsReleaseAllTrackedHandles(v1);
  }
  return 0LL;
}
