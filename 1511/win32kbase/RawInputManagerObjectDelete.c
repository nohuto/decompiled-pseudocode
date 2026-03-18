/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C000CC50
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C000C9EC (RIMObjectManagerCallout.c)
 * Callees:
 *     rimFreeAllUserMem @ 0x1C000A7C8 (rimFreeAllUserMem.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000AEC4 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000AEE4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMFreeSpecificDevWorker @ 0x1C000CD9C (RIMFreeSpecificDevWorker.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     sub_1C00C8FC8 @ 0x1C00C8FC8 (sub_1C00C8FC8.c)
 *     rimObsFreeInputMessageQueue @ 0x1C00D3500 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C00D383C (rimObsReleaseAllTrackedHandles.c)
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
  __int64 v9; // rcx
  _QWORD *v10; // rax
  void *v11; // rcx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  RIMLockExclusive(&gObListLock);
  v2 = *(_QWORD *)(v1 + 16);
  v3 = *(_QWORD **)(v1 + 24);
  if ( *(_QWORD *)(v2 + 8) != v1 + 16 || *v3 != v1 + 16 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  RIMUnlockExclusive(&gObListLock);
  v4 = *(_DWORD *)(v1 + 4);
  if ( v4 == 2 )
  {
    if ( !*(_BYTE *)(v1 + 8) )
    {
      v5 = *(struct _KTHREAD ***)(v1 + 400);
      RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13, v5 + 12);
      RIMFreeSpecificDevWorker(v5, v1 + 64);
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
      ObfDereferenceObject(v5);
    }
  }
  else if ( v4 == 1 )
  {
    v6 = *(_QWORD **)(v1 + 712);
    while ( v6 != (_QWORD *)(v1 + 712) )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      v8 = v7[8];
      if ( v8 )
        Win32FreePool(v8);
      sub_1C00C8FC8(v7[6]);
      v9 = *v7;
      v10 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v10 != v7 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      Win32FreePool(v7);
    }
    rimFreeAllUserMem(v1);
  }
  else
  {
    v11 = *(void **)(v1 + 72);
    if ( v11 != (void *)-1LL )
    {
      ZwClose(v11);
      *(_QWORD *)(v1 + 72) = -1LL;
    }
    rimObsReleaseAllTrackedHandles(v1);
    rimObsFreeInputMessageQueue(v1);
  }
  return 0LL;
}
