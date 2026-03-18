/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x1C0002AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Controller_SetControllerGone @ 0x1C0015AC0 (Controller_SetControllerGone.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C001EA80 (RootHub_HideInvalidDebugPortStatusAndChange.c)
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
  int v19; // edx
  unsigned __int16 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  _QWORD v24[5]; // [rsp+40h] [rbp-58h] BYREF

  memset(v24, 0, sizeof(v24));
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a2,
    v24);
  v4 = v24[1];
  v5 = *(void **)(v24[1] + 40LL);
  v6 = *(unsigned int *)(v24[1] + 36LL);
  v7 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C00401F8);
  v8 = v7;
  v9 = *(_QWORD *)(v7 + 8);
  v10 = *(_BYTE *)(*(_QWORD *)(v9 + 80) + 16LL);
  if ( !v10 || *(_BYTE *)(v9 + 285) )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v9 + 64),
      2u,
      3u,
      0xD7u,
      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      v10,
      *(unsigned __int8 *)(v9 + 285));
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
      2u,
      0xAu,
      0xB5u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v7 + 57) )
  {
    if ( !*(_DWORD *)(v9 + 344) && *(_DWORD *)(v9 + 384) != 1 )
      (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 3040))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        *(_QWORD *)(v9 + 376));
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
    return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 2104))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             a2);
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
      v20 = 182;
      goto LABEL_33;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 16 * v13) & 0x1E0) == 0x1E0 )
      v15 &= ~0x400000u;
    if ( (v15 & 0x760000) != 0 )
    {
      *((_BYTE *)v5 + ((unsigned __int64)v12 >> 3)) |= 1 << (v12 & 7);
      LODWORD(v23) = v15;
      LODWORD(v22) = v12;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
        4u,
        0xAu,
        0xB7u,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v22,
        v23);
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
      LODWORD(v23) = *v17;
      LODWORD(v22) = v12;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
        4u,
        0xAu,
        0xB9u,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v22,
        v23);
      if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v8, v12) )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
          v19,
          10,
          186,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v12);
      }
      else
      {
        *((_BYTE *)v5 + ((unsigned __int64)v12 >> 3)) |= 1 << (v12 & 7);
      }
    }
    goto LABEL_18;
  }
  v20 = 184;
LABEL_33:
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL),
    2u,
    0xAu,
    v20,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
  LOBYTE(v21) = 1;
  Controller_SetControllerGone(*(_QWORD *)(v8 + 8), v21);
LABEL_35:
  *(_DWORD *)(v4 + 4) = -1073713152;
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 2104))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           a2);
}
