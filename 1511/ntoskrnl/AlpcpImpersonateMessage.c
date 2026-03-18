/*
 * XREFs of AlpcpImpersonateMessage @ 0x140425640
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140425460 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     AlpcpReferenceConnectedPort @ 0x140425270 (AlpcpReferenceConnectedPort.c)
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 *     SeCreateClientSecurity @ 0x14042CA10 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1404A629C (SeCreateClientSecurityEx.c)
 */

__int64 __fastcall AlpcpImpersonateMessage(__int64 a1, __int64 a2, int a3)
{
  int v3; // r14d
  void *v6; // rbp
  struct _SECURITY_CLIENT_CONTEXT *p_ClientContext; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  BOOLEAN DirectAccessEffectiveOnly; // r9
  unsigned int v14; // edi
  __int64 v16; // rax
  struct _KTHREAD *v17; // rcx
  struct _SECURITY_QUALITY_OF_SERVICE *v18; // rdx
  NTSTATUS v19; // eax
  _DWORD *ClientToken; // rcx
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+30h] [rbp-88h] BYREF

  v3 = 0;
  v6 = 0LL;
  p_ClientContext = 0LL;
  if ( (*(_BYTE *)(a2 + 40) & 7) != 3 )
    return (unsigned int)-1073741790;
  if ( (*(_WORD *)(a2 + 228) & 0x4000) != 0 )
    return (unsigned int)-1073741790;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 != a1 && ((*(_BYTE *)(a1 + 416) & 6) != 6 || v8 != **(_QWORD **)(a1 + 16)) )
    return (unsigned int)-1073741790;
  v9 = *(_QWORD *)(a2 + 136);
  if ( !v9 )
  {
    v16 = AlpcpReferenceConnectedPort(a1);
    v6 = (void *)v16;
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 256) & 0x10000) != 0 )
      {
        if ( (*(_DWORD *)(v16 + 416) & 0x400) == 0 )
        {
          p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v16 + 64);
LABEL_15:
          if ( p_ClientContext->DirectlyAccessClientToken )
            DirectAccessEffectiveOnly = p_ClientContext->DirectAccessEffectiveOnly;
          else
            DirectAccessEffectiveOnly = p_ClientContext->SecurityQos.EffectiveOnly;
          v14 = PsImpersonateClient(
                  KeGetCurrentThread(),
                  p_ClientContext->ClientToken,
                  1u,
                  DirectAccessEffectiveOnly,
                  p_ClientContext->SecurityQos.ImpersonationLevel);
          goto LABEL_18;
        }
        v17 = *(struct _KTHREAD **)(a2 + 32);
        if ( v17 )
        {
          v18 = (struct _SECURITY_QUALITY_OF_SERVICE *)(v16 + 260);
          if ( a3 )
            v19 = SeCreateClientSecurityEx(v17, v18, 0LL, &ClientContext);
          else
            v19 = SeCreateClientSecurity(v17, v18, 0, &ClientContext);
          v14 = v19;
          if ( v19 < 0 )
            goto LABEL_18;
          p_ClientContext = &ClientContext;
          v3 = 1;
          goto LABEL_15;
        }
        v14 = -1073741790;
      }
      else
      {
        v14 = -1073741790;
      }
LABEL_18:
      if ( v6 )
        ObfDereferenceObject(v6);
      if ( v3 )
      {
        ClientToken = p_ClientContext->ClientToken;
        if ( ClientToken[48] == 1 || ClientToken )
          ObfDereferenceObject(ClientToken);
      }
      return v14;
    }
    return (unsigned int)-1073741790;
  }
  v10 = KeAbPreAcquire(v9 - 16, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 - 16), v10, v9 - 16);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = *(_DWORD *)(v9 + 104);
  if ( (v12 & 1) == 0 )
  {
    *(_DWORD *)(v9 + 104) = v12 | 2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 - 16));
    KeAbPostRelease(v9 - 16);
    p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v9 + 32);
    goto LABEL_15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v9 - 16));
  KeAbPostRelease(v9 - 16);
  return 3221225506LL;
}
