/*
 * XREFs of CreateNameSpaceObject @ 0x1C00175D0
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C0005530 (CreateNativeNameSpaceObject.c)
 *     Mutex @ 0x1C00074B0 (Mutex.c)
 *     Processor @ 0x1C000B270 (Processor.c)
 *     OpRegion @ 0x1C000C520 (OpRegion.c)
 *     Device @ 0x1C000C820 (Device.c)
 *     CreateXField @ 0x1C0014688 (CreateXField.c)
 *     Method @ 0x1C00149E0 (Method.c)
 *     Name @ 0x1C0014B10 (Name.c)
 *     ParseField @ 0x1C0015710 (ParseField.c)
 *     Field @ 0x1C0026E10 (Field.c)
 *     Alias @ 0x1C0028AA0 (Alias.c)
 *     IndexField @ 0x1C0029B50 (IndexField.c)
 *     ThermalZone @ 0x1C002A550 (ThermalZone.c)
 *     Event @ 0x1C002A900 (Event.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005A470 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005B750 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005B8AC (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005BA04 (AMLIApplyNextNamespaceOverride.c)
 *     BankField @ 0x1C005CE00 (BankField.c)
 *     PowerRes @ 0x1C005D060 (PowerRes.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AB440 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     InsertOwnerObjList @ 0x1C00058A4 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C00058CC (NewNameSpaceObject.c)
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0017B60 (GetNameSpaceObjectNoLock.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x1C002039C (NewLocalHeap.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0059E44 (Simulator_NotifyNamespaceCollision.c)
 */

