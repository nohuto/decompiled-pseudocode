/*
 * XREFs of ??1bad_array_new_length@std@@UEAA@XZ @ 0x18009E184
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((__int64)this + 8);
}
