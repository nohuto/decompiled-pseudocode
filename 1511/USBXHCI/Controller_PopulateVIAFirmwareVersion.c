/*
 * XREFs of Controller_PopulateVIAFirmwareVersion @ 0x1C004F5F8
 * Callers:
 *     Controller_PopulatePciDeviceInformation @ 0x1C004A580 (Controller_PopulatePciDeviceInformation.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008EC4 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_PopulateVIAFirmwareVersion(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 (__fastcall *v7)(__int64, _QWORD, _DWORD *, __int64, int); // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int16 v10; // r9
  __int64 (__fastcall *v11)(__int64, _QWORD, _BYTE *, __int64, int); // rax
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // r14d
  int v15; // r14d
  int v16; // [rsp+28h] [rbp-28h]
  unsigned __int8 v17; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v18[3]; // [rsp+41h] [rbp-Fh] BYREF
  _DWORD v19[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int8 v20; // [rsp+80h] [rbp+30h] BYREF

  if ( *(_WORD *)(a3 + 2) == 13362 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64, int))(a2 + 56);
    v12 = *(_QWORD *)(a2 + 8);
    v18[0] = 0;
    v17 = 0;
    v20 = 0;
    v13 = v11(v12, 0LL, v18, 609LL, 1);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v17,
            610LL,
            1)
        + v13;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v20,
            611LL,
            1)
        + v14;
    if ( v15 != 3 )
    {
      v10 = 228;
      v16 = v15;
LABEL_9:
      WPP_RECORDER_SF_d(a1, 2u, 3u, v10, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v16);
      return;
    }
    WPP_RECORDER_SF_DDD(a1, 4u, 3u, 0xE5u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v20, v17, v18[0]);
    *a4 = v18[0] | ((v17 | ((unsigned __int64)v20 << 8)) << 8);
  }
  else if ( *(_WORD *)(a3 + 2) == 13443 || *(unsigned __int16 *)(a3 + 2) == 37377 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a2 + 56);
    v8 = *(_QWORD *)(a2 + 8);
    v19[0] = 0;
    v9 = v7(v8, 0LL, v19, 80LL, 4);
    if ( v9 == 4 )
    {
      WPP_RECORDER_SF_d(a1, 4u, 3u, 0xE7u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v19[0]);
      *a4 = v19[0];
      return;
    }
    v10 = 230;
    v16 = v9;
    goto LABEL_9;
  }
}
