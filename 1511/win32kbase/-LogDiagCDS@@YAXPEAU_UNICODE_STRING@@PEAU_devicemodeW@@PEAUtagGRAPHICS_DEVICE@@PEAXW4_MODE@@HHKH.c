/*
 * XREFs of ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C00528E8
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C0050464 (DrvChangeDisplaySettings.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1C0052ABC (-FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C0085B60 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall LogDiagCDS(
        __int64 a1,
        struct _devicemodeW *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        char a15,
        __int64 a16)
{
  char *v19; // rax
  char *v20; // rbx
  int v21; // ecx
  unsigned int v22; // r8d
  int v23; // r8d
  struct _devicemodeW *const v24; // r9
  __int64 v26; // rax

  v19 = (char *)PALLOCMEM2(0xA0uLL, 1936876615LL, 1);
  v20 = v19;
  if ( v19 )
  {
    memset(v19, 0, 0xA0uLL);
    *((_DWORD *)v20 + 10) = 0;
    *((_QWORD *)v20 + 4) = 0LL;
    *(_DWORD *)v20 = 5;
    *((_DWORD *)v20 + 1) = 160;
    *((_QWORD *)v20 + 1) = 0LL;
    *((_QWORD *)v20 + 2) = 0LL;
    *((_QWORD *)v20 + 3) = 0LL;
    *((_QWORD *)v20 + 8) = a11;
    *((_DWORD *)v20 + 14) = a12;
    *((_DWORD *)v20 + 13) = a13;
    *((_DWORD *)v20 + 15) = a14;
    *((_DWORD *)v20 + 12) ^= ((a2 != 0LL) ^ (unsigned __int8)*((_DWORD *)v20 + 12)) & 1;
    v21 = *((_DWORD *)v20 + 12) ^ (*((_DWORD *)v20 + 12) ^ ((a16 != 0) << 12)) & 0x1000 ^ ((unsigned __int8)v20[48] ^ (unsigned __int8)(2 * (a1 != 0))) & 2 ^ ((unsigned __int8)(v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2) ^ (unsigned __int8)(4 * (a5 == 0))) & 4 ^ ((unsigned __int8)(v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (4 * (a5 == 0))) & 4) ^ (unsigned __int8)(8 * (a6 != 0))) & 8 ^ ((unsigned __int8)(v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (4 * (a5 == 0))) & 4 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (4 * (a5 == 0))) & 4 ^ (8 * (a6 != 0))) & 8) ^ (unsigned __int8)(16 * (a7 != 0))) & 0x10;
    v22 = (v21 ^ ((unsigned __int8)(v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (4 * (a5 == 0))) & 4 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (4 * (a5 == 0))) & 4 ^ (8 * (a6 != 0))) & 8 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (4 * (a5 == 0))) & 4 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (v20[48] ^ (v20[48] ^ (2 * (a1 != 0))) & 2 ^ (4 * (a5 == 0))) & 4 ^ (8 * (a6 != 0))) & 8 ^ (16 * (a7 != 0))) & 0x10) ^ (unsigned __int8)(32 * (a9 != 0))) & 0x20) & 0xFFFF1FBF | (((a10 != 0) | ((a15 & 7) << 7)) << 6);
    *((_DWORD *)v20 + 12) = v22;
    if ( a3 )
    {
      v23 = v22 | 0x800;
      *((_DWORD *)v20 + 12) = v23;
      *((_DWORD *)v20 + 12) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a3 + 272) << 7)) & 0x780;
    }
    FillSimpleDevModeField(a2, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v20 + 72));
    FillSimpleDevModeField(v24, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v20 + 116));
    ((void (__fastcall *)(char *))qword_1C01041B8)(v20);
    return Win32FreePool();
  }
  else
  {
    v26 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v26 + 24) = 160LL;
    WdLogEvent5_WdLowResource(v26);
    return DrvDxgkLogCodePointPacket(5LL, a12, a13, a14);
  }
}
