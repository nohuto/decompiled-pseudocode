/*
 * XREFs of ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18006B43C
 * Callers:
 *     ??_Gios_base@std@@UEAAPEAXI@Z @ 0x180023990 (--_Gios_base@std@@UEAAPEAXI@Z.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x1800276B8 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180027890 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18002D3F0 (--1-$basic_ios@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??_G?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x18002D400 (--_G-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_istream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x18002D480 (--_G-$basic_istream@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180038DE0 (--_D-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180038E48 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180039970 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ??_E?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x18003CD4C (--_E-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_iostream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x18003CD98 (--_G-$basic_iostream@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_ostream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x18003CE48 (--_G-$basic_ostream@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180060CD8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?_Tidy@ios_base@std@@AEAAXXZ @ 0x18006B4AC (-_Tidy@ios_base@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18006F818 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::ios_base::_Ios_base_dtor(struct std::ios_base *this)
{
  __int64 v1; // rax
  _QWORD *v3; // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rax

  v1 = *((_QWORD *)this + 1);
  if ( !v1 || (--byte_1800F3C10[v1], byte_1800F3C10[v1] <= 0) )
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
