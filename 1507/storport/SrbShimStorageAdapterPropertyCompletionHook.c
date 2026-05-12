/*
 * XREFs of SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0039ED0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00256C8 (WPP_SF_.c)
 */

void __fastcall SrbShimStorageAdapterPropertyCompletionHook(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *(_QWORD *)(a2 + 56) >= 0x20uLL && *(int *)(a2 + 48) >= 0 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    if ( v2 )
    {
      *(_WORD *)(v2 + 30) = 0;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xFu,
          (__int64)&WPP_0e2033ffec88805dc5dfbfc3b9546116_Traceguids);
      }
    }
  }
}
