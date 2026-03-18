/*
 * XREFs of MmQueryVirtualMemory @ 0x140418260
 * Callers:
 *     NtQueryVirtualMemory @ 0x140418228 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x1404F427C (PfpVirtualQuery.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiQueryAddressSpan @ 0x14005E760 (MiQueryAddressSpan.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiGetWorkingSetInfo @ 0x1401DF478 (MiGetWorkingSetInfo.c)
 *     MiWaitForVadDeletion @ 0x1401E1DD8 (MiWaitForVadDeletion.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall MmQueryVirtualMemory(
        HANDLE Handle,
        unsigned __int64 a2,
        int a3,
        ULONG64 a4,
        unsigned __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  __int64 v7; // r14
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
  int v21; // ebx
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int16 v25; // ax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // r15
  unsigned __int64 v29; // r9
  __int64 v30; // r14
  int v31; // edx
  int v32; // r13d
  int v33; // edx
  int v34; // esi
  __int64 v35; // r15
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // r10
  unsigned __int64 v42; // rdx
  PVOID v43; // rsi
  _QWORD *v44; // rdx
  NTSTATUS result; // eax
  unsigned __int64 AddressSpan; // rax
  _QWORD *v47; // rdx
  unsigned __int64 v48; // r15
  __int64 v49; // rax
  unsigned __int64 v50; // r12
  unsigned __int64 v51; // r12
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 *v54; // rax
  int WorkingSetInfoList; // ebx
  __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rsi
  __int64 v61; // rsi
  int v62; // esi
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rbx
  _QWORD *v65; // rcx
  __int64 v66; // rcx
  char v67; // [rsp+40h] [rbp-128h]
  char v68; // [rsp+44h] [rbp-124h]
  unsigned __int64 v69; // [rsp+48h] [rbp-120h]
  unsigned __int64 v70; // [rsp+48h] [rbp-120h]
  unsigned int v71; // [rsp+50h] [rbp-118h] BYREF
  _QWORD *v72; // [rsp+58h] [rbp-110h]
  unsigned __int8 v73; // [rsp+60h] [rbp-108h]
  PVOID Object; // [rsp+68h] [rbp-100h] BYREF
  PVOID v75; // [rsp+70h] [rbp-F8h]
  _QWORD *v76; // [rsp+78h] [rbp-F0h]
  __int128 v77; // [rsp+80h] [rbp-E8h]
  __int64 v78; // [rsp+90h] [rbp-D8h]
  char *v79; // [rsp+98h] [rbp-D0h]
  PVOID v80; // [rsp+A0h] [rbp-C8h]
  _OWORD v81[3]; // [rsp+A8h] [rbp-C0h] BYREF
  _QWORD v82[3]; // [rsp+D8h] [rbp-90h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v83; // [rsp+F0h] [rbp-78h] BYREF

  v7 = a4;
  v76 = (_QWORD *)a4;
  v69 = a2;
  v82[1] = Handle;
  v10 = (_QWORD *)a6;
  v72 = (_QWORD *)a6;
  v11 = 0LL;
  v67 = 0;
  v80 = 0LL;
  if ( a3 == 6 )
  {
LABEL_2:
    v12 = a5;
    if ( a5 < 0x18 )
      return -1073741820;
LABEL_3:
    CurrentThread = KeGetCurrentThread();
    PreviousMode = CurrentThread->PreviousMode;
    v68 = PreviousMode;
    if ( PreviousMode )
    {
      if ( v12 )
      {
        v15 = a4;
        if ( (a4 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = v12 + a4 - 1;
        if ( a4 > v16 || v16 >= MmUserProbeAddress )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
            ExRaiseAccessViolation();
          a2 = v69;
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
          a2 = v69;
        }
      }
      if ( a6 )
      {
        v18 = (_QWORD *)a6;
        if ( a6 >= MmUserProbeAddress )
          v18 = (_QWORD *)MmUserProbeAddress;
        *v18 = *v18;
      }
      PreviousMode = v68;
    }
    if ( a2 > (unsigned __int64)MmHighestUserAddress )
      return -1073741811;
    v19 = (char *)MmHighestUserAddress - 0x10000;
    v79 = (char *)MmHighestUserAddress - 0x10000;
    if ( Handle == (HANDLE)-1LL )
    {
      Process = CurrentThread->ApcState.Process;
      v75 = Process;
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
      v75 = Object;
      if ( Object == PsInitialSystemProcess )
      {
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
        return -1073741790;
      }
      a2 = v69;
      v19 = (char *)MmHighestUserAddress - 0x10000;
      v10 = v72;
    }
    if ( a2 > (unsigned __int64)v19 )
      goto LABEL_146;
    if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (HIDWORD(Process[2].SwapListEntry.Next) & 1) == 0 )
    {
      v19 = (char *)MmHighestUserAddress - 0x10000;
LABEL_146:
      v62 = -1073741503;
      if ( !a3 )
      {
        *(_QWORD *)(v7 + 8) = v19 + 1;
        *(_DWORD *)(v7 + 16) = 2;
        v63 = a2 & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)v7 = v63;
        *(_QWORD *)(v7 + 24) = (char *)MmHighestUserAddress - v63 + 1;
        *(_DWORD *)(v7 + 32) = 0x2000;
        *(_DWORD *)(v7 + 36) = 1;
        *(_DWORD *)(v7 + 40) = 0x20000;
        if ( v10 )
          *v10 = 48LL;
        if ( v63 == 2147352576 )
        {
          *(_QWORD *)(v7 + 8) = 2147352576LL;
          *(_DWORD *)(v7 + 36) = 2;
          *(_QWORD *)(v7 + 24) = 4096LL;
          *(_DWORD *)(v7 + 32) = 4096;
        }
        v62 = 0;
      }
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      return v62;
    }
    switch ( a3 )
    {
      case 4:
        WorkingSetInfoList = MiGetWorkingSetInfoList(v7, a5, Process, a7);
        if ( Handle != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        if ( WorkingSetInfoList >= 0 )
        {
          if ( v72 )
            *v72 = a5;
          return 0;
        }
        break;
      case 5:
        v64 = Process[2].ActiveProcessors.Bitmap[19];
        if ( Handle != (HANDLE)-1LL )
        {
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          v10 = v72;
        }
        *(_QWORD *)v7 = v64;
        if ( v10 )
          *v10 = 8LL;
        return 0;
      case 1:
        WorkingSetInfoList = MiGetWorkingSetInfo(v7, v82, a5, (__int64)Process);
        if ( Handle != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        if ( WorkingSetInfoList >= 0 )
        {
          if ( v72 )
            *v72 = 8LL * v82[0] + 8;
          return 0;
        }
        break;
      default:
        if ( Handle == (HANDLE)-1LL )
        {
          memset(&v83, 0, sizeof(v83));
          v21 = 0;
        }
        else
        {
          KiStackAttachProcess(Process, 0LL, (__int64)&v83);
          v21 = 1;
          v67 = 1;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
            if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
            {
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
              if ( (v21 & 1) != 0 )
              {
                KiUnstackDetachProcess(&v83, 0LL);
                ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
              }
              return -1073741558;
            }
            v22 = 0LL;
            if ( Process[2].Affinity.Bitmap[4] )
            {
              v22 = Process[2].Affinity.Bitmap[1];
              v11 = v69 >> 12;
              while ( v22 )
              {
                v23 = *(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32);
                if ( v11 < v23 )
                  goto LABEL_39;
                if ( v11 <= (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) )
                {
                  v21 |= 2u;
                  v67 = v21;
                  break;
                }
                if ( v11 < v23 )
                {
LABEL_39:
                  if ( !*(_QWORD *)v22 )
                    break;
                  v22 = *(_QWORD *)v22;
                }
                else
                {
                  if ( !*(_QWORD *)(v22 + 8) )
                    break;
                  v22 = *(_QWORD *)(v22 + 8);
                }
              }
            }
            if ( (v21 & 2) == 0 )
            {
              if ( v22 )
              {
                v56 = *(unsigned __int8 *)(v22 + 32);
                v57 = *(unsigned int *)(v22 + 24);
                if ( (v57 | (unsigned __int64)(v56 << 32)) >= v11 )
                {
                  v59 = v69 & 0xFFFFFFFFFFFFF000uLL;
                  v60 = v57 | (v56 << 32);
LABEL_129:
                  v61 = (v60 << 12) - v59;
                }
                else
                {
                  i = *(_QWORD *)(v22 + 8);
                  if ( i )
                  {
                    v65 = *(_QWORD **)i;
                    if ( *(_QWORD *)i )
                    {
                      do
                      {
                        i = (unsigned __int64)v65;
                        v65 = (_QWORD *)*v65;
                      }
                      while ( v65 );
                    }
                  }
                  else
                  {
                    for ( i = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                          i;
                          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
                    {
                      if ( *(_QWORD *)i == v22 )
                        break;
                      v22 = i;
                    }
                  }
                  v59 = v69 & 0xFFFFFFFFFFFFF000uLL;
                  if ( i )
                  {
                    v60 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
                    goto LABEL_129;
                  }
                  v61 = (__int64)&v79[-v59 + 1];
                }
              }
              else
              {
                v59 = v69 & 0xFFFFFFFFFFFFF000uLL;
                v61 = (__int64)&v79[-(v69 & 0xFFFFFFFFFFFFF000uLL) + 1];
              }
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
              if ( (v21 & 1) != 0 )
              {
                KiUnstackDetachProcess(&v83, 0LL);
                ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
              }
              if ( !a3 )
              {
                *(_QWORD *)(v7 + 8) = 0LL;
                *(_DWORD *)(v7 + 16) = 0;
                *(_QWORD *)v7 = v59;
                *(_QWORD *)(v7 + 24) = v61;
                *(_DWORD *)(v7 + 32) = 0x10000;
                *(_QWORD *)(v7 + 36) = 1LL;
                if ( v72 )
                  *v72 = 48LL;
                return 0;
              }
              return -1073741503;
            }
            MiReferenceVad(v22);
            --CurrentThread->KernelApcDisable;
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
            MiLockVad((__int64)CurrentThread, v22);
            v25 = CurrentThread->KernelApcDisable + 1;
            CurrentThread->KernelApcDisable = v25;
            if ( !v25
              && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
              && !CurrentThread->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery(v24);
            }
            if ( !MiVadDeleted(v22) )
              break;
            MiWaitForVadDeletion(v26);
            MiUnlockAndDereferenceVad((PVOID)v22);
            v21 &= ~2u;
            v67 = v21;
            v11 = 0LL;
          }
          v27 = *(unsigned __int8 *)(v22 + 32);
          v28 = *(unsigned int *)(v22 + 24);
          if ( v11 >= (v28 | (unsigned __int64)(v27 << 32))
            && v11 <= (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) )
          {
            break;
          }
          MiUnlockAndDereferenceVad((PVOID)v22);
          v21 &= ~2u;
          v67 = v21;
          v7 = (__int64)v76;
          Process = (_KPROCESS *)v75;
          v11 = 0LL;
        }
        memset(v81, 0, sizeof(v81));
        v29 = v69 & 0xFFFFFFFFFFFFF000uLL;
        v70 = v29;
        *(_QWORD *)&v81[0] = v29;
        v30 = (v28 | (v27 << 32)) << 12;
        *((_QWORD *)&v81[0] + 1) = v30;
        v31 = *(_DWORD *)(v22 + 48);
        v32 = MmProtectToValue[(unsigned __int8)v31 >> 3];
        LODWORD(v81[1]) = v32;
        if ( (v31 & 0x8000) != 0 )
        {
          v34 = 0x20000;
          DWORD2(v81[2]) = 0x20000;
          goto LABEL_53;
        }
        v33 = v31 & 7;
        if ( v33 == 2 )
        {
          v34 = 0x1000000;
        }
        else
        {
          v34 = 0x40000;
          DWORD2(v81[2]) = 0x40000;
          if ( a3 != 3 || a5 < 0x20 || *(_QWORD *)(**(_QWORD **)(v22 + 72) + 64LL) || v33 == 1 )
          {
LABEL_52:
            if ( a3 == 2 )
            {
              v54 = *(__int64 **)(v22 + 72);
              v35 = *(_QWORD *)(*v54 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
              if ( v35 )
              {
                v35 = MI_REFERENCE_CONTROL_AREA_FILE(*v54);
                v29 = v70;
              }
              if ( !v35 )
                v35 = 1LL;
              goto LABEL_54;
            }
LABEL_53:
            v35 = (__int64)v80;
LABEL_54:
            switch ( a3 )
            {
              case 3:
                v48 = ((*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32))
                     - (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
                     + 1) << 12;
                v49 = *(unsigned int *)(v22 + 52);
                LODWORD(v49) = v49 & 0x7FFFFFFF;
                if ( (v49 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31)) >= 0x7FFFFFFFELL )
                  v50 = 0LL;
                else
                  v50 = v49 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31);
                MiUnlockAndDereferenceVad((PVOID)v22);
                if ( (v21 & 1) != 0 )
                {
                  KiUnstackDetachProcess(&v83, 0LL);
                  ObfDereferenceObjectWithTag(v75, 0x6D566D4Du);
                }
                v51 = v50 << 12;
                v52 = v76;
                *v76 = v30;
                *((_DWORD *)v52 + 2) = v32;
                *((_DWORD *)v52 + 3) = v34;
                v52[2] = v48;
                if ( a5 < 0x20 )
                {
                  v53 = 24;
                }
                else
                {
                  v52[3] = v51;
                  v53 = 32;
                }
                v71 = v53;
                if ( v72 )
                  *v72 = v53;
                return 0;
              case 6:
                v77 = 0uLL;
                v78 = 0LL;
                v36 = *(_DWORD *)(v22 + 48);
                if ( (v36 & 0x8000) != 0 || (v36 & 7) != 2 )
                {
                  v43 = v75;
                }
                else
                {
                  v37 = ***(_QWORD ***)(v22 + 72);
                  *(_QWORD *)&v77 = (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12;
                  *((_QWORD *)&v77 + 1) = _InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(v37 + 24),
                                            -1LL,
                                            -1LL);
                  if ( (*(_DWORD *)(v22 + 48) & 0xF8) == 8 )
                    LODWORD(v78) = v78 | 2;
                  if ( MiVadMapsLargeImage(v22) )
                  {
                    v66 = MiLocateVadEvent(v38, 16)[2];
                    v73 = *(_BYTE *)(v66 + 28);
                    v42 = *(_QWORD *)(v66 + 32);
                    *(_QWORD *)&v77 = ((unsigned __int64)v73 << 16) + v77;
                  }
                  else
                  {
                    v42 = (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32))
                        - (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
                        + 1;
                  }
                  if ( (v39 & 0xFFF) == 0 )
                    v41 = 0LL;
                  LOBYTE(v21) = v67;
                  v43 = Object;
                  if ( v42 != v41 + (v39 >> 12) )
                    LODWORD(v78) = v40 | 1;
                }
                MiUnlockAndDereferenceVad((PVOID)v22);
                if ( (v21 & 1) != 0 )
                {
                  KiUnstackDetachProcess(&v83, 0LL);
                  ObfDereferenceObjectWithTag(v43, 0x6D566D4Du);
                }
                v71 = 24;
                v44 = v76;
                *(_OWORD *)v76 = v77;
                v44[2] = v78;
                if ( v72 )
                  *v72 = 24LL;
                return 0;
              case 0:
                AddressSpan = MiQueryAddressSpan((__int64)v81, v29, v22);
                *((_QWORD *)&v81[1] + 1) = AddressSpan - *(_QWORD *)&v81[0];
                break;
            }
            MiUnlockAndDereferenceVad((PVOID)v22);
            if ( (v21 & 1) != 0 )
            {
              KiUnstackDetachProcess(&v83, 0LL);
              ObfDereferenceObjectWithTag(v75, 0x6D566D4Du);
            }
            if ( !a3 )
            {
              v47 = v76;
              *(_OWORD *)v76 = v81[0];
              *((_OWORD *)v47 + 1) = v81[1];
              *((_OWORD *)v47 + 2) = v81[2];
              if ( v72 )
                *v72 = 48LL;
              return 0;
            }
            if ( !v35 )
              return -1073741503;
            if ( v35 == 1 )
              return -1073741672;
            if ( (unsigned int)a5 < a5 )
            {
              ObfDereferenceObject((PVOID)v35);
              return -1073741581;
            }
            WorkingSetInfoList = ObQueryNameStringMode(v35, (_DWORD)v76, a5, (unsigned int)&v71, v68);
            ObfDereferenceObject((PVOID)v35);
            if ( v72 )
              *v72 = v71;
            return WorkingSetInfoList;
          }
          v34 = 0x8000000;
        }
        DWORD2(v81[2]) = v34;
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
