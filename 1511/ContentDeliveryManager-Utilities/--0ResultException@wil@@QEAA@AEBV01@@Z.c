/*
 * XREFs of ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x180002374
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wil::ResultException *__fastcall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::ResultException *a2)
{
  volatile signed __int32 *v2; // rax
  __int64 v3; // r8

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v2 = (volatile signed __int32 *)*((_QWORD *)a2 + 18);
  v3 = *((_QWORD *)a2 + 19);
  if ( v2 )
  {
    *((_QWORD *)this + 18) = v2;
    *((_QWORD *)this + 19) = v3;
    _InterlockedIncrement(v2);
  }
  return this;
}
