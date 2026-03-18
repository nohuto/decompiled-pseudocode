/*
 * XREFs of ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C016B068
 * Callers:
 *     DxgkSetHighPrecisionBrightness @ 0x1C016B4D0 (DxgkSetHighPrecisionBrightness.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C016AACC (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

__int64 __fastcall LPMDisplayCtrl::SetCurrentBrightnessLevel(
        LPMDisplayCtrl *this,
        const struct _D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS *a2)
{
  PFILE_OBJECT *v2; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  int v9; // edx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 InputBuffer; // [rsp+40h] [rbp-9h] BYREF
  int v15; // [rsp+48h] [rbp-1h]
  _QWORD v16[8]; // [rsp+50h] [rbp+7h] BYREF

  v2 = FileObject;
  if ( !*((_DWORD *)FileObject + 11) )
  {
    v4 = WdLogNewEntry5_WdError(FileObject);
    v5 = -1073741808;
    *(_QWORD *)(v4 + 24) = -1073741808LL;
LABEL_3:
    WdLogEvent5_WdError(v4);
    return v5;
  }
  if ( *(_DWORD *)a2 > 0x64u )
  {
    v4 = WdLogNewEntry5_WdError(FileObject);
    v7 = *(unsigned int *)a2;
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = v7;
    *(_QWORD *)(v4 + 32) = -1073741811LL;
    goto LABEL_3;
  }
  v8 = *((_BYTE *)a2 + 8);
  if ( *((_DWORD *)FileObject + 12) )
  {
    if ( v8 )
      v9 = *((_DWORD *)FileObject + 40);
    else
      v9 = *((_DWORD *)FileObject + 41);
  }
  else if ( v8 )
  {
    v9 = *((_DWORD *)FileObject + 37);
  }
  else
  {
    v9 = *((_DWORD *)FileObject + 36);
  }
  *((_DWORD *)FileObject + 12) = v8;
  InputBuffer = 0LL;
  v10 = *((_DWORD *)a2 + 1);
  v15 = v9;
  HIDWORD(InputBuffer) = v10;
  v11 = LPMDisplayCtrl::CallDriver(v2, 0x8321213C, &InputBuffer, 0xCu, 0LL, 0, 0LL);
  memset(v16, 0, sizeof(v16));
  memset(&v16[1], 0, 36);
  HIDWORD(v16[6]) = *(_DWORD *)a2;
  HIDWORD(v16[7]) = *((_DWORD *)a2 + 1);
  v16[0] = 0x4000000006LL;
  LODWORD(v16[6]) = 67;
  LODWORD(v16[7]) = v11;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16);
  if ( (int)v11 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)a2 + 1);
    *(_QWORD *)(v13 + 32) = v11;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v11;
}
