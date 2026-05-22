/*
 * XREFs of ?DeliverInput@BufferedInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180080900
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??$emplace_back@AEAUInputInfo@@@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAAXAEAUInputInfo@@@Z @ 0x180054868 (--$emplace_back@AEAUInputInfo@@@-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@QEAAXA.c)
 *     ?DeliverBufferToTargetFromSample@BufferedInputTarget@@AEAAJPEAUIInputTarget@@K@Z @ 0x180080D58 (-DeliverBufferToTargetFromSample@BufferedInputTarget@@AEAAJPEAUIInputTarget@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BufferedInputTarget::DeliverInput(BufferedInputTarget *this, struct InputInfo *a2)
{
  unsigned int v4; // ebx
  char v5; // r12
  char v6; // r13
  char v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct IInputTarget *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v31; // [rsp+88h] [rbp+48h]
  unsigned int v32; // [rsp+90h] [rbp+50h] BYREF
  __int64 v33; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a2 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 161, 87);
    return v4;
  }
  if ( *((int *)this + 44) <= 0 )
  {
LABEL_75:
    v27 = *((_QWORD *)this + 3);
    if ( v27 )
    {
      if ( !v5 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v27 + 24LL))(v27, a2);
        v4 = v28;
        if ( v28 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v29, &MinInput_Warning_CheckResult, 0, 372, v28);
      }
    }
    else
    {
      std::vector<InputInfo>::emplace_back<InputInfo &>((__int64)this + 184, (__int64)a2);
    }
    return v4;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v31 = 0;
  v9 = (_QWORD *)((char *)this + 40);
  v10 = 1LL;
  while ( 1 )
  {
    v11 = *((_DWORD *)v9 - 2);
    if ( !v11 )
      goto LABEL_54;
    if ( (unsigned int)(v11 - 1) <= 1 )
      break;
    if ( v7 )
      goto LABEL_27;
    if ( !v6 )
    {
      v12 = *v9;
      if ( *v9 )
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v12 + 8LL))(*v9, v8, 1LL);
      v13 = *((_QWORD *)this + 3);
      if ( v13 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 16LL))(v13, v8, v10);
      *((_QWORD *)this + 3) = v12;
      v7 = 1;
      switch ( *((_DWORD *)v9 - 2) )
      {
        case 3:
          v14 = BufferedInputTarget::DeliverBufferToTargetFromSample(this, (struct IInputTarget *)*v9, 0);
          v4 = v14;
          if ( v14 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 333, v14);
            return v4;
          }
          break;
        case 4:
          v16 = BufferedInputTarget::DeliverBufferToTargetFromSample(
                  this,
                  (struct IInputTarget *)*v9,
                  *((_DWORD *)v9 + 2));
          v4 = v16;
          if ( v16 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 339, v16);
            return v4;
          }
          break;
        case 5:
          v18 = BufferedInputTarget::DeliverBufferToTargetFromSample(
                  this,
                  (struct IInputTarget *)*v9,
                  *((_DWORD *)v9 + 2) + 1);
          v4 = v18;
          if ( v18 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 345, v18);
            return v4;
          }
          break;
      }
      *((_DWORD *)v9 - 2) = 0;
      if ( *v9 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
      *v9 = 0LL;
      --*((_DWORD *)this + 44);
      goto LABEL_53;
    }
LABEL_54:
    v8 = (unsigned int)(v8 + 1);
    v31 = v8;
    v9 += 3;
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_75;
  }
  if ( v7 )
  {
LABEL_27:
    *((_DWORD *)v9 - 2) = 0;
    if ( *v9 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v9 + 16LL))(*v9, v8, 1LL);
      LODWORD(v8) = v31;
      v10 = 1LL;
    }
    *v9 = 0LL;
    --*((_DWORD *)this + 44);
    goto LABEL_54;
  }
  v33 = 0LL;
  v32 = 0;
  v20 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v9)(
          *v9,
          &GUID_9541eccb_d3b7_47cd_bb5b_51b74da1c6bd,
          &v33);
  v4 = v20;
  if ( v20 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v26 = 199;
LABEL_71:
      Template_qqq(v21, &MinInput_Warning_CheckResult, 0, v26, v20);
    }
LABEL_72:
    v22 = v33;
    goto LABEL_73;
  }
  v22 = v33;
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64, struct InputInfo *, unsigned int *))(*(_QWORD *)v33 + 32LL))(v33, a2, &v32);
    ++*((_DWORD *)v9 + 2);
    v21 = v32;
    if ( v32 )
    {
      if ( v32 == 2 )
        goto LABEL_51;
      if ( v32 == 1 )
      {
        v6 = 1;
        goto LABEL_51;
      }
      if ( v6 )
      {
        *((_DWORD *)v9 - 2) = v32;
LABEL_51:
        v25 = v33;
        v33 = 0LL;
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
LABEL_53:
        LODWORD(v8) = v31;
        v10 = 1LL;
        goto LABEL_54;
      }
      v23 = (struct IInputTarget *)*v9;
      if ( *v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 8LL))(*v9);
        v21 = v32;
      }
      v24 = *((_QWORD *)this + 3);
      if ( v24 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 16LL))(*((_QWORD *)this + 3));
        v21 = v32;
      }
      *((_QWORD *)this + 3) = v23;
      v7 = 1;
      if ( (_DWORD)v21 == 3 )
      {
        v20 = BufferedInputTarget::DeliverBufferToTargetFromSample(this, (struct IInputTarget *)*v9, 0);
        v4 = v20;
        if ( v20 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v26 = 267;
            goto LABEL_71;
          }
          goto LABEL_72;
        }
      }
      else
      {
        if ( (unsigned int)(v21 - 4) > 1 )
        {
          LOBYTE(v20) = -1;
          v4 = -2147418113;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v26 = 289;
            goto LABEL_71;
          }
          goto LABEL_72;
        }
        *((_QWORD *)this + 24) = *((_QWORD *)this + 23);
        v4 = 0;
        if ( (_DWORD)v21 == 5 )
          v5 = 1;
      }
    }
    *((_DWORD *)v9 - 2) = 0;
    if ( *v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
    *v9 = 0LL;
    --*((_DWORD *)this + 44);
    goto LABEL_51;
  }
  v4 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 203, 255);
    v22 = v33;
  }
LABEL_73:
  v33 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v4;
}
