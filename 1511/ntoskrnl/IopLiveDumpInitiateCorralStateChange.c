/*
 * XREFs of IopLiveDumpInitiateCorralStateChange @ 0x1403AEFB8
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1403AEA00 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1403AEB54 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403AF83C (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x1403AF798 (IopLiveDumpProcessCorralStateChange.c)
 */

__int64 __fastcall IopLiveDumpInitiateCorralStateChange(__int64 a1, __int32 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax
  int i; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
  _InterlockedExchange((volatile __int32 *)(a1 + 12), a2);
  IopLiveDumpProcessCorralStateChange(a1, a1 + 112);
  for ( i = 0; ; KeYieldProcessorEx(&i, v3, v4) )
  {
    result = *(unsigned int *)(a1 + 20);
    if ( *(_DWORD *)(a1 + 16) == (_DWORD)result )
      break;
  }
  return result;
}
