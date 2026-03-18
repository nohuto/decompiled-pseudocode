/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@@Z @ 0x180141AB0
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@@Z @ 0x1800FE658 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA?AUDwmTouchpadInteractionConfigurationPrimitive@@I@Z @ 0x180142790 (-GetConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x180142F1C (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  int v4; // r12d
  bool v7; // r15
  char v8; // r14
  unsigned __int8 v9; // r14
  bool v10; // al
  bool v11; // al
  bool v12; // al
  unsigned int v13; // edx
  char v14; // al
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rdi
  bool v18; // al
  _QWORD *v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h]
  int v22; // [rsp+40h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+74h] [rbp-Ch]

  v4 = 0;
  if ( !*a1 )
    v4 = -2147019873;
  v7 = 0;
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (a1[16] & 1) != 0 || *((_DWORD *)a1 + 31) != *(_DWORD *)(a2 + 8) )
  {
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v20,
      *(unsigned int *)(a2 + 8));
    if ( (*(_BYTE *)(a2 + 12) & 2) != 0 || (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    {
      v8 = v21;
    }
    else
    {
      v8 = v21 & 0x3F;
      LODWORD(v21) = v21 & 0xFFFFFF3F;
    }
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v20);
    if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
      v9 = v8 | 0xC0;
    else
      v9 = v8 & 0x3F;
    v10 = (v9 & 1) != 0 || (v9 & 2) != 0;
    v7 = 1;
    if ( ((a1[15] & 3) != 0) == v10 )
    {
      v11 = (v9 & 4) != 0 || (v9 & 8) != 0;
      if ( ((a1[15] & 0xC) != 0) == v11 )
      {
        v12 = (v9 & 0x10) != 0 || (v9 & 0x20) != 0;
        if ( ((a1[15] & 0x30) != 0) == v12 )
          v7 = 0;
      }
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(*a1, &pData) != 1
      && (v7 || ((v9 ^ *((_BYTE *)a1 + 120)) & 0x40) != 0 || ((v9 ^ *((_DWORD *)a1 + 30)) & 0x80u) != 0) )
    {
      v7 = 1;
    }
  }
  if ( *((_DWORD *)a1 + 33) == 1 )
  {
    v13 = *((unsigned __int8 *)a1 + 128);
    if ( ((v13 >> 1) & 1) != ((v13 >> 2) & 1) )
    {
      v7 = 1;
      v14 = v13 ^ (v13 ^ (2 * v13)) & 4;
      *((_BYTE *)a1 + 128) = v14;
      if ( (v14 & 4) == 0
        || (unsigned int)pRelatedActivityId <= 4
        || (qword_18019E950 & 2) == 0
        || (qword_18019E958 & 2) != qword_18019E958 )
      {
        goto LABEL_44;
      }
      v26 = 0;
      v24 = &v20;
      v20 = a1;
      v25 = 8;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E22B, a3, a4, 3u, &pData);
    }
  }
  if ( !v7 && (a1[16] & 8) == 0 )
    goto LABEL_49;
LABEL_44:
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  LODWORD(v20) = *((_DWORD *)a1 + 33);
  v15 = *((_DWORD *)a1 + 4);
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    v16 = v15 | 0xC0;
  else
    v16 = v15 & 0xFFFFFF3F;
  v17 = *a1;
  HIDWORD(v20) = v16;
  v18 = (a1[16] & 2) != 0;
  v21 = 0x4234000042340000LL;
  LOBYTE(v22) = v18;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v17 + 16LL))(v17, &v20);
  if ( v4 >= 0 )
  {
    *((_DWORD *)a1 + 30) = HIDWORD(v20);
LABEL_49:
    *((_BYTE *)a1 + 128) &= ~8u;
  }
  return (unsigned int)v4;
}
