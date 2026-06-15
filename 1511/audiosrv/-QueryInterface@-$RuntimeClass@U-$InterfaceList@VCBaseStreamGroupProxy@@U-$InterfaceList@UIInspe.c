/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E0B0
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000C9B0 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18000D770 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049220 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$Interfac_ea_180049220.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049230 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$Interfac_ea_180049230.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049240 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$Interfac_ea_180049240.c)
 * Callees:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E070 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@@.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000E1C0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  unsigned int Data1; // edx
  const struct _GUID *v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // rdi
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  __int64 (__fastcall *v13)(__int64); // rsi
  int v14; // eax

  v3 = 0;
  *a3 = 0LL;
  v5 = a1;
  Data1 = a2->Data1;
  if ( (__PAIR64__(*(_DWORD *)&a2->Data2, Data1) != __PAIR64__(
                                                      *(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2,
                                                      0)
     || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (Data1 != -1350114592
     || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v9 = v5 + 8;
      if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_ef40772f_c4e5_4c56_9bec_1496819370f5) )
      {
        *v8 = v9;
        v14 = 0;
      }
      else
      {
        v5 = v9 + 128;
        if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_00000038_0000_0000_c000_000000000046) )
          goto LABEL_6;
        if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
        {
          *v8 = v5 + 8;
          v14 = 0;
        }
        else
        {
          v14 = -2147467262;
        }
      }
      v3 = v14;
      if ( v14 < 0 )
        return v3;
      goto LABEL_7;
    }
LABEL_6:
    *v8 = v5;
LABEL_7:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v8 + 8LL))(*v8);
    return v3;
  }
  *a3 = a1;
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL);
  if ( v13 != Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef )
  {
    v13(a1);
    return v3;
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(a1);
  return 0LL;
}
