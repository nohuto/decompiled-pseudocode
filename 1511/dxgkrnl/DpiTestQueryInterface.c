/*
 * XREFs of DpiTestQueryInterface @ 0x1C00D23C0
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C00C3B20 (DpiPdoDispatchPnp.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DpiTestQueryInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  int RegistryValues; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD v15[14]; // [rsp+30h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = -1073741637;
  if ( RtlCompareMemory(*(const void **)a2, &GUID_DEVINTERFACE_BRIGHTNESS, 0x10uLL) == 16
    && *(_WORD *)(a2 + 10) == 1
    && *(_WORD *)(a2 + 8) == 56 )
  {
    v6 = *(_QWORD **)(a2 + 16);
    memset(v15, 0, sizeof(v15));
    v7 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
    v15[3] = 0LL;
    LODWORD(v15[4]) = 0;
    v15[5] = 0LL;
    LODWORD(v15[6]) = 0;
    v15[0] = &DpiTestProcessRegKey;
    v15[2] = L"TestBrightnessLevels";
    LODWORD(v15[1]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, *(_QWORD *)(v7 + 536), v15, 0LL, 0LL);
    v13 = RegistryValues;
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
      v14 = WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
      *(_QWORD *)(v14 + 24) = DpiTestQueryInterface;
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdEvent(v14);
    }
  }
  return v4;
}
