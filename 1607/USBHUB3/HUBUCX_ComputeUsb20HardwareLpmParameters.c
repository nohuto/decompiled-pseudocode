/*
 * XREFs of HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x1C001D5E0
 * Callers:
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C0018350 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C001C4C0 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBUCX_ComputeUsb20HardwareLpmParameters(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  char v5; // dl
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // r10d
  unsigned int v10; // eax
  int v11; // ecx
  char result; // al

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00580E8);
  if ( (*(_DWORD *)(a1 + 1616) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 2208) = 2;
LABEL_3:
    v5 = 0;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a1 + 1628) & 0x20000) != 0 )
  {
    *(_DWORD *)(a1 + 2208) = 3;
    goto LABEL_3;
  }
  v5 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 42LL) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 2208) = 4;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v4 + 4) & 0x8000) == 0 )
  {
    *(_DWORD *)(a1 + 2208) = 5;
    goto LABEL_3;
  }
  v6 = *(_DWORD *)(a1 + 2424);
  if ( (v6 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 2208) = 6;
    goto LABEL_3;
  }
  if ( (v6 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 2208) = 7;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x40) == 0 )
  {
    *(_DWORD *)(a1 + 2208) = 8;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 2208) = 1;
  *(_DWORD *)(a2 + 60) |= 1u;
  *(_DWORD *)(a2 + 24) |= 0x20u;
  v7 = *(_DWORD *)(a2 + 60) & 0xFFF807FF | (*(unsigned __int8 *)(v4 + 72) << 11);
  *(_DWORD *)(a2 + 60) = v7;
  if ( (*(_DWORD *)(a1 + 1628) & 0x40000) == 0 )
    *(_DWORD *)(a2 + 60) = v7 | 2;
  v8 = *(_DWORD *)(a2 + 60) & 0xFFFFF803 | 0x20;
  *(_DWORD *)(a2 + 60) = v8;
  v9 = *(_DWORD *)(a1 + 2424);
  if ( (v9 & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x80u) != 0 )
  {
    if ( (v9 & 4) != 0 )
      *(_DWORD *)(a2 + 60) = v8 ^ ((unsigned __int8)(v9 >> 1) ^ (unsigned __int8)v8) & 0x78;
    v10 = *(_DWORD *)(a1 + 2424);
    if ( (v10 & 8) != 0 )
      *(_DWORD *)(a2 + 60) = *(_DWORD *)(a2 + 60) ^ (*(_DWORD *)(a2 + 60) ^ (v10 >> 1)) & 0x780 | 4;
  }
LABEL_24:
  v11 = *(_DWORD *)(a1 + 2208);
  if ( (*(_DWORD *)(a1 + 1440) & 0x800) != 0 )
    v11 = 9;
  result = v5;
  *(_DWORD *)(a1 + 2208) = v11;
  return result;
}
