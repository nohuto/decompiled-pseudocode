/*
 * XREFs of sscanf @ 0x180099D90
 * Callers:
 *     <none>
 * Callees:
 *     vscan_fn @ 0x180099DCC (vscan_fn.c)
 */

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  return vscan_fn((PRTL_DYNAMIC_HASH_TABLE)input_l, (__int64)va);
}
