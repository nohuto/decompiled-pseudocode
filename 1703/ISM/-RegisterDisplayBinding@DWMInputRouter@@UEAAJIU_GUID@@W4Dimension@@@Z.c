/*
 * XREFs of ?RegisterDisplayBinding@DWMInputRouter@@UEAAJIU_GUID@@W4Dimension@@@Z @ 0x1800166E0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x18000CAA0 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ??0DisplayBinding@@QEAA@XZ @ 0x180019608 (--0DisplayBinding@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z @ 0x18001BE80 (-RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RegisterDisplayBinding(__int64 a1, unsigned int a2, __int128 *a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v8; // rcx
  DisplayBinding *v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  unsigned int v12; // ebx
  DisplayBinding *v13; // rax
  DisplayBinding *v14; // rbx
  DisplayBinding *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF
  DisplayBinding *v20; // [rsp+70h] [rbp+30h]
  unsigned int v21; // [rsp+78h] [rbp+38h] BYREF

  v21 = a2;
  v20 = 0LL;
  v4 = a1 + 736;
  if ( a2 == *(_DWORD *)(a1 + 752) || (v8 = 0LL, !*(_DWORD *)(v4 + 8)) )
  {
LABEL_5:
    v20 = 0LL;
    v9 = (DisplayBinding *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v9 )
    {
      v13 = DisplayBinding::DisplayBinding(v9);
      v19 = *a3;
      v14 = v13;
      v11 = DisplayBinding::RuntimeClassInitialize(v13, a2, &v19, a4);
      if ( v11 >= 0 )
      {
        if ( v14 )
          (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v14 + 8LL))(v14);
        v20 = v14;
        if ( v14 )
          (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v14 + 16LL))(v14);
        v11 = 0;
      }
      else if ( v14 )
      {
        (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v12 = v11;
      if ( v11 >= 0 )
      {
        v15 = v20;
        v20 = 0LL;
        *(_QWORD *)&v19 = v15;
        v16 = DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey(v4, (int *)&v21, &v19);
        v12 = v16;
        if ( v16 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 2069, v16);
        goto LABEL_23;
      }
    }
    else
    {
      LOBYTE(v11) = 14;
      v12 = -2147024882;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 2064, v11);
    goto LABEL_23;
  }
  while ( *(_DWORD *)(*(_QWORD *)v4 + 16LL * (unsigned int)v8) != a2 )
  {
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *(_DWORD *)(v4 + 8) )
      goto LABEL_5;
  }
  v12 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 2057, 87);
LABEL_23:
  if ( v20 )
    (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v20 + 16LL))(v20);
  return v12;
}
