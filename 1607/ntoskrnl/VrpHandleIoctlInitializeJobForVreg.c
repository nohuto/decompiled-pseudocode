/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x140613808
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ULongLongMult @ 0x1401B7468 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x14020F5C0 (PsGetJobSilo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     PsInsertSiloContext @ 0x14067E008 (PsInsertSiloContext.c)
 *     PsMakeSiloContextPermanent @ 0x14067E0A8 (PsMakeSiloContextPermanent.c)
 *     PsRemoveSiloContext @ 0x14067E0C4 (PsRemoveSiloContext.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        HANDLE *a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID Object,
        ULONGLONG pullResult)
{
  HANDLE *v7; // r15
  PVOID v8; // rdi
  int JobSilo; // ebx
  int v10; // eax
  _QWORD *v11; // r14
  void *v12; // r12
  PVOID v13; // rax
  void *v14; // rbx
  size_t v15; // r15
  PVOID PoolWithTag; // rax
  void *v17; // rcx
  NTSTATUS v18; // eax
  ULONGLONG NumberOfBytes; // [rsp+B8h] [rbp+58h] BYREF

  Object = 0LL;
  v7 = a1;
  NumberOfBytes = 0LL;
  v8 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  v10 = ObCreateObject(0, (_DWORD *)VrpJobContextType, 0LL, 1, 0, 88, 0, 0, &NumberOfBytes);
  v11 = (_QWORD *)NumberOfBytes;
  JobSilo = v10;
  if ( v10 >= 0 )
  {
    memset((void *)NumberOfBytes, 0, 0x58uLL);
    v11[2] = 0LL;
    memset(v11 + 4, 0, 0x30uLL);
    v11[4] = 0LL;
    v11[5] = 8LL;
    v11[8] = 16LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[9] = 0LL;
    if ( ULongLongMult(0LL, 8uLL, &pullResult) < 0 || ULongLongMult(0x20uLL, v11[5], &NumberOfBytes) < 0 )
    {
      JobSilo = -2147483637;
LABEL_19:
      v17 = (void *)v11[9];
      if ( v17 )
        ExFreePoolWithTag(v17, 0x72615452u);
      memset(v11 + 4, 0, 0x30uLL);
      goto LABEL_22;
    }
    v12 = (void *)v11[9];
    if ( v12 )
    {
      v15 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v14 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v15);
      if ( !v14 )
      {
LABEL_18:
        v7 = a1;
        JobSilo = -2147024882;
        goto LABEL_19;
      }
      if ( pullResult < v15 )
        v15 = pullResult;
      memmove(v14, v12, v15);
      ExFreePoolWithTag(v12, 0x72615452u);
      v7 = a1;
    }
    else
    {
      v13 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v14 = v13;
      if ( v13 )
        memset(v13, 0, NumberOfBytes);
    }
    if ( v14 )
    {
      v11[9] = v14;
      v11[7] = 32LL;
      JobSilo = 0;
LABEL_22:
      if ( JobSilo >= 0 )
      {
        v18 = ObReferenceObjectByHandleWithTag(*v7, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
        v8 = Object;
        JobSilo = v18;
        if ( v18 >= 0 )
        {
          JobSilo = PsGetJobSilo((__int64)Object);
          if ( JobSilo >= 0 )
          {
            *(_OWORD *)v11 = MEMORY[0x4D8];
            JobSilo = PsInsertSiloContext(0LL, (unsigned int)gVregSiloContextSlot, v11);
            if ( JobSilo >= 0 )
            {
              JobSilo = PsMakeSiloContextPermanent(0LL, (unsigned int)gVregSiloContextSlot);
              if ( JobSilo < 0 )
                PsRemoveSiloContext(0LL, (unsigned int)gVregSiloContextSlot, 0LL);
              else
                JobSilo = 0;
            }
          }
        }
      }
      goto LABEL_29;
    }
    goto LABEL_18;
  }
LABEL_29:
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x52566D43u);
  return (unsigned int)JobSilo;
}