__int64 __fastcall CreateNameSpaceObject(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        struct _EX_RUNDOWN_REF **a5,
        int a6)
{
  __int64 v6; // rax
  struct _EX_RUNDOWN_REF *v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int64 v11; // r13
  unsigned __int8 *v12; // rsi
  size_t v13; // rbx
  char *PoolWithTag; // r12
  unsigned int NameSpaceObjectNoLock; // eax
  int v16; // ecx
  char *v17; // rax
  __int64 v18; // rax
  unsigned __int8 *v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // r13
  KIRQL v22; // al
  __int64 v23; // rdx
  __int64 v24; // r15
  _QWORD *v25; // rax
  __int64 v26; // rdi
  struct _EX_RUNDOWN_REF *v27; // rcx
  _QWORD *v28; // rcx
  KIRQL v30; // bl
  struct _EX_RUNDOWN_REF **v31; // rcx
  int v32; // eax
  unsigned int v33; // eax
  struct _EX_RUNDOWN_REF *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 i; // rax
  int v38; // eax
  KIRQL v39; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v40; // [rsp+38h] [rbp-C8h]
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v45; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF **v46; // [rsp+70h] [rbp-90h]
  char Str[128]; // [rsp+80h] [rbp-80h] BYREF

  v6 = a1;
  v7 = 0LL;
  v8 = 0;
  v46 = a5;
  v9 = -1LL;
  v43 = a3;
  v10 = a4;
  v45 = a4;
  v11 = a3;
  v12 = a2;
  if ( a2 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a2[v13] );
    if ( v13 + 1 >= 0x80 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + 1, 0x69706341u);
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    else
    {
      PoolWithTag = Str;
    }
    memmove(PoolWithTag, v12, v13);
    v6 = a1;
    v12 = (unsigned __int8 *)PoolWithTag;
    PoolWithTag[v13] = 0;
    v10 = v45;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  if ( !v11 )
  {
    v11 = gpnsNameSpaceRoot;
    v43 = gpnsNameSpaceRoot;
  }
  if ( !v12 )
  {
    v40 = (struct _EX_RUNDOWN_REF *)NewNameSpaceObject(v6);
    v7 = v40;
    if ( v40 )
    {
      v30 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v40[2].Count = v11;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 112));
        v7 = v40;
      }
      InsertOwnerObjList(v45, v7);
      v31 = *(struct _EX_RUNDOWN_REF ***)(v11 + 32);
      if ( *v31 != (struct _EX_RUNDOWN_REF *)(v11 + 24) )
        __fastfail(3u);
      v7[1].Count = (unsigned __int64)v31;
      v7->Count = v11 + 24;
      *v31 = v7;
      *(_QWORD *)(v11 + 32) = v7;
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v30);
      goto LABEL_46;
    }
    v8 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(36, 0, 0, 0, 0LL);
    goto LABEL_48;
  }
  v39 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  if ( *v12 )
  {
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v12);
    v8 = NameSpaceObjectNoLock;
    if ( !NameSpaceObjectNoLock )
    {
      if ( (a6 & 0x20000) != 0 )
      {
        v8 = -1073741771;
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v39);
        v7 = 0LL;
      }
      else
      {
        v7 = 0LL;
        if ( (MEMORY[0x40] & 0x100) != 0 )
        {
          if ( MEMORY[0x30] )
          {
            for ( i = *(_QWORD *)(MEMORY[0x30] + 24LL); i; i = *(_QWORD *)(i + 56) )
              ;
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(MEMORY[0x30] + 32LL));
          }
          InsertOwnerObjList(v45, 0LL);
          MEMORY[0x40] = MEMORY[0x40] & 0xFE7F | 0x80;
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v39);
        }
        else
        {
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v39);
          if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision(v12, v11) < 0)
            && (a6 & 0x10000) == 0 )
          {
            LogError(3221225525LL);
            AcpiDiagTraceAmlError(0LL, 3221225525LL);
            PrintDebugMessage(35, (_DWORD)v12, 0, 0, 0LL);
          }
          v8 = -1073741771;
        }
      }
      goto LABEL_46;
    }
    if ( NameSpaceObjectNoLock != -1073741772 )
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v39);
      v7 = 0LL;
      goto LABEL_45;
    }
    v7 = 0LL;
  }
  v8 = 0;
  v16 = *v12 - (unsigned __int8)pszSrc[0];
  if ( !v16 )
    v16 = v12[1] - (unsigned __int8)pszSrc[1];
  if ( !v16 )
  {
    v34 = (struct _EX_RUNDOWN_REF *)NewNameSpaceObject(a1);
    v7 = v34;
    if ( v34 )
    {
      LODWORD(v34[5].Count) = 1600085852;
      gpnsNameSpaceRoot = (__int64)v34;
      InsertOwnerObjList(v10, v34);
    }
    else
    {
      v8 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
    }
    goto LABEL_44;
  }
  v17 = strrchr((const char *)v12, 46);
  if ( v17 )
  {
    *v17 = 0;
    v19 = (unsigned __int8 *)(v17 + 1);
    v33 = GetNameSpaceObjectNoLock(v12);
    if ( v33 )
    {
      v8 = v33;
      goto LABEL_44;
    }
    v43 = v44;
  }
  else
  {
    v18 = *v12;
    if ( *v12 == 92 )
    {
      v19 = v12 + 1;
      v43 = gpnsNameSpaceRoot;
      v44 = gpnsNameSpaceRoot;
    }
    else
    {
      v44 = v11;
      v19 = v12;
      if ( (_BYTE)v18 == 94 )
      {
        do
        {
          if ( !v11 )
            break;
          v11 = *(_QWORD *)(v11 + 16);
          ++v19;
          v43 = v11;
          v44 = v11;
        }
        while ( *v19 == 94 );
      }
      else
      {
        v43 = v11;
      }
    }
  }
  do
    ++v9;
  while ( v19[v9] );
  if ( (unsigned int)v9 <= 4 || !*v19 )
  {
    v20 = 0LL;
    v42 = 0LL;
    v21 = 0LL;
    v22 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v23 = a1;
    byte_1C0074F58 = v22;
    if ( (unsigned int)(*(_DWORD *)(a1 + 8) - a1 - 56) < 0xA0 )
      goto LABEL_32;
    v24 = a1;
    v42 = a1;
    while ( 1 )
    {
      v20 = (_QWORD *)(*(_QWORD *)(v24 + 40) - 16LL);
      v25 = *(_QWORD **)(v24 + 40);
      if ( (_QWORD *)(v24 + 40) == v25 )
      {
LABEL_26:
        v20 = 0LL;
      }
      else
      {
        while ( *((_DWORD *)v20 + 1) < 0xA0u )
        {
          v20 = (_QWORD *)(*v25 - 16LL);
          v25 = (_QWORD *)*v25;
          if ( (_QWORD *)(v24 + 40) == v25 )
            goto LABEL_26;
        }
      }
      if ( v20 )
        break;
      if ( (unsigned int)(*(_DWORD *)(v24 + 8) - *(_DWORD *)(v24 + 32)) >= 0xA0 )
      {
        v20 = *(_QWORD **)(v24 + 32);
        *(_QWORD *)(v24 + 32) = v20 + 20;
        *((_DWORD *)v20 + 1) = 160;
        goto LABEL_30;
      }
      v21 = v24;
      v24 = *(_QWORD *)(v24 + 24);
      v42 = v24;
      if ( !v24 )
        goto LABEL_30;
    }
    v35 = v20[2];
    v36 = (_QWORD *)v20[3];
    if ( *(_QWORD **)(v35 + 8) != v20 + 2 || (_QWORD *)*v36 != v20 + 2 )
      __fastfail(3u);
    *v36 = v35;
    *(_QWORD *)(v35 + 8) = v36;
    if ( *((_DWORD *)v20 + 1) >= 0xC0u )
    {
      *((_DWORD *)v20 + 40) = 0;
      v38 = *((_DWORD *)v20 + 1) - 160;
      v20[21] = v24;
      *((_DWORD *)v20 + 41) = v38;
      *((_DWORD *)v20 + 1) = 160;
      HeapInsertFreeList(v24);
    }
    v23 = a1;
LABEL_30:
    if ( !v20 )
    {
      if ( v23 == gpheapGlobal )
        v32 = NewGlobalHeap(&v42);
      else
        v32 = NewLocalHeap(&v42);
      if ( v32 )
      {
        v42 = 0LL;
LABEL_32:
        KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
        if ( v20 )
        {
          v20 += 2;
          if ( v20 )
          {
            memset(v20, 0, 0x90uLL);
            v20[4] = v20 + 3;
            v20[3] = v20 + 3;
            *((_DWORD *)v20 + 28) = 2;
            *((_DWORD *)v20 + 32) = 1;
            v20[15] = v20;
          }
        }
        v7 = (struct _EX_RUNDOWN_REF *)v20;
        if ( v20 )
        {
          if ( *v12 )
          {
            *((_DWORD *)v20 + 10) = 1600085855;
            memmove(v20 + 5, v19, (unsigned int)v9);
          }
          else
          {
            *((_DWORD *)v20 + 10) = 0;
          }
          v26 = v43;
          v20[2] = v43;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v26 + 112));
            v7 = (struct _EX_RUNDOWN_REF *)v20;
            v26 = v44;
          }
          v27 = v45;
          v20[6] = v45;
          if ( v27 )
          {
            v20[7] = v27[3].Count;
            v27[3].Count = (unsigned __int64)v20;
            ExAcquireRundownProtection(v27 + 4);
          }
          v28 = *(_QWORD **)(v26 + 32);
          if ( *v28 != v26 + 24 )
            __fastfail(3u);
          v8 = 0;
          *v20 = v26 + 24;
          v20[1] = v28;
          *v28 = v20;
          *(_QWORD *)(v26 + 32) = v20;
        }
        else
        {
          v8 = -1073741670;
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(0LL, 3221225626LL);
          PrintDebugMessage(36, 0, 0, 0, 0LL);
        }
        goto LABEL_44;
      }
      v24 = v42;
      *(_QWORD *)(v42 + 16) = a1;
      *(_QWORD *)(v21 + 24) = v24;
      v20 = *(_QWORD **)(v24 + 32);
      *(_QWORD *)(v24 + 32) = v20 + 20;
      *((_DWORD *)v20 + 1) = 160;
    }
    *(_DWORD *)v20 = 1330859592;
    v20[1] = v24;
    memset(v20 + 2, 0, 0x90uLL);
    goto LABEL_32;
  }
  LogError(3221225523LL);
  AcpiDiagTraceAmlError(0LL, 3221225523LL);
  PrintDebugMessage(37, (_DWORD)v19, 0, 0, 0LL);
  v8 = -1073741773;
LABEL_44:
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v39);
LABEL_45:
  if ( !v8 || v8 == -1073741771 )
  {
LABEL_46:
    if ( v46 )
      *v46 = v7;
  }
LABEL_48:
  if ( PoolWithTag )
  {
    if ( Str != PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v8;
}
