/*
 * XREFs of ResumeThreadQueue @ 0x1402A73E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResumeThreadQueue(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0);
  if ( (result & 0x1000000) != 0 )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0);
    if ( (result & 1) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 464) + 456LL) = a2;
      if ( *(_DWORD *)(a1 + 1304) )
        *(_DWORD *)(a1 + 1304) = a2;
      result = *(_QWORD *)(a1 + 480);
      _InterlockedExchange(
        (volatile __int32 *)(result + 20),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    }
  }
  return result;
}
