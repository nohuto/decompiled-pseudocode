/*
 * XREFs of ??1Git@Details@Internal@Windows@@QEAA@XZ @ 0x180001A30
 * Callers:
 *     Windows::Internal::Details::_dynamic_atexit_destructor_for___git__ @ 0x1800070A0 (Windows--Internal--Details--_dynamic_atexit_destructor_for___git__.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Details::Git::~Git(Windows::Internal::Details::Git *this)
{
  __int64 v1; // rcx

  v1 = qword_1800166A8;
  if ( qword_1800166A8 )
  {
    qword_1800166A8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
