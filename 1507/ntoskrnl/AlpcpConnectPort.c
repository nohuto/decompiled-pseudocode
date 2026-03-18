/*
 * XREFs of AlpcpConnectPort @ 0x140472880
 * Callers:
 *     NtAlpcConnectPort @ 0x140470EE8 (NtAlpcConnectPort.c)
 *     NtAlpcConnectPortEx @ 0x140546B30 (NtAlpcConnectPortEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 */

__int64 __fastcall AlpcpConnectPort(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        int a6,
        __int64 a7,
        unsigned __int8 *Src,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        volatile void *a12,
        LARGE_INTEGER *a13)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  ULONG64 v15; // rcx
  char v16; // cl
  _QWORD *v17; // r14
  int v18; // esi
  HANDLE *v19; // rdx
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  int v23; // [rsp+20h] [rbp-168h]
  int v24; // [rsp+40h] [rbp-148h]
  int ClientPort; // [rsp+64h] [rbp-124h]
  __int64 v26; // [rsp+78h] [rbp-110h] BYREF
  HANDLE *v27; // [rsp+80h] [rbp-108h]
  __int64 v28; // [rsp+88h] [rbp-100h] BYREF
  PVOID Object; // [rsp+90h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-E8h]
  __int64 v32; // [rsp+A8h] [rbp-E0h]
  __int64 v33; // [rsp+B0h] [rbp-D8h]
  int v34[2]; // [rsp+B8h] [rbp-D0h]
  PLARGE_INTEGER v35; // [rsp+C0h] [rbp-C8h]
  int v36[2]; // [rsp+C8h] [rbp-C0h]
  __int64 v37; // [rsp+D0h] [rbp-B8h]
  HANDLE *v38; // [rsp+D8h] [rbp-B0h]
  volatile void *Address; // [rsp+E0h] [rbp-A8h]
  __int128 v40; // [rsp+F0h] [rbp-98h] BYREF
  __int128 v41; // [rsp+100h] [rbp-88h]
  __int128 v42; // [rsp+110h] [rbp-78h]
  __int128 v43; // [rsp+120h] [rbp-68h]
  __int64 v44; // [rsp+130h] [rbp-58h]

  v31 = a4;
  v33 = a3;
  v37 = a2;
  v27 = a1;
  v38 = a1;
  *(_QWORD *)v36 = a9;
  *(_QWORD *)v34 = a10;
  v32 = a11;
  Address = a12;
  v35 = a13;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = (__int64)Src;
  v28 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v40 = *(_OWORD *)a5;
      v41 = *(_OWORD *)(a5 + 16);
      v42 = *(_OWORD *)(a5 + 32);
      v43 = *(_OWORD *)(a5 + 48);
      v44 = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (HANDLE *)MmUserProbeAddress;
  *a1 = *a1;
  if ( a5 )
  {
    v15 = a5;
    if ( a5 >= MmUserProbeAddress )
      v15 = MmUserProbeAddress;
    v40 = *(_OWORD *)v15;
    v41 = *(_OWORD *)(v15 + 16);
    v42 = *(_OWORD *)(v15 + 32);
    v43 = *(_OWORD *)(v15 + 48);
    v44 = *(_QWORD *)(v15 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid(Src, PreviousMode, a3, a4, v23, 1, (PSID *)&v26), ClientPort >= 0) )
  {
    if ( !a7
      || (LOBYTE(a2) = PreviousMode,
          ClientPort = SeCaptureSecurityDescriptor(a7, a2, 1, 0, (__int64)&v28),
          ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)&Object,
                     a6 & 0xFFFF0000,
                     v37,
                     v33,
                     v31,
                     (unsigned __int64)&v40 & -(__int64)(a5 != 0),
                     v28,
                     v26,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v16 = PreviousMode;
        if ( (a6 & 0x100000) != 0 )
          v16 = 1;
        LOBYTE(v24) = v16;
        v17 = Object;
        v18 = AlpcpProcessConnectionRequest(
                (int)Object,
                a6 & 0xFFFF0000,
                v36[0],
                v34[0],
                v32,
                Address,
                v35,
                PreviousMode,
                v24);
        ClientPort = v18;
        if ( v18 == -1073741759 && (v17[52] & 0x100) != 0 )
        {
          v19 = v27;
          *v27 = (HANDLE)v17[7];
        }
        else
        {
          v19 = v27;
        }
        if ( !v18 )
          *v19 = Handle;
        ObfDereferenceObject(v17);
        if ( v18 )
          NtClose(Handle);
      }
    }
  }
  if ( v26 && (unsigned __int8 *)v26 != Src )
    SeReleaseSid((void *)v26, PreviousMode, 1);
  if ( v28 && v28 != a7 )
  {
    LOBYTE(a2) = PreviousMode;
    SeReleaseSecurityDescriptor(v28, a2, 0LL);
  }
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)ClientPort;
}
