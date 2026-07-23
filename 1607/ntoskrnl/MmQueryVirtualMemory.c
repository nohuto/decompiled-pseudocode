/*
 * XREFs of MmQueryVirtualMemory @ 0x140431100
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x14011EC58 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x1404310CC (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x140532B80 (PfpVirtualQuery.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiVadDeleted @ 0x14002BEF0 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     MiQueryAddressSpan @ 0x140042840 (MiQueryAddressSpan.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiGetWorkingSetInfo @ 0x14010F8A4 (MiGetWorkingSetInfo.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiWaitForVadDeletion @ 0x1401F7544 (MiWaitForVadDeletion.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall MmQueryVirtualMemory(
        HANDLE Handle,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int a7)
{
  int v8; // r11d
  unsigned __int64 v11; // rbx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  _KPROCESS *Process; // r13
  int WorkingSetInfoList; // esi
  __int64 v21; // rbx
  int WorkingSetInfo; // ebx
  int v23; // ebx
  __int64 v24; // rdi
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // rdx
  unsigned __int64 i; // rax
  _QWORD *v32; // rcx
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  __int16 v36; // ax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // r15
  int v41; // edx
  int v42; // r14d
  int v43; // edx
  __int64 v44; // rcx
  __int64 *v45; // rax
  unsigned __int64 v46; // r12
  __int64 *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // r8d
  unsigned __int64 v52; // r9
  __int64 *VadEvent; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 AddressSpan; // rax
  unsigned __int64 v56; // r12
  __int64 v57; // rax
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // r15
  unsigned int v60; // ebx
  unsigned int v61; // eax
  unsigned __int64 v62; // r15
  char v63; // [rsp+40h] [rbp-108h]
  char v64; // [rsp+44h] [rbp-104h]
  unsigned int v66; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int8 v67; // [rsp+54h] [rbp-F4h]
  struct _KTHREAD *v68; // [rsp+58h] [rbp-F0h]
  PVOID Object; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 *v70; // [rsp+68h] [rbp-E0h]
  __int128 v71; // [rsp+70h] [rbp-D8h]
  __int64 v72; // [rsp+80h] [rbp-C8h]
  __int64 v73; // [rsp+88h] [rbp-C0h]
  __int128 v74; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v75; // [rsp+A0h] [rbp-A8h]
  __int128 v76; // [rsp+B0h] [rbp-98h]
  unsigned __int64 v77; // [rsp+C0h] [rbp-88h]
  __int64 v78; // [rsp+C8h] [rbp-80h] BYREF
  _QWORD v79[6]; // [rsp+D0h] [rbp-78h] BYREF

  v8 = a3;
  v73 = (__int64)Handle;
  v70 = a6;
  v63 = 0;
  v77 = 0LL;
  switch ( a3 )
  {
    case 0:
      v11 = a5;
      if ( a5 >= 0x30 )
        goto LABEL_13;
      return -1073741820;
    case 1:
    case 5:
      v11 = a5;
      if ( a5 >= 8 )
        goto LABEL_13;
      return -1073741820;
    case 2:
      v11 = a5;
      goto LABEL_13;
    case 3:
    case 6:
      v11 = a5;
      if ( a5 >= 0x18 )
        goto LABEL_13;
      return -1073741820;
    case 4:
      v11 = a5;
      if ( a5 >= 0x10 )
        goto LABEL_13;
      return -1073741820;
    case 7:
      v11 = a5;
      if ( a5 < 0x20 )
        return -1073741820;
LABEL_13:
      CurrentThread = KeGetCurrentThread();
      v68 = CurrentThread;
      PreviousMode = CurrentThread->PreviousMode;
      v64 = PreviousMode;
      if ( PreviousMode )
      {
        if ( v11 )
        {
          v15 = a4;
          if ( (a4 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = v11 + a4 - 1;
          if ( a4 > v16 || v16 >= 0x7FFFFFFF0000LL )
          {
            if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
              ExRaiseAccessViolation();
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
          }
        }
        if ( a6 )
        {
          v18 = (__int64)a6;
          if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
            v18 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v18 = *(_QWORD *)v18;
        }
      }
      if ( a2 > 0x7FFFFFFEFFFFLL )
        return -1073741811;
      if ( Handle == (HANDLE)-1LL )
      {
        Process = CurrentThread->ApcState.Process;
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
        if ( Object == PsInitialSystemProcess )
        {
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          return -1073741790;
        }
        v8 = a3;
      }
      if ( a2 > 0x7FFFFFFDFFFFLL
        || ((a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 || (a2 & 0x7FFFFFFFF000LL) == qword_1403269D8 && qword_1403269D8)
        && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
      {
        WorkingSetInfo = -1073741503;
        if ( v8 )
          goto LABEL_198;
        *(_QWORD *)(a4 + 8) = 0x7FFFFFFE0000LL;
        *(_DWORD *)(a4 + 16) = 2;
        v62 = a2 & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)a4 = v62;
        *(_QWORD *)(a4 + 24) = 0x7FFFFFFF0000LL - v62;
        *(_DWORD *)(a4 + 32) = 0x2000;
        *(_DWORD *)(a4 + 36) = 1;
        *(_DWORD *)(a4 + 40) = 0x20000;
        if ( a6 )
          *a6 = 48LL;
        if ( v62 == 2147352576 )
        {
          *(_QWORD *)(a4 + 8) = 2147352576LL;
        }
        else
        {
          if ( v62 != qword_1403269D8 || !v62 )
            goto LABEL_197;
          *(_QWORD *)(a4 + 8) = qword_1403269D8;
        }
        *(_DWORD *)(a4 + 36) = 2;
        *(_QWORD *)(a4 + 24) = 4096LL;
        *(_DWORD *)(a4 + 32) = 4096;
LABEL_197:
        WorkingSetInfo = 0;
LABEL_198:
        if ( Handle != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        return WorkingSetInfo;
      }
      switch ( v8 )
      {
        case 4:
          WorkingSetInfoList = MiGetWorkingSetInfoList(a4, v11, (ULONG_PTR)Process, a7);
          if ( Handle != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
          if ( WorkingSetInfoList < 0 )
            return WorkingSetInfoList;
          if ( a6 )
            *a6 = v11;
          return 0;
        case 5:
          v21 = *(_QWORD *)Process[2].ThreadSeed;
          if ( Handle != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          *(_QWORD *)a4 = v21;
          if ( a6 )
            *a6 = 8LL;
          return 0;
        case 1:
          WorkingSetInfo = MiGetWorkingSetInfo(a4, &v78, v11, (__int64)Process);
          if ( Handle != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
          if ( WorkingSetInfo < 0 )
            return WorkingSetInfo;
          if ( a6 )
            *a6 = 8 * v78 + 8;
          return 0;
      }
      if ( Handle == (HANDLE)-1LL )
      {
        memset(v79, 0, sizeof(v79));
        v23 = 0;
      }
      else
      {
        KiStackAttachProcess(Process, 0, (__int64)v79);
        v23 = 1;
        v63 = 1;
      }
      while ( 1 )
      {
        LOCK_ADDRESS_SPACE_SHARED((__int64)v68, (__int64)Process);
        if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
        {
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)v68, (__int64)Process);
          if ( (v23 & 1) != 0 )
          {
            KiUnstackDetachProcess((struct _KTHREAD *)v79, 0);
            ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
          }
          return -1073741558;
        }
        v24 = 0LL;
        v25 = 0LL;
        if ( Process[2].Affinity.Bitmap[6] )
        {
          v26 = Process[2].Affinity.Bitmap[3];
          v25 = a2 >> 12;
          v24 = v26;
          if ( v26 )
          {
            while ( 1 )
            {
              v27 = *(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32);
              if ( v25 < v27 )
                goto LABEL_74;
              if ( v25 <= (*(unsigned int *)(v26 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 33) << 32)) )
              {
                v23 |= 2u;
                v63 = v23;
                break;
              }
              if ( v25 >= v27 )
                v26 = *(_QWORD *)(v26 + 8);
              else
LABEL_74:
                v26 = *(_QWORD *)v26;
              if ( !v26 )
                break;
              v24 = v26;
            }
          }
        }
        if ( (v23 & 2) == 0 )
        {
          if ( !v24 )
          {
            v28 = a2 & 0xFFFFFFFFFFFFF000uLL;
            v29 = 0x7FFFFFFDFFFFLL - v28 + 1;
            goto LABEL_95;
          }
          v30 = *(unsigned int *)(v24 + 24);
          if ( (v30 | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) >= v25 )
          {
            v28 = a2 & 0x7FFFFFFFF000LL;
            v33 = v30 | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32);
          }
          else
          {
            i = *(_QWORD *)(v24 + 8);
            if ( i )
            {
              v32 = *(_QWORD **)i;
              if ( *(_QWORD *)i )
              {
                do
                {
                  i = (unsigned __int64)v32;
                  v32 = (_QWORD *)*v32;
                }
                while ( v32 );
              }
            }
            else
            {
              for ( i = *(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)i == v24 )
                  break;
                v24 = i;
              }
            }
            v28 = a2 & 0x7FFFFFFFF000LL;
            if ( !i )
            {
              v29 = 0x7FFFFFFDFFFFLL - v28 + 1;
              goto LABEL_95;
            }
            v33 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
          }
          v29 = (v33 << 12) - v28;
LABEL_95:
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)v68, (__int64)Process);
          if ( (v23 & 1) != 0 )
          {
            KiUnstackDetachProcess((struct _KTHREAD *)v79, 0);
            ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
          }
          if ( !a3 )
          {
            *(_QWORD *)(a4 + 8) = 0LL;
            *(_DWORD *)(a4 + 16) = 0;
            *(_QWORD *)a4 = v28;
            *(_QWORD *)(a4 + 24) = v29;
            *(_DWORD *)(a4 + 32) = 0x10000;
            *(_QWORD *)(a4 + 36) = 1LL;
            if ( v70 )
              *v70 = 48LL;
            return 0;
          }
          return -1073741503;
        }
        MiReferenceVad(v24);
        v34 = (__int64)v68;
        --v68->KernelApcDisable;
        UNLOCK_ADDRESS_SPACE_SHARED(v34, (__int64)Process);
        MiLockVad((__int64)v68, v24);
        v35 = (__int64)v68;
        v36 = v68->KernelApcDisable + 1;
        v68->KernelApcDisable = v36;
        if ( !v36 && *(_QWORD *)(v35 + 152) != v35 + 152 && !*(_WORD *)(v35 + 486) )
          KiCheckForKernelApcDelivery(v35);
        if ( (unsigned int)MiVadDeleted(v24) == 1 )
        {
          MiWaitForVadDeletion(v37);
          goto LABEL_108;
        }
        v38 = *(unsigned __int8 *)(v24 + 32);
        v39 = *(unsigned int *)(v24 + 24);
        if ( v25 >= (v39 | (unsigned __int64)(v38 << 32))
          && v25 <= (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
        {
          break;
        }
LABEL_108:
        MiUnlockAndDereferenceVad((char *)v24);
        v23 &= ~2u;
        v63 = v23;
      }
      v75 = 0uLL;
      v76 = 0uLL;
      v40 = a2 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)&v74 = v40;
      v73 = (v39 | (v38 << 32)) << 12;
      *((_QWORD *)&v74 + 1) = v73;
      v41 = *(_DWORD *)(v24 + 48);
      LODWORD(v68) = MmProtectToValue[(unsigned __int8)v41 >> 3];
      LODWORD(v75) = (_DWORD)v68;
      if ( (v41 & 0x8000) != 0 )
      {
        v42 = 0x20000;
        DWORD2(v76) = 0x20000;
        goto LABEL_134;
      }
      v43 = v41 & 7;
      if ( v43 == 2 )
      {
        v42 = 0x1000000;
        DWORD2(v76) = 0x1000000;
        if ( a3 == 7 )
        {
          v44 = **(_QWORD **)(v24 + 72);
          goto LABEL_124;
        }
        goto LABEL_127;
      }
      v42 = 0x40000;
      DWORD2(v76) = 0x40000;
      if ( v43 == 1 )
      {
        v23 |= 8u;
LABEL_126:
        v63 = v23;
        goto LABEL_127;
      }
      if ( a3 == 3 && a5 >= 0x20 || a3 == 7 )
      {
        v45 = *(__int64 **)(v24 + 72);
        v44 = *v45;
        if ( !*(_QWORD *)(*v45 + 64) )
        {
          v42 = 0x8000000;
          DWORD2(v76) = 0x8000000;
          goto LABEL_127;
        }
        if ( a3 == 7 )
        {
LABEL_124:
          if ( (*(_DWORD *)(v44 + 56) & 0x40000000) == 0 )
            goto LABEL_127;
          v23 |= 4u;
          goto LABEL_126;
        }
      }
LABEL_127:
      if ( a3 == 2 )
      {
        v46 = 0LL;
        if ( v43 != 1 )
        {
          v47 = *(__int64 **)(v24 + 72);
          v46 = *(_QWORD *)(*v47 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v46 )
            v46 = MiReferenceControlAreaFile(*v47);
        }
        if ( !v46 )
          v46 = 1LL;
      }
      else
      {
LABEL_134:
        v46 = v77;
      }
      if ( ((a3 - 3) & 0xFFFFFFFB) == 0 )
      {
        v56 = ((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32))
             - (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32))
             + 1) << 12;
        v57 = *(unsigned int *)(v24 + 52);
        LODWORD(v57) = v57 & 0x7FFFFFFF;
        v58 = v57 | ((unsigned __int64)*(unsigned __int8 *)(v24 + 34) << 31);
        if ( v58 >= 0x7FFFFFFFELL )
          v58 = 0LL;
        MiUnlockAndDereferenceVad((char *)v24);
        if ( (v23 & 1) != 0 )
        {
          KiUnstackDetachProcess((struct _KTHREAD *)v79, 0);
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        }
        v59 = v58 << 12;
        v60 = v23 & 0xFFFFFFFD;
        *(_QWORD *)a4 = v73;
        *(_DWORD *)(a4 + 8) = (_DWORD)v68;
        *(_QWORD *)(a4 + 16) = v56;
        if ( a3 == 7 )
        {
          *(_DWORD *)(a4 + 12) = 0;
          if ( v42 == 0x20000 )
          {
            *(_DWORD *)(a4 + 12) = 1;
          }
          else if ( (v60 & 8) != 0 )
          {
            *(_DWORD *)(a4 + 12) = 16;
          }
          else if ( v42 == 0x40000 )
          {
            *(_DWORD *)(a4 + 12) = 2;
          }
          else if ( v42 == 0x1000000 )
          {
            *(_DWORD *)(a4 + 12) = 4;
          }
          else
          {
            *(_DWORD *)(a4 + 12) = 8;
          }
          *(_DWORD *)(a4 + 12) ^= (*(_DWORD *)(a4 + 12) ^ (8 * v60)) & 0x20;
        }
        else
        {
          *(_DWORD *)(a4 + 12) = v42;
        }
        if ( a5 < 0x20 )
        {
          v61 = 24;
        }
        else
        {
          *(_QWORD *)(a4 + 24) = v59;
          v61 = 32;
        }
        v66 = v61;
        if ( v70 )
          *v70 = v61;
        return 0;
      }
      if ( a3 == 6 )
      {
        v71 = 0uLL;
        v72 = 0LL;
        v48 = *(_DWORD *)(v24 + 48);
        if ( (v48 & 0x8000) == 0 && (v48 & 7) == 2 )
        {
          v49 = ***(_QWORD ***)(v24 + 72);
          *(_QWORD *)&v71 = (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) << 12;
          *((_QWORD *)&v71 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 24), -1LL, -1LL);
          if ( (*(_DWORD *)(v24 + 48) & 0xF8) == 8 )
            LODWORD(v72) = v72 | 2;
          if ( MiVadMapsLargeImage(v24) )
          {
            VadEvent = MiLocateVadEvent(v50, 16);
            v67 = *((_BYTE *)VadEvent + 16);
            v54 = VadEvent[3];
            *(_QWORD *)&v71 = ((unsigned __int64)v67 << 16) + v71;
          }
          else
          {
            v54 = (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32))
                - (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32))
                + 1;
          }
          LOBYTE(v23) = v63;
          Process = (_KPROCESS *)Object;
          if ( v54 != ((v52 & 0xFFF) != 0) + (v52 >> 12) )
            LODWORD(v72) = v51 | 1;
        }
        MiUnlockAndDereferenceVad((char *)v24);
        if ( (v23 & 1) != 0 )
        {
          KiUnstackDetachProcess((struct _KTHREAD *)v79, 0);
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        }
        v66 = 24;
        *(_OWORD *)a4 = v71;
        *(_QWORD *)(a4 + 16) = v72;
        if ( v70 )
          *v70 = 24LL;
        return 0;
      }
      if ( !a3 )
      {
        AddressSpan = MiQueryAddressSpan((__int64)&v74, v40, v24);
        *((_QWORD *)&v75 + 1) = AddressSpan - v74;
      }
      MiUnlockAndDereferenceVad((char *)v24);
      if ( (v23 & 1) != 0 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v79, 0);
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      }
      if ( !a3 )
      {
        *(_OWORD *)a4 = v74;
        *(_OWORD *)(a4 + 16) = v75;
        *(_OWORD *)(a4 + 32) = v76;
        if ( v70 )
          *v70 = 48LL;
        return 0;
      }
      if ( !v46 )
        return -1073741503;
      if ( v46 == 1 )
        return -1073741672;
      if ( (unsigned int)a5 < a5 )
      {
        ObfDereferenceObject((PVOID)v46);
        return -1073741581;
      }
      v66 = 0;
      WorkingSetInfo = ObQueryNameStringMode(v46, a4, a5, (unsigned int)&v66, v64);
      ObfDereferenceObject((PVOID)v46);
      if ( v70 )
        *v70 = v66;
      return WorkingSetInfo;
    default:
      return -1073741821;
  }
}
