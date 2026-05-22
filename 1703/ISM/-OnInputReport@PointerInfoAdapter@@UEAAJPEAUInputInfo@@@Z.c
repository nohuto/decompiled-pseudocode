/*
 * XREFs of ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18005C970
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x18000C9E8 (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x18000CAA0 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ?PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINTER_INFO_UNION@@@Z @ 0x18005C6AC (-PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINT.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x18005D1D0 (-GetValueForKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKPEAUtagPOINTER_INFO_UNIO.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x18005D2F0 (-SetValueForKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNIO.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z @ 0x18005D588 (-SetValueForKey@-$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PointerInfoAdapter::OnInputReport(PointerInfoAdapter *this, struct InputInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int PointersFromInput; // eax
  __int64 v7; // rcx
  int v8; // edx
  struct Pointer *v9; // r8
  PointerInfoAdapter *v10; // rcx
  _DWORD *v11; // r14
  __int64 *v12; // r15
  int v13; // edx
  unsigned int v14; // ecx
  int ValueForKey; // eax
  __int64 v16; // rcx
  char *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct Pointer *v23; // rdx
  __int64 *v24; // r12
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  struct tagPOINTER_INFO_UNION *v31; // rdx
  struct tagPOINTER_INFO_UNION *v32; // rbx
  int v33; // ecx
  struct Pointer *v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  PointerInfoAdapter *v37; // rcx
  __int64 v38; // rcx
  _DWORD *v39; // r9
  int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // edx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // r9d
  __int64 v47; // rcx
  __int64 v48; // rdx
  char v50; // [rsp+30h] [rbp-708h]
  int v51; // [rsp+34h] [rbp-704h] BYREF
  unsigned int v52; // [rsp+38h] [rbp-700h] BYREF
  void *Block; // [rsp+40h] [rbp-6F8h] BYREF
  int v54; // [rsp+48h] [rbp-6F0h]
  struct tagPOINTER_INFO_UNION *v55; // [rsp+50h] [rbp-6E8h]
  struct tagPOINTER_INFO_UNION *v56; // [rsp+58h] [rbp-6E0h]
  PointerInfoAdapter *v57; // [rsp+60h] [rbp-6D8h]
  char *v58; // [rsp+68h] [rbp-6D0h]
  __int64 v59; // [rsp+70h] [rbp-6C8h]
  char v60[12]; // [rsp+80h] [rbp-6B8h] BYREF
  int v61; // [rsp+8Ch] [rbp-6ACh]
  struct Pointer *v62[10]; // [rsp+110h] [rbp-628h] BYREF
  _OWORD v63[90]; // [rsp+160h] [rbp-5D8h] BYREF

  v59 = -2LL;
  v4 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
    return v4;
  memset(v63, 0, sizeof(v63));
  v52 = 0;
  PointersFromInput = GetPointersFromInput(a2, v5, v62, &v52);
  v4 = PointersFromInput;
  if ( PointersFromInput < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 291, PointersFromInput);
    goto LABEL_124;
  }
  if ( !*((_BYTE *)a2 + 697) )
  {
    v50 = 1;
    Block = 0LL;
    LODWORD(v57) = *((_DWORD *)this + 15);
    *((_DWORD *)this + 15) = (_DWORD)v57 + 1;
    v55 = 0LL;
    v11 = (_DWORD *)((char *)a2 + 4);
    v58 = (char *)a2 + 4;
    v12 = (__int64 *)((char *)this + 72);
    v13 = *((_DWORD *)a2 + 1);
    if ( v13 == *((_DWORD *)this + 22) || (v14 = 0, !*((_DWORD *)this + 20)) )
    {
LABEL_26:
      v17 = (char *)operator new(0x20uLL);
      v56 = (struct tagPOINTER_INFO_UNION *)v17;
      *((_DWORD *)v17 + 6) = 0xFFFF;
      *((_QWORD *)v17 + 1) = operator new[](0x10uLL);
      v18 = 0LL;
      v19 = 2LL;
      do
      {
        *(_DWORD *)(v18 + *((_QWORD *)v17 + 1)) = *((_DWORD *)v17 + 6);
        v18 += 8LL;
        --v19;
      }
      while ( v19 );
      *((_QWORD *)v17 + 2) = 2LL;
      *(_DWORD *)v17 = 0;
      v17[4] = 1;
      Block = v17;
      v20 = DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey((__int64)this + 72, (int *)a2 + 1, &Block);
      v4 = v20;
      if ( v20 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v21, &MinInput_Warning_CheckResult, 0, 329, v20);
        goto LABEL_124;
      }
    }
    else
    {
      while ( *(_DWORD *)(*v12 + 16LL * v14) != v13 )
      {
        if ( ++v14 >= *((_DWORD *)this + 20) )
          goto LABEL_26;
      }
      ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey(
                      (__int64)this + 72,
                      (int *)a2 + 1,
                      &Block);
      v4 = ValueForKey;
      if ( ValueForKey < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v16, &MinInput_Warning_CheckResult, 0, 335, ValueForKey);
        goto LABEL_124;
      }
      v17 = (char *)Block;
    }
    v22 = 0LL;
    v54 = 0;
    if ( !v52 )
    {
LABEL_112:
      (*(void (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**((_QWORD **)this + 3) + 24LL))(
        *((_QWORD *)this + 3),
        v52,
        v63);
      if ( v50 )
      {
        v4 = 0;
        v47 = 0LL;
        if ( !*((_DWORD *)this + 20) )
        {
LABEL_120:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_124;
          Template_qqq(v47, &MinInput_Warning_CheckResult, 0, 220, 5);
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_124;
          v46 = 513;
          goto LABEL_123;
        }
        v48 = *v12;
        while ( *(_DWORD *)(v48 + 16LL * (unsigned int)v47) != *v11 )
        {
          v47 = (unsigned int)(v47 + 1);
          if ( (unsigned int)v47 >= *((_DWORD *)this + 20) )
            goto LABEL_120;
        }
        *(_DWORD *)(v48 + 16LL * (unsigned int)v47) = *((_DWORD *)this + 22);
        --*((_DWORD *)this + 21);
        if ( v17 )
        {
          operator delete(*((void **)v17 + 1));
          operator delete(v17);
        }
      }
      return v4;
    }
    while ( 1 )
    {
      v51 = 0;
      v23 = v62[v22];
      Block = v23;
      v56 = (struct tagPOINTER_INFO_UNION *)&v63[9 * v22];
      v24 = (__int64 *)(v17 + 8);
      v25 = *(_DWORD *)v23;
      if ( *(_DWORD *)v23 == *((_DWORD *)v17 + 6) || (v26 = 0LL, !*((_DWORD *)v17 + 4)) )
      {
LABEL_50:
        if ( !*((_BYTE *)this + 64) )
        {
          v25 = *((_DWORD *)this + 14);
          *((_DWORD *)this + 14) = v25 + 1;
        }
        v51 = v25;
        v35 = DynamicSizeMap<unsigned long,unsigned long,2>::SetValueForKey(v17 + 8, v23, &v51);
        if ( v35 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v36, &MinInput_Warning_CheckResult, 0, 353, v35);
          goto LABEL_124;
        }
        v34 = (struct Pointer *)Block;
        if ( (*((_BYTE *)Block + 4) & 2) != 0 )
        {
          v33 = 65537;
        }
        else
        {
          if ( (*((_BYTE *)Block + 4) & 1) == 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v36, &MinInput_Warning_CheckResult, 0, 375, 255);
            goto LABEL_124;
          }
          v33 = 131073;
        }
        v31 = v55;
        v32 = v56;
      }
      else
      {
        v27 = *v24;
        while ( *(_DWORD *)(v27 + 8 * v26) != v25 )
        {
          v26 = (unsigned int)(v26 + 1);
          if ( (unsigned int)v26 >= *((_DWORD *)v17 + 4) )
          {
            v23 = (struct Pointer *)Block;
            goto LABEL_50;
          }
        }
        if ( v25 == *((_DWORD *)v17 + 6) )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v26, &MinInput_Warning_CheckResult, 0, 116, 87);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v28 = 0LL;
        if ( !*((_DWORD *)v17 + 4) )
        {
LABEL_90:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v28, &MinInput_Warning_CheckResult, 0, 133, 5);
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v46 = 384;
            goto LABEL_123;
          }
LABEL_124:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        while ( *(_DWORD *)(v27 + 8 * v28) != v25 )
        {
          v28 = (unsigned int)(v28 + 1);
          if ( (unsigned int)v28 >= *((_DWORD *)v17 + 4) )
            goto LABEL_90;
        }
        v25 = *(_DWORD *)(v27 + 8 * v28 + 4);
        v51 = v25;
        v29 = DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::GetValueForKey((char *)this + 32, &v51, v60);
        if ( v29 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v30, &MinInput_Warning_CheckResult, 0, 388, v29);
          goto LABEL_124;
        }
        v31 = v55;
        v32 = v56;
        if ( *(_DWORD *)v17 == v25 )
          v31 = v56;
        v55 = v31;
        if ( (*((_BYTE *)Block + 4) & 2) != 0 )
          v33 = (v61 & 4) != 0 ? 0x20000 : 0x10000;
        else
          v33 = (v61 & 4) != 0 ? 0x40000 : 0x20000;
        v34 = (struct Pointer *)Block;
      }
      if ( !*(_DWORD *)v17 )
        *(_DWORD *)v17 = v25;
      if ( (v33 & 0x10000) == 0 )
        goto LABEL_68;
      if ( v17[4] )
      {
        if ( v25 == *(_DWORD *)v17 )
          break;
        if ( v31 )
          *((_DWORD *)v31 + 3) &= ~0x2000u;
        *(_DWORD *)v17 = v25;
      }
      if ( v25 == *(_DWORD *)v17 )
        break;
LABEL_70:
      if ( (*((_BYTE *)v34 + 4) & 1) != 0 )
      {
        v33 |= 2u;
        v50 = 0;
      }
      *((_DWORD *)v32 + 1) = v25;
      *((_DWORD *)v32 + 3) = v33;
      v37 = (PointerInfoAdapter *)(unsigned int)v57;
      *((_DWORD *)v32 + 2) = (_DWORD)v57;
      PointerInfoAdapter::PopulatePointerInfoProperties(v37, (HMONITOR *)a2, v34, v32);
      v39 = Block;
      if ( (*((_BYTE *)Block + 4) & 1) != 0 )
      {
        v40 = DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::SetValueForKey((char *)this + 32, &v51, v32);
        v4 = v40;
        if ( v40 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v41, &MinInput_Warning_CheckResult, 0, 496, v40);
          goto LABEL_124;
        }
      }
      else
      {
        v42 = 0;
        if ( !*((_DWORD *)this + 10) )
        {
LABEL_104:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_124;
          Template_qqq(v38, &MinInput_Warning_CheckResult, 0, 220, 5);
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_124;
          v46 = 501;
          goto LABEL_123;
        }
        v43 = *((_QWORD *)this + 4);
        while ( 1 )
        {
          v38 = 152LL * v42;
          if ( *(_DWORD *)(v38 + v43) == v25 )
            break;
          if ( ++v42 >= *((_DWORD *)this + 10) )
            goto LABEL_104;
        }
        *(_DWORD *)(152LL * v42 + v43) = *((_DWORD *)this + 12);
        --*((_DWORD *)this + 11);
        v4 = 0;
        v44 = 0LL;
        if ( !*((_DWORD *)v17 + 4) )
        {
LABEL_101:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_124;
          Template_qqq(v44, &MinInput_Warning_CheckResult, 0, 220, 5);
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_124;
          v46 = 504;
LABEL_123:
          Template_qqq(v28, &MinInput_Warning_CheckResult, 0, v46, 5);
          goto LABEL_124;
        }
        v45 = *v24;
        while ( *(_DWORD *)(v45 + 8 * v44) != *v39 )
        {
          v44 = (unsigned int)(v44 + 1);
          if ( (unsigned int)v44 >= *((_DWORD *)v17 + 4) )
            goto LABEL_101;
        }
        *(_DWORD *)(v45 + 8 * v44) = *((_DWORD *)v17 + 6);
        --*((_DWORD *)v17 + 5);
      }
      v22 = (unsigned int)(v54 + 1);
      v54 = v22;
      if ( (unsigned int)v22 >= v52 )
      {
        v11 = v58;
        goto LABEL_112;
      }
    }
    v17[4] = 0;
LABEL_68:
    if ( v25 == *(_DWORD *)v17 )
    {
      v33 |= 0x2000u;
      v55 = v32;
    }
    goto LABEL_70;
  }
  if ( v52 != 1 )
  {
LABEL_15:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 300, 255);
    goto LABEL_124;
  }
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 != *((_DWORD *)this + 22) )
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 20) )
    {
      while ( *(_DWORD *)(*((_QWORD *)this + 9) + 16LL * (unsigned int)v7) != v8 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)this + 20) )
          goto LABEL_11;
      }
      goto LABEL_15;
    }
  }
LABEL_11:
  v9 = v62[0];
  if ( *((_BYTE *)this + 64) )
  {
    v10 = (PointerInfoAdapter *)*(unsigned int *)v62[0];
  }
  else
  {
    v10 = (PointerInfoAdapter *)*((unsigned int *)this + 14);
    *((_DWORD *)this + 14) = (_DWORD)v10 + 1;
  }
  DWORD1(v63[0]) = (_DWORD)v10;
  HIDWORD(v63[0]) = 335872;
  DWORD2(v63[0]) = *((_DWORD *)this + 15);
  *((_DWORD *)this + 15) = DWORD2(v63[0]) + 1;
  PointerInfoAdapter::PopulatePointerInfoProperties(v10, (HMONITOR *)a2, v9, (struct tagPOINTER_INFO_UNION *)v63);
  (*(void (__fastcall **)(_QWORD, __int64, _OWORD *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), 1LL, v63);
  return v4;
}
