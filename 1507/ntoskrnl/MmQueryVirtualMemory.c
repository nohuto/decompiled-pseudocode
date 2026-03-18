/*
 * XREFs of MmQueryVirtualMemory @ 0x1404B4DD0
 * Callers:
 *     NtQueryVirtualMemory @ 0x1404B4D9C (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x14056850C (PfpVirtualQuery.c)
 * Callees:
 *     MiQueryAddressSpan @ 0x14003AE40 (MiQueryAddressSpan.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14008964C (MiVadDeleted.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiReferenceVad @ 0x1400896D4 (MiReferenceVad.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 *     MiGetWorkingSetInfo @ 0x14014ED08 (MiGetWorkingSetInfo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiWaitForVadDeletion @ 0x14022F098 (MiWaitForVadDeletion.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall MmQueryVirtualMemory(
        HANDLE Handle,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  unsigned __int64 *v7; // r14
  _QWORD *v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // cl
  unsigned __int64 v15; // rcx
  ULONG64 v16; // rdx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rcx
  char *v19; // rax
  _KPROCESS *Process; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int16 v28; // ax
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // r15
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r14
  int v34; // edx
  int v35; // r13d
  int v36; // edx
  int v37; // esi
  __int64 v38; // r15
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // r10
  unsigned __int64 v45; // rdx
  PVOID v46; // rsi
  unsigned __int64 *v47; // rdx
  NTSTATUS result; // eax
  unsigned __int64 v49; // r15
  __int64 v50; // rax
  unsigned __int64 v51; // r12
  unsigned __int64 v52; // r12
  unsigned __int64 *v53; // rdx
  unsigned int v54; // eax
  unsigned __int64 AddressSpan; // rax
  unsigned __int64 *v56; // rdx
  __int64 *v57; // rax
  int WorkingSetInfoList; // ebx
  __int64 v59; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v61; // r8
  __int64 v62; // rdi
  unsigned __int64 v63; // r8
  int v64; // esi
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rbx
  _QWORD *v67; // rcx
  __int64 v68; // rcx
  char v69; // [rsp+40h] [rbp-128h]
  char v70; // [rsp+44h] [rbp-124h]
  unsigned __int64 v71; // [rsp+48h] [rbp-120h]
  unsigned __int64 v72; // [rsp+48h] [rbp-120h]
  unsigned __int64 v73; // [rsp+48h] [rbp-120h]
  unsigned int v74; // [rsp+50h] [rbp-118h] BYREF
  _QWORD *v75; // [rsp+58h] [rbp-110h]
  unsigned __int8 v76; // [rsp+60h] [rbp-108h]
  PVOID Object; // [rsp+68h] [rbp-100h] BYREF
  PVOID v78; // [rsp+70h] [rbp-F8h]
  unsigned __int64 *v79; // [rsp+78h] [rbp-F0h]
  __int128 v80; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v81; // [rsp+90h] [rbp-D8h]
  char *v82; // [rsp+98h] [rbp-D0h]
  PVOID v83; // [rsp+A0h] [rbp-C8h]
  _OWORD v84[3]; // [rsp+A8h] [rbp-C0h] BYREF
  _QWORD v85[3]; // [rsp+D8h] [rbp-90h] BYREF
  _BYTE v86[48]; // [rsp+F0h] [rbp-78h] BYREF

  v7 = a4;
  v79 = a4;
  v71 = a2;
  v85[1] = Handle;
  v10 = (_QWORD *)a6;
  v75 = (_QWORD *)a6;
  v11 = 0LL;
  v69 = 0;
  v83 = 0LL;
  if ( a3 == 6 )
  {
LABEL_2:
    v12 = a5;
    if ( a5 < 0x18 )
      return -1073741820;
LABEL_3:
    CurrentThread = KeGetCurrentThread();
    PreviousMode = CurrentThread->PreviousMode;
    v70 = PreviousMode;
    if ( PreviousMode )
    {
      if ( v12 )
      {
        v15 = (unsigned __int64)a4;
        if ( ((unsigned __int8)a4 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (ULONG64)a4 + v12 - 1;
        if ( (unsigned __int64)a4 > v16 || v16 >= MmUserProbeAddress )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
            ExRaiseAccessViolation();
          a2 = v71;
        }
        else
        {
          v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v15 = *(_BYTE *)v15;
            v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v15 != v17 );
          a2 = v71;
        }
      }
      if ( a6 )
      {
        v18 = (_QWORD *)a6;
        if ( a6 >= MmUserProbeAddress )
          v18 = (_QWORD *)MmUserProbeAddress;
        *v18 = *v18;
      }
      PreviousMode = v70;
    }
    if ( a2 > (unsigned __int64)MmHighestUserAddress )
      return -1073741811;
    v19 = (char *)MmHighestUserAddress - 0x10000;
    v82 = (char *)MmHighestUserAddress - 0x10000;
    if ( Handle == (HANDLE)-1LL )
    {
      Process = CurrentThread->ApcState.Process;
      v78 = Process;
      Object = Process;
    }
    else
    {
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x6D566D4Du,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      Process = (_KPROCESS *)Object;
      v78 = Object;
      if ( Object == PsInitialSystemProcess )
      {
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
        return -1073741790;
      }
      a2 = v71;
      v19 = (char *)MmHighestUserAddress - 0x10000;
      v10 = v75;
    }
    if ( a2 > (unsigned __int64)v19 )
      goto LABEL_146;
    if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (HIDWORD(Process[2].ReadyListHead.Blink) & 1) == 0 )
    {
      v19 = (char *)MmHighestUserAddress - 0x10000;
LABEL_146:
      v64 = -1073741503;
      if ( !a3 )
      {
        v7[1] = (unsigned __int64)(v19 + 1);
        *((_DWORD *)v7 + 4) = 2;
        v65 = a2 & 0xFFFFFFFFFFFFF000uLL;
        *v7 = v65;
        v7[3] = (unsigned __int64)MmHighestUserAddress - v65 + 1;
        *((_DWORD *)v7 + 8) = 0x2000;
        *((_DWORD *)v7 + 9) = 1;
        *((_DWORD *)v7 + 10) = 0x20000;
        if ( v10 )
          *v10 = 48LL;
        if ( v65 == 2147352576 )
        {
          v7[1] = 2147352576LL;
          *((_DWORD *)v7 + 9) = 2;
          v7[3] = 4096LL;
          *((_DWORD *)v7 + 8) = 4096;
        }
        v64 = 0;
      }
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      return v64;
    }
    switch ( a3 )
    {
      case 4:
        WorkingSetInfoList = MiGetWorkingSetInfoList((__int64)v7, a5, (ULONG_PTR)Process, a7);
        if ( Handle != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        if ( WorkingSetInfoList >= 0 )
        {
          if ( v75 )
            *v75 = a5;
          return 0;
        }
        break;
      case 5:
        v66 = *(_QWORD *)Process[2].ThreadSeed;
        if ( Handle != (HANDLE)-1LL )
        {
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          v10 = v75;
        }
        *v7 = v66;
        if ( v10 )
          *v10 = 8LL;
        return 0;
      case 1:
        WorkingSetInfoList = MiGetWorkingSetInfo((__int64)v7, v85, a5, (__int64)Process);
        if ( Handle != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        if ( WorkingSetInfoList >= 0 )
        {
          if ( v75 )
            *v75 = 8LL * v85[0] + 8;
          return 0;
        }
        break;
      default:
        if ( Handle == (HANDLE)-1LL )
        {
          memset(v86, 0, sizeof(v86));
          v23 = 0;
        }
        else
        {
          KiStackAttachProcess(Process, 0, (__int64)v86);
          v23 = 1;
          v69 = 1;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process, v21, v22);
            if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
            {
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
              if ( (v23 & 1) != 0 )
              {
                KiUnstackDetachProcess((struct _KTHREAD *)v86, 0);
                ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
              }
              return -1073741558;
            }
            v24 = 0LL;
            if ( Process[2].Affinity.Bitmap[3] )
            {
              v24 = Process[2].Affinity.Bitmap[0];
              v11 = v71 >> 12;
              while ( v24 )
              {
                v25 = *(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32);
                if ( v11 < v25 )
                  goto LABEL_39;
                if ( v11 <= (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
                {
                  v23 |= 2u;
                  v69 = v23;
                  break;
                }
                if ( v11 < v25 )
                {
LABEL_39:
                  if ( !*(_QWORD *)v24 )
                    break;
                  v24 = *(_QWORD *)v24;
                }
                else
                {
                  if ( !*(_QWORD *)(v24 + 8) )
                    break;
                  v24 = *(_QWORD *)(v24 + 8);
                }
              }
            }
            if ( (v23 & 2) == 0 )
            {
              if ( v24 )
              {
                v59 = *(unsigned int *)(v24 + 24);
                if ( (v59 | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) < v11 )
                {
                  i = *(_QWORD *)(v24 + 8);
                  if ( i )
                  {
                    v67 = *(_QWORD **)i;
                    if ( *(_QWORD *)i )
                    {
                      do
                      {
                        i = (unsigned __int64)v67;
                        v67 = (_QWORD *)*v67;
                      }
                      while ( v67 );
                    }
                  }
                  else
                  {
                    for ( i = *(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                          i;
                          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
                    {
                      if ( *(_QWORD *)i == v24 )
                        break;
                      v24 = i;
                    }
                  }
                  v61 = v71 & 0xFFFFFFFFFFFFF000uLL;
                  v73 = v71 & 0xFFFFFFFFFFFFF000uLL;
                  if ( i )
                    v62 = ((*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12)
                        - v61;
                  else
                    v62 = (__int64)&v82[-v61 + 1];
LABEL_131:
                  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
                  if ( (v23 & 1) != 0 )
                  {
                    KiUnstackDetachProcess((struct _KTHREAD *)v86, 0);
                    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
                  }
                  if ( !a3 )
                  {
                    v7[1] = 0LL;
                    *((_DWORD *)v7 + 4) = 0;
                    *v7 = v73;
                    v7[3] = v62;
                    *((_DWORD *)v7 + 8) = 0x10000;
                    *(unsigned __int64 *)((char *)v7 + 36) = 1LL;
                    if ( v75 )
                      *v75 = 48LL;
                    return 0;
                  }
                  return -1073741503;
                }
                v63 = v71 & 0xFFFFFFFFFFFFF000uLL;
                v62 = ((v59 | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) << 12)
                    - (v71 & 0xFFFFFFFFFFFFF000uLL);
              }
              else
              {
                v63 = v71 & 0xFFFFFFFFFFFFF000uLL;
                v62 = (__int64)&v82[-(v71 & 0xFFFFFFFFFFFFF000uLL) + 1];
              }
              v73 = v63;
              goto LABEL_131;
            }
            MiReferenceVad(v24);
            --CurrentThread->KernelApcDisable;
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
            MiLockVad((__int64)CurrentThread, v24, v26, v27);
            v28 = CurrentThread->KernelApcDisable + 1;
            CurrentThread->KernelApcDisable = v28;
            if ( !v28
              && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
              && !CurrentThread->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            if ( (unsigned int)MiVadDeleted(v24) != 1 )
              break;
            MiWaitForVadDeletion(v29);
            MiUnlockAndDereferenceVad((char *)v24);
            v23 &= ~2u;
            v69 = v23;
            v11 = 0LL;
          }
          v30 = *(unsigned __int8 *)(v24 + 32);
          v31 = *(unsigned int *)(v24 + 24);
          if ( v11 >= (v31 | (unsigned __int64)(v30 << 32))
            && v11 <= (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
          {
            break;
          }
          MiUnlockAndDereferenceVad((char *)v24);
          v23 &= ~2u;
          v69 = v23;
          v7 = v79;
          Process = (_KPROCESS *)v78;
          v11 = 0LL;
        }
        memset(v84, 0, sizeof(v84));
        v32 = v71 & 0xFFFFFFFFFFFFF000uLL;
        v72 = v32;
        *(_QWORD *)&v84[0] = v32;
        v33 = (v31 | (v30 << 32)) << 12;
        *((_QWORD *)&v84[0] + 1) = v33;
        v34 = *(_DWORD *)(v24 + 48);
        v35 = MmProtectToValue[(unsigned __int8)v34 >> 3];
        LODWORD(v84[1]) = v35;
        if ( (v34 & 0x8000) != 0 )
        {
          v37 = 0x20000;
          DWORD2(v84[2]) = 0x20000;
          goto LABEL_53;
        }
        v36 = v34 & 7;
        if ( v36 == 2 )
        {
          v37 = 0x1000000;
        }
        else
        {
          v37 = 0x40000;
          DWORD2(v84[2]) = 0x40000;
          if ( a3 != 3 || a5 < 0x20 || *(_QWORD *)(**(_QWORD **)(v24 + 72) + 64LL) || v36 == 1 )
          {
LABEL_52:
            if ( a3 == 2 )
            {
              v57 = *(__int64 **)(v24 + 72);
              v38 = *(_QWORD *)(*v57 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
              if ( v38 )
              {
                v38 = MI_REFERENCE_CONTROL_AREA_FILE(*v57);
                v32 = v72;
              }
              if ( !v38 )
                v38 = 1LL;
              goto LABEL_54;
            }
LABEL_53:
            v38 = (__int64)v83;
LABEL_54:
            switch ( a3 )
            {
              case 3:
                v49 = ((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32))
                     - (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32))
                     + 1) << 12;
                v50 = *(unsigned int *)(v24 + 52);
                LODWORD(v50) = v50 & 0x7FFFFFFF;
                if ( (v50 | ((unsigned __int64)*(unsigned __int8 *)(v24 + 34) << 31)) >= 0x7FFFFFFFELL )
                  v51 = 0LL;
                else
                  v51 = v50 | ((unsigned __int64)*(unsigned __int8 *)(v24 + 34) << 31);
                MiUnlockAndDereferenceVad((char *)v24);
                if ( (v23 & 1) != 0 )
                {
                  KiUnstackDetachProcess((struct _KTHREAD *)v86, 0);
                  ObfDereferenceObjectWithTag(v78, 0x6D566D4Du);
                }
                v52 = v51 << 12;
                v53 = v79;
                *v79 = v33;
                *((_DWORD *)v53 + 2) = v35;
                *((_DWORD *)v53 + 3) = v37;
                v53[2] = v49;
                if ( a5 < 0x20 )
                {
                  v54 = 24;
                }
                else
                {
                  v53[3] = v52;
                  v54 = 32;
                }
                v74 = v54;
                if ( v75 )
                  *v75 = v54;
                return 0;
              case 6:
                v80 = 0uLL;
                v81 = 0LL;
                v39 = *(_DWORD *)(v24 + 48);
                if ( (v39 & 0x8000) != 0 || (v39 & 7) != 2 )
                {
                  v46 = v78;
                }
                else
                {
                  v40 = ***(_QWORD ***)(v24 + 72);
                  *(_QWORD *)&v80 = (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) << 12;
                  *((_QWORD *)&v80 + 1) = _InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(v40 + 24),
                                            -1LL,
                                            -1LL);
                  if ( (*(_DWORD *)(v24 + 48) & 0xF8) == 8 )
                    LODWORD(v81) = v81 | 2;
                  if ( MiVadMapsLargeImage(v24) )
                  {
                    v68 = MiLocateVadEvent(v41, 16)[2];
                    v76 = *(_BYTE *)(v68 + 28);
                    v45 = *(_QWORD *)(v68 + 32);
                    *(_QWORD *)&v80 = ((unsigned __int64)v76 << 16) + v80;
                  }
                  else
                  {
                    v45 = (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32))
                        - (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32))
                        + 1;
                  }
                  if ( (v42 & 0xFFF) == 0 )
                    v44 = 0LL;
                  LOBYTE(v23) = v69;
                  v46 = Object;
                  if ( v45 != v44 + (v42 >> 12) )
                    LODWORD(v81) = v43 | 1;
                }
                MiUnlockAndDereferenceVad((char *)v24);
                if ( (v23 & 1) != 0 )
                {
                  KiUnstackDetachProcess((struct _KTHREAD *)v86, 0);
                  ObfDereferenceObjectWithTag(v46, 0x6D566D4Du);
                }
                v74 = 24;
                v47 = v79;
                *(_OWORD *)v79 = v80;
                v47[2] = v81;
                if ( v75 )
                  *v75 = 24LL;
                return 0;
              case 0:
                AddressSpan = MiQueryAddressSpan((__int64)v84, v32, v24);
                *((_QWORD *)&v84[1] + 1) = AddressSpan - *(_QWORD *)&v84[0];
                break;
            }
            MiUnlockAndDereferenceVad((char *)v24);
            if ( (v23 & 1) != 0 )
            {
              KiUnstackDetachProcess((struct _KTHREAD *)v86, 0);
              ObfDereferenceObjectWithTag(v78, 0x6D566D4Du);
            }
            if ( !a3 )
            {
              v56 = v79;
              *(_OWORD *)v79 = v84[0];
              *((_OWORD *)v56 + 1) = v84[1];
              *((_OWORD *)v56 + 2) = v84[2];
              if ( v75 )
                *v75 = 48LL;
              return 0;
            }
            if ( !v38 )
              return -1073741503;
            if ( v38 == 1 )
              return -1073741672;
            if ( (unsigned int)a5 < a5 )
            {
              ObfDereferenceObject((PVOID)v38);
              return -1073741581;
            }
            v74 = 0;
            WorkingSetInfoList = ObQueryNameStringMode((char *)v38, (__int64)v79, a5, &v74, v70);
            ObfDereferenceObject((PVOID)v38);
            if ( v75 )
              *v75 = v74;
            return WorkingSetInfoList;
          }
          v37 = 0x8000000;
        }
        DWORD2(v84[2]) = v37;
        goto LABEL_52;
    }
    return WorkingSetInfoList;
  }
  switch ( a3 )
  {
    case 0:
      v12 = a5;
      if ( a5 >= 0x30 )
        goto LABEL_3;
      result = -1073741820;
      break;
    case 1:
    case 5:
      v12 = a5;
      if ( a5 >= 8 )
        goto LABEL_3;
      result = -1073741820;
      break;
    case 2:
      v12 = a5;
      goto LABEL_3;
    case 3:
      goto LABEL_2;
    case 4:
      v12 = a5;
      if ( a5 >= 0x10 )
        goto LABEL_3;
      result = -1073741820;
      break;
    default:
      result = -1073741821;
      break;
  }
  return result;
}
