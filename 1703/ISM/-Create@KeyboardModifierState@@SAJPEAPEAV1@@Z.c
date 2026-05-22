/*
 * XREFs of ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003BD50
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18000BC44 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003C490 (-Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@PointerProcessor@@IEAAJXZ @ 0x18005D9F8 (-Initialize@PointerProcessor@@IEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x18003BF8C (-Initialize@KeyboardModifierState@@AEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardModifierState::Create(struct KeyboardModifierState **a1)
{
  unsigned int v2; // edi
  struct KeyboardModifierState *v3; // rbx
  struct KeyboardModifierState *v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx

  v2 = 0;
  if ( KeyboardModifierState::s_pKeyboardModifierState )
  {
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)KeyboardModifierState::s_pKeyboardModifierState
                                                           + 8LL))(KeyboardModifierState::s_pKeyboardModifierState);
    v3 = KeyboardModifierState::s_pKeyboardModifierState;
LABEL_17:
    *a1 = v3;
    return v2;
  }
  v4 = (struct KeyboardModifierState *)malloc(0x58uLL);
  v3 = v4;
  if ( v4 )
    memset(v4, 0, 0x58uLL);
  if ( v3 )
  {
    *(_QWORD *)v3 = &RefCountedObject::`vftable';
    v6 = (_DWORD *)((char *)v3 + 16);
    *((_DWORD *)v3 + 2) = 1;
    *(_QWORD *)v3 = &KeyboardModifierState::`vftable';
    *((_DWORD *)v3 + 20) = -1;
    memset((char *)v3 + 16, 0, 0x40uLL);
    v5 = 8LL;
    do
    {
      *v6 = *((_DWORD *)v3 + 20);
      v6 += 2;
      --v5;
    }
    while ( v5 );
    KeyboardModifierState::s_pKeyboardModifierState = 0LL;
    *((_DWORD *)v3 + 21) = 0;
  }
  if ( v3 )
  {
    v7 = KeyboardModifierState::Initialize(v3);
    v2 = v7;
    if ( v7 >= 0 )
    {
      KeyboardModifierState::s_pKeyboardModifierState = v3;
      goto LABEL_17;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 30, v7);
  }
  else
  {
    v2 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 29, 14);
  }
  return v2;
}
