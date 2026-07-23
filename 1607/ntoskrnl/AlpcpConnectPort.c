/*
 * XREFs of AlpcpConnectPort @ 0x140406F90
 * Callers:
 *     NtAlpcConnectPort @ 0x1404B9300 (NtAlpcConnectPort.c)
 *     NtAlpcConnectPortEx @ 0x1404BB478 (NtAlpcConnectPortEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140478424 (SeReleaseSid.c)
 *     AlpcpProcessConnectionRequest @ 0x14049CAB4 (AlpcpProcessConnectionRequest.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

__int64 __fastcall AlpcpConnectPort(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        void *a7,
        void *Src,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        LARGE_INTEGER *a13)
{
  _QWORD *v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  int ClientPort; // ebx
  __int64 v19; // r8
  char v20; // al
  _QWORD *v21; // rsi
  int v23; // [rsp+20h] [rbp-158h]
  int v24; // [rsp+40h] [rbp-138h]
  PVOID Object[3]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v26; // [rsp+80h] [rbp-F8h] BYREF
  void *v27; // [rsp+88h] [rbp-F0h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+98h] [rbp-E0h]
  __int64 v30; // [rsp+A0h] [rbp-D8h]
  __int64 v31; // [rsp+A8h] [rbp-D0h]
  PLARGE_INTEGER v32; // [rsp+B0h] [rbp-C8h]
  __int64 v33; // [rsp+B8h] [rbp-C0h]
  __int64 v34; // [rsp+C0h] [rbp-B8h]
  int v35[2]; // [rsp+C8h] [rbp-B0h]
  int v36[2]; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+D8h] [rbp-A0h]
  __int128 v38; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-88h]
  __int128 v40; // [rsp+100h] [rbp-78h]
  __int128 v41; // [rsp+110h] [rbp-68h]
  __int64 v42; // [rsp+120h] [rbp-58h]
  unsigned int v43; // [rsp+1A8h] [rbp+30h]

  v29 = a4;
  v30 = a3;
  v31 = a2;
  v13 = (_QWORD *)a1;
  v37 = a1;
  Object[1] = a7;
  Object[2] = Src;
  *(_QWORD *)v36 = a9;
  *(_QWORD *)v35 = a10;
  v34 = a11;
  v33 = a12;
  v32 = a13;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v43 = a6 & 0xFFFF0000;
  v26 = (__int64)Src;
  v27 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v38 = *(_OWORD *)a5;
      v39 = *(_OWORD *)(a5 + 16);
      v40 = *(_OWORD *)(a5 + 32);
      v41 = *(_OWORD *)(a5 + 48);
      v42 = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  LODWORD(v16) = -65536;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = *(_QWORD *)a1;
  if ( a5 )
  {
    v17 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v38 = *(_OWORD *)v17;
    v39 = *(_OWORD *)(v17 + 16);
    v40 = *(_OWORD *)(v17 + 32);
    v41 = *(_OWORD *)(v17 + 48);
    v42 = *(_QWORD *)(v17 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid(Src, v23, 1, (__int64)&v26), ClientPort >= 0) )
  {
    if ( !a7
      || (LOBYTE(v16) = PreviousMode,
          ClientPort = SeCaptureSecurityDescriptor((_DWORD)a7, v16, 1, 0, (__int64)&v27),
          ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)Object,
                     v43,
                     v31,
                     v30,
                     v29,
                     (unsigned __int64)&v38 & -(__int64)(a5 != 0),
                     (__int64)v27,
                     v26,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v20 = PreviousMode;
        if ( (v43 & 0x100000) != 0 )
          v20 = 1;
        LOBYTE(v24) = v20;
        v21 = Object[0];
        ClientPort = AlpcpProcessConnectionRequest(
                       (int)Object[0],
                       v43,
                       v36[0],
                       v35[0],
                       v34,
                       v33,
                       v32,
                       PreviousMode,
                       v24);
        if ( ClientPort == -1073741759 && (v21[52] & 0x100) != 0 )
          *v13 = v21[7];
        if ( !ClientPort )
          *v13 = Handle;
        ObfDereferenceObject(v21);
        if ( ClientPort )
          NtClose(Handle);
      }
    }
  }
  if ( v26 && (void *)v26 != Src )
  {
    LOBYTE(v19) = 1;
    LOBYTE(v16) = PreviousMode;
    SeReleaseSid(v26, v16, v19);
  }
  if ( v27 && v27 != a7 )
  {
    LOBYTE(v16) = PreviousMode;
    SeReleaseSecurityDescriptor(v27, v16, 0LL);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)ClientPort;
}
