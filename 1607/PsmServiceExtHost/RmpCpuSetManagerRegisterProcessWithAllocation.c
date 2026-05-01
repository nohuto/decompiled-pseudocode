/*
 * XREFs of RmpCpuSetManagerRegisterProcessWithAllocation @ 0x1800315D0
 * Callers:
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS_CONTEXT@@@Z @ 0x180031E00 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     ?RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002F9B8 (-RmpCpuSetManagerAllocateObjectsForProcess@@YAJPEAXPEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002FA28 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerCreateAndInitializeProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FC30 (-RmpCpuSetManagerCreateAndInitializeProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800300F0 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18003020C (-RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS.c)
 *     ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x180030364 (-RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z.c)
 *     ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180030824 (-RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        void *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        struct _RM_CPU_SET_PROCESS_REGISTRATION **a4)
{
  struct _RM_CPU_SET_PROCESS *v4; // rdi
  struct _RM_CPU_SET_MANAGER *v6; // rsi
  int ObjectsForProcess; // ebx
  struct _RM_CPU_SET_PROCESS *Process; // rax
  struct _RM_CPU_SET_PROCESS *v12; // rbp
  struct _RM_CPU_SET_PROCESS *Heap; // rax
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *i; // rax
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v4 = 0LL;
  v6 = *a1;
  if ( (*((_BYTE *)a3 + 276) & 4) != 0 )
    return (unsigned int)-1073741584;
  Process = RmpCpuSetManagerFindProcess(*a1, a2);
  v12 = Process;
  if ( Process )
  {
    v15 = (_QWORD *)((char *)Process + 24);
    for ( i = (_QWORD *)*((_QWORD *)Process + 3); i != v15; i = (_QWORD *)*i )
    {
      if ( (struct _RM_CPU_SET_ALLOCATION *)*(i - 3) == a3 )
        return (unsigned int)-1073740008;
    }
  }
  else
  {
    Heap = (struct _RM_CPU_SET_PROCESS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
    v4 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v12 = Heap;
    memset_0(Heap, 0, 0x40uLL);
    *((_QWORD *)v4 + 4) = (char *)v4 + 24;
    *((_QWORD *)v4 + 3) = (char *)v4 + 24;
    ObjectsForProcess = RmpCpuSetManagerAllocateObjectsForProcess(a2, (void **)v4);
    if ( ObjectsForProcess < 0 )
      goto LABEL_19;
    RmpCpuSetManagerInsertProcess(v6, v4);
  }
  ObjectsForProcess = RmpCpuSetManagerCreateAndInitializeProcessRegistration(
                        (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
                        v12,
                        a3,
                        &v18);
  if ( ObjectsForProcess < 0 )
  {
    v14 = v18;
  }
  else
  {
    v4 = 0LL;
    RmpCpuSetManagerApplyProcessPolicy(v6, v12);
    v14 = 0LL;
    *a4 = v18;
  }
  if ( v14 )
  {
    RmpCpuSetManagerDestroyProcessRegistration(v6, v14);
    RmpCpuSetManagerApplyProcessPolicy(v6, v12);
  }
LABEL_19:
  if ( v4 )
    RmpCpuSetManagerDestroyProcess(v6, v4);
  return (unsigned int)ObjectsForProcess;
}
