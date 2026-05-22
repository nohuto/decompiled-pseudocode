/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180006190
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180007350 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetValueForKey@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKAEBQEAUIInputProcessor@@@Z @ 0x1800071D0 (-SetValueForKey@-$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKAEBQEAUIInputProcessor@@@Z.c)
 *     ?GetValues@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEAY0BAA@PEAUIInputProcessor@@PEAI@Z @ 0x18000728C (-GetValues@-$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEAY0BAA@PEAUIInputProcessor@@PEAI@.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x18002C800 (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceAttach(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  char *v5; // rdx
  unsigned int v6; // ebx
  char v7; // r9
  __int64 v8; // rcx
  int v9; // r11d
  int v10; // r15d
  int v11; // r9d
  __int64 v12; // rax
  _DWORD *v13; // r10
  __int64 v14; // rax
  unsigned int v15; // edi
  int Values; // eax
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // ebx
  _QWORD *v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // rbx
  char *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v31[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-B0h]
  int v33; // [rsp+68h] [rbp-A0h]
  char v34; // [rsp+6Ch] [rbp-9Ch]
  __int64 v35; // [rsp+78h] [rbp-90h]
  _QWORD v36[256]; // [rsp+88h] [rbp-80h] BYREF

  v35 = -2LL;
  LODWORD(v29) = 0;
  if ( a3 )
  {
    v5 = (char *)this + 4176;
    v6 = 0;
    v7 = 0;
    v8 = *(unsigned int *)a2;
    v9 = *((_DWORD *)v5 + 1024);
    if ( (_DWORD)v8 == v9 )
    {
      v10 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_16;
      v11 = 133;
    }
    else
    {
      v12 = 0LL;
      v13 = v5;
      do
      {
        if ( *v13 == (_DWORD)v8 )
        {
          v14 = 2 * v12;
          goto LABEL_19;
        }
        if ( !v7 && *v13 == v9 )
        {
          v6 = v12;
          v7 = 1;
        }
        v12 = (unsigned int)(v12 + 1);
        v13 += 4;
      }
      while ( (unsigned int)v12 < 0x100 );
      if ( v7 )
      {
        v14 = 2LL * v6;
        *(_DWORD *)&v5[16 * v6] = v8;
LABEL_19:
        *(_QWORD *)&v5[8 * v14 + 8] = a3;
        goto LABEL_20;
      }
      v10 = -2147467259;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_16;
      v11 = 163;
    }
    Template_qqq(v8, &MinInput_Warning_CheckResult, 1, v11, v10);
LABEL_16:
    v15 = v10;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v8, &MinInput_Warning_CheckResult, 1, 255, v10);
    return v15;
  }
LABEL_20:
  Values = FixedSizeMap<unsigned long,IInputProcessor *,256>::GetValues((char *)this + 72, v36, &v29);
  v15 = Values;
  if ( Values < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v15;
    v18 = 264;
    goto LABEL_60;
  }
  v19 = v29 - 1;
  if ( (int)v29 - 1 >= 0 )
  {
    v20 = &v36[v19];
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct DeviceInfo *))(*(_QWORD *)*v20 + 32LL))(*v20, a2) )
    {
      --v20;
      if ( --v19 < 0 )
        goto LABEL_31;
    }
    v21 = &v36[v19];
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 8LL))(*v21);
    Values = FixedSizeMap<unsigned long,IInputProcessor *,256>::SetValueForKey((char *)this + 72, a2, v21);
    v15 = Values;
    if ( Values < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v15;
      v18 = 273;
      goto LABEL_60;
    }
    goto LABEL_57;
  }
LABEL_31:
  v22 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v33 = -1;
  v34 = 1;
  v31[0] = a2;
  if ( this )
    v23 = (char *)this + 8;
  else
    v23 = 0LL;
  v31[1] = v23;
  if ( !a2 || !v23 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 196, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v24 = CreateInputProcessorWorker(v31, &v29, 0LL, 0LL);
  v15 = v24;
  if ( v24 >= 0 )
  {
    v22 = v29;
    v30 = v29;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v25, &MinInput_Warning_CheckResult, 0, 199, v24);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v25, &MinInput_Warning_CheckResult, 1, 537, v15);
  }
  if ( (v15 & 0x80000000) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v30 = v22;
    v26 = FixedSizeMap<unsigned long,IInputProcessor *,256>::SetValueForKey((char *)this + 72, a2, &v30);
    v15 = v26;
    if ( v26 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
LABEL_57:
      Values = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 24LL))(
                 *((_QWORD *)this + 5),
                 a2);
      v15 = Values;
      if ( Values >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v15;
      v18 = 297;
LABEL_60:
      Template_qqq(v17, &MinInput_Warning_CheckResult, 1, v18, Values);
      return v15;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v27, &MinInput_Warning_CheckResult, 1, 290, v26);
LABEL_51:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    return v15;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v25, &MinInput_Warning_CheckResult, 1, 287, v15);
  if ( v22 )
    goto LABEL_51;
  return v15;
}
