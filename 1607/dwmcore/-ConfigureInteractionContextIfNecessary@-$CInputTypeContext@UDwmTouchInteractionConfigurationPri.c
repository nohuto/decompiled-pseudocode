/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18016D6F8
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x180112850 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18016E80C (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x18016F990 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  int v4; // r14d
  char v7; // di
  char v8; // di
  unsigned __int8 v9; // di
  bool v10; // al
  bool v11; // al
  bool v12; // al
  bool v13; // si
  int v14; // eax
  unsigned int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  int v18; // ecx
  __int128 v20; // [rsp+30h] [rbp-29h] BYREF
  int v21; // [rsp+40h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-11h] BYREF
  __int128 *v23; // [rsp+68h] [rbp+Fh]
  int v24; // [rsp+70h] [rbp+17h]
  int v25; // [rsp+74h] [rbp+1Bh]

  v4 = 0;
  if ( !*a1 )
    v4 = -2147019873;
  v7 = 0;
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (a1[18] & 1) != 0 || *((_DWORD *)a1 + 35) != *(_DWORD *)(a2 + 8) )
  {
    CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v20,
      *(unsigned int *)(a2 + 8),
      a3);
    if ( (*(_BYTE *)(a2 + 24) & 8) != 0 || (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    {
      v8 = BYTE8(v20);
    }
    else
    {
      v8 = BYTE8(v20) & 0x3F;
      DWORD2(v20) &= 0xFFFFFF3F;
    }
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v20);
    if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
      v9 = v8 | 0xC0;
    else
      v9 = v8 & 0x3F;
    v10 = (v9 & 1) != 0 || (v9 & 2) != 0;
    v13 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) == v10 )
    {
      v11 = (v9 & 4) != 0 || (v9 & 8) != 0;
      if ( ((*((_BYTE *)a1 + 124) & 0xC) != 0) == v11 )
      {
        v12 = (v9 & 0x10) != 0 || (v9 & 0x20) != 0;
        if ( ((*((_BYTE *)a1 + 124) & 0x30) != 0) == v12 )
          v13 = 0;
      }
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(*a1, &pData) != 1 )
    {
      if ( !v13 && ((v9 ^ *((_BYTE *)a1 + 124)) & 0x40) == 0 && ((v9 ^ *((_DWORD *)a1 + 31)) & 0x80u) == 0 )
      {
LABEL_36:
        if ( ((*((unsigned __int8 *)a1 + 144) >> 3) & 1) == (*((float *)a1 + 32) == 45.0)
          && ((*((unsigned __int8 *)a1 + 144) >> 4) & 1) == (*((float *)a1 + 33) == 45.0) )
        {
          v7 = 0;
          goto LABEL_40;
        }
LABEL_39:
        v7 = 1;
        goto LABEL_40;
      }
      v13 = 1;
    }
    if ( v13 )
      goto LABEL_39;
    goto LABEL_36;
  }
LABEL_40:
  if ( *((_DWORD *)a1 + 37) == 1 && ((a1[18] & 2) != 0) != (*((_BYTE *)a1 + 136) != 0) )
  {
    v7 = 1;
    if ( (a1[18] & 2) == 0
      || (unsigned int)pRelatedActivityId <= 4
      || (qword_1801EAA90 & 2) == 0
      || (qword_1801EAA98 & 2) != qword_1801EAA98 )
    {
      goto LABEL_49;
    }
    v25 = 0;
    v23 = &v20;
    *(_QWORD *)&v20 = a1;
    v24 = 8;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5381, a3, a4, 3u, &pData);
  }
  if ( !v7 && (a1[18] & 4) == 0 )
    goto LABEL_60;
LABEL_49:
  v20 = 0uLL;
  v21 = 0;
  LODWORD(v20) = *((_DWORD *)a1 + 37);
  v14 = *((_DWORD *)a1 + 4);
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    v15 = v14 | 0xC0;
  else
    v15 = v14 & 0xFFFFFF3F;
  DWORD1(v20) = v15;
  v16 = *((_BYTE *)a1 + 144);
  if ( (v16 & 8) != 0 )
    DWORD2(v20) = 1110704128;
  else
    DWORD2(v20) = 0;
  if ( (v16 & 0x10) != 0 )
    HIDWORD(v20) = 1110704128;
  else
    HIDWORD(v20) = 0;
  v17 = *a1;
  LOBYTE(v21) = (v16 & 2) != 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 16LL))(v17, &v20);
  if ( v4 >= 0 )
  {
    v18 = v21;
    *(_OWORD *)(a1 + 15) = v20;
    *((_DWORD *)a1 + 34) = v18;
LABEL_60:
    *((_BYTE *)a1 + 144) &= ~4u;
  }
  return (unsigned int)v4;
}
