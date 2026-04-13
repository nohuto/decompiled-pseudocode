/*
 * XREFs of ??1ResultException@wil@@QEAA@XZ @ 0x180002328
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      free(*((void **)this + 18));
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
}
