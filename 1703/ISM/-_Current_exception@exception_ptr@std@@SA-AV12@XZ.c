/*
 * XREFs of ?_Current_exception@exception_ptr@std@@SA?AV12@XZ @ 0x1800073D8
 * Callers:
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x1800073FC (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::exception_ptr::_Current_exception(void *a1)
{
  __ExceptionPtrCreate(a1);
  __ExceptionPtrCurrentException(a1);
  return a1;
}
