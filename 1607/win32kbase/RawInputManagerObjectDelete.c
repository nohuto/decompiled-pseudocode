/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C000A230
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C000A168 (RIMObjectManagerCallout.c)
 * Callees:
 *     RIMFreeSpecificDevWorker @ 0x1C000A37C (RIMFreeSpecificDevWorker.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000EBE4 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000EC04 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     rimFreeAllUserMem @ 0x1C007DE2C (rimFreeAllUserMem.c)
 *     rimFreePointerRawDataListWorker @ 0x1C00DA024 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C00E0300 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C00E063C (rimObsReleaseAllTrackedHandles.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  _QWORD *v3; // rdx
  int v4; // eax
  __int64 v5; // rdi
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
      v5 = *(_QWORD *)(v1 + 416);
      RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13, (struct RIMLOCK *)(v5 + 96));
      RIMFreeSpecificDevWorker(v5, v1 + 64);
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
      ObfDereferenceObject((PVOID)v5);
    }
  }
  else if ( v4 == 1 )
  {
    v6 = *(_QWORD **)(v1 + 664);
    while ( v6 != (_QWORD *)(v1 + 664) )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      v8 = v7[9];
      if ( v8 )
        Win32FreePool(v8);
      rimFreePointerRawDataListWorker(v7[7]);
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
