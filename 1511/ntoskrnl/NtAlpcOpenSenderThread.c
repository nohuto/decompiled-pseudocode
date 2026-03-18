/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1404B1A58
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     PsOpenThread @ 0x140470C60 (PsOpenThread.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047E410 (AlpcpProbeAndCaptureMessageHeader.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(_QWORD *a1, void *a2, __int64 a3, int a4, ACCESS_MASK a5, __int128 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  PVOID v12; // rdi
  _QWORD *v13; // rcx
  __int128 *v14; // rdx
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  HANDLE v19; // [rsp+38h] [rbp-90h] BYREF
  ULONG_PTR v20; // [rsp+40h] [rbp-88h] BYREF
  __m128i Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v22; // [rsp+58h] [rbp-70h]
  __int64 v23; // [rsp+68h] [rbp-60h]
  __int128 v24; // [rsp+70h] [rbp-58h] BYREF
  __int128 v25; // [rsp+80h] [rbp-48h]
  __int128 v26; // [rsp+90h] [rbp-38h]
  PVOID v27; // [rsp+A0h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v27 = Object;
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = *v13;
      AlpcpProbeAndCaptureMessageHeader((__m128i *)a3, (__int64)&Source2, a4);
      v14 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v14 = (__int128 *)MmUserProbeAddress;
      v24 = *v14;
      v25 = v14[1];
      v26 = v14[2];
      v12 = Object;
    }
    else
    {
      Source2 = *(__m128i *)a3;
      v22 = *(_OWORD *)(a3 + 16);
      v23 = *(_QWORD *)(a3 + 32);
      v24 = *a6;
      v25 = a6[1];
      v26 = a6[2];
    }
    v11 = AlpcpLookupMessage((__int64)v12, DWORD2(v22), v23, &v20);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v12);
    }
    else
    {
      v15 = v20;
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v20);
        ObfDereferenceObject(v12);
        v11 = -1073740029;
      }
      else
      {
        v16 = *(_QWORD *)(v20 + 32);
        if ( v16 && RtlCompareMemory((const void *)(v16 + 1576), &Source2.m128i_u64[1], 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v16);
          AlpcpUnlockMessage(v15);
          v11 = PsOpenThread(&v19, a5, (__int64)&v24, &Source2.m128i_u64[1], 0, PreviousMode);
          ObfDereferenceObject((PVOID)v16);
          ObfDereferenceObject(v12);
          if ( v11 >= 0 )
            *a1 = v19;
        }
        else
        {
          AlpcpUnlockMessage(v15);
          ObfDereferenceObject(v12);
          v11 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
