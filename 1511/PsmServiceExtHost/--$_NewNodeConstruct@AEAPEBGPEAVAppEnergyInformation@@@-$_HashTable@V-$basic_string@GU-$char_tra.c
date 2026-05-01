/*
 * XREFs of ??$_NewNodeConstruct@AEAPEBGPEAVAppEnergyInformation@@@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@1@AEAPEBG$$QEAPEAVAppEnergyInformation@@@Z @ 0x18004F788
 * Callers:
 *     ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180050AA0 (-GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV-$ComPtr@VAppEnergyInformation.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ @ 0x180051B20 (-InternalAddRef@-$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180051B58 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

char *__fastcall utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_NewNodeConstruct<unsigned short const * &,AppEnergyInformation *>(
        __int64 a1,
        __int64 **a2,
        _QWORD *a3)
{
  char *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rsi
  char v9; // al
  char v10; // bl
  char *v11; // rbx

  v5 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 3) = v5 + 40;
    *((_QWORD *)v5 + 4) = v5 + 40;
    *((_WORD *)v5 + 20) = 0;
    v9 = utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)(v5 + 24),
           *a2,
           v6,
           v7);
    *((_QWORD *)v8 + 7) = *a3;
    v10 = v9;
    Microsoft::WRL::ComPtr<AppEnergyInformation>::InternalAddRef(v8 + 56);
    if ( v10 )
      return v8;
  }
  v11 = v8;
  if ( v8 )
  {
    Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v8 + 56);
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)v8 + 3);
    v11 = 0LL;
    operator delete(v8);
  }
  return v11;
}
