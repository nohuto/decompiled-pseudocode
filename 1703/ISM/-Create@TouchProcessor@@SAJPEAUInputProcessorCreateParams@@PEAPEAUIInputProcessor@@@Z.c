/*
 * XREFs of ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18005FB60
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x18005C34C (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     ??0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18005D78C (--0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@PointerProcessor@@IEAAJXZ @ 0x18005D9F8 (-Initialize@PointerProcessor@@IEAAJXZ.c)
 *     ?InitializeCoreMessaging@TouchProcessor@@QEAAJXZ @ 0x180060210 (-InitializeCoreMessaging@TouchProcessor@@QEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  char *v4; // rax
  _DWORD *v5; // rcx
  char *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  int v12; // r9d
  PointerInfoAdapter *v13; // rax
  PointerInfoAdapter *v14; // rsi
  PointerInfoAdapter *v15; // rsi
  __int64 v16; // rcx

  v4 = (char *)malloc(0x290uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0x290uLL);
  if ( v6 )
  {
    PointerProcessor::PointerProcessor((PointerProcessor *)v6, *a1, a1[1]);
    *(_QWORD *)v6 = &TouchProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v6 + 1) = &TouchProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v6 + 21) = &TouchProcessor::`vftable';
    *((_QWORD *)v6 + 72) = 0LL;
    *((_QWORD *)v6 + 73) = 0LL;
    *((_QWORD *)v6 + 74) = 0LL;
    *((_QWORD *)v6 + 75) = 0LL;
    *(_WORD *)(v6 + 609) = 0;
    v6[611] = 0;
    v7 = 0;
    *(_QWORD *)(v6 + 612) = 0LL;
    *((_WORD *)v6 + 310) = 0;
    *(_QWORD *)(v6 + 622) = 0LL;
    v6[630] = 0;
    *((_DWORD *)v6 + 162) = 0;
    v6[608] = 0;
    v5 = v6 + 176;
    do
    {
      *v5 = 0;
      ++v7;
      v5 += 2;
    }
    while ( v7 < 0x32 );
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v8 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 57, 14);
    return v8;
  }
  v9 = PointerProcessor::Initialize((PointerProcessor *)v6);
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_33;
    v12 = 73;
    goto LABEL_15;
  }
  *((_QWORD *)v6 + 79) = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)v6 + 5) + 32LL))(
         *((_QWORD *)v6 + 5),
         v6 + 640,
         v6 + 644);
  v11 = v9;
  if ( v9 >= 0 )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      v13 = (PointerInfoAdapter *)malloc(0x60uLL);
      v14 = v13;
      if ( v13 )
        memset(v13, 0, 0x60uLL);
      if ( v14 )
        v15 = PointerInfoAdapter::PointerInfoAdapter(v14, (struct IPointerInfoAdapterClient *)(v6 + 168));
      else
        v15 = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v15 + 8LL))(v15);
      v16 = *((_QWORD *)v6 + 75);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *((_QWORD *)v6 + 75) = v15;
      if ( !v15 )
      {
        v8 = -2147024882;
        LOBYTE(v11) = 14;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v8;
        Template_qqq(v16, &MinInput_Warning_CheckResult, 0, 81, 14);
        goto LABEL_34;
      }
    }
    TouchProcessor::InitializeCoreMessaging((TouchProcessor *)v6);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v12 = 76;
LABEL_15:
    Template_qqq(v10, &MinInput_Warning_CheckResult, 0, v12, v9);
  }
LABEL_33:
  v8 = v11;
  if ( v11 >= 0 )
  {
    *a2 = (struct IInputProcessor *)v6;
    return v8;
  }
LABEL_34:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 60, v11);
  return v8;
}
