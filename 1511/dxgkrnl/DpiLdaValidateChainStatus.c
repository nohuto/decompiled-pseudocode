/*
 * XREFs of DpiLdaValidateChainStatus @ 0x1C01749F0
 * Callers:
 *     DpiLdaValidateSystemChainStatus @ 0x1C00CEAC8 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiLdaValidateChainStatus(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax

  v2 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v4 + 508) != 1 )
  {
    v5 = *(_QWORD *)(v4 + 1512);
    if ( !v5 )
    {
      v2 = -1071774671;
      v6 = (_QWORD *)WdLogNewEntry5_WdError(v3);
      v6[4] = 0LL;
      v6[3] = DpiLdaValidateChainStatus;
      v6[5] = -1071774671LL;
LABEL_10:
      WdLogEvent5_WdError(v6);
      return v2;
    }
    v4 = *(_QWORD *)(v5 + 64);
  }
  v7 = *(unsigned int *)(v4 + 1520);
  if ( (_DWORD)v7 != *(_DWORD *)(v4 + 504) )
  {
    v8 = -1071774670LL;
LABEL_9:
    v2 = v8;
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v3);
    v6[3] = DpiLdaValidateChainStatus;
    v6[4] = 0LL;
    v6[5] = v8;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v4 + 236) != 2 )
  {
    v8 = -1071774669LL;
    goto LABEL_9;
  }
  v9 = 1LL;
  if ( (unsigned int)v7 > 1 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v4 + 1512) + 8LL * (unsigned int)v9);
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 64) + 236LL) != 2 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= (unsigned int)v7 )
        return v2;
    }
    v2 = -1071774666;
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v7);
    v11[6] = 0LL;
    v11[5] = DpiLdaValidateChainStatus;
    v11[3] = 275LL;
    v11[4] = 21LL;
    v11[7] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  return v2;
}
