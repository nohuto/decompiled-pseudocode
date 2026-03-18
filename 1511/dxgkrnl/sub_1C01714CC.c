/*
 * XREFs of sub_1C01714CC @ 0x1C01714CC
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C0170828 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C0170EA0 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqq @ 0x1C001C26C (Template_pqqq.c)
 */

__int64 __fastcall sub_1C01714CC(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r9
  unsigned __int8 v6; // bp
  __int64 (__fastcall *v7)(_QWORD, __int64); // rax
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]

  v3 = a2;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 64) + 2920LL);
  v7 = *(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 40);
  LOBYTE(a2) = a3;
  v8 = v7(*(_QWORD *)(v3 + 8), a2);
  v10 = v8;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v14 = v8;
    v13 = a3;
    v12 = v6;
    Template_pqqq(a3, &EventBrightness, v9, a1, v12, v13, v14);
  }
  return v10;
}
