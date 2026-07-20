/*
 * XREFs of SmpApiCallback @ 0x1400039F0
 * Callers:
 *     <none>
 * Callees:
 *     GetVersionExW_Current @ 0x140001070 (GetVersionExW_Current.c)
 *     SmpExecPgm @ 0x140002FB0 (SmpExecPgm.c)
 *     SmpStartCsr @ 0x140003620 (SmpStartCsr.c)
 *     SmpFinalizeClientContext @ 0x140003E64 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140003F40 (SmpHandleConnectionRequest.c)
 *     SmpMarkThreadFree @ 0x14000459C (SmpMarkThreadFree.c)
 *     SmpMarkThreadBusy @ 0x1400045F0 (SmpMarkThreadBusy.c)
 *     SmpStopCsr @ 0x140004E90 (SmpStopCsr.c)
 *     SmpEstablishClientSecurity @ 0x14000C3A0 (SmpEstablishClientSecurity.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     memset_0 @ 0x14000CC60 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14000CF40 (_guard_dispatch_icall_nop.c)
 *     SmpUnhandledExceptionFilter @ 0x1400137AC (SmpUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall SmpApiCallback(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // r15
  _BYTE *v5; // r14
  int v6; // ebx
  _BYTE *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  int started; // eax
  __int64 (*v10)(); // rax
  __int64 v11; // r8
  _BYTE *v12; // rdx
  int Version; // eax
  __int64 MessageAttribute; // rax
  __int64 v16; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE *v17; // [rsp+58h] [rbp-1C0h]
  _BYTE v18[4]; // [rsp+60h] [rbp-1B8h] BYREF
  int v19; // [rsp+64h] [rbp-1B4h]
  _BYTE v20[4]; // [rsp+90h] [rbp-188h] BYREF
  __int16 v21; // [rsp+94h] [rbp-184h]
  int v22; // [rsp+B8h] [rbp-160h]
  int v23; // [rsp+BCh] [rbp-15Ch]

  v3 = 0;
  RtlSetThreadIsCritical(1u, 0LL, 1u);
  v4 = SmpApiConnectionPort;
  v5 = 0LL;
  memset_0(v18, 0, 0x28uLL);
  AlpcInitializeMessageAttribute(0x20000000LL, v18, 40LL, &v16);
  do
  {
    v16 = 328LL;
    v19 |= 0x20000000u;
    v6 = NtAlpcSendWaitReceivePort(v4, 0x10000LL, 0LL, 0LL, v20, &v16, v18, 0LL);
  }
  while ( v6 < 0 );
  v7 = *(_BYTE **)AlpcGetMessageAttribute(v18, 0x20000000LL);
  AlpcGetMessageAttribute(v18, 0x20000000LL);
  if ( (unsigned __int8)v21 != 1 )
  {
    if ( (unsigned __int8)v21 != 5 )
    {
      if ( (unsigned __int8)v21 == 10 )
      {
        SmpHandleConnectionRequest(v4, v20, v18, v21 < 0);
      }
      else if ( (v21 & 0x2000) != 0 )
      {
        MessageAttribute = AlpcGetMessageAttribute(v18, 0x20000000LL);
        NtAlpcCancelMessage(v4, 0LL, MessageAttribute);
        v5 = v20;
        v17 = v20;
      }
    }
    goto LABEL_7;
  }
  v5 = v20;
  v17 = v20;
  if ( (unsigned int)v22 >= 8 )
  {
    v23 = -1073741822;
    goto LABEL_7;
  }
  if ( *((_DWORD *)&SmpApiDispatch + 4 * v22 + 2) )
  {
    v6 = SmpMarkThreadBusy(a2);
    if ( v6 < 0 )
    {
      v23 = -1073741670;
      goto LABEL_7;
    }
    v3 = 1;
  }
  v23 = 259;
  if ( v22 == 3 )
    goto LABEL_27;
  if ( v22 == 5 )
    goto LABEL_17;
  if ( v22 < 0 )
  {
LABEL_30:
    v23 = v6;
    goto LABEL_31;
  }
  if ( v22 <= 2 )
  {
    if ( (*v7 & 0x10) == 0 )
    {
      v6 = -1073741811;
      goto LABEL_30;
    }
    v10 = *(&SmpApiDispatch + 2 * v22);
    v11 = v4;
    v12 = v7;
    if ( v10 == GetVersionExW_Current )
    {
      Version = GetVersionExW_Current();
      goto LABEL_29;
    }
    goto LABEL_54;
  }
  if ( v22 == 4 )
  {
LABEL_27:
    v10 = *(&SmpApiDispatch + 2 * v22);
    v11 = v4;
    v12 = v7;
    if ( (char *)v10 == (char *)SmpExecPgm )
    {
      Version = SmpExecPgm((__int64)v20, (__int64)v7);
LABEL_29:
      v6 = Version;
      goto LABEL_30;
    }
LABEL_54:
    Version = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v10)(v20, v12, v11);
    goto LABEL_29;
  }
  if ( v22 > 7 )
    goto LABEL_30;
LABEL_17:
  if ( (*v7 & 6) == 0 )
    v6 = SmpEstablishClientSecurity(v20, v7);
  if ( v6 >= 0 )
  {
    if ( (*v7 & 4) != 0 )
    {
      v8 = (__int64 (__fastcall *)(__int64))*(&SmpApiDispatch + 2 * v22);
      if ( v8 == SmpStartCsr )
      {
        started = SmpStartCsr((__int64)v20);
      }
      else if ( (char *)v8 == (char *)SmpStopCsr )
      {
        started = SmpStopCsr(v20, v7, v4);
      }
      else
      {
        started = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v8)(v20, v7, v4);
      }
      v6 = started;
    }
    else
    {
      v6 = -1073741790;
    }
  }
  if ( v6 != 259 || v22 != 5 )
    goto LABEL_30;
  v5 = 0LL;
  v17 = 0LL;
LABEL_31:
  if ( v3 )
    SmpMarkThreadFree(a2);
LABEL_7:
  if ( v7 )
    SmpFinalizeClientContext(v7);
  if ( v5 )
    NtAlpcSendWaitReceivePort(v4, 0x10000LL, v5, 0LL, 0LL, 0LL, 0LL, 0LL);
  return RtlSetThreadIsCritical(0, 0LL, 1u);
}
