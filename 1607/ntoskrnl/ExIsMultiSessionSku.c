/*
 * XREFs of ExIsMultiSessionSku @ 0x14057F828
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x14067EE9C (PspSiloInitializeUserSharedData.c)
 *     InitSkuSessionParameters @ 0x1407BB814 (InitSkuSessionParameters.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x1400AFF58 (ApiSetResolveToHost.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404CD96C (PsQueryCurrentApiSetSchema.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall ExIsMultiSessionSku(_BYTE *a1)
{
  __int64 result; // rax
  __int64 CurrentApiSetSchema; // rax
  char v4; // cl
  int v5; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v6; // [rsp+38h] [rbp-31h]
  _WORD v7[8]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v8[14]; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v9; // [rsp+D8h] [rbp+6Fh] BYREF

  v5 = 4587588;
  v6 = L"ext-ms-win-session-wtsapi32-l1-1-0";
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[1]) = 292;
  LODWORD(v8[4]) = 67108868;
  v8[2] = L"NumberOfInitialSessions";
  v8[3] = &v9;
  result = RtlpQueryRegistryValues(2LL, L"Session Manager", (__int64)v8, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v9 <= 1 )
    {
      CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
      result = ApiSetResolveToHost(CurrentApiSetSchema, (unsigned __int16 *)&v5, 0LL, (char *)&v9, (__int64)v7);
      if ( (int)result >= 0 )
      {
        v4 = v9;
        if ( (_BYTE)v9 )
        {
          v4 = v9;
          if ( !v7[0] )
            v4 = 0;
        }
        *a1 = v4;
      }
    }
    else
    {
      *a1 = 1;
    }
  }
  return result;
}
