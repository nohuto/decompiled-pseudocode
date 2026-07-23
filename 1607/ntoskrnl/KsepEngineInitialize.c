/*
 * XREFs of KsepEngineInitialize @ 0x1407B315C
 * Callers:
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 * Callees:
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     KsepCacheInitialize @ 0x140571C68 (KsepCacheInitialize.c)
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 */

__int64 __fastcall KsepEngineInitialize(int *a1)
{
  int *v1; // rbx
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  char v7; // al

  v1 = a1;
  if ( !a1 )
  {
    a1 = KsepHistoryErrors;
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v7 = KsepDebugFlag;
    KsepHistoryErrors[2 * v6 + 1] = -1073740768;
    KsepHistoryErrors[2 * v6] = 131883;
    if ( (v7 & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\ksecore.c", 0x32Bu, 0LL);
  }
  *((_QWORD *)v1 + 3) = v1 + 4;
  *((_QWORD *)v1 + 2) = v1 + 4;
  *((_QWORD *)v1 + 5) = v1 + 8;
  *((_QWORD *)v1 + 4) = v1 + 8;
  *((_QWORD *)v1 + 6) = 0LL;
  v2 = KsepCacheInitialize(
         (__int64)a1,
         (__int64)KsepCacheDeviceEqual,
         (__int64)KsepCacheDeviceHash,
         (__int64)KsepCacheDeviceFree);
  *((_QWORD *)v1 + 9) = v2;
  if ( !v2 )
    return 3221225495LL;
  v4 = KsepCacheInitialize(v3, (__int64)KsepCacheHwIdEqual, (__int64)KsepCacheHwIdHash, (__int64)KsepCacheHwIdFree);
  *((_QWORD *)v1 + 10) = v4;
  if ( !v4 )
    return 3221225495LL;
  *((_QWORD *)v1 + 7) = KseGetIoCallbacks;
  *((_QWORD *)v1 + 8) = KseSetCompletionHook;
  result = KsepEngineReadFlags(&KseEngine);
  if ( (int)result >= 0 && (KseEngine & 3) == 3 )
    return 3221225659LL;
  return result;
}
