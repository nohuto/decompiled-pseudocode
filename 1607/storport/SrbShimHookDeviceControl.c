/*
 * XREFs of SrbShimHookDeviceControl @ 0x1C0019F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 */

__int64 __fastcall SrbShimHookDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // r8
  __int64 v7; // rsi
  __int64 v8; // rax
  _DWORD *v10; // rax

  v4 = *(unsigned __int8 **)(a2 + 184);
  v7 = *v4;
  if ( *((_DWORD *)v4 + 6) == 2954240 )
  {
    v10 = *(_DWORD **)(a2 + 24);
    if ( v10 )
    {
      if ( !v10[1] && *v10 == 1 && *((_DWORD *)v4 + 2) >= 0x20u )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_89b78b25eb713f58affd896bde38d0ee_Traceguids, a4);
        }
        (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), _QWORD))(qword_1C004F0E8 + 8))(
          a1,
          a2,
          SrbShimStorageAdapterPropertyCompletionHook,
          0LL);
      }
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))qword_1C004F0E8)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v8 + 8 * v7 + 32))(a1, a2);
}
