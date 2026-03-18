/*
 * XREFs of HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0023774
 * Callers:
 *     HUBDSM_ValidatingAlternateConfigurationDescriptor @ 0x1C001A6D0 (HUBDSM_ValidatingAlternateConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C002B70C (HUBDESC_ParseConfigurationDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002E210 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheConfigDescriptor(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // r14d
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // r9
  int v7; // edx
  char v8; // al
  char v9; // al
  char v10; // al
  bool v11; // zf
  char v12; // al
  int v13; // eax
  __int64 v14; // r9
  unsigned __int16 v15; // r9
  __int64 v16; // rcx
  unsigned __int8 *v17; // rcx
  _BYTE *v18; // rdx
  char v19; // al
  PVOID PoolWithTag; // rax
  __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // rax
  _QWORD v25[7]; // [rsp+50h] [rbp-9h] BYREF
  char v26; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 2000);
  v26 = 0;
  v3 = 4077;
  if ( !v1 )
    v1 = a1 + 1716;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  memset(v25, 0, sizeof(v25));
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 240);
  LOWORD(v25[0]) = *(_WORD *)(a1 + 1974);
  HIDWORD(v25[0]) = *(_DWORD *)(a1 + 156);
  v8 = BYTE5(v25[1]);
  if ( (v5 & 0x20) != 0 )
    v8 = 1;
  v25[5] = a1;
  BYTE5(v25[1]) = v8;
  v9 = HIBYTE(v25[1]);
  if ( (v5 & 0x2000) != 0 )
    v9 = 1;
  HIBYTE(v25[1]) = v9;
  v10 = BYTE4(v25[1]);
  if ( (v5 & 0x4000) != 0 )
    v10 = 1;
  v11 = (*(_DWORD *)(a1 + 1628) & 0x200000) == 0;
  BYTE4(v25[1]) = v10;
  v12 = v25[6];
  if ( !v11 )
    v12 = 1;
  LOBYTE(v25[6]) = v12;
  v13 = *(_DWORD *)(v6 + 220);
  v14 = *(_QWORD *)(v6 + 1432);
  LODWORD(v25[2]) = v13;
  v25[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v25[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(v1, v7, (unsigned int)v25, v14, (__int64)&v26) )
  {
    *(_DWORD *)(a1 + 2416) = 1073807364;
    v15 = 67;
LABEL_59:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v15,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids);
LABEL_60:
    v3 = 4065;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      Template_p(
        v16,
        &USBHUB3_ETW_EVENT_INVALID_CONFIGURATION_DESCRIPTOR,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24));
    return v3;
  }
  if ( *(_WORD *)(v1 + 2) != *(_WORD *)(a1 + 1718) )
  {
    *(_DWORD *)(a1 + 2416) = 1073807364;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x44u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      *(unsigned __int16 *)(v1 + 2),
      *(unsigned __int16 *)(a1 + 1718));
    ((void (__fastcall *)(_QWORD, __int64))v25[3])(v25[5], 61LL);
    goto LABEL_60;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x2000u);
  if ( v26 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1624), 0x40u);
  if ( *(_BYTE *)(a1 + 1989) > 1u )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1624), 0x80u);
    if ( *(_BYTE *)(a1 + 1989) > 1u
      && *(_BYTE *)(v1 + 4) > 1u
      && *(_BYTE *)(a1 + 1976) == 0xEF
      && *(_BYTE *)(a1 + 1977) == 2
      && *(_BYTE *)(a1 + 1978) == 1 )
    {
      v17 = (unsigned __int8 *)(v1 + 9);
      while ( (unsigned __int64)v17 < v1 + (unsigned __int64)*(unsigned __int16 *)(v1 + 2) )
      {
        v18 = v17;
        v17 += *v17;
        if ( v18[1] == 11 && v18[4] == 1 && !v18[5] && v18[6] == 32 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 4u);
          break;
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 1616) & 4) == 0 && *(_BYTE *)(a1 + 1989) == 1 && *(_BYTE *)(v1 + 4) > 1u )
  {
    v19 = *(_BYTE *)(a1 + 1976);
    if ( !v19 || v19 == -17 && *(_BYTE *)(a1 + 1977) == 2 && *(_BYTE *)(a1 + 1978) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 4u);
  }
  if ( !*(_QWORD *)(a1 + 2000) )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(v1 + 2), 0x64334855u);
    *(_QWORD *)(a1 + 2000) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v15 = 69;
      goto LABEL_59;
    }
    memmove(PoolWithTag, (const void *)v1, *(unsigned __int16 *)(v1 + 2));
    v1 = *(_QWORD *)(a1 + 2000);
  }
  v21 = HUBDESC_ParseConfigurationDescriptor(v1, v1, -1, -1, -1, -1, -1, 0LL, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  *(_QWORD *)(a1 + 1992) = v21;
  if ( v21 )
  {
    if ( *(_BYTE *)(v21 + 5) == 9 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 2u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x800u);
    }
    else if ( (*(_DWORD *)(a1 + 1616) & 4) == 0
           && *(_WORD *)(a1 + 1974) > 0x200u
           && (*(_DWORD *)(a1 + 1628) & 0x800) == 0 )
    {
      if ( (v22 = *(_DWORD *)(a1 + 156), v22 == 3) && (*(_DWORD *)(*(_QWORD *)a1 + 744LL) & 1) != 0 || v22 == 2 )
      {
        v23 = HUBDESC_ParseConfigurationDescriptor(
                v1,
                v21,
                *(unsigned __int8 *)(v21 + 2),
                -1,
                8,
                6,
                98,
                0LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
        if ( v23 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x800u);
          *(_QWORD *)(a1 + 1992) = v23;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 1616) & 6) == 6 )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x46u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids);
  if ( (*(_BYTE *)(v1 + 7) & 0x20) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1616), 0x100u);
  if ( (*(_DWORD *)(a1 + 1628) & 0x100000) != 0 )
  {
    *(_DWORD *)(a1 + 2416) = 1073807387;
    v15 = 71;
    goto LABEL_59;
  }
  return v3;
}
