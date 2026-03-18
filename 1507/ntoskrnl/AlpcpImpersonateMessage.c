/*
 * XREFs of AlpcpImpersonateMessage @ 0x140479ED0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140479CB0 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 *     SeCreateClientSecurityEx @ 0x140481510 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x1404819F0 (SeCreateClientSecurity.c)
 *     AlpcpReferenceConnectedPort @ 0x14051FCC0 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpImpersonateMessage(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // r14d
  void *v7; // rbp
  struct _SECURITY_CLIENT_CONTEXT *p_ClientContext; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // eax
  BOOLEAN DirectAccessEffectiveOnly; // r9
  unsigned int v16; // edi
  __int64 v18; // rax
  struct _KTHREAD *v19; // rcx
  struct _SECURITY_QUALITY_OF_SERVICE *v20; // rdx
  NTSTATUS v21; // eax
  _DWORD *ClientToken; // rcx
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+30h] [rbp-88h] BYREF

  v4 = 0;
  v7 = 0LL;
  p_ClientContext = 0LL;
  if ( (*(_BYTE *)(a2 + 40) & 7) != 3 )
    return (unsigned int)-1073741790;
  if ( (*(_WORD *)(a2 + 228) & 0x4000) != 0 )
    return (unsigned int)-1073741790;
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 != a1 && ((*(_BYTE *)(a1 + 416) & 6) != 6 || v9 != **(_QWORD **)(a1 + 16)) )
    return (unsigned int)-1073741790;
  v10 = *(_QWORD *)(a2 + 136);
  if ( !v10 )
  {
    v18 = AlpcpReferenceConnectedPort();
    v7 = (void *)v18;
    if ( v18 )
    {
      if ( (*(_DWORD *)(v18 + 256) & 0x10000) != 0 )
      {
        if ( (*(_DWORD *)(v18 + 416) & 0x400) == 0 )
        {
          p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v18 + 64);
LABEL_15:
          if ( p_ClientContext->DirectlyAccessClientToken )
            DirectAccessEffectiveOnly = p_ClientContext->DirectAccessEffectiveOnly;
          else
            DirectAccessEffectiveOnly = p_ClientContext->SecurityQos.EffectiveOnly;
          v16 = PsImpersonateClient(
                  KeGetCurrentThread(),
                  p_ClientContext->ClientToken,
                  1u,
                  DirectAccessEffectiveOnly,
                  p_ClientContext->SecurityQos.ImpersonationLevel);
          goto LABEL_18;
        }
        v19 = *(struct _KTHREAD **)(a2 + 32);
        if ( v19 )
        {
          v20 = (struct _SECURITY_QUALITY_OF_SERVICE *)(v18 + 260);
          if ( a3 )
            v21 = SeCreateClientSecurityEx(v19, v20, 0LL, &ClientContext);
          else
            v21 = SeCreateClientSecurity(v19, v20, 0, &ClientContext);
          v16 = v21;
          if ( v21 < 0 )
            goto LABEL_18;
          p_ClientContext = &ClientContext;
          v4 = 1;
          goto LABEL_15;
        }
        v16 = -1073741790;
      }
      else
      {
        v16 = -1073741790;
      }
LABEL_18:
      if ( v7 )
        ObfDereferenceObject(v7);
      if ( v4 )
      {
        ClientToken = p_ClientContext->ClientToken;
        if ( ClientToken[48] == 1 || ClientToken )
          ObfDereferenceObject(ClientToken);
      }
      return v16;
    }
    return (unsigned int)-1073741790;
  }
  v11 = KeAbPreAcquire(v10 - 16, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 - 16), v11, v10 - 16, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = *(_DWORD *)(v10 + 104);
  if ( (v14 & 1) == 0 )
  {
    *(_DWORD *)(v10 + 104) = v14 | 2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 - 16));
    KeAbPostRelease(v10 - 16);
    p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v10 + 32);
    goto LABEL_15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v10 - 16));
  KeAbPostRelease(v10 - 16);
  return 3221225506LL;
}
