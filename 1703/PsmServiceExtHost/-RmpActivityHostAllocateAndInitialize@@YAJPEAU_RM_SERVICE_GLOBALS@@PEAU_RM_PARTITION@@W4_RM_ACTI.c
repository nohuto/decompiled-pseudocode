/*
 * XREFs of ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_TYPE@@PEA_KKPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016BE4
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016320 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCESS_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E298 (-RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCES.c)
 * Callees:
 *     ?RmpGenerateObjectHandle@@YA_KW4_RM_OBJECT_TYPE@@@Z @ 0x18001341C (-RmpGenerateObjectHandle@@YA_KW4_RM_OBJECT_TYPE@@@Z.c)
 *     ?RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_RM_OBJECT_TYPE@@@Z @ 0x180016D2C (-RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_RM_OBJECT_TYPE@@@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016DD4 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x180016F38 (-RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        __int64 a1,
        volatile signed __int64 *a2,
        int a3,
        __int64 *a4,
        unsigned int a5,
        _QWORD *a6)
{
  _QWORD *Heap; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // edi
  __int64 ObjectHandle; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x470uLL);
  v11 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x470uLL);
    v11[5] = a1;
    if ( _InterlockedIncrement64(a2) <= 1 )
      __fastfail(0xEu);
    v11[6] = a2;
    *((_DWORD *)v11 + 14) = a3;
    v12 = 2LL;
    v11[134] = v11 + 133;
    v11[133] = v11 + 133;
    v13 = v11 + 77;
    do
    {
      v13[2] = 0LL;
      v13[1] = v13;
      *v13 = v13;
      v13 += 3;
      --v12;
    }
    while ( v12 );
    v14 = RmpPartitionAddRemoveHost((struct _RM_PARTITION *)a2, 1, a5);
    if ( v14 >= 0 )
    {
      v14 = TpAllocWork(v11 + 130, RmpActivityHostCommitUseUpdateWorker, v11, a1 + 1224);
      if ( v14 >= 0 )
      {
        v14 = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v11);
        if ( v14 >= 0 )
        {
          if ( a4 )
            ObjectHandle = *a4;
          else
            ObjectHandle = RmpGenerateObjectHandle(0);
          RmpObjectHeaderInitialize(v11, ObjectHandle, 0LL);
          *a6 = v11;
          v11 = 0LL;
          v14 = 0;
        }
      }
    }
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
