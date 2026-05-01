/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001AEF0
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001C580 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpMemoryMonitorUpdateMemoryUsageLevel(__int64 a1, int a2)
{
  int v3; // ebx
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+34h] [rbp-25h] BYREF
  int v10; // [rsp+38h] [rbp-21h] BYREF
  int v11; // [rsp+3Ch] [rbp-1Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  int *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  int *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]

  if ( a2 <= 1 )
    goto LABEL_2;
  v3 = 2;
  if ( a2 == 2 )
  {
    v3 = 1;
  }
  else if ( (unsigned int)(a2 - 3) > 1 )
  {
LABEL_2:
    v3 = 0;
  }
  if ( v3 != *(_DWORD *)(a1 + 96) )
  {
    v8 = v3;
    v9 = RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_LEVEL, 0LL, &v8, 4LL, 0LL);
    if ( (unsigned int)dword_18004D030 > 5 )
    {
      if ( TlgKeywordOn(v4, 1uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v13 = &v9;
        v10 = *(_DWORD *)(a1 + 96);
        v16 = &v10;
        v11 = v8;
        v19 = &v11;
        v14 = 4;
        v17 = 4;
        v20 = 4;
        TlgWrite(v5, &unk_180043CE6, v6, v7, 5u, &pData);
      }
    }
    *(_DWORD *)(a1 + 96) = v3;
  }
}
