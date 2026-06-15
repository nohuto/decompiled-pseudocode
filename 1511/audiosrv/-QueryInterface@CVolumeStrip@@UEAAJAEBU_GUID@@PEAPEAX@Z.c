/*
 * XREFs of ?QueryInterface@CVolumeStrip@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x18000F650 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::QueryInterface(CVolumeStrip *this, const struct _GUID *a2, void **a3)
{
  unsigned int (__fastcall *v5)(CVolumeStrip *__hidden); // rsi
  unsigned int v7; // ebx
  TraceLoggingHProvider v8; // rcx
  __int64 v9; // rdx

  if ( !a3 )
  {
    v7 = -2147467261;
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      return v7;
    }
    v9 = 17LL;
    goto LABEL_18;
  }
  if ( (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4)
    && (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4) )
  {
    *a3 = 0LL;
    v7 = -2147467262;
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      return v7;
    }
    v9 = 16LL;
LABEL_18:
    WPP_SF_D(*((_QWORD *)v8 + 2), v9, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, v7);
    return v7;
  }
  v5 = *(unsigned int (__fastcall **)(CVolumeStrip *__hidden))(*(_QWORD *)this + 8LL);
  if ( v5 == CVolumeStrip::AddRef )
    CVolumeStrip::AddRef(this);
  else
    v5(this);
  *a3 = this;
  return 0LL;
}
