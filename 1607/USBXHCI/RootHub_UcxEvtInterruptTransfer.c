/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x1C0006050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Controller_SetControllerGone @ 0x1C001F5F0 (Controller_SetControllerGone.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C002768C (RootHub_HideInvalidDebugPortStatusAndChange.c)
 */

__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  void *v5; // rbp
  size_t v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r10
  unsigned __int8 v10; // dl
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  char v14; // r8
  int v15; // eax
  _DWORD *v17; // rdx
  unsigned __int16 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+30h] [rbp-68h]
  _QWORD v22[5]; // [rsp+40h] [rbp-58h] BYREF

  memset(v22, 0, sizeof(v22));
  LOWORD(v22[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v22);
  v4 = v22[1];
  v5 = *(void **)(v22[1] + 40LL);
  v6 = *(unsigned int *)(v22[1] + 36LL);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043200);
  v8 = v7;
  v9 = *(_QWORD *)(v7 + 8);
  v10 = *(_BYTE *)(*(_QWORD *)(v9 + 80) + 16LL);
  if ( !v10 || *(_BYTE *)(v9 + 293) )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v9 + 64),
      2u,
      3u,
      0xDCu,
      (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
      v10,
      *(unsigned __int8 *)(v9 + 293));
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
      2u,
      0xAu,
      0xB5u,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids);
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v7 + 57) )
  {
    if ( !*(_DWORD *)(v9 + 352) && *(_DWORD *)(v9 + 392) != 1 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
        WdfDriverGlobals,
        *(_QWORD *)(v9 + 384));
    *(_BYTE *)(v8 + 57) = 0;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_19;
  memset(v5, 0, v6);
  if ( (unsigned int)v6 > 0x20 )
    v11 = 255;
  else
    v11 = 8 * v6 - 1;
  if ( v11 > *(_DWORD *)(v8 + 16) )
    v11 = *(_DWORD *)(v8 + 16);
  v12 = 1;
  if ( !v11 )
  {
LABEL_19:
    *(_DWORD *)(v4 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
  }
  while ( 1 )
  {
    v13 = v12 - 1;
    v14 = *(_BYTE *)(56 * v13 + *(_QWORD *)(v8 + 48) + 1);
    if ( v14 != 2 )
      break;
    v15 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 16 * v13);
    if ( v15 == -1 )
    {
      v18 = 182;
      goto LABEL_33;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 16 * v13) & 0x1E0) == 0x1E0 )
      v15 &= ~0x400000u;
    if ( (v15 & 0x760000) != 0 )
    {
      *((_BYTE *)v5 + ((unsigned __int64)v12 >> 3)) |= 1 << (v12 & 7);
      LODWORD(v21) = v15;
      LODWORD(v20) = v12;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
        4u,
        0xAu,
        0xB7u,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v20,
        v21);
    }
LABEL_18:
    if ( ++v12 > v11 )
      goto LABEL_19;
  }
  if ( v14 != 3 )
    goto LABEL_18;
  v17 = (_DWORD *)(*(_QWORD *)(v8 + 40) + 16 * v13);
  if ( *v17 != -1 )
  {
    if ( (*v17 & 0xFA0000) != 0 )
    {
      LODWORD(v21) = *v17;
      LODWORD(v20) = v12;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
        4u,
        0xAu,
        0xB9u,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v20,
        v21);
      if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v8, v12) )
      {
        LODWORD(v20) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
          4u,
          0xAu,
          0xBAu,
          (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
          v20);
      }
      else
      {
        *((_BYTE *)v5 + ((unsigned __int64)v12 >> 3)) |= 1 << (v12 & 7);
      }
    }
    goto LABEL_18;
  }
  v18 = 184;
LABEL_33:
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
    2u,
    0xAu,
    v18,
    (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids);
  LOBYTE(v19) = 1;
  Controller_SetControllerGone(*(_QWORD *)(v8 + 8), v19);
LABEL_35:
  *(_DWORD *)(v4 + 4) = -1073713152;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
}
