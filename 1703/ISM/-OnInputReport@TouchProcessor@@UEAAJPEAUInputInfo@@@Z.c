/*
 * XREFs of ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005FE00
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005DBB0 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchProcessor::OnInputReport(TouchProcessor *this, POINT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  int v6; // r9d
  __int64 v7; // r8
  char *v8; // rcx
  int *p_y; // rdx
  float v10; // xmm0_4
  float v11; // xmm1_4
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // r15
  _BYTE *v21; // r8
  unsigned int v22; // r10d
  POINT *v23; // rsi
  _DWORD *v24; // rdx
  LONG v25; // ecx
  int v26; // r14d
  unsigned int *i; // rsi
  int v28; // eax
  __int64 v29; // rcx
  int v30; // r9d
  POINT pt; // [rsp+30h] [rbp-69h] BYREF
  LONG x; // [rsp+40h] [rbp-59h] BYREF
  int v34; // [rsp+44h] [rbp-55h]
  char v35; // [rsp+4Ch] [rbp-4Dh] BYREF

  v2 = 0;
  if ( (a2->x & 8) == 0 )
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 107, 87);
    return v2;
  }
  if ( (gdwMitConfig & 4) != 0 )
  {
    *((_DWORD *)this + 162) = a2[85].x;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 75) + 24LL))(*((_QWORD *)this + 75));
    return v2;
  }
  x = a2[1].x;
  v5 = a2[6].x;
  if ( v5 > 10 )
    v5 = 10;
  v34 = v5;
  if ( v5 > 0 )
  {
    v6 = 0;
    v7 = 0LL;
    v8 = &v35;
    p_y = &a2[8].y;
    do
    {
      if ( v7 >= 10 )
        break;
      ++v6;
      ++v7;
      v10 = (float)*(p_y - 1);
      v11 = (float)*p_y;
      v12 = *(p_y - 3);
      p_y += 12;
      *((_DWORD *)v8 + 1) = v12;
      *((float *)v8 - 1) = v10;
      *(float *)v8 = v11;
      v8 += 12;
    }
    while ( v6 < v34 );
  }
  if ( a2[6].x != 1 || (pt = a2[8], PtInRect((const RECT *)((char *)this + 632), pt)) )
  {
    v13 = 0LL;
    if ( a2[6].x )
    {
      while ( (a2[6 * v13 + 7].x & 2) == 0 )
      {
        v13 = (unsigned int)(v13 + 1);
        if ( (_DWORD)v13 == a2[6].x )
          goto LABEL_17;
      }
      if ( *((_BYTE *)this + 608) )
        goto LABEL_20;
      v19 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 608) = 1;
      if ( (*(int (__fastcall **)(__int64, POINT *))(*(_QWORD *)v19 + 24LL))(v19, &pt) < 0 )
        goto LABEL_20;
      LOBYTE(v15) = 1;
    }
    else
    {
LABEL_17:
      v14 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 608) = 0;
      if ( (*(int (__fastcall **)(__int64, POINT *))(*(_QWORD *)v14 + 24LL))(v14, &pt) < 0 )
        goto LABEL_20;
      v15 = 0LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, POINT))(**((_QWORD **)this + 6) + 48LL))(*((_QWORD *)this + 6), v15, pt);
LABEL_20:
    v16 = *((_QWORD *)this + 74);
    if ( v16 )
      *(_OWORD *)&a2[82].x = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, POINT *))(*(_QWORD *)v16 + 40LL))(v16, &pt);
  }
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    v17 = (unsigned int)a2[6].x;
    if ( !dword_1800D3A80 )
    {
      dword_1800D3A80 = InitializeTouchInjection(256LL, 3LL);
      if ( dword_1800D3A80 != 1 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v18, &MinInput_Warning_CheckResult, 0, 225, 5);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    v20 = operator new[](saturated_mul(v17, 0x90uLL));
    memset(v20, 0, 144 * v17);
    v22 = 0;
    if ( (_DWORD)v17 )
    {
      v23 = a2 + 8;
      v21 = (char *)this + 621;
      v24 = v20 + 3;
      do
      {
        v25 = v23[-1].x;
        *(v24 - 3) = 2;
        *(v24 - 2) = v22;
        v24[5] = v23->x;
        v24[6] = v23->y;
        if ( (v25 & 3) != 0 )
        {
          *v24 = 6;
          if ( *(v21 - 10) || *v21 )
          {
            *v24 = 131078;
          }
          else
          {
            *v24 = 65542;
            *(v21 - 10) = 1;
          }
          *v21 = 1;
        }
        else if ( *v21 )
        {
          *v24 = 262146;
          *(v21 - 10) = 0;
          *v21 = 0;
        }
        else
        {
          *v24 = 0;
        }
        ++v22;
        v23 += 6;
        ++v21;
        v24 += 36;
      }
      while ( v22 < (unsigned int)v17 );
    }
    InjectTouchInput((unsigned int)v17, v20, v21);
    operator delete(v20);
  }
  else
  {
    v28 = PointerProcessor::OnInputReport(this, (struct InputInfo *)a2);
    v2 = v28;
    if ( v28 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v2;
      v30 = 191;
LABEL_56:
      Template_qqq(v29, &MinInput_Warning_CheckResult, 0, v30, v28);
      return v2;
    }
  }
  v26 = 0;
  for ( i = (unsigned int *)((char *)this + 180); ; i += 2 )
  {
    if ( *(i - 1) )
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, LONG *, __int64))(**((_QWORD **)this + 72) + 160LL))(
              *((_QWORD *)this + 72),
              *i,
              &x,
              128LL);
      v2 = v28;
      if ( v28 < 0 )
        break;
    }
    if ( (unsigned int)++v26 >= 0x32 )
      return v2;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v30 = 205;
    goto LABEL_56;
  }
  return v2;
}
