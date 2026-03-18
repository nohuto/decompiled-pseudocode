/*
 * XREFs of Isoch_TransferData_Initialize @ 0x1C0002AB8
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C000C8B0 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C002A950 (WPP_RECORDER_SF_DDq.c)
 */

__int64 __fastcall Isoch_TransferData_Initialize(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rax
  struct _MDL *Mdl; // rax
  __int64 v11; // rdx
  int v12; // eax
  _QWORD v14[5]; // [rsp+40h] [rbp-58h] BYREF

  v6 = 0;
  memset(v14, 0, sizeof(v14));
  LOWORD(v14[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v14);
  v7 = v14[1];
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_1C0043070);
  memset(v8, 0, 0x200uLL);
  v8[1] = v8;
  *v8 = v8;
  *((_BYTE *)v8 + 16) = 1;
  v8[3] = a2;
  v8[4] = v7;
  v8[5] = a1;
  *((_DWORD *)v8 + 13) = 259;
  *((_DWORD *)v8 + 12) = 0;
  v8[7] = 0LL;
  *((_DWORD *)v8 + 16) = *(_DWORD *)(v7 + 36);
  *(_QWORD *)((char *)v8 + 68) = 0LL;
  *((_DWORD *)v8 + 19) = 0;
  *((_DWORD *)v8 + 20) = *(_DWORD *)(v7 + 132);
  *(_QWORD *)((char *)v8 + 84) = 0LL;
  *(_QWORD *)((char *)v8 + 92) = 0LL;
  *((_DWORD *)v8 + 25) = 0;
  *((_DWORD *)v8 + 28) = 896;
  *((_WORD *)v8 + 58) = 0;
  *((_BYTE *)v8 + 118) = 0;
  v9 = *(_QWORD *)(v7 + 48);
  if ( v9 )
  {
    v8[7] = v9;
  }
  else
  {
    Mdl = IoAllocateMdl(*(PVOID *)(v7 + 40), *((_DWORD *)v8 + 16), 0, 0, 0LL);
    v8[7] = Mdl;
    if ( Mdl )
    {
      MmBuildMdlForNonPagedPool(Mdl);
    }
    else
    {
      v6 = -1073741670;
      v11 = a1[7];
      v12 = *(_DWORD *)(v11 + 144);
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_DDq(
        *(_QWORD *)(a1[5] + 64LL),
        v11,
        *(unsigned __int8 *)(a1[6] + 135LL),
        15,
        (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
        *(_BYTE *)(a1[6] + 135LL),
        v12,
        a2);
    }
  }
  *a3 = v8;
  return v6;
}
