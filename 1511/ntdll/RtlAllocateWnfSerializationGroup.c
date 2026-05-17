/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x180082D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&dword_180145FB0);
  if ( !(_DWORD)result )
    return (unsigned int)_InterlockedIncrement(&dword_180145FB0);
  return result;
}
