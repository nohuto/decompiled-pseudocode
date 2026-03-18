/*
 * XREFs of ObReferenceObjectByName @ 0x1404CF06C
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     IopGetDriverPathInformation @ 0x1401F2490 (IopGetDriverPathInformation.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404D0148 (IopGetLegacyVetoListDrivers.c)
 *     ObShutdownSystem @ 0x1406AAF80 (ObShutdownSystem.c)
 * Callees:
 *     SeSetLearningModeObjectInformation @ 0x14004E530 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14004E550 (SeClearLearningModeObjectInformation.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObpCaptureObjectName @ 0x1404900F0 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
 *     ObpFreeObjectNameBuffer @ 0x1404CF30C (ObpFreeObjectNameBuffer.c)
 *     ObpCheckObjectReference @ 0x1404CF854 (ObpCheckObjectReference.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        ULONG64 a1,
        int a2,
        __int64 *a3,
        ACCESS_MASK a4,
        struct _OBJECT_TYPE *a5,
        char a6,
        __int64 a7,
        __int64 *a8)
{
  int AccessState; // ebx
  __int64 v12; // rdx
  signed __int64 *v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  signed __int64 v16; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v18; // ax
  unsigned __int64 v19; // rdx
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  _WORD v23[8]; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  PVOID v25; // [rsp+88h] [rbp-78h]
  __int16 v26; // [rsp+9Eh] [rbp-62h]
  int v27; // [rsp+A0h] [rbp-60h]
  _BYTE v28[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-48h]
  _WORD *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v33[28]; // [rsp+180h] [rbp+80h] BYREF

  v21 = a7;
  if ( a1 )
  {
    AccessState = ObpCaptureObjectName(a6, a1, (__int64)v23, 1);
    if ( AccessState < 0 )
      return (unsigned int)AccessState;
    if ( v23[0] )
    {
      if ( a3
        || (a3 = v32, AccessState = SeCreateAccessState(v32, v33, a4, &a5->TypeInfo.GenericMapping), AccessState >= 0) )
      {
        AccessState = ObpLookupObjectName(
                        0LL,
                        (__int64)v23,
                        a2,
                        a5,
                        a6,
                        (void *)v21,
                        0LL,
                        0LL,
                        (_ACCESS_STATE *)a3,
                        (__int64)&Object,
                        (PVOID *)&v22);
        LODWORD(v21) = AccessState;
        if ( (_BYTE)v26 )
        {
          v13 = (signed __int64 *)((char *)Object + 296);
          _m_prefetchw((char *)Object + 296);
          v14 = *v13;
          v15 = *v13 - 16;
          if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v15 = 0LL;
          if ( (v14 & 2) != 0 || (v16 = *v13, v16 != _InterlockedCompareExchange64(v13, v15, v14)) )
            ExfReleasePushLock(v13, v12);
          KeAbPostRelease((ULONG_PTR)v13);
          v27 = -286387660;
          ObfDereferenceObject(Object);
          Object = 0LL;
          v26 = 0;
          CurrentThread = KeGetCurrentThread();
          v18 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v18;
          if ( !v18
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          AccessState = v21;
        }
        if ( v25 )
        {
          ObfDereferenceObject(v25);
          v25 = 0LL;
        }
        *a8 = 0LL;
        if ( AccessState >= 0 )
        {
          v19 = *(unsigned __int8 *)(v22 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v22 - 48) >> 8);
          v31 = 0LL;
          v29 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v19] + 16;
          v30 = v23;
          SeSetLearningModeObjectInformation((__int64)v28);
          if ( (unsigned __int8)ObpCheckObjectReference(v22, (PNTSTATUS)&v21) )
            *a8 = v22;
          else
            PspDereferenceSiloObject((void *)v22);
          SeClearLearningModeObjectInformation();
          AccessState = v21;
        }
        if ( a3 == v32 )
          SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)a3);
      }
      ObpFreeObjectNameBuffer(v23);
      return (unsigned int)AccessState;
    }
  }
  return 3221225523LL;
}
