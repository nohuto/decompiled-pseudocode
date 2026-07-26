/*
 * XREFs of ndisResetPMCapabilities @ 0x1C009A7F0
 * Callers:
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001B8C8 (ndisUpdatePMCurrentCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisResetPMCapabilities(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
