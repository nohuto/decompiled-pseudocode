/*
 * XREFs of ?equivalent@error_category@std@@UEBA_NHAEBVerror_condition@2@@Z @ 0x180002D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

_BOOL8 __fastcall std::error_category::equivalent(
        std::error_category *this,
        unsigned int a2,
        const struct std::error_condition *a3)
{
  __int64 v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (*(__int64 (__fastcall **)(std::error_category *, _BYTE *, _QWORD))(*(_QWORD *)this + 24LL))(this, v6, a2);
  return *(_QWORD *)(v4 + 8) == *((_QWORD *)a3 + 1) && *(_DWORD *)v4 == *(_DWORD *)a3;
}
