/*
 * XREFs of ?GetCount@CAudioSessionStore@@UEAAJPEAK@Z @ 0x180087150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionStore::GetCount(CAudioSessionStore *this, unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 i; // rax

  v4 = 0;
  if ( !a2 )
    return 2147500035LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  for ( i = *((_QWORD *)this + 3); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_WORD *)(i + 24) )
      ++v4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  result = 0LL;
  *a2 = v4;
  return result;
}
