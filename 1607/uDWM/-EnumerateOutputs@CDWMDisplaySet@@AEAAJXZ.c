/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003EDE8
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18001ECC0 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18003F094 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18003F0F4 (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003F354 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // esi
  unsigned int v5; // r14d
  __int64 v6; // r15
  __int64 v8; // rdi
  int updated; // eax
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  CDWMDisplay *v15; // rax
  CDWMDisplay *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  int v20; // edi
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-38h]
  unsigned int v23; // [rsp+20h] [rbp-38h]
  CDWMDisplay *v24; // [rsp+60h] [rbp+8h] BYREF

  v24 = 0LL;
  v2 = 0;
  v3 = *((_QWORD *)this + 1);
  v4 = 0;
  if ( !*(_DWORD *)(v3 + 80) )
    return v2;
  while ( 1 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8LL * v4);
    if ( *(_DWORD *)(v6 + 376) )
      break;
LABEL_3:
    v3 = *((_QWORD *)this + 1);
    if ( ++v4 >= *(_DWORD *)(v3 + 80) )
      goto LABEL_4;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v6 + 352) + 272LL * v5;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v8);
    v2 = updated;
    if ( updated < 0 )
      break;
    if ( !*(_DWORD *)(v8 + 176) && !*(_DWORD *)(v8 + 180) && !*(_DWORD *)(v8 + 184) && !*(_DWORD *)(v8 + 188) )
      goto LABEL_32;
    v10 = (_WORD *)(v8 + 196);
    v11 = 0LL;
    if ( v8 == -196 )
      goto LABEL_38;
    v12 = 0;
    v13 = 32LL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v13;
    }
    while ( v13 );
    if ( !v13 )
    {
      v11 = 0LL;
LABEL_38:
      v12 = -2147024809;
      goto LABEL_17;
    }
    v11 = 32 - v13;
LABEL_17:
    if ( v12 < 0 )
      v14 = 0LL;
    else
      v14 = 2 * v11;
    if ( v12 < 0 )
    {
      v23 = 60;
      goto LABEL_45;
    }
    if ( v14 < 2 )
    {
      v23 = 65;
LABEL_45:
      v20 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v23);
LABEL_46:
      v2 = v20;
      v22 = 252;
      goto LABEL_47;
    }
    if ( (*(_BYTE *)(v8 + 192) & 8) != 0 && !*(_QWORD *)(v8 + 104) )
    {
      v20 = -2003304442;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x4Au);
      goto LABEL_46;
    }
    v15 = (CDWMDisplay *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           216LL);
    if ( v15 )
      v16 = CDWMDisplay::CDWMDisplay(v15, (struct CDWMDXGIAdapter *)v6, (const struct DXGIOutputInfo *)v8);
    else
      v16 = 0LL;
    v24 = v16;
    if ( !v16 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x104u);
      goto LABEL_4;
    }
    v17 = *((_DWORD *)this + 16);
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v2 = -2147024362;
LABEL_43:
      v22 = 262;
LABEL_47:
      v21 = v20;
      goto LABEL_51;
    }
    v2 = 0;
    if ( v18 <= *((_DWORD *)this + 15) )
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v24;
      *((_DWORD *)this + 16) = v18;
    }
    else
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v24);
      v20 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
      v2 = v20;
      if ( v20 < 0 )
        goto LABEL_43;
    }
    v24 = 0LL;
LABEL_32:
    if ( ++v5 >= *(_DWORD *)(v6 + 376) )
      goto LABEL_3;
  }
  v22 = 242;
  v21 = updated;
LABEL_51:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v22);
LABEL_4:
  if ( v24 )
    CDWMDisplay::Release(v24);
  return v2;
}
