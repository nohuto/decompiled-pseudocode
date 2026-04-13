/*
 * XREFs of ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800548DC
 * Callers:
 *     ??_Gios_base@std@@UEAAPEAXI@Z @ 0x18001C400 (--_Gios_base@std@@UEAAPEAXI@Z.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18001EED0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18001F0AC (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180025CC8 (--1-$basic_ios@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??_E?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x180025CE0 (--_E-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_istream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x180025D88 (--_G-$basic_istream@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180032BB4 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180032C9C (--_D-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180033668 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ??_E?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x1800378C8 (--_E-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_iostream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x18003792C (--_G-$basic_iostream@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_ostream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x1800379DC (--_G-$basic_ostream@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ?Rot13EncodeStringHelper@Details@Obfuscation@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180048B5C (-Rot13EncodeStringHelper@Details@Obfuscation@ContentManagement@@YA-AV-$basic_string@GU-$char_tra.c)
 * Callees:
 *     ?_Tidy@ios_base@std@@AEAAXXZ @ 0x180054954 (-_Tidy@ios_base@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180058D36 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::ios_base::_Ios_base_dtor(struct std::ios_base *this)
{
  __int64 v1; // rax
  _QWORD *v3; // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rax

  v1 = *((_QWORD *)this + 1);
  if ( !v1 || (--byte_18008B6B0[v1], byte_18008B6B0[v1] <= 0) )
  {
    std::ios_base::_Tidy(this);
    v3 = (_QWORD *)*((_QWORD *)this + 8);
    if ( v3 )
    {
      if ( *v3 )
      {
        v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
        if ( v4 )
          (**v4)(v4, 1LL);
      }
      operator delete(v3);
    }
  }
}
