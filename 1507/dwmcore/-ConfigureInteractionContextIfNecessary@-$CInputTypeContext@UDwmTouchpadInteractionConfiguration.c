/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJIW4InteractionState@@@Z @ 0x18012DB3C
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJW4InteractionState@@AEBUtagPOINTER_INFO@@I@Z @ 0x18012E3AC (-ProcessInput@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA?AUDwmTouchpadInteractionConfigurationPrimitive@@I@Z @ 0x18012E2C4 (-GetConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x18012EAF4 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        unsigned int a2,
        const GUID *a3,
        const GUID *a4)
{
  int v4; // r12d
  int v5; // r13d
  bool v7; // r15
  unsigned __int8 v8; // r14
  bool v9; // al
  bool v10; // al
  bool v11; // al
  unsigned int v12; // edx
  char v13; // al
  int v14; // eax
  __int64 v15; // rdi
  bool v16; // al
  _QWORD *v18; // [rsp+38h] [rbp-29h] BYREF
  __int64 v19; // [rsp+40h] [rbp-21h]
  int v20; // [rsp+48h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+17h]
  int v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+84h] [rbp+23h]

  v4 = 0;
  v5 = (int)a3;
  if ( !*a1 )
    v4 = -2147019873;
  v7 = 0;
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (a1[16] & 1) != 0 || *((_DWORD *)a1 + 31) != a2 )
  {
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v18,
      a2);
    v8 = v19;
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      v8 = v19 & 0x3F;
      LODWORD(v19) = v19 & 0xFFFFFF3F;
    }
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v18);
    if ( (unsigned int)(v5 - 2) > 1 )
      v8 |= 0xC0u;
    v9 = (v8 & 1) != 0 || (v8 & 2) != 0;
    v7 = 1;
    if ( ((a1[15] & 3) != 0) == v9 )
    {
      v10 = (v8 & 4) != 0 || (v8 & 8) != 0;
      if ( ((a1[15] & 0xC) != 0) == v10 )
      {
        v11 = (v8 & 0x10) != 0 || (v8 & 0x20) != 0;
        if ( ((a1[15] & 0x30) != 0) == v11 )
          v7 = 0;
      }
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD **))(*(_QWORD *)*a1 + 40LL))(*a1, &v18) != 1
      && (v7 || ((v8 ^ *((_BYTE *)a1 + 120)) & 0x40) != 0 || ((v8 ^ *((_DWORD *)a1 + 30)) & 0x80u) != 0) )
    {
      v7 = 1;
    }
  }
  if ( *((_DWORD *)a1 + 33) == 1 )
  {
    v12 = *((unsigned __int8 *)a1 + 128);
    if ( ((v12 >> 1) & 1) != ((v12 >> 2) & 1) )
    {
      v7 = 1;
      v13 = v12 ^ (v12 ^ (2 * v12)) & 4;
      *((_BYTE *)a1 + 128) = v13;
      if ( (v13 & 4) == 0
        || (unsigned int)pRelatedActivityId <= 4
        || (qword_180190AC0 & 2) == 0
        || (qword_180190AC8 & 2) != qword_180190AC8 )
      {
        goto LABEL_41;
      }
      v24 = 0;
      v22 = &v18;
      v18 = a1;
      v23 = 8;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F1A4, a3, a4, 3u, &pData);
    }
  }
  if ( !v7 && (a1[16] & 8) == 0 )
    goto LABEL_45;
LABEL_41:
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  LODWORD(v18) = *((_DWORD *)a1 + 33);
  v14 = *((_DWORD *)a1 + 4);
  if ( (unsigned int)(v5 - 2) > 1 )
    v14 |= 0xC0u;
  v15 = *a1;
  HIDWORD(v18) = v14;
  v16 = (a1[16] & 2) != 0;
  v19 = 0x4234000042340000LL;
  LOBYTE(v20) = v16;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v15 + 16LL))(v15, &v18);
  if ( v4 >= 0 )
  {
    *((_DWORD *)a1 + 30) = HIDWORD(v18);
LABEL_45:
    *((_BYTE *)a1 + 128) &= ~8u;
  }
  return (unsigned int)v4;
}
