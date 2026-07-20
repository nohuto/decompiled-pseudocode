/*
 * XREFs of SmpExecPgm @ 0x140004EF0
 * Callers:
 *     SmpApiCallback @ 0x140006090 (SmpApiCallback.c)
 * Callees:
 *     SmpSetCoreProcessIds @ 0x14000512C (SmpSetCoreProcessIds.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x140005210 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpSbCreateSession @ 0x14000524C (SmpSbCreateSession.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140006AB4 (SmpSearchKnownSubSysDatabase.c)
 *     SmpDereferenceKnownSubSys @ 0x140007B10 (SmpDereferenceKnownSubSys.c)
 *     SmpGetMuSessionIdFromClientContext @ 0x140007C10 (SmpGetMuSessionIdFromClientContext.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpExecPgm(__int64 a1, __int64 a2)
{
  unsigned int MuSessionIdFromClientContext; // r14d
  __int64 v5; // rsi
  BOOL v6; // r12d
  __int64 v7; // rbx
  int Session; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int128 v12; // xmm1
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h]
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+68h] [rbp-98h]
  _OWORD v19[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  unsigned int v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+1A8h] [rbp+A8h]
  __int64 v24; // [rsp+1B0h] [rbp+B0h]

  MuSessionIdFromClientContext = SmpGetMuSessionIdFromClientContext(a2, &v15);
  if ( v15 )
  {
    v5 = 0LL;
    v6 = 0;
    v7 = 0LL;
    if ( (*(_BYTE *)a2 & 8) != 0 )
    {
      v5 = *(_QWORD *)(a2 + 32);
      v6 = **(_DWORD **)(v5 + 16) == 2;
    }
    Session = SmpSbCreateSession(MuSessionIdFromClientContext, v15, a1 + 48);
    v9 = Session;
    if ( !v6 )
      return v9;
    if ( Session < 0 )
      return v9;
    v10 = *(_DWORD *)(a1 + 120);
    if ( v10 != 1 )
    {
      v16 = 1;
      v17 = 0LL;
      v18 = v10;
      v7 = SmpSearchKnownSubSysDatabase(MuSessionIdFromClientContext, &v16);
      if ( !v7 )
        return v9;
    }
    v13 = v7;
    if ( MuSessionIdFromClientContext == *(_DWORD *)SmpCoreProcessIds )
    {
      if ( *(_DWORD *)(a1 + 120) == 1 )
        SmpCoreSubsysProcess[0] = (HANDLE)-1LL;
      else
        SmpCoreSubsysProcess[0] = *(HANDLE *)(v7 + 32);
    }
    v14 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(v5 + 72) != SmpUniqueProcessId )
    {
      if ( !v7
        || (unsigned int)(*(_DWORD *)(v7 + 24) - 2) > 1
        || (*(_BYTE *)v5 & 1) != 0
        || (_m_prefetchw((const void *)v5), (_InterlockedOr((volatile signed __int32 *)v5, 1u) & 1) != 0) )
      {
        v9 = -1073741823;
        goto LABEL_13;
      }
      v12 = *(_OWORD *)(v5 + 80);
      v19[0] = *(_OWORD *)(v5 + 64);
      v20 = *(_QWORD *)(v5 + 96);
      v19[1] = v12;
      v21 = 5LL;
      v22 = MuSessionIdFromClientContext;
      v23 = v14;
      v24 = *(_QWORD *)(v7 + 48);
      NtAlpcSendWaitReceivePort(SmpApiConnectionPort, 0x10000LL, v19, 0LL, 0LL, 0LL, 0LL, 0LL, v13);
    }
    if ( (unsigned int)SmpSessionIdToInitialSessionIndex(MuSessionIdFromClientContext) != -1 )
      SmpSetCoreProcessIds(MuSessionIdFromClientContext, &v13, 0LL);
    if ( MuSessionIdFromClientContext == *(_DWORD *)SmpCoreProcessIds )
    {
      if ( !v7 )
        return v9;
      v7 = 0LL;
    }
LABEL_13:
    if ( v7 )
      SmpDereferenceKnownSubSys((PVOID)v7);
    return v9;
  }
  return 3221225473LL;
}
