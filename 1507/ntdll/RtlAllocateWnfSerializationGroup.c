/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x1800771F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&dword_180146F30);
  if ( !(_DWORD)result )
    return (unsigned int)_InterlockedIncrement(&dword_180146F30);
  return result;
}
