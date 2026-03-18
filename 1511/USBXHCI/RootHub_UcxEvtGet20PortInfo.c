/*
 * XREFs of RootHub_UcxEvtGet20PortInfo @ 0x1C000A260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 */

__int64 __fastcall RootHub_UcxEvtGet20PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r11
  __int64 v5; // rdi
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  unsigned __int16 v9; // r10
  __int64 i; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _WORD *v13; // rax
  _WORD *v14; // rax
  int v16; // [rsp+28h] [rbp-50h]
  int v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+28h] [rbp-50h]
  _QWORD v19[5]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0041228);
  memset(v19, 0, sizeof(v19));
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v19);
  v4 = v19[1];
  v5 = *(_QWORD *)(v19[1] + 8LL);
  if ( *(_DWORD *)v19[1] < 0x10u )
  {
    v16 = *(_DWORD *)v19[1];
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0xC1u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v16);
    v8 = -1073741811;
  }
  else
  {
    v6 = *(_WORD *)(v19[1] + 4LL);
    if ( v6 == *(_WORD *)(v3 + 20) )
    {
      v7 = *(_WORD *)(v19[1] + 6LL);
      if ( v7 < 0x14u )
      {
        v18 = v7;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          2u,
          0xAu,
          0xC3u,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v18);
        v8 = -1073741811;
      }
      else
      {
        v8 = 0;
        v9 = 0;
        for ( i = 0LL; (unsigned int)(unsigned __int16)i < *(_DWORD *)(v3 + 16); LOWORD(i) = i + 1 )
        {
          if ( v9 >= *(_WORD *)(v4 + 4) )
            break;
          v11 = 56LL * (unsigned __int16)i;
          if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 1) == 2 )
          {
            v12 = v5 + 8LL * v9;
            **(_WORD **)v12 = i + 1;
            v13 = *(_WORD **)v12;
            if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 5) == 1 )
              *((_DWORD *)v13 + 1) = 116;
            else
              *((_DWORD *)v13 + 1) = 102;
            v14 = *(_WORD **)v12;
            if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 4) == 1 )
              *((_DWORD *)v14 + 2) = 116;
            else
              *((_DWORD *)v14 + 2) = 102;
            if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 232LL) & 0x400000LL) == 0 )
              *(_BYTE *)(*(_QWORD *)v12 + 16LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 7);
            ++v9;
            *(_BYTE *)(*(_QWORD *)v12 + 2LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48));
            *(_BYTE *)(*(_QWORD *)v12 + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v11 + 2);
          }
        }
      }
    }
    else
    {
      v17 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        2u,
        0xAu,
        0xC2u,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v17);
      v8 = -1073741811;
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v8,
           i);
}
