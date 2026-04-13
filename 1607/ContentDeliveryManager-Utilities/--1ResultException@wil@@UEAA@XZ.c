/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x180002278
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180002240 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      free(*((void **)this + 23));
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 21);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      free(*((void **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  exception::~exception(this);
}
