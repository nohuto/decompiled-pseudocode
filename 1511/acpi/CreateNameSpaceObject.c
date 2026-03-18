/*
 * XREFs of CreateNameSpaceObject @ 0x1C0010A20
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C00052C0 (CreateNativeNameSpaceObject.c)
 *     ThermalZone @ 0x1C0005870 (ThermalZone.c)
 *     Processor @ 0x1C0005920 (Processor.c)
 *     Device @ 0x1C0005D20 (Device.c)
 *     Mutex @ 0x1C0005F80 (Mutex.c)
 *     CreateXField @ 0x1C000DF7C (CreateXField.c)
 *     Name @ 0x1C000E210 (Name.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     Method @ 0x1C0014540 (Method.c)
 *     OpRegion @ 0x1C001FC60 (OpRegion.c)
 *     Field @ 0x1C0020510 (Field.c)
 *     Alias @ 0x1C0021CD0 (Alias.c)
 *     IndexField @ 0x1C0022AA0 (IndexField.c)
 *     Event @ 0x1C00238D0 (Event.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0042DA0 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0043FB8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0044114 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004426C (AMLIApplyNextNamespaceOverride.c)
 *     BankField @ 0x1C0045710 (BankField.c)
 *     PowerRes @ 0x1C0045950 (PowerRes.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C0088680 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     ReferenceObjectEx @ 0x1C00056C0 (ReferenceObjectEx.c)
 *     InsertOwnerObjList @ 0x1C00057F8 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C0005820 (NewNameSpaceObject.c)
 *     NewGlobalHeap @ 0x1C0006190 (NewGlobalHeap.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0010F50 (GetNameSpaceObjectNoLock.c)
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 *     ListInsertTail @ 0x1C0018288 (ListInsertTail.c)
 *     NewLocalHeap @ 0x1C0018C98 (NewLocalHeap.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0042778 (Simulator_NotifyNamespaceCollision.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
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
  struct _EX_RUNDOWN_REF *v7; // r13
  unsigned int v8; // r14d
  __int64 v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // rbx
  unsigned __int8 *v12; // rsi
  size_t v13; // rbx
  char *PoolWithTag; // r12
  unsigned int NameSpaceObjectNoLock; // eax
  int v16; // ecx
  char *v17; // rax
  unsigned __int8 *v18; // r14
  unsigned __int64 v19; // rbx
  __int64 v20; // r13
  KIRQL v21; // al
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r11
  __int64 v26; // rcx
  struct _EX_RUNDOWN_REF *v27; // rcx
  __int64 v28; // rax
  __int64 v30; // rax
  KIRQL v31; // al
  KIRQL v32; // bl
  int v33; // eax
  unsigned int v34; // eax
  struct _EX_RUNDOWN_REF *v35; // rax
  __int64 i; // rax
  int v37; // eax
  KIRQL v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  struct _EX_RUNDOWN_REF *v42; // [rsp+58h] [rbp-A8h]
  struct _EX_RUNDOWN_REF **v43; // [rsp+60h] [rbp-A0h]
  char Str[128]; // [rsp+70h] [rbp-90h] BYREF

  v6 = a1;
  v40 = a1;
  v7 = 0LL;
  v8 = 0;
  v43 = a5;
  v9 = -1LL;
  v10 = a4;
  v42 = a4;
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
    v6 = v40;
    v12 = (unsigned __int8 *)PoolWithTag;
    PoolWithTag[v13] = 0;
    v10 = v42;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  if ( !a3 )
    a3 = gpnsNameSpaceRoot;
  if ( v12 )
  {
    v38 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    if ( *v12 )
    {
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v12);
      v8 = NameSpaceObjectNoLock;
      if ( !NameSpaceObjectNoLock )
      {
        if ( (a6 & 0x20000) != 0 )
        {
          v8 = -1073741771;
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
          v7 = 0LL;
        }
        else
        {
          v7 = 0LL;
          if ( (MEMORY[0x38] & 0x100) != 0 )
          {
            if ( MEMORY[0x28] )
            {
              for ( i = *(_QWORD *)(MEMORY[0x28] + 24LL); i; i = *(_QWORD *)(i + 48) )
                ;
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(MEMORY[0x28] + 32LL));
            }
            InsertOwnerObjList(v42, 0LL);
            MEMORY[0x38] = MEMORY[0x38] & 0xFE7F | 0x80;
            ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
          }
          else
          {
            ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
            if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision(v12, a3) < 0)
              && (a6 & 0x10000) == 0 )
            {
              LogError(3221225525LL);
              PrintDebugMessage(35, (_DWORD)v12, 0, 0, 0LL);
            }
            v8 = -1073741771;
          }
        }
        goto LABEL_45;
      }
      if ( NameSpaceObjectNoLock != -1073741772 )
      {
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
        v7 = 0LL;
        goto LABEL_44;
      }
      v7 = 0LL;
    }
    v8 = 0;
    v16 = *v12 - (unsigned __int8)pszSrc[0];
    if ( !v16 )
      v16 = v12[1] - (unsigned __int8)pszSrc[1];
    if ( !v16 )
    {
      v35 = (struct _EX_RUNDOWN_REF *)NewNameSpaceObject(v40);
      v7 = v35;
      if ( v35 )
      {
        LODWORD(v35[4].Count) = 1600085852;
        gpnsNameSpaceRoot = (__int64)v35;
        InsertOwnerObjList(v10, v35);
        goto LABEL_43;
      }
LABEL_102:
      v8 = -1073741670;
      LogError(3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
      goto LABEL_43;
    }
    v17 = strrchr((const char *)v12, 46);
    if ( v17 )
    {
      *v17 = 0;
      v18 = (unsigned __int8 *)(v17 + 1);
      v34 = GetNameSpaceObjectNoLock(v12);
      if ( v34 )
      {
        v8 = v34;
        goto LABEL_43;
      }
      a3 = v41;
    }
    else
    {
      if ( *v12 == 92 )
      {
        a3 = gpnsNameSpaceRoot;
        v18 = v12 + 1;
        goto LABEL_20;
      }
      v18 = v12;
      if ( *v12 != 94 )
      {
LABEL_20:
        v41 = a3;
        goto LABEL_21;
      }
      v41 = a3;
      do
      {
        if ( !a3 )
          break;
        a3 = *(_QWORD *)(a3 + 16);
        ++v18;
        v41 = a3;
      }
      while ( *v18 == 94 );
    }
    do
LABEL_21:
      ++v9;
    while ( v18[v9] );
    if ( (unsigned int)v9 > 4 && *v18 )
    {
      LogError(3221225523LL);
      PrintDebugMessage(37, (_DWORD)v18, 0, 0, 0LL);
      v8 = -1073741773;
LABEL_43:
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
LABEL_44:
      if ( !v8 || v8 == -1073741771 )
      {
LABEL_45:
        if ( v43 )
          *v43 = v7;
        goto LABEL_47;
      }
      goto LABEL_47;
    }
    v19 = 0LL;
    v39 = 0LL;
    v20 = 0LL;
    v21 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v24 = v40;
    byte_1C005AAD8 = v21;
    if ( (unsigned int)(*(_DWORD *)(v40 + 8) - v40 - 48) < 0x98 )
      goto LABEL_31;
    v25 = v40;
    v39 = v40;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v25 + 40);
      v19 = 0LL;
      if ( v26 )
      {
        v30 = *(_QWORD *)(v25 + 40);
        while ( 1 )
        {
          v19 = v30 - 16;
          if ( *(_DWORD *)(v30 - 12) >= 0x98u )
            break;
          v30 = *(_QWORD *)(v30 + 8);
          if ( v30 == v26 )
          {
            if ( *(_DWORD *)(v19 + 4) < 0x98u )
              v19 = 0LL;
            break;
          }
        }
      }
      if ( v19 )
        break;
      if ( (unsigned int)(*(_DWORD *)(v25 + 8) - *(_DWORD *)(v25 + 32)) >= 0x98 )
      {
        v19 = *(_QWORD *)(v25 + 32);
        *(_QWORD *)(v25 + 32) = v19 + 152;
        *(_DWORD *)(v19 + 4) = 152;
        goto LABEL_29;
      }
      v20 = v25;
      v25 = *(_QWORD *)(v25 + 24);
      v39 = v25;
      if ( !v25 )
        goto LABEL_29;
    }
    ListRemoveEntry(v19 + 16, v25 + 40, v22, v23);
    if ( *(_DWORD *)(v19 + 4) >= 0xB8u )
    {
      *(_DWORD *)(v19 + 152) = 0;
      v37 = *(_DWORD *)(v19 + 4) - 152;
      *(_QWORD *)(v19 + 160) = v25;
      *(_DWORD *)(v19 + 156) = v37;
      *(_DWORD *)(v19 + 4) = 152;
      HeapInsertFreeList(v25);
    }
    v24 = v40;
LABEL_29:
    if ( !v19 )
    {
      if ( v24 == gpheapGlobal )
        v33 = NewGlobalHeap(&v39);
      else
        v33 = NewLocalHeap(&v39, v24, v22, v23);
      if ( v33 )
      {
        v39 = 0LL;
        goto LABEL_31;
      }
      v25 = v39;
      *(_QWORD *)(v39 + 16) = v40;
      *(_QWORD *)(v20 + 24) = v25;
      v19 = *(_QWORD *)(v25 + 32);
      *(_QWORD *)(v25 + 32) = v19 + 152;
      *(_DWORD *)(v19 + 4) = 152;
    }
    *(_DWORD *)v19 = 1330859592;
    *(_QWORD *)(v19 + 8) = v25;
    memset((void *)(v19 + 16), 0, 0x88uLL);
LABEL_31:
    KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
    if ( v19 )
    {
      v19 += 16LL;
      if ( v19 )
      {
        memset((void *)v19, 0, 0x88uLL);
        *(_DWORD *)(v19 + 104) = 2;
        *(_DWORD *)(v19 + 120) = 1;
        *(_QWORD *)(v19 + 112) = v19;
      }
    }
    v7 = (struct _EX_RUNDOWN_REF *)v19;
    if ( v19 )
    {
      if ( *v12 )
      {
        *(_DWORD *)(v19 + 32) = 1600085855;
        memmove((void *)(v19 + 32), v18, (unsigned int)v9);
      }
      else
      {
        *(_DWORD *)(v19 + 32) = 0;
      }
      *(_QWORD *)(v19 + 16) = a3;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 104));
        v7 = (struct _EX_RUNDOWN_REF *)v19;
        a3 = v41;
      }
      v27 = v42;
      *(_QWORD *)(v19 + 40) = v42;
      if ( v27 )
      {
        *(struct _EX_RUNDOWN_REF *)(v19 + 48) = v27[3];
        v27[3].Count = v19;
        ExAcquireRundownProtection(v27 + 4);
      }
      v28 = *(_QWORD *)(a3 + 24);
      v8 = 0;
      if ( v28 )
      {
        *(_QWORD *)(v19 + 8) = v28;
        *(_QWORD *)v19 = **(_QWORD **)(a3 + 24);
        *(_QWORD *)(**(_QWORD **)(a3 + 24) + 8LL) = v19;
        **(_QWORD **)(a3 + 24) = v19;
      }
      else
      {
        *(_QWORD *)(a3 + 24) = v19;
        *(_QWORD *)(v19 + 8) = v19;
        *(_QWORD *)v19 = v19;
      }
      goto LABEL_43;
    }
    goto LABEL_102;
  }
  v7 = (struct _EX_RUNDOWN_REF *)NewNameSpaceObject(v6);
  if ( v7 )
  {
    v31 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v7[2].Count = a3;
    v32 = v31;
    ReferenceObjectEx(a3);
    InsertOwnerObjList(v42, v7);
    ListInsertTail(v7, a3 + 24);
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
    goto LABEL_45;
  }
  v8 = -1073741670;
  LogError(3221225626LL);
  PrintDebugMessage(36, 0, 0, 0, 0LL);
LABEL_47:
  if ( PoolWithTag )
  {
    if ( Str != PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v8;
}
