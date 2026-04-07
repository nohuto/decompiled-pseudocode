/*
 * XREFs of ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x18006DA2C
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x18007001C (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::ResultException *a2)
{
  wil::details::shared_buffer *v3; // rcx

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v3 = (wil::ResultException *)((char *)this + 144);
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 1) = 0LL;
  wil::details::shared_buffer::assign(v3, *((int **)a2 + 18), *((_QWORD *)a2 + 19));
  return this;
}
