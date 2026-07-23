/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x1800870A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&dword_1801530A8);
  if ( !(_DWORD)result )
    return (unsigned int)_InterlockedIncrement(&dword_1801530A8);
  return result;
}
