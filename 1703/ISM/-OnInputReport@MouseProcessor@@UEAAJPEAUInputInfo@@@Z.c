/*
 * XREFs of ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180058E80
 * Callers:
 *     ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18005BFE8 (-DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetDisplayInformation@MouseProcessor@@AEAAJXZ @ 0x180059AB8 (-GetDisplayInformation@MouseProcessor@@AEAAJXZ.c)
 *     ?DoAcceleration@MouseAccelerator@@QEAAJPEAJ0@Z @ 0x18005A268 (-DoAcceleration@MouseAccelerator@@QEAAJPEAJ0@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::OnInputReport(MouseProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // esi
  char v5; // al
  bool v6; // cf
  __int16 v7; // ax
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // cx
  __int64 v14; // rcx
  char *v15; // rdx
  int DisplayInformation; // eax
  __int64 v17; // rcx
  int v18; // r9d
  bool v19; // r15
  char v20; // al
  char v21; // r12
  char v22; // al
  __int16 v23; // ax
  int v24; // ecx
  __int16 v25; // ax
  int v26; // ecx
  __int16 v27; // ax
  __int16 v28; // ax
  __int64 v29; // rcx
  int v30; // ecx
  int *v31; // r15
  int *v32; // r14
  bool v33; // zf
  int *v34; // r12
  int *v35; // r13
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  _DWORD *v43; // rax
  __int64 v44; // rcx
  char *v45; // rdx
  char v47; // [rsp+30h] [rbp-48h]
  bool v48; // [rsp+34h] [rbp-44h]
  char v49[16]; // [rsp+38h] [rbp-40h] BYREF

  if ( (*(_DWORD *)a2 & 2) == 0 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 249, 87);
    return v4;
  }
  if ( (gdwMitConfig & 1) != 0 )
  {
    *((_DWORD *)this + 56) = *((_DWORD *)a2 + 179);
    *((_DWORD *)this + 57) = *((_DWORD *)a2 + 180);
    v5 = *((_BYTE *)a2 + 1872);
    *((_BYTE *)this + 584) = v5;
    *((_BYTE *)this + 236) = v5;
    v6 = v5 != 0;
    v7 = *((_WORD *)a2 + 354);
    v8 = v6 ? 32 : 16;
    if ( (v7 & 1) != 0 )
    {
      *((_DWORD *)this + 58) |= v8;
    }
    else if ( (v7 & 2) != 0 )
    {
      *((_DWORD *)this + 58) &= ~v8;
    }
    v9 = *((_WORD *)a2 + 354);
    v10 = *((_BYTE *)this + 584) != 0 ? 16 : 32;
    if ( (v9 & 4) != 0 )
    {
      *((_DWORD *)this + 58) |= v10;
    }
    else if ( (v9 & 8) != 0 )
    {
      *((_DWORD *)this + 58) &= ~v10;
    }
    v11 = *((_WORD *)a2 + 354);
    if ( (v11 & 0x10) != 0 )
    {
      *((_DWORD *)this + 58) |= 0x40u;
    }
    else if ( (v11 & 0x20) != 0 )
    {
      *((_DWORD *)this + 58) &= ~0x40u;
    }
    v12 = *((_WORD *)a2 + 354);
    if ( (v12 & 0x40) != 0 )
    {
      *((_DWORD *)this + 58) |= 0x80u;
    }
    else if ( (v12 & 0x80u) != 0 )
    {
      *((_DWORD *)this + 58) &= ~0x80u;
    }
    v13 = *((_WORD *)a2 + 354);
    if ( (v13 & 0x100) != 0 )
    {
      *((_DWORD *)this + 58) |= 0x100u;
    }
    else if ( (v13 & 0x200) != 0 )
    {
      *((_DWORD *)this + 58) &= ~0x100u;
    }
    v14 = *((_QWORD *)this + 33);
    v15 = (char *)this + 216;
    if ( v14 )
    {
      DisplayInformation = (*(__int64 (__fastcall **)(__int64, char *, struct InputInfo *))(*(_QWORD *)v14 + 24LL))(
                             v14,
                             v15,
                             a2);
      v4 = DisplayInformation;
      if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 285;
    }
    else
    {
      DisplayInformation = (*(__int64 (__fastcall **)(char *, char *, struct InputInfo *))(*((_QWORD *)this + 22) + 24LL))(
                             (char *)this + 176,
                             v15,
                             a2);
      v4 = DisplayInformation;
      if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 289;
    }
    goto LABEL_114;
  }
  v19 = (*((_DWORD *)this + 58) & 0x10) != 0;
  v48 = v19;
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 88LL))(*((_QWORD *)this + 31));
  *((_BYTE *)this + 584) = 0;
  v21 = v20;
  v47 = v20;
  DisplayInformation = MouseProcessor::GetDisplayInformation(this);
  v4 = DisplayInformation;
  if ( DisplayInformation < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v18 = 301;
    goto LABEL_114;
  }
  if ( GetSystemMetrics(23) && (*(_BYTE *)a2 & 0x20) == 0 )
    *((_BYTE *)this + 584) = 1;
  v22 = *((_BYTE *)this + 584);
  *((_BYTE *)this + 236) = v22;
  v6 = v22 != 0;
  v23 = *((_WORD *)a2 + 354);
  v24 = v6 ? 32 : 16;
  if ( (v23 & 1) != 0 )
  {
    *((_DWORD *)this + 58) |= v24;
  }
  else if ( (v23 & 2) != 0 )
  {
    *((_DWORD *)this + 58) &= ~v24;
  }
  v25 = *((_WORD *)a2 + 354);
  v26 = *((_BYTE *)this + 584) != 0 ? 16 : 32;
  if ( (v25 & 4) != 0 )
  {
    *((_DWORD *)this + 58) |= v26;
  }
  else if ( (v25 & 8) != 0 )
  {
    *((_DWORD *)this + 58) &= ~v26;
  }
  v27 = *((_WORD *)a2 + 354);
  if ( (v27 & 0x10) != 0 )
  {
    *((_DWORD *)this + 58) |= 0x40u;
  }
  else if ( (v27 & 0x20) != 0 )
  {
    *((_DWORD *)this + 58) &= ~0x40u;
  }
  v28 = *((_WORD *)a2 + 354);
  if ( (v28 & 0x40) != 0 )
  {
    *((_DWORD *)this + 58) |= 0x80u;
  }
  else if ( (v28 & 0x80u) != 0 )
  {
    *((_DWORD *)this + 58) &= ~0x80u;
  }
  v29 = *((unsigned __int16 *)a2 + 354);
  if ( (v29 & 0x100) != 0 )
  {
    *((_DWORD *)this + 58) |= 0x100u;
  }
  else if ( (v29 & 0x200) != 0 )
  {
    *((_DWORD *)this + 58) &= ~0x100u;
  }
  if ( *((_BYTE *)this + 272) || !v21 )
  {
    v29 = *((_WORD *)a2 + 353) & 1;
    if ( (*((_WORD *)a2 + 353) & 1) != 0 )
    {
      if ( (_DWORD)v29 == 1 )
      {
        v30 = *((_DWORD *)this + 51);
        *((_DWORD *)this + 54) = *((_DWORD *)a2 + 179) * (*((_DWORD *)this + 50) - 1) / 0xFFFF;
        v29 = (unsigned int)(*((_DWORD *)a2 + 180) * (v30 - 1));
        *((_DWORD *)this + 55) = (int)v29 / 0xFFFF;
      }
      goto LABEL_89;
    }
    v31 = (int *)((char *)this + 220);
    v32 = (int *)((char *)this + 216);
    DisplayInformation = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 31) + 32LL))(
                           *((_QWORD *)this + 31),
                           (char *)this + 216,
                           (char *)this + 220);
    v4 = DisplayInformation;
    if ( DisplayInformation < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 352;
      goto LABEL_114;
    }
    v33 = *((_BYTE *)this + 568) == 0;
    v34 = (int *)((char *)this + 224);
    v35 = (int *)((char *)this + 228);
    *((_DWORD *)this + 56) = *((_DWORD *)a2 + 179);
    *((_DWORD *)this + 57) = *((_DWORD *)a2 + 180);
    if ( !v33 )
    {
      DisplayInformation = MouseAccelerator::DoAcceleration(
                             (MouseProcessor *)((char *)this + 288),
                             (int *)this + 56,
                             (int *)this + 57);
      v4 = DisplayInformation;
      if ( DisplayInformation < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        v18 = 359;
        goto LABEL_114;
      }
    }
    v36 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5)) - 1;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          if ( v38 != 1 )
          {
LABEL_80:
            if ( *v32 < 0 )
              *v32 = 0;
            v41 = *((_DWORD *)this + 50);
            if ( *v32 >= v41 )
              *v32 = v41 - 1;
            if ( *v31 < 0 )
              *v31 = 0;
            v42 = *((_DWORD *)this + 51);
            v21 = v47;
            if ( *v31 >= v42 )
              *v31 = v42 - 1;
            v19 = v48;
            goto LABEL_89;
          }
          *v32 += *v35;
          v39 = *v34;
        }
        else
        {
          *v32 -= *v34;
          v39 = *v35;
        }
        *v31 -= v39;
        goto LABEL_80;
      }
      *v32 -= *v35;
      v40 = *v34;
    }
    else
    {
      *v32 += *v34;
      v40 = *v35;
    }
    *v31 += v40;
    goto LABEL_80;
  }
LABEL_89:
  *((_DWORD *)a2 + 12) = 1;
  *((_DWORD *)a2 + 16) = *((_DWORD *)this + 54);
  *((_DWORD *)a2 + 17) = *((_DWORD *)this + 55);
  *((_DWORD *)a2 + 14) = 1;
  *((_DWORD *)a2 + 13) = 0;
  if ( !*((_BYTE *)this + 272) )
  {
    if ( v21
      || (DisplayInformation = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 31) + 24LL))(
                                 *((_QWORD *)this + 31),
                                 *((unsigned int *)this + 54),
                                 *((unsigned int *)this + 55)),
          v4 = DisplayInformation,
          DisplayInformation >= 0) )
    {
      *((_OWORD *)a2 + 41) = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 31) + 40LL))(
                                          *((_QWORD *)this + 31),
                                          v49);
      *((_DWORD *)a2 + 135) = *((_DWORD *)this + 58);
      if ( *((_DWORD *)this + 58) )
        *((_DWORD *)a2 + 14) |= 2u;
      v44 = *((_QWORD *)this + 33);
      v45 = (char *)this + 216;
      if ( v44 )
      {
        DisplayInformation = (*(__int64 (__fastcall **)(__int64, char *, struct InputInfo *))(*(_QWORD *)v44 + 24LL))(
                               v44,
                               v45,
                               a2);
        v4 = DisplayInformation;
        if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        v18 = 467;
      }
      else
      {
        DisplayInformation = (*(__int64 (__fastcall **)(char *, char *, struct InputInfo *))(*((_QWORD *)this + 22)
                                                                                           + 24LL))(
                               (char *)this + 176,
                               v45,
                               a2);
        v4 = DisplayInformation;
        if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        v18 = 471;
      }
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 454;
    }
LABEL_114:
    Template_qqq(v17, &MinInput_Warning_CheckResult, 0, v18, DisplayInformation);
    return v4;
  }
  v43 = (_DWORD *)*((_QWORD *)this + 35);
  if ( v43 )
  {
    *((_DWORD *)a2 + 1) = *v43;
    *(_DWORD *)a2 = 8;
    if ( (*((_BYTE *)this + 232) & 0x10) != 0 )
    {
      *((_DWORD *)a2 + 14) |= 2u;
      DisplayInformation = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 3) + 24LL))(
                             *((_QWORD *)this + 3),
                             a2);
      v4 = DisplayInformation;
      if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 435;
    }
    else
    {
      if ( !v19 )
        return v4;
      *((_DWORD *)a2 + 14) &= ~1u;
      DisplayInformation = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 3) + 24LL))(
                             *((_QWORD *)this + 3),
                             a2);
      v4 = DisplayInformation;
      if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 441;
    }
    goto LABEL_114;
  }
  v4 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v29, &MinInput_Warning_CheckResult, 0, 425, 255);
  return v4;
}
