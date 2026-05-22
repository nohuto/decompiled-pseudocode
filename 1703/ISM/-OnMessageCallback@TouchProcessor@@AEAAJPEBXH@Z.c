/*
 * XREFs of ?OnMessageCallback@TouchProcessor@@AEAAJPEBXH@Z @ 0x1800603D8
 * Callers:
 *     ?OnMessageCallbackStatic@TouchProcessor@@CAJPEAXPEBXH@Z @ 0x1800603D0 (-OnMessageCallbackStatic@TouchProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchProcessor::OnMessageCallback(TouchProcessor *this, char *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v6; // ebx
  unsigned int *v7; // r14
  int v8; // eax
  bool v9; // zf
  int v10; // r9d
  int v11; // r9d
  _DWORD *v12; // rax
  int v13; // eax
  int v15; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[24]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h]

  v3 = 0;
  v4 = *(unsigned int *)a2;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
      return v3;
    v6 = 0;
    v7 = (unsigned int *)((char *)this + 180);
    while ( 1 )
    {
      if ( *(v7 - 1) == 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 72) + 112LL))(
               *((_QWORD *)this + 72),
               *v7,
               v16);
        v6 = v8;
        if ( v8 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_21;
          v10 = 405;
          goto LABEL_20;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 72) + 144LL))(*((_QWORD *)this + 72), *v7);
        v6 = v8;
        if ( v8 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_21;
          v10 = 408;
LABEL_20:
          Template_qqq(v4, &MinInput_Warning_CheckResult, 0, v10, v8);
          goto LABEL_21;
        }
        if ( v17 == *((_QWORD *)a2 + 4) && v18 == *((_QWORD *)a2 + 5) )
        {
          *((_DWORD *)this + 2 * (int)v3 + 44) = 0;
          *((_DWORD *)this + 2 * (int)v3 + 45) = 0;
          v9 = v3 == 50;
LABEL_12:
          if ( v9 )
          {
            LOBYTE(v6) = 87;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 421, 87);
            v3 = -2147024809;
            goto LABEL_22;
          }
LABEL_21:
          v3 = v6;
          if ( v6 >= 0 )
            return v3;
LABEL_22:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v11 = 351;
            goto LABEL_34;
          }
          return v3;
        }
      }
      ++v3;
      v7 += 2;
      v9 = v3 == 50;
      if ( v3 >= 0x32 )
        goto LABEL_12;
    }
  }
  v6 = 0;
  v12 = (_DWORD *)((char *)this + 176);
  v15 = 0;
  v4 = 0LL;
  while ( *v12 )
  {
    ++v3;
    ++v4;
    v12 += 2;
    if ( v4 >= 50 )
      goto LABEL_37;
  }
  *((_DWORD *)this + 2 * (int)v3 + 44) = 1;
  v13 = (*(__int64 (__fastcall **)(_QWORD, char *, int *))(**((_QWORD **)this + 72) + 96LL))(
          *((_QWORD *)this + 72),
          a2 + 8,
          &v15);
  v6 = v13;
  if ( v13 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 375, v13);
    goto LABEL_31;
  }
  *((_DWORD *)this + 2 * (int)v3 + 45) = v15;
LABEL_37:
  if ( v3 == 50 )
  {
    LOBYTE(v6) = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 384, 87);
    v3 = -2147024809;
    goto LABEL_32;
  }
LABEL_31:
  v3 = v6;
  if ( v6 >= 0 )
    return v3;
LABEL_32:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 346;
LABEL_34:
    Template_qqq(v4, &MinInput_Warning_CheckResult, 0, v11, v6);
  }
  return v3;
}
