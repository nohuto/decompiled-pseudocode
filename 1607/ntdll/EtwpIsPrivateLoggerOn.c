/*
 * XREFs of EtwpIsPrivateLoggerOn @ 0x1800872D0
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x18002A94C (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsPrivateLoggerOn(int a1)
{
  unsigned int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  v1 = a1 & 0xFFFF7FFF;
  if ( v1 < 0x40 && EtwpLoggerArray )
  {
    v2 = 2LL * v1;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v1 + 8));
    v3 = *(_QWORD *)(EtwpLoggerArray + 16LL * v1);
    if ( (v3 & 1) == 0 )
    {
      result = *(_DWORD *)(v3 + 328) != 0;
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v3 + 20) + 8));
      return result;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v2 + 8));
  }
  return 0;
}
