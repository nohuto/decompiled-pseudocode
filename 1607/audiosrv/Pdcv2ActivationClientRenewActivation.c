/*
 * XREFs of Pdcv2ActivationClientRenewActivation @ 0x18008DEC4
 * Callers:
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x180079990 (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 * Callees:
 *     PdcReleaseRwLockExclusive2 @ 0x180005614 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180005760 (PdcAcquireRwLockExclusive2.c)
 *     PdcPortSendMessageSynchronously @ 0x180005870 (PdcPortSendMessageSynchronously.c)
 *     PdcpResizeDiagnosticContext @ 0x180005914 (PdcpResizeDiagnosticContext.c)
 *     Pdcv2pValidateActivationParameters @ 0x180005950 (Pdcv2pValidateActivationParameters.c)
 *     RtlStringCchCopyW @ 0x180031964 (RtlStringCchCopyW.c)
 *     memset @ 0x180036D30 (memset.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION @ 0x18008EA2C (Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION.c)
 */

__int64 __fastcall Pdcv2ActivationClientRenewActivation(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r8
  char *v11; // rcx
  int v12; // eax
  _WORD *v13; // r8
  _QWORD v15[96]; // [rsp+28h] [rbp-E0h] BYREF
  char v16; // [rsp+368h] [rbp+260h] BYREF

  v16 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( a3 )
  {
    *a3 = 1;
    if ( a1 )
    {
      v6 = a1;
      if ( *(_DWORD *)(a1 + 16) == 1094927440 )
      {
        v7 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)v7 == 843138128 )
        {
          if ( Pdcv2pValidateActivationParameters(a2) )
          {
            PdcAcquireRwLockExclusive2(v7 + 8, &v16);
            memset(v15, 0, sizeof(v15));
            v10 = *(_QWORD *)(a2 + 16);
            v15[7] = *(_QWORD *)(a2 + 8);
            v15[8] = *(_QWORD *)(a1 + 592);
            LODWORD(v15[9]) = *(_DWORD *)(a2 + 4);
            LODWORD(v15[5]) = 11;
            if ( v10 )
              RtlStringCchCopyW((_WORD *)&v15[9] + 2, 128LL, v10);
            v11 = *(char **)(a2 + 24);
            if ( v11 )
              PdcpResizeDiagnosticContext(v11, (unsigned int *)&v15[42]);
            v8 = PdcPortSendMessageSynchronously(*(_QWORD *)(v7 + 32), v15);
            if ( v8 >= 0 )
            {
              v12 = HIDWORD(v15[6]);
              ++*(_DWORD *)(a1 + 64);
              v13 = *(_WORD **)(a2 + 16);
              v8 = v15[6];
              *a3 = v12;
              *(_DWORD *)(a1 + 56) = v12;
              *(_BYTE *)(a1 + 60) = 0;
              if ( v13 )
              {
                if ( *v13 )
                  RtlStringCchCopyW((_WORD *)(a1 + 328), 128LL, (__int64)v13);
              }
            }
          }
          else
          {
            v8 = -1073741584;
          }
        }
        else
        {
          v8 = -1073741585;
          v7 = 0LL;
        }
      }
      else
      {
        v8 = -1073741585;
        v6 = 0LL;
      }
    }
    else
    {
      v8 = -1073741585;
    }
    v9 = (unsigned int)*a3;
  }
  else
  {
    v8 = -1073741583;
    v9 = 0xFFFFFFFFLL;
  }
  Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION(v6, v7, v9, (unsigned int)v8);
  if ( v16 )
    PdcReleaseRwLockExclusive2(v7 + 8, &v16);
  return (unsigned int)v8;
}
