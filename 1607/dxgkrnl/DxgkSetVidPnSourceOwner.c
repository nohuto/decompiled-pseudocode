/*
 * XREFs of DxgkSetVidPnSourceOwner @ 0x1C0070880
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner(struct _D3DKMT_SETVIDPNSOURCEOWNER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r8
  _QWORD v8[8]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  EtwActivityIdControl(3u, (LPGUID)&v8[1]);
  v8[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v8[3]) = 47;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v3, 2027);
  v5 = SetVidPnSourceOwnerInternal(
         a1,
         (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS)1,
         (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v8);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v6, 2027);
  return v5;
}
