/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428
 * Callers:
 *     sub_180003BF0 @ 0x180003BF0 (sub_180003BF0.c)
 *     sub_180003DC0 @ 0x180003DC0 (sub_180003DC0.c)
 *     sub_180004F50 @ 0x180004F50 (sub_180004F50.c)
 *     sub_180004FEC @ 0x180004FEC (sub_180004FEC.c)
 *     sub_1800057DC @ 0x1800057DC (sub_1800057DC.c)
 *     sub_180005AC0 @ 0x180005AC0 (sub_180005AC0.c)
 *     sub_1800075A0 @ 0x1800075A0 (sub_1800075A0.c)
 *     sub_180007710 @ 0x180007710 (sub_180007710.c)
 *     sub_180007880 @ 0x180007880 (sub_180007880.c)
 *     sub_1800079F0 @ 0x1800079F0 (sub_1800079F0.c)
 *     sub_180007DA0 @ 0x180007DA0 (sub_180007DA0.c)
 *     sub_180007E10 @ 0x180007E10 (sub_180007E10.c)
 *     sub_180008D00 @ 0x180008D00 (sub_180008D00.c)
 *     sub_180008F20 @ 0x180008F20 (sub_180008F20.c)
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 *     sub_18000F0B0 @ 0x18000F0B0 (sub_18000F0B0.c)
 *     sub_18000F2A0 @ 0x18000F2A0 (sub_18000F2A0.c)
 *     sub_18000F470 @ 0x18000F470 (sub_18000F470.c)
 *     sub_18000F640 @ 0x18000F640 (sub_18000F640.c)
 *     sub_180017F80 @ 0x180017F80 (sub_180017F80.c)
 *     sub_180018070 @ 0x180018070 (sub_180018070.c)
 *     sub_180018228 @ 0x180018228 (sub_180018228.c)
 *     sub_1800184F8 @ 0x1800184F8 (sub_1800184F8.c)
 *     sub_180019730 @ 0x180019730 (sub_180019730.c)
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     sub_180019C40 @ 0x180019C40 (sub_180019C40.c)
 *     sub_18001DE54 @ 0x18001DE54 (sub_18001DE54.c)
 *     sub_18001DEE4 @ 0x18001DEE4 (sub_18001DEE4.c)
 *     sub_18001DF74 @ 0x18001DF74 (sub_18001DF74.c)
 *     sub_18001E004 @ 0x18001E004 (sub_18001E004.c)
 *     sub_18001E094 @ 0x18001E094 (sub_18001E094.c)
 *     sub_18001F8C4 @ 0x18001F8C4 (sub_18001F8C4.c)
 * Callees:
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 */

void *__fastcall operator new(size_t a1, const struct std::nothrow_t *a2)
{
  void *result; // rax

  try
  {
    result = sub_180021148(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
