/*
 * XREFs of ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18000AF9C
 * Callers:
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180012094 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x1800124D8 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x180012698 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180013D7C (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x180014A08 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180014A94 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@31@@Z @ 0x18000AEA0 (-make_error_code@std@@YA-AVerror_code@1@W4io_errc@31@@Z.c)
 *     ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x18000AEBC (--0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z.c)
 *     _CxxThrowException_0 @ 0x180028090 (_CxxThrowException_0.c)
 */

void __fastcall std::ios_base::clear(std::ios_base *this, char a2, char a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  const struct std::error_code *v6; // rax
  const struct std::error_code *v7; // rax
  const struct std::error_code *error_code; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *((_DWORD *)this + 5);
  v4 = a2 & 0x17;
  *((_DWORD *)this + 4) = v4;
  v5 = v4 & v3;
  if ( v5 )
  {
    if ( !a3 )
    {
      if ( (v5 & 4) == 0 )
      {
        if ( (v5 & 2) == 0 )
        {
          error_code = (const struct std::error_code *)std::make_error_code((__int64)v9);
          std::ios_base::failure::failure(
            (std::ios_base::failure *)pExceptionObject,
            "ios_base::eofbit set",
            error_code);
          throw (std::ios_base::failure *)pExceptionObject;
        }
        v7 = (const struct std::error_code *)std::make_error_code((__int64)v9);
        std::ios_base::failure::failure((std::ios_base::failure *)pExceptionObject, "ios_base::failbit set", v7);
        throw (std::ios_base::failure *)pExceptionObject;
      }
      v6 = (const struct std::error_code *)std::make_error_code((__int64)v9);
      std::ios_base::failure::failure((std::ios_base::failure *)pExceptionObject, "ios_base::badbit set", v6);
      throw (std::ios_base::failure *)pExceptionObject;
    }
    throw;
  }
}
