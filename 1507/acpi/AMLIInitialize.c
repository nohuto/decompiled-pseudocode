/*
 * XREFs of AMLIInitialize @ 0x1C0084CC0
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C0085294 (ACPIInitializeAMLI.c)
 * Callees:
 *     SetLogSize @ 0x1C0005248 (SetLogSize.c)
 *     InitializeNativeNamespace @ 0x1C00052A8 (InitializeNativeNamespace.c)
 *     InsertOwnerObjList @ 0x1C0005898 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C00058C0 (NewNameSpaceObject.c)
 *     NewObjOwner @ 0x1C0005AC0 (NewObjOwner.c)
 *     InitMutex @ 0x1C0005CF8 (InitMutex.c)
 *     NewGlobalHeap @ 0x1C0005D90 (NewGlobalHeap.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     CatError @ 0x1C00438A4 (CatError.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0044598 (AMLIAddNextNamespaceOverride.c)
 *     FreeObjOwner @ 0x1C0044DE0 (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C0044F44 (FreeOwnedObjects.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     OSCloseHandle @ 0x1C00669C0 (OSCloseHandle.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C007CDD0 (OSOpenAMLINamespaceOverrideHandle.c)
 *     AMLIGetEmOverride @ 0x1C0084C24 (AMLIGetEmOverride.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00851A0 (InitIllegalIOAddressListFromHAL.c)
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
  __int64 v19; // rdx
  int NamespaceOverride; // edi
  __int64 v21; // rax
  int v23; // ecx
  int v24; // eax
  struct _EX_RUNDOWN_REF *v25; // rax
  bool v26; // zf
  HANDLE Handle[2]; // [rsp+40h] [rbp-10h] BYREF
  int v28; // [rsp+98h] [rbp+48h] BYREF

  v28 = a4;
  v5 = E820Info;
  v6 = AMLIMaxCTObjs;
  v8 = gAMLIInitFlags;
  dword_1C005A218 = 0;
  byte_1C005A21C[0] = 0;
  AMLIGetEmOverride();
  if ( gpnsNameSpaceRoot )
  {
    NameSpaceObject = -1072431085;
    LogError(-1072431085);
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
          *(_WORD *)(a5 + 58) = 1;
          *(_QWORD *)(v13 + 72) = (gOverrideFlags & 2) != 0 ? 1LL : (gOverrideFlags & 0x10 | 0x20uLL) >> 4;
          NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OS", 0LL, 0LL, (struct _EX_RUNDOWN_REF **)&a5, 0);
          if ( !NameSpaceObject )
          {
            v14 = a5;
            *(_WORD *)(a5 + 58) = 2;
            *(_DWORD *)(v14 + 80) = 21;
            v15 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0x15u);
            *(_QWORD *)(v14 + 88) = v15;
            if ( !v15 )
            {
              NameSpaceObject = -1073741670;
              LogError(-1073741670);
              v23 = 68;
              goto LABEL_38;
            }
            memmove(v15, "Microsoft Windows NT", *(unsigned int *)(v14 + 80));
            NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_OSI", 0LL, 0LL, (struct _EX_RUNDOWN_REF **)&a5, 0);
            if ( NameSpaceObject )
              goto LABEL_31;
            v16 = a5;
            *(_WORD *)(a5 + 58) = 8;
            *(_DWORD *)(v16 + 80) = 194;
            v17 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0xC2u);
            *(_QWORD *)(v16 + 88) = v17;
            if ( !v17 )
            {
              NameSpaceObject = -1073741670;
              LogError(-1073741670);
              v23 = 69;
              goto LABEL_38;
            }
            memset(v17, 0, *(unsigned int *)(v16 + 80));
            *(_BYTE *)(*(_QWORD *)(v16 + 88) + 185LL) |= 1u;
            v18 = *(_QWORD *)(v16 + 88);
            *(_WORD *)(v18 + 186) = OSIAML;
            *(_BYTE *)(v18 + 188) = 104;
            NameSpaceObject = CreateNameSpaceObject(gpheapGlobal, "_GL", 0LL, 0LL, (struct _EX_RUNDOWN_REF **)&a5, 0);
            if ( !NameSpaceObject )
            {
              v19 = a5;
              *(_WORD *)(a5 + 56) = 2;
              NameSpaceObject = InitMutex(gpheapGlobal, v19, 0, 1);
              if ( !NameSpaceObject )
              {
                NameSpaceObject = InitializeNativeNamespace();
                if ( !NameSpaceObject )
                {
                  if ( (gOverrideFlags & 0x20) == 0 )
                    goto LABEL_27;
                  v24 = OSOpenAMLINamespaceOverrideHandle((__int64)Handle);
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
                      byte_1C005A0C8 = 0;
                      qword_1C005A0E0 = (__int64)DispatchCtxtQueue;
                      qword_1C005A0D0 = 0LL;
                      qword_1C005A0E8 = (__int64)&gReadyQueue;
                      qword_1C005A100 = (__int64)&qword_1C005A0F8;
                      qword_1C005A0F8 = (__int64)&qword_1C005A0F8;
                      KeInitializeSpinLock(&gmutCtxtList);
                      byte_1C005A4A8 = 0;
                      KeInitializeSpinLock(&gmutOwnerList);
                      NewIrql = 0;
                      KeInitializeSpinLock(&gmutHeap);
                      byte_1C005AAF8 = 0;
                      KeInitializeSpinLock(&gmutSleep);
                      byte_1C005AAE8 = 0;
                      LOBYTE(v21) = ExAllocateTimerInternal((PEX_RUNDOWN_REF)SleepQueueDpc, 0);
                      SleepTimer = v21;
                      qword_1C005AAD8 = (__int64)&SleepQueue;
                      if ( !v21 )
                        NamespaceOverride = -1073741670;
                      SleepQueue = (__int64)&SleepQueue;
                      NameSpaceObject = NamespaceOverride;
                      qword_1C0059318 = (__int64)&RunningContextListHead;
                      RunningContextListHead = (__int64)&RunningContextListHead;
                      InitIllegalIOAddressListFromHAL();
                      goto LABEL_31;
                    }
                    NamespaceOverride = NewObjOwner(gpheapGlobal, (struct _EX_RUNDOWN_REF **)&gpNameSpaceOverrideOwner);
                    if ( NamespaceOverride >= 0 )
                    {
                      v25 = (struct _EX_RUNDOWN_REF *)NewNameSpaceObject(gpheapGlobal);
                      gpnsNameSpaceOverrideRoot = (__int64)v25;
                      if ( !v25 )
                      {
                        LogError(-1073741670);
                        CatError("AMLIAddNamespaceOverride: fail to allocate name space object for override root");
                        goto LABEL_27;
                      }
                      LODWORD(v25[4].Count) = 1600085852;
                      InsertOwnerObjList((struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner, v25);
                      NamespaceOverride = AMLIAddNextNamespaceOverride(Handle[0], gpnsNameSpaceOverrideRoot);
                      OSCloseHandle(Handle[0]);
                      DereferenceObjectEx(gpnsNameSpaceOverrideRoot);
                      v26 = NamespaceOverride == 0;
                      if ( NamespaceOverride >= 0 )
                      {
LABEL_52:
                        if ( v26 )
                          goto LABEL_28;
                        goto LABEL_27;
                      }
                      *(_WORD *)(gpnsNameSpaceOverrideRoot + 56) |= 4u;
                      FreeOwnedObjects(gpNameSpaceOverrideOwner);
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
