/*
 * XREFs of ?SendGamepadAsPointerMappings@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180033534
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800326C0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AUInputInfo@@K@Z @ 0x18003368C (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AUInputInfo@@K@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsPointerMappings(ControllerProcessor *this, struct InputInfo *a2)
{
  _DWORD *v2; // r9
  unsigned int v3; // ebx
  unsigned __int16 v4; // r8
  unsigned int i; // r10d
  int v8; // r11d
  unsigned int v9; // edx
  __int64 v10; // rcx
  _DWORD *v11; // rax
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  _BYTE v16[1888]; // [rsp+30h] [rbp-798h] BYREF

  v2 = &unk_1800AF3A4;
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v8 = *((_DWORD *)a2 + 178) & *(v2 - 1);
    if ( (v8 != 0) != ((*(v2 - 1) & *((_DWORD *)this + 44)) != 0) )
    {
      v9 = 0;
      v10 = 0LL;
      v11 = &unk_1800AF360;
      while ( *v2 != *v11 )
      {
        ++v9;
        ++v10;
        v11 += 3;
        if ( v9 >= 5 )
          goto LABEL_11;
      }
      *((_DWORD *)this + v10 + 319) = v8 != 0;
      if ( v8 )
        v12 = *((_DWORD *)&unk_1800AF360 + 3 * v10 + 2);
      else
        v12 = *((_DWORD *)&unk_1800AF360 + 3 * v10 + 1);
      v4 |= v12;
    }
LABEL_11:
    v2 += 2;
  }
  if ( v4 )
  {
    ControllerProcessor::BuildMouseInputInfo(this, v16, v4);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 32) + 48LL))(*((_QWORD *)this + 32), v16);
    v3 = v13;
    if ( v13 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v14, &MinInput_Warning_CheckResult, 12, 1010, v13);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return v3;
}
