/*
 * XREFs of SmpApiCallback @ 0x140006090
 * Callers:
 *     <none>
 * Callees:
 *     SmpStopCsr @ 0x140001110 (SmpStopCsr.c)
 *     SmpEstablishClientSecurity @ 0x1400024DC (SmpEstablishClientSecurity.c)
 *     SmpExecPgm @ 0x140004EF0 (SmpExecPgm.c)
 *     SmpStartCsr @ 0x140005CC0 (SmpStartCsr.c)
 *     SmpFinalizeClientContext @ 0x140006540 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140006620 (SmpHandleConnectionRequest.c)
 *     SmpMarkThreadFree @ 0x1400078F8 (SmpMarkThreadFree.c)
 *     SmpMarkThreadBusy @ 0x14000794C (SmpMarkThreadBusy.c)
 *     GetVersionExW_Current @ 0x14000C1C0 (GetVersionExW_Current.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x14000C560 (_guard_check_icall_nop.c)
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 *     SmpNotImplemented @ 0x14000C9C0 (SmpNotImplemented.c)
 *     SmpUnhandledExceptionFilter @ 0x1400131B8 (SmpUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall SmpApiCallback(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // r15
  _BYTE *v4; // rdi
  int v5; // ebx
  _BYTE *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rdx
  _BOOL8 v9; // r9
  __int64 (__fastcall *v10)(__int64); // rbx
  int started; // eax
  __int64 (__fastcall *v12)(__int64, __int64); // rbx
  int Version; // eax
  __int64 MessageAttribute; // rax
  __int64 v16; // [rsp+40h] [rbp-1D8h]
  __int64 v18; // [rsp+58h] [rbp-1C0h] BYREF
  _BYTE v19[4]; // [rsp+60h] [rbp-1B8h] BYREF
  int v20; // [rsp+64h] [rbp-1B4h]
  _BYTE v21[4]; // [rsp+90h] [rbp-188h] BYREF
  __int16 v22; // [rsp+94h] [rbp-184h]
  int v23; // [rsp+B8h] [rbp-160h]
  int v24; // [rsp+BCh] [rbp-15Ch]

  v2 = 0;
  RtlSetThreadIsCritical(1u, 0LL, 1u);
  v3 = SmpApiConnectionPort;
  v4 = 0LL;
  memset_0(v19, 0, 0x28uLL);
  AlpcInitializeMessageAttribute(0x20000000LL, v19, 40LL, &v18);
  do
  {
    v18 = 328LL;
    v20 |= 0x20000000u;
    v5 = NtAlpcSendWaitReceivePort(v3, 0x10000LL, 0LL, 0LL, v21, &v18, v19, 0LL, v16);
    LODWORD(v16) = v5;
  }
  while ( v5 < 0 );
  v6 = *(_BYTE **)AlpcGetMessageAttribute(v19, 0x20000000LL);
  AlpcGetMessageAttribute(v19, 0x20000000LL);
  v8 = (unsigned __int16)v22;
  LOWORD(v8) = v22 & 0xFF00;
  v9 = v22 < 0;
  HIDWORD(v16) = 0;
  if ( (unsigned __int8)v22 != 1 )
  {
    if ( (unsigned __int8)v22 == 5 )
    {
      HIDWORD(v16) = 1;
    }
    else if ( (unsigned __int8)v22 == 10 )
    {
      SmpHandleConnectionRequest(v3, v21, v19, v9);
    }
    else if ( (v22 & 0x2000) != 0 )
    {
      MessageAttribute = AlpcGetMessageAttribute(v19, 0x20000000LL);
      NtAlpcCancelMessage(v3, 0LL, MessageAttribute);
      v4 = v21;
    }
    goto LABEL_7;
  }
  v4 = v21;
  if ( (unsigned int)v23 >= 8 )
  {
    v24 = -1073741822;
    goto LABEL_7;
  }
  if ( *((_DWORD *)&SmpApiDispatch + 4 * v23 + 2) )
  {
    v5 = SmpMarkThreadBusy(a2, v8, v7, v9);
    LODWORD(v16) = v5;
    if ( v5 < 0 )
    {
      v24 = -1073741670;
      goto LABEL_7;
    }
    v2 = 1;
  }
  v24 = 259;
  if ( v23 == 3 )
    goto LABEL_28;
  if ( v23 == 5 )
    goto LABEL_17;
  if ( v23 < 0 )
  {
LABEL_32:
    v24 = v5;
    goto LABEL_33;
  }
  if ( v23 <= 2 )
  {
    if ( (*v6 & 0x10) == 0 )
    {
      v5 = -1073741811;
      goto LABEL_31;
    }
    v12 = (__int64 (__fastcall *)(__int64, __int64))*(&SmpApiDispatch + 2 * v23);
    if ( (char *)v12 == (char *)GetVersionExW_Current )
    {
      Version = GetVersionExW_Current(v21, v6, v3, v9);
      goto LABEL_30;
    }
    goto LABEL_56;
  }
  if ( v23 == 4 )
  {
LABEL_28:
    v12 = (__int64 (__fastcall *)(__int64, __int64))*(&SmpApiDispatch + 2 * v23);
    if ( v12 == SmpExecPgm )
    {
      Version = SmpExecPgm((__int64)v21, (__int64)v6);
LABEL_30:
      v5 = Version;
LABEL_31:
      LODWORD(v16) = v5;
      goto LABEL_32;
    }
LABEL_56:
    Version = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64, _BOOL8))v12)(v21, v6, v3, v9);
    goto LABEL_30;
  }
  if ( v23 > 7 )
    goto LABEL_32;
LABEL_17:
  if ( (*v6 & 6) == 0 )
  {
    v5 = SmpEstablishClientSecurity((__int64)v21, (__int64)v6);
    LODWORD(v16) = v5;
  }
  if ( v5 >= 0 )
  {
    if ( (*v6 & 4) != 0 )
    {
      v10 = (__int64 (__fastcall *)(__int64))*(&SmpApiDispatch + 2 * v23);
      if ( v10 == SmpStartCsr )
      {
        started = SmpStartCsr((__int64)v21);
      }
      else if ( v10 == SmpStopCsr )
      {
        started = SmpStopCsr((__int64)v21);
      }
      else
      {
        started = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64, _BOOL8))v10)(v21, v6, v3, v9);
      }
      v5 = started;
    }
    else
    {
      v5 = -1073741790;
    }
    LODWORD(v16) = v5;
  }
  if ( v5 != 259 || v23 != 5 )
    goto LABEL_32;
  v4 = 0LL;
LABEL_33:
  if ( v2 )
    SmpMarkThreadFree(a2, v8, v7, v9);
LABEL_7:
  if ( v6 )
    SmpFinalizeClientContext(v6);
  if ( v4 )
    NtAlpcSendWaitReceivePort(v3, 0x10000LL, v4, 0LL, 0LL, 0LL, 0LL, 0LL, v16);
  return RtlSetThreadIsCritical(0, 0LL, 1u);
}
