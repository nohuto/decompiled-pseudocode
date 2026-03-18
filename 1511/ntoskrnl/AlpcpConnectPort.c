/*
 * XREFs of AlpcpConnectPort @ 0x14046D59C
 * Callers:
 *     NtAlpcConnectPort @ 0x14046C430 (NtAlpcConnectPort.c)
 *     NtAlpcConnectPortEx @ 0x1404B3620 (NtAlpcConnectPortEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14046C40C (SeReleaseSid.c)
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 */

__int64 __fastcall AlpcpConnectPort(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        int a6,
        void *a7,
        void *Src,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        LARGE_INTEGER *a13)
{
  HANDLE *v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  ULONG64 v16; // rcx
  int ClientPort; // ebx
  char v18; // cl
  _QWORD *v19; // rsi
  int v21; // [rsp+20h] [rbp-158h]
  int v22; // [rsp+40h] [rbp-138h]
  __int64 v23; // [rsp+70h] [rbp-108h] BYREF
  PVOID Object; // [rsp+78h] [rbp-100h] BYREF
  void *v25[2]; // [rsp+80h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+98h] [rbp-E0h]
  __int64 v28; // [rsp+A0h] [rbp-D8h]
  __int64 v29; // [rsp+A8h] [rbp-D0h]
  int v30[2]; // [rsp+B0h] [rbp-C8h]
  PLARGE_INTEGER v31; // [rsp+B8h] [rbp-C0h]
  int v32[2]; // [rsp+C0h] [rbp-B8h]
  __int64 v33; // [rsp+C8h] [rbp-B0h]
  HANDLE *v34; // [rsp+D0h] [rbp-A8h]
  __int64 v35; // [rsp+D8h] [rbp-A0h]
  __int128 v36; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-88h]
  __int128 v38; // [rsp+100h] [rbp-78h]
  __int128 v39; // [rsp+110h] [rbp-68h]
  __int64 v40; // [rsp+120h] [rbp-58h]
  unsigned int v41; // [rsp+1A8h] [rbp+30h]

  v27 = a4;
  v29 = a3;
  v33 = a2;
  v13 = a1;
  v34 = a1;
  v25[1] = Src;
  *(_QWORD *)v32 = a9;
  *(_QWORD *)v30 = a10;
  v28 = a11;
  v35 = a12;
  v31 = a13;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v41 = a6 & 0xFFFF0000;
  v23 = (__int64)Src;
  v25[0] = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v36 = *(_OWORD *)a5;
      v37 = *(_OWORD *)(a5 + 16);
      v38 = *(_OWORD *)(a5 + 32);
      v39 = *(_OWORD *)(a5 + 48);
      v40 = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (HANDLE *)MmUserProbeAddress;
  *a1 = *a1;
  if ( a5 )
  {
    v16 = a5;
    if ( a5 >= MmUserProbeAddress )
      v16 = MmUserProbeAddress;
    v36 = *(_OWORD *)v16;
    v37 = *(_OWORD *)(v16 + 16);
    v38 = *(_OWORD *)(v16 + 32);
    v39 = *(_OWORD *)(v16 + 48);
    v40 = *(_QWORD *)(v16 + 64);
  }
  if ( !Src
    || (ClientPort = SeCaptureSid((unsigned __int8 *)Src, PreviousMode, a3, a4, v21, 1, (PSID *)&v23), ClientPort >= 0) )
  {
    if ( !a7
      || (ClientPort = SeCaptureSecurityDescriptor((__int64)a7, PreviousMode, PagedPool, 0, v25), ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)&Object,
                     v41,
                     v33,
                     v29,
                     v27,
                     (unsigned __int64)&v36 & -(__int64)(a5 != 0),
                     (__int64)v25[0],
                     v23,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v18 = PreviousMode;
        if ( (v41 & 0x100000) != 0 )
          v18 = 1;
        LOBYTE(v22) = v18;
        v19 = Object;
        ClientPort = AlpcpProcessConnectionRequest((int)Object, v41, v32[0], v30[0], v28, v35, v31, PreviousMode, v22);
        if ( ClientPort == -1073741759 && (v19[52] & 0x100) != 0 )
          *v13 = (HANDLE)v19[7];
        if ( !ClientPort )
          *v13 = Handle;
        ObfDereferenceObject(v19);
        if ( ClientPort )
          NtClose(Handle);
      }
    }
  }
  if ( v23 && (void *)v23 != Src )
    SeReleaseSid((void *)v23, PreviousMode, 1);
  if ( v25[0] && v25[0] != a7 )
    SeReleaseSecurityDescriptor(v25[0], PreviousMode, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)ClientPort;
}
