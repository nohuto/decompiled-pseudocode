/*
 * XREFs of AMLIInitialize @ 0x1C00A6000
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00A7CA0 (ACPIInitializeAMLI.c)
 * Callees:
 *     InitializeNativeNamespace @ 0x1C000547C (InitializeNativeNamespace.c)
 *     InsertOwnerObjList @ 0x1C00058A4 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C00058CC (NewNameSpaceObject.c)
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     NewObjOwner @ 0x1C00066E4 (NewObjOwner.c)
 *     InitMutex @ 0x1C0007678 (InitMutex.c)
 *     SetLogSize @ 0x1C0007724 (SetLogSize.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     CatError @ 0x1C005A994 (CatError.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005B750 (AMLIAddNextNamespaceOverride.c)
 *     FreeObjOwner @ 0x1C005BF90 (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C005C0F4 (FreeOwnedObjects.c)
 *     OSCloseHandle @ 0x1C008D078 (OSCloseHandle.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C009E498 (OSOpenAMLINamespaceOverrideHandle.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00A6500 (InitIllegalIOAddressListFromHAL.c)
 *     AMLIGetEmOverride @ 0x1C00A6EC0 (AMLIGetEmOverride.c)
 */

__int64 __fastcall AMLIInitialize(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v8; // edi
  int v9; // eax
  unsigned int NameSpaceObject; // ebx
  unsigned int v11; // edi
  unsigned __int8 **v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // rbx
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int NamespaceOverride; // edi
  __int64 v21; // rax
  int v23; // ecx
  int v24; // eax
  _QWORD *v25; // rax
  bool v26; // zf
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  int v28; // [rsp+98h] [rbp+48h] BYREF

  v28 = a4;
  v5 = E820Info;
  v6 = AMLIMaxCTObjs;
  v8 = gAMLIInitFlags;
  dword_1C0074698 = 0;
  byte_1C007469C[0] = 0;
  gAmliMethodCounter = 0LL;
  AMLIGetEmOverride();
  if ( gpnsNameSpaceRoot )
  {
    NameSpaceObject = -1072431085;
    LogError(-1072431085);
    AcpiDiagTraceAmlError(0LL, -1072431085);
    v23 = 66;
LABEL_38:
    PrintDebugMessage(v23, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    MemoryInfo = v5;
    LODWORD(gdwCtxtBlkSize) = 2048;
    LODWORD(gdwGlobalHeapBlkSize) = a2;
    gdwfAMLIInit = v8;
    if ( (v8 & 8) != 0 )
      gdwfAMLI |= 4u;
    if ( v6 > 0x400 )
      v6 = 1024;
    v9 = 16;
    if ( v6 > 0x10 )
      v9 = v6;
    gdwcCTObjsMax = v9;
    _InterlockedOr(&gDebugger, 0x8000u);
    SetLogSize();
    KeInitializeSpinLock(&gdwGHeapSpinLock);
    KeInitializeSpinLock(&gdwGContextSpinLock);
    if ( (gdwfAMLIInit & 8) != 0
      || (gdwfAMLIInit & 0x10) == 0
      && (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_MULTITHREADED_EXECUTION, &v28) >= 0
      && v28 == 2 )
    {
      gdwfAMLI |= 4u;
    }
    ExInitializeNPagedLookasideList(
      (PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList,
      0LL,
      0LL,
      0x200u,
      (unsigned int)gdwCtxtBlkSize,
      0x436C6D41u,
      gdwcCTObjsMax);
    NameSpaceObject = NewGlobalHeap(&gpheapGlobal);
    if ( !NameSpaceObject )
    {
      *(_QWORD *)(gpheapGlobal + 16) = gpheapGlobal;
      NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "\\", 0LL, 0LL, 0LL, 0);
      if ( !NameSpaceObject )
      {
        v11 = 0;
        v12 = (unsigned __int8 **)&apszDefinedRootObjs;
        do
        {
          NameSpaceObject = CreateNameSpaceObject(
                              gpheapGlobal,
                              *v12,
                              0LL,
                              0LL,
                              (struct _EX_RUNDOWN_REF **)&AmliGlobalPreDefinedRootObjects + v11,
                              0);
          if ( NameSpaceObject )
            goto LABEL_31;
          ++v11;
          ++v12;
        }
        while ( v11 < 5 );
        NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_REV", 0LL, 0LL, (struct _EX_RUNDOWN_REF **)&a5, 0);
        if ( !NameSpaceObject )
        {
          v13 = a5;
          *(_WORD *)(a5 + 66) = 1;
          *(_QWORD *)(v13 + 80) = (gOverrideFlags & 2) != 0 ? 1LL : (gOverrideFlags & 0x10 | 0x20uLL) >> 4;
          NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OS", 0LL, 0LL, (struct _EX_RUNDOWN_REF **)&a5, 0);
          if ( !NameSpaceObject )
          {
            v14 = a5;
            *(_WORD *)(a5 + 66) = 2;
            *(_DWORD *)(v14 + 88) = 21;
            v15 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0x15u);
            *(_QWORD *)(v14 + 96) = v15;
            if ( !v15 )
            {
              NameSpaceObject = -1073741670;
              LogError(-1073741670);
              AcpiDiagTraceAmlError(0LL, -1073741670);
              v23 = 68;
              goto LABEL_38;
            }
            memmove(v15, "Microsoft Windows NT", *(unsigned int *)(v14 + 88));
            NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OSI", 0LL, 0LL, (struct _EX_RUNDOWN_REF **)&a5, 0);
            if ( NameSpaceObject )
              goto LABEL_31;
            v16 = a5;
            *(_WORD *)(a5 + 66) = 8;
            *(_DWORD *)(v16 + 88) = 202;
            v17 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0xCAu);
            *(_QWORD *)(v16 + 96) = v17;
            if ( !v17 )
            {
              NameSpaceObject = -1073741670;
              LogError(-1073741670);
              AcpiDiagTraceAmlError(0LL, -1073741670);
              v23 = 69;
              goto LABEL_38;
            }
            memset(v17, 0, *(unsigned int *)(v16 + 88));
            *(_BYTE *)(*(_QWORD *)(v16 + 96) + 193LL) |= 1u;
            v18 = *(_QWORD *)(v16 + 96);
            *(_WORD *)(v18 + 194) = OSIAML;
            *(_BYTE *)(v18 + 196) = 104;
            NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_GL", 0LL, 0LL, (struct _EX_RUNDOWN_REF **)&a5, 0);
            if ( !NameSpaceObject )
            {
              v19 = a5;
              *(_WORD *)(a5 + 64) = 2;
              NameSpaceObject = InitMutex(0LL, gpheapGlobal, v19, 0, 1);
              if ( !NameSpaceObject )
              {
                NameSpaceObject = InitializeNativeNamespace();
                if ( !NameSpaceObject )
                {
                  if ( (gOverrideFlags & 0x20) == 0 )
                    goto LABEL_27;
                  v24 = OSOpenAMLINamespaceOverrideHandle(&Handle);
                  NamespaceOverride = v24;
                  if ( v24 == -1073741772 )
                    goto LABEL_27;
                  if ( v24 >= 0 )
                  {
                    if ( gpnsNameSpaceOverrideRoot )
                    {
LABEL_27:
                      NamespaceOverride = 0;
LABEL_28:
                      KeInitializeSpinLock(&SpinLock);
                      byte_1C0074540 = 0;
                      qword_1C0074558 = (__int64)DispatchCtxtQueue;
                      qword_1C0074548 = 0LL;
                      qword_1C0074560 = (__int64)&gReadyQueue;
                      qword_1C0074578 = (__int64)&qword_1C0074570;
                      qword_1C0074570 = (__int64)&qword_1C0074570;
                      qword_1C0074530 = (__int64)&qword_1C0074528;
                      qword_1C0074528 = (__int64)&qword_1C0074528;
                      KeInitializeSpinLock(&gmutCtxtList);
                      byte_1C0074960 = 0;
                      KeInitializeSpinLock(&gmutOwnerList);
                      NewIrql = 0;
                      KeInitializeSpinLock(&gmutHeap);
                      byte_1C0074F58 = 0;
                      KeInitializeSpinLock(&gmutSleep);
                      byte_1C0074F90 = 0;
                      LOBYTE(v21) = ExAllocateTimerInternal((PEX_RUNDOWN_REF)SleepQueueDpc, 0);
                      SleepTimer = v21;
                      qword_1C0074F80 = (__int64)&SleepQueue;
                      if ( !v21 )
                        NamespaceOverride = -1073741670;
                      SleepQueue = (__int64)&SleepQueue;
                      NameSpaceObject = NamespaceOverride;
                      qword_1C0073768 = (__int64)&RunningContextListHead;
                      RunningContextListHead = (__int64)&RunningContextListHead;
                      InitIllegalIOAddressListFromHAL();
                      goto LABEL_31;
                    }
                    NamespaceOverride = NewObjOwner(gpheapGlobal, (struct _EX_RUNDOWN_REF **)&gpNameSpaceOverrideOwner);
                    if ( NamespaceOverride >= 0 )
                    {
                      v25 = NewNameSpaceObject(gpheapGlobal);
                      gpnsNameSpaceOverrideRoot = (__int64)v25;
                      if ( !v25 )
                      {
                        LogError(-1073741670);
                        CatError("AMLIAddNamespaceOverride: fail to allocate name space object for override root");
                        goto LABEL_27;
                      }
                      *((_DWORD *)v25 + 10) = 1600085852;
                      InsertOwnerObjList(
                        (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner,
                        (struct _EX_RUNDOWN_REF *)v25);
                      NamespaceOverride = AMLIAddNextNamespaceOverride(Handle, gpnsNameSpaceOverrideRoot);
                      OSCloseHandle(Handle);
                      DereferenceObjectEx((_QWORD *)gpnsNameSpaceOverrideRoot);
                      v26 = NamespaceOverride == 0;
                      if ( NamespaceOverride >= 0 )
                      {
LABEL_52:
                        if ( v26 )
                          goto LABEL_28;
                        goto LABEL_27;
                      }
                      *(_WORD *)(gpnsNameSpaceOverrideRoot + 64) |= 4u;
                      FreeOwnedObjects((_QWORD *)gpNameSpaceOverrideOwner);
                      FreeObjOwner(0LL, (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner);
                      gpNameSpaceOverrideOwner = 0LL;
                      gpnsNameSpaceOverrideRoot = 0LL;
                    }
                  }
                  v26 = NamespaceOverride == 0;
                  goto LABEL_52;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    if ( NameSpaceObject == 32772 )
      NameSpaceObject = 259;
  }
  if ( (gdwfAMLIInit & 1) != 0 )
  {
    PrintDebugMessage(67, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return NameSpaceObject;
}
