/*
 * XREFs of KsepEngineReadFlags @ 0x1407B3218
 * Callers:
 *     KsepEngineInitialize @ 0x1407B315C (KsepEngineInitialize.c)
 * Callees:
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     KsepRegistryCloseKey @ 0x140514A9C (KsepRegistryCloseKey.c)
 *     KsepRegistryOpenKey @ 0x140514C9C (KsepRegistryOpenKey.c)
 *     KsepRegistryQueryDWORD @ 0x140571D14 (KsepRegistryQueryDWORD.c)
 */

__int64 __fastcall KsepEngineReadFlags(int *a1)
{
  int v1; // esi
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  char v8; // al
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  char v17; // al
  int v18; // eax
  __int64 v19; // rcx
  char v20; // al
  int v21; // [rsp+60h] [rbp+38h] BYREF
  int v22; // [rsp+68h] [rbp+40h] BYREF
  int v23; // [rsp+70h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+50h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  if ( !a1 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v11 = KsepDebugFlag;
    dword_140307464[2 * v10] = -1073740768;
    KsepHistoryErrors[2 * v10] = 262244;
    if ( (v11 & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x64u, 0LL);
  }
  *a1 = 0;
  v3 = KsepRegistryOpenKey(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\Microsoft\\Compatibility",
         0LL,
         &KeyHandle);
  if ( v3 )
  {
    if ( v3 == -1073741772 )
      a1[2] |= 2u;
  }
  else
  {
    v21 = 0;
    v22 = 0;
    if ( !KsepRegistryQueryDWORD(KeyHandle, L"DisableDeviceFlags", &v21) && v21 == 1 )
    {
      a1[2] |= 4u;
      v1 = 2;
    }
    if ( !KsepRegistryQueryDWORD(KeyHandle, L"DisableDriverShims", &v22) && v22 == 1 )
    {
      v1 |= 1u;
      a1[2] |= 8u;
    }
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v13 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v12]) = 0;
    LODWORD(KsepHistoryMessages[v12]) = 262275;
    if ( (v13 & 1) != 0 )
      KsepDebugPrint(0LL, "KSE: Engine has group policy flags: %08x\n", v1);
    KsepLogInfo(0LL, (__int64)"KSE: Engine has group policy flags: %08x\n", v1);
    KsepRegistryCloseKey(KeyHandle);
    KeyHandle = 0LL;
  }
  v4 = KsepRegistryOpenKey(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility", 0LL, &KeyHandle);
  v5 = v4;
  if ( v4 == -1073741772 )
  {
    a1[2] |= 1u;
    goto LABEL_8;
  }
  if ( v4 < 0 )
  {
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v15 = KsepDebugFlag;
    dword_140307464[2 * v14] = v5;
    KsepHistoryErrors[2 * v14] = 262304;
    if ( (v15 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Error reading compatibility key: status: %08x\n", v5);
    KsepLogError(0, "KSE: Error reading compatibility key: status: %08x\n", v5);
  }
  else
  {
    v6 = KsepRegistryQueryDWORD(KeyHandle, L"DisableFlags", &v23);
    v5 = v6;
    if ( v6 == -1073741772 )
    {
LABEL_8:
      v5 = 0;
      goto LABEL_9;
    }
    if ( v6 >= 0 )
    {
      v18 = v23 & 3;
      *a1 = v18;
      if ( (v18 & 1) != 0 )
        a1[2] |= 0x20u;
      if ( (v18 & 2) != 0 )
        a1[2] |= 0x10u;
      v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      v20 = KsepDebugFlag;
      HIDWORD(KsepHistoryMessages[v19]) = 0;
      LODWORD(KsepHistoryMessages[v19]) = 262343;
      if ( (v20 & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: Engine initialized with registry flags: %08x\n", *a1);
      KsepLogInfo(0LL, (__int64)"KSE: Engine initialized with registry flags: %08x\n", *a1);
    }
    else
    {
      v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      v17 = KsepDebugFlag;
      dword_140307464[2 * v16] = v5;
      KsepHistoryErrors[2 * v16] = 262326;
      if ( (v17 & 2) != 0 )
        KsepDebugPrint(0LL, "KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v5);
      KsepLogError(0, "KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v5);
    }
  }
LABEL_9:
  *a1 |= v1;
  v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
  v8 = KsepDebugFlag;
  HIDWORD(KsepHistoryMessages[v7]) = 0;
  LODWORD(KsepHistoryMessages[v7]) = 262354;
  if ( (v8 & 1) != 0 )
    KsepDebugPrint(0LL, "KSE: Engine flags (after registry/group policy): %08x\n", *a1);
  KsepLogInfo(0LL, (__int64)"KSE: Engine flags (after registry/group policy): %08x\n", *a1);
  KsepRegistryCloseKey(KeyHandle);
  return v5;
}
