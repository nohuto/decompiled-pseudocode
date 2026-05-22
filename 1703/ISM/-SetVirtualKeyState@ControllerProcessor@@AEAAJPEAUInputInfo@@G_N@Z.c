/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x180034FE8
 * Callers:
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180035284 (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z @ 0x180035308 (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z @ 0x180035394 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RemoveKey@?$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z @ 0x180035BD8 (-RemoveKey@-$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::SetVirtualKeyState(__int64 this, struct InputInfo *a2, __int16 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rsi
  _WORD *v9; // rax
  __int16 v10; // r10
  __int64 v11; // r9
  char v12; // di
  int v13; // r9d
  __int64 v14; // rax
  _WORD *v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r9d
  char *v19; // rcx
  int v20; // edx
  _WORD *i; // rax
  _DWORD *v22; // rcx
  _WORD v24[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v25[236]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0;
  v24[0] = a3;
  v8 = this;
  if ( !a4 )
  {
    v19 = (char *)(this + 64);
    if ( a3 == *((_WORD *)v19 + 48) )
      return v4;
    v20 = 0;
    for ( i = v19; *i != a3; i += 2 )
    {
      if ( (unsigned int)++v20 >= 0x18 )
        return v4;
    }
    v16 = FixedSizeMap<unsigned short,bool,24>::RemoveKey(v19, v24);
    if ( v16 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_40;
      v18 = 1965;
      goto LABEL_39;
    }
LABEL_18:
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v8 + 280) + 80LL))(
            *(_QWORD *)(v8 + 280),
            6640000LL,
            830000LL,
            v11);
    if ( v16 >= 0 )
    {
      memset(v25, 0, sizeof(v25));
      v22 = *(_DWORD **)(v8 + 32);
      HIDWORD(v25[0]) = *v22;
      LODWORD(v25[0]) = v22[1];
      v25[84] = *((_QWORD *)a2 + 84);
      LODWORD(v25[1]) = *((_DWORD *)a2 + 2);
      v25[2] = *((_QWORD *)a2 + 2);
      WORD2(v25[88]) = 64;
      LODWORD(v25[5]) = 1888;
      WORD1(v25[88]) = a3;
      if ( !a4 )
        WORD2(v25[88]) = 65;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v8 + 240) + 48LL))(*(_QWORD *)(v8 + 240), v25);
      v4 = v16;
      if ( v16 >= 0 )
        return v4;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_40:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v18 = 1999;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_40;
      v18 = 1974;
    }
LABEL_39:
    Template_qqq(v17, &MinInput_Warning_CheckResult, 12, v18, v16);
    goto LABEL_40;
  }
  if ( a3 == *(_WORD *)(this + 160) )
  {
LABEL_6:
    v10 = *(_WORD *)(v8 + 160);
    v11 = 0LL;
    LOBYTE(this) = 0;
    if ( a3 == v10 )
    {
      v12 = 87;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_24;
      v13 = 133;
      goto LABEL_23;
    }
    v14 = 0LL;
    v15 = (_WORD *)(v8 + 64);
    do
    {
      if ( *v15 == a3 )
        goto LABEL_17;
      if ( !(_BYTE)this && *v15 == v10 )
      {
        v11 = (unsigned int)v14;
        LOBYTE(this) = 1;
      }
      v14 = (unsigned int)(v14 + 1);
      v15 += 2;
    }
    while ( (unsigned int)v14 < 0x18 );
    if ( !(_BYTE)this )
    {
      v12 = 5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_24;
      v13 = 163;
LABEL_23:
      Template_qqq(this, &MinInput_Warning_CheckResult, 12, v13, v12);
LABEL_24:
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(this, &MinInput_Warning_CheckResult, 12, 1957, v12);
      goto LABEL_40;
    }
    v14 = (unsigned int)v11;
    *(_WORD *)(v8 + 4LL * (unsigned int)v11 + 64) = a3;
LABEL_17:
    *(_BYTE *)(v8 + 4 * v14 + 66) = 1;
    goto LABEL_18;
  }
  LODWORD(this) = 0;
  v9 = (_WORD *)(v8 + 64);
  while ( *v9 != a3 )
  {
    this = (unsigned int)(this + 1);
    v9 += 2;
    if ( (unsigned int)this >= 0x18 )
      goto LABEL_6;
  }
  return v4;
}
