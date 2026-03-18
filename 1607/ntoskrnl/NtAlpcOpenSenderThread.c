/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1404B39B4
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 *     PsOpenThread @ 0x140405210 (PsOpenThread.c)
 *     AlpcpUnlockMessage @ 0x1404091E8 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404B5B54 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(
        _QWORD *a1,
        void *a2,
        __int128 *a3,
        unsigned int a4,
        unsigned int a5,
        _OWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  PVOID v12; // rdi
  __int64 v13; // rcx
  _OWORD *v14; // r9
  _OWORD *v15; // rdx
  ULONG_PTR v16; // rbx
  __int64 v17; // rsi
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v20; // [rsp+38h] [rbp-90h] BYREF
  int v21[2]; // [rsp+40h] [rbp-88h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v23; // [rsp+58h] [rbp-70h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  int v25[4]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v26; // [rsp+80h] [rbp-48h]
  __int128 v27; // [rsp+90h] [rbp-38h]
  PVOID v28; // [rsp+A0h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v28 = Object;
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = (__int64)a1;
      if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      AlpcpProbeAndCaptureMessageHeader(a3, &Source2, a4);
      v15 = a6;
      if ( a6 >= v14 )
        v15 = v14;
      *(_OWORD *)v25 = *v15;
      v26 = v15[1];
      v27 = v15[2];
      v12 = Object;
    }
    else
    {
      Source2 = *a3;
      v23 = a3[1];
      v24 = *((_QWORD *)a3 + 4);
      *(_OWORD *)v25 = *a6;
      v26 = a6[1];
      v27 = a6[2];
    }
    v11 = AlpcpLookupMessage(v12, DWORD2(v23), (unsigned int)v24, &v20);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v12);
    }
    else
    {
      v16 = v20;
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v20);
        ObfDereferenceObject(v12);
        v11 = -1073740029;
      }
      else
      {
        v17 = *(_QWORD *)(v20 + 32);
        if ( v17 && RtlCompareMemory((const void *)(v17 + 1584), (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v17);
          AlpcpUnlockMessage(v16);
          v11 = PsOpenThread(
                  (unsigned __int64)v21,
                  a5,
                  (__int64)v25,
                  (__int128 *)((char *)&Source2 + 8),
                  0,
                  PreviousMode);
          ObfDereferenceObject((PVOID)v17);
          ObfDereferenceObject(v12);
          if ( v11 >= 0 )
            *a1 = *(_QWORD *)v21;
        }
        else
        {
          AlpcpUnlockMessage(v16);
          ObfDereferenceObject(v12);
          v11 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
