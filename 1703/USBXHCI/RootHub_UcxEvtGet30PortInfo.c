/*
 * XREFs of RootHub_UcxEvtGet30PortInfo @ 0x1C000A8D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     RootHub_Read30PortSpeeds @ 0x1C000AAD0 (RootHub_Read30PortSpeeds.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

__int64 __fastcall RootHub_UcxEvtGet30PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // si
  unsigned __int16 v9; // bx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v13; // r8
  _WORD *v14; // rax
  _WORD *v15; // rax
  unsigned int v16; // eax
  int v17; // [rsp+28h] [rbp-70h]
  int v18; // [rsp+28h] [rbp-70h]
  int v19; // [rsp+28h] [rbp-70h]
  _QWORD v20[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0045200);
  memset(v20, 0, sizeof(v20));
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v20);
  v4 = v20[1];
  v5 = *(_QWORD *)(v20[1] + 8LL);
  if ( *(_DWORD *)v20[1] < 0x10u )
  {
    v17 = *(_DWORD *)v20[1];
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0xC4u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v17);
    v11 = 3221225485LL;
  }
  else
  {
    v6 = *(_WORD *)(v20[1] + 4LL);
    if ( v6 == *(_WORD *)(v3 + 22) )
    {
      v7 = *(_WORD *)(v20[1] + 6LL);
      if ( v7 < 0xCu )
      {
        v19 = v7;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          2u,
          0xAu,
          0xC6u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v19);
        v11 = 3221225485LL;
      }
      else
      {
        v8 = 0;
        v9 = 0;
        if ( *(_DWORD *)(v3 + 16) )
        {
          while ( v8 < *(_WORD *)(v4 + 4) )
          {
            v10 = 56LL * v9;
            if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 1) == 3 )
            {
              v13 = v5 + 8LL * v8;
              **(_WORD **)v13 = v9 + 1;
              v14 = *(_WORD **)v13;
              if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 5) == 1 )
                *((_DWORD *)v14 + 1) = 116;
              else
                *((_DWORD *)v14 + 1) = 102;
              v15 = *(_WORD **)v13;
              if ( *(_BYTE *)(v3 + 56) == 1 )
                *((_DWORD *)v15 + 2) = 116;
              else
                *((_DWORD *)v15 + 2) = 102;
              *(_BYTE *)(*(_QWORD *)v13 + 2LL) = *(_BYTE *)(v10 + *(_QWORD *)(v3 + 48));
              *(_BYTE *)(*(_QWORD *)v13 + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 2);
              if ( *(_WORD *)(v4 + 6) >= 0x18u )
              {
                v16 = RootHub_Read30PortSpeeds(
                        v3,
                        *(_QWORD *)(*(_QWORD *)v13 + 16LL),
                        *(_DWORD *)v13 + 14,
                        *(unsigned __int16 *)(*(_QWORD *)v13 + 12LL),
                        *(_QWORD *)(v10 + *(_QWORD *)(v3 + 48) + 48),
                        *(_WORD *)(v10 + *(_QWORD *)(v3 + 48) + 46),
                        *(_BYTE *)(v10 + *(_QWORD *)(v3 + 48)));
                v11 = v16;
                if ( v16 )
                  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
                           WdfDriverGlobals,
                           a2,
                           v11);
              }
              ++v8;
            }
            if ( (unsigned int)++v9 >= *(_DWORD *)(v3 + 16) )
              break;
          }
        }
        v11 = 0LL;
      }
    }
    else
    {
      v18 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
        2u,
        0xAu,
        0xC5u,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v18);
      v11 = 3221225485LL;
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v11);
}
