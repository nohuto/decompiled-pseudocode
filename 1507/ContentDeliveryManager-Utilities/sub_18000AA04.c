/*
 * XREFs of sub_18000AA04 @ 0x18000AA04
 * Callers:
 *     sub_18000AC84 @ 0x18000AC84 (sub_18000AC84.c)
 *     sub_180018D7C @ 0x180018D7C (sub_180018D7C.c)
 *     sub_180018E44 @ 0x180018E44 (sub_180018E44.c)
 *     sub_180027721 @ 0x180027721 (sub_180027721.c)
 * Callees:
 *     sub_180021738 @ 0x180021738 (sub_180021738.c)
 */

void __fastcall sub_18000AA04(std::_Lockit *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  sub_180021738();
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    free(v2);
  *((_QWORD *)this + 11) = 0LL;
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
    free(v3);
  *((_QWORD *)this + 9) = 0LL;
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    free(v4);
  *((_QWORD *)this + 7) = 0LL;
  v5 = (void *)*((_QWORD *)this + 5);
  if ( v5 )
    free(v5);
  *((_QWORD *)this + 5) = 0LL;
  v6 = (void *)*((_QWORD *)this + 3);
  if ( v6 )
    free(v6);
  *((_QWORD *)this + 3) = 0LL;
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
    free(v7);
  *((_QWORD *)this + 1) = 0LL;
  std::_Lockit::~_Lockit(this);
}
