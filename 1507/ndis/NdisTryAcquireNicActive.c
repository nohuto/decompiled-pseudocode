/*
 * XREFs of NdisTryAcquireNicActive @ 0x1C000E650
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C000E6E4 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_DDD @ 0x1C00609D0 (WPP_SF_DDD_ea_1C00609D0.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0069354 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00697C4 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     Template_xqqq @ 0x1C006B73C (Template_xqqq.c)
 */

__int64 __fastcall NdisTryAcquireNicActive(__int64 a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r14d
  int v6; // r15d
  __int64 v7; // rdi
  unsigned __int8 v8; // r8
  KIRQL v10; // r12
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned int active; // eax
  int v14; // ecx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 4520);
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_qD(40LL, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, a1, (unsigned int)a2);
  if ( !ndisValidComponentId(a2) )
    return 3221225485LL;
  if ( *(_QWORD *)(v2 + 4520) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    if ( ndisAoAcIsD0Required((struct _NDIS_MINIPORT_AOAC *)v7) && ((v11 = *(_DWORD *)(v7 + 368)) == 0 || v11 == 3) )
    {
      if ( *(_DWORD *)(v7 + 52) == 0x7FFFFFFF )
      {
        v12 = -1073741675;
      }
      else
      {
        active = ndisAoAcActiveRefIncrement((struct _NDIS_MINIPORT_AOAC *)v7, a2);
        ++*(_DWORD *)(a1 + 944);
        v3 = active;
        v6 = *(_DWORD *)(a1 + 944);
        v12 = 0;
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C0085315 >= 3u )
        WPP_SF_DDD(
          42LL,
          &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids,
          *(unsigned int *)(v7 + 368),
          *(unsigned int *)(v7 + 52),
          *(_DWORD *)(v7 + 372));
      v12 = -1071448017;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v7, v10);
    if ( !v12 && (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      Template_xqqq(v14, (unsigned int)&NicActiveAcquired, v2 + 4064, *(_QWORD *)(v2 + 4080), a2, v6, v3);
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_DDD(43LL, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, v12, v3, v6);
    return v12;
  }
  else
  {
    if ( v8 >= 3u )
      WPP_SF_(41LL, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids);
    return 3221225659LL;
  }
}
