/*
 * XREFs of ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180030120
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ @ 0x18002FE6C (-FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ.c)
 *     ?ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z @ 0x180030528 (-ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005A6F0 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonProcessor::OnInputReport(ButtonProcessor *this, struct InputInfo *a2)
{
  ButtonProcessor *v3; // rbx
  unsigned int v4; // edi
  int v5; // r9d
  __int64 v6; // r10
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r14
  unsigned __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v17[236]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = this;
  v4 = 0;
  if ( (*(_DWORD *)a2 & 0x80) == 0 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 149;
LABEL_45:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v5, v4);
      return v4;
    }
    return v4;
  }
  if ( !*((_DWORD *)this + 16) || !*((_QWORD *)this + 7) )
    ButtonProcessor::FindRemoteEndpoint(this);
  v6 = *((unsigned int *)a2 + 176);
  if ( ((unsigned int)v6 > 0xD || *((_BYTE *)v3 + 81))
    && *((_BYTE *)v3 + 80)
    && (int)ButtonProcessor::ButtonToVKeyMapping(v3, v6, &v15) >= 0 )
  {
    memset(v17, 0, sizeof(v17));
    v7 = (_DWORD *)*((_QWORD *)v3 + 4);
    HIDWORD(v17[0]) = *v7;
    LODWORD(v17[0]) = v7[1];
    LODWORD(v17[1]) = *((_DWORD *)a2 + 2);
    v17[2] = *((_QWORD *)a2 + 2);
    WORD1(v17[88]) = v15;
    WORD2(v17[88]) = 64;
    LODWORD(v17[5]) = 1888;
    if ( !*((_BYTE *)a2 + 708) )
      WORD2(v17[88]) = 65;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)v3 + 11) + 48LL))(*((_QWORD *)v3 + 11), v17);
    if ( (v4 & 0x80000000) != 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 189, v4);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    return v4;
  }
  if ( !*((_DWORD *)v3 + 16) || !*((_QWORD *)v3 + 7) )
  {
    v4 = NonPointerProcessor::OnInputReport(v3, a2);
    if ( (v4 & 0x80000000) != 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 254;
      goto LABEL_45;
    }
    return v4;
  }
  this = 0LL;
  v16 = 0LL;
  if ( !*((_BYTE *)a2 + 697) )
  {
    if ( *((_BYTE *)a2 + 708) )
    {
      LOWORD(this) = 1;
      if ( *((_BYTE *)v3 + v6 + 96) )
        LOWORD(this) = 2;
      else
        *((_BYTE *)v3 + v6 + 96) = 1;
    }
    else if ( *((_BYTE *)v3 + v6 + 96) )
    {
      LOWORD(this) = 4;
      *((_BYTE *)v3 + v6 + 96) = 0;
    }
    goto LABEL_32;
  }
  if ( !*((_BYTE *)v3 + v6 + 96) )
  {
    LOWORD(this) = 5;
LABEL_32:
    LODWORD(v16) = *((_DWORD *)a2 + 176);
    v9 = (unsigned __int16)this | 0x8000;
    v10 = *((unsigned int *)v3 + 16);
    if ( !*((_BYTE *)a2 + 696) )
      v9 = (unsigned __int16)this;
    v11 = *((_QWORD *)v3 + 6);
    HIDWORD(v16) = v9;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64 *, int))(*(_QWORD *)v11 + 152LL))(
           v11,
           v10,
           4LL,
           &v16,
           8) < 0 )
    {
      v12 = *((_QWORD *)v3 + 7);
      if ( *((_DWORD *)v3 + 16) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 144LL))(*((_QWORD *)v3 + 7));
      v13 = *((_QWORD *)v3 + 7);
      *((_DWORD *)v3 + 16) = 0;
      if ( v13 != v12 )
      {
        *((_QWORD *)v3 + 7) = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    return v4;
  }
  v4 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 200;
    goto LABEL_45;
  }
  return v4;
}
