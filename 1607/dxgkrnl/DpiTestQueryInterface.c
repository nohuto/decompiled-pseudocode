/*
 * XREFs of DpiTestQueryInterface @ 0x1C00EA2B4
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C00D8440 (DpiPdoDispatchPnp.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DpiTestQueryInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  int RegistryValues; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD v12[14]; // [rsp+30h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = -1073741637;
  if ( RtlCompareMemory(*(const void **)a2, &GUID_DEVINTERFACE_BRIGHTNESS, 0x10uLL) == 16
    && *(_WORD *)(a2 + 10) == 1
    && *(_WORD *)(a2 + 8) == 56 )
  {
    v6 = *(_QWORD **)(a2 + 16);
    memset(v12, 0, sizeof(v12));
    v7 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
    v12[3] = 0LL;
    LODWORD(v12[4]) = 0;
    v12[5] = 0LL;
    LODWORD(v12[6]) = 0;
    v12[0] = &DpiTestProcessRegKey;
    v12[2] = L"TestBrightnessLevels";
    LODWORD(v12[1]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, *(_QWORD *)(v7 + 536), v12, 0LL, 0LL);
    v10 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      memset(v6, 0, 0x38uLL);
      v4 = 0;
      v6[2] = DxgkCddInterfaceDereference;
      v6[3] = DxgkCddInterfaceDereference;
      v6[4] = &DpiTestGetPossibleBrightness;
      v6[5] = DpiTestSetBrightness;
      v6[6] = DpiTestGetBrightness;
    }
    else
    {
      v11 = WdLogNewEntry5_WdEvent(v9);
      *(_QWORD *)(v11 + 24) = v10;
      WdLogEvent5_WdEvent(v11);
    }
  }
  return v4;
}
