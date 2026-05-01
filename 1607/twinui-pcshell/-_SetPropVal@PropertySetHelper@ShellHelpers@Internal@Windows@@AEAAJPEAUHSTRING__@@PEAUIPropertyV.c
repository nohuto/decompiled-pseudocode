/*
 * XREFs of ?_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18000CDC4
 * Callers:
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18000CEAC (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x180028F88 (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::_SetPropVal(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        struct Windows::Foundation::IPropertyValue *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  if ( v5 )
  {
    v7 = (**v5)(v5, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v13);
    v6 = v7;
    if ( v7 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14,
        (__int64)"internal\\shell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v7);
    if ( v6 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, struct Windows::Foundation::IPropertyValue *, char *))(*(_QWORD *)v13 + 80LL))(
             v13,
             a2,
             a3,
             &v12);
      v6 = v8;
      if ( v8 >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41,
          (__int64)"internal\\shell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v8);
    }
  }
  else
  {
    v6 = -2147467261;
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v6;
}
