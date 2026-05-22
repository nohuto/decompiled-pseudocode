/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180006560
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x180007310 (-OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider@@@Z @ 0x180007144 (-GetValueForKey@-$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceRemoval(InputStateManager *this, struct DeviceInfo *a2)
{
  int ValueForKey; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rbx
  int v8; // r9d
  unsigned int v9; // eax
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  unsigned int v15; // eax
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  ValueForKey = FixedSizeMap<unsigned long,IRawInputProvider *,256>::GetValueForKey((char *)this + 72, a2, &v19);
  v6 = ValueForKey;
  v7 = v19;
  if ( ValueForKey < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_29;
    v8 = 314;
LABEL_28:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 1, v8, ValueForKey);
    goto LABEL_29;
  }
  ValueForKey = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v19 + 40LL))(v19, a2);
  v6 = ValueForKey;
  if ( ValueForKey < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_29;
    v8 = 316;
    goto LABEL_28;
  }
  v9 = 0;
  v10 = (_DWORD *)((char *)this + 72);
  while ( *v10 != *(_DWORD *)a2 )
  {
    ++v9;
    v10 += 4;
    if ( v9 >= 0x100 )
    {
      v6 = -2147467259;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq((__int64)v10, &MinInput_Warning_CheckResult, 1, 193, 5);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v11, &MinInput_Warning_CheckResult, 1, 318, 5);
      }
      goto LABEL_29;
    }
  }
  *((_DWORD *)this + 4 * v9 + 18) = *((_DWORD *)this + 1042);
  v12 = *(unsigned int *)a2;
  if ( (_DWORD)v12 == *((_DWORD *)this + 2068) )
  {
LABEL_25:
    ValueForKey = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *, __int64, __int64))(**((_QWORD **)this + 5)
                                                                                           + 32LL))(
                    *((_QWORD *)this + 5),
                    a2,
                    v12,
                    256LL);
    v6 = ValueForKey;
    if ( ValueForKey < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 333;
      goto LABEL_28;
    }
  }
  else
  {
    v13 = 0;
    v14 = (_DWORD *)((char *)this + 4176);
    while ( *v14 != (_DWORD)v12 )
    {
      ++v13;
      v14 += 4;
      if ( v13 >= 0x100 )
        goto LABEL_25;
    }
    v15 = 0;
    v16 = (_DWORD *)((char *)this + 4176);
    do
    {
      if ( *v16 == (_DWORD)v12 )
      {
        *((_DWORD *)this + 4 * v15 + 1044) = *((_DWORD *)this + 2068);
        goto LABEL_25;
      }
      ++v15;
      v16 += 4;
    }
    while ( v15 < 0x100 );
    v6 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq((__int64)v16, &MinInput_Warning_CheckResult, 1, 193, 5);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v17, &MinInput_Warning_CheckResult, 1, 326, 5);
    }
  }
LABEL_29:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
