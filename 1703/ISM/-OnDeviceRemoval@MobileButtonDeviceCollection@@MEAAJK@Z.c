/*
 * XREFs of ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x18007C130
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x18007C8D4 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetValueForKey@?$FixedSizeMap@KUUsageList@MobileButtonDeviceCollection@@$0BAA@@@QEAAJAEBKPEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x18007CA5C (-GetValueForKey@-$FixedSizeMap@KUUsageList@MobileButtonDeviceCollection@@$0BAA@@@QEAAJAEBKPEAUUs.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceRemoval(MobileButtonDeviceCollection *this, unsigned int a2)
{
  char *v2; // r14
  int ValueForKey; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // esi
  _WORD *v11; // r12
  DWORD TickCount; // ebx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-7B8h] BYREF
  void *Block; // [rsp+48h] [rbp-7B0h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-7A8h]
  _BYTE v19[1888]; // [rsp+60h] [rbp-798h] BYREF
  unsigned int v20; // [rsp+808h] [rbp+10h] BYREF

  v20 = a2;
  v2 = (char *)this + 2760;
  ValueForKey = FixedSizeMap<unsigned long,MobileButtonDeviceCollection::UsageList,256>::GetValueForKey(
                  (char *)this + 2760,
                  &v20,
                  &Block);
  v7 = 0LL;
  v8 = ValueForKey;
  if ( ValueForKey >= 0 )
  {
    v10 = 0;
    v11 = Block;
    if ( v18 )
    {
      while ( 1 )
      {
        TickCount = GetTickCount();
        QueryPerformanceCounter(&PerformanceCount);
        ValueForKey = MobileButtonDeviceCollection::CreateButtonInfo(
                        (MobileButtonDeviceCollection *)(unsigned __int16)v11[v10],
                        a2,
                        TickCount,
                        PerformanceCount,
                        v11[v10],
                        0,
                        (struct InputInfo *)v19);
        v8 = ValueForKey;
        if ( ValueForKey < 0 )
          break;
        ValueForKey = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                        *((_QWORD *)this + 2),
                        v19);
        v8 = ValueForKey;
        if ( ValueForKey < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v8;
          v9 = 183;
          goto LABEL_4;
        }
        if ( ++v10 >= v18 )
          goto LABEL_10;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v8;
      v9 = 177;
      goto LABEL_4;
    }
LABEL_10:
    v8 = 0;
    v13 = v2;
    do
    {
      if ( *v13 == a2 )
      {
        *(_DWORD *)&v2[24 * v7] = *((_DWORD *)v2 + 1536);
        operator delete(v11);
        return v8;
      }
      v7 = (unsigned int)(v7 + 1);
      v13 += 6;
    }
    while ( (unsigned int)v7 < 0x100 );
    v8 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 193, 5);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 190, 5);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 150;
LABEL_4:
    Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v9, ValueForKey);
  }
  return v8;
}
