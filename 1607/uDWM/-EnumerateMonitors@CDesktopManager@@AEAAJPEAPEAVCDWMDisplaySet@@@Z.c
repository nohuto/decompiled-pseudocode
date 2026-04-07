/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18001ECC0
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x18001E910 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002AC70 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18003DDAC (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18003EA38 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18003EBD0 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003EDE8 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18003F06C (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  struct CDWMDisplaySet *v2; // rax
  struct CDWMDXGIEnumeration **v4; // rsi
  __int64 v5; // rcx
  CDWMDisplaySet *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  _DWORD *v11; // rax
  struct CDWMDXGIEnumeration *v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  int v19; // ebx
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-28h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 16);
  *a2 = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)v2);
  v4 = (struct CDWMDXGIEnumeration **)((char *)this + 120);
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *v4 = 0LL;
  }
  v6 = (CDWMDisplaySet *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    CDWMDisplaySet::Release(v6);
    *((_QWORD *)this + 16) = 0LL;
  }
  v7 = CDWMDXGIEnumeration::Create(v4);
  v8 = v7;
  if ( v7 < 0 )
  {
    v22 = 790;
    v21 = v7;
LABEL_34:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v22);
    return v8;
  }
  v9 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   112LL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 1;
    v11 = v9 + 18;
    v10[16] = 0;
    *((_QWORD *)v10 + 5) = v11;
    *((_QWORD *)v10 + 6) = v11;
    v10[14] = 4;
    v10[15] = 4;
    v10[7] = 0;
    v10[6] = 0;
    v10[5] = 0;
    v10[4] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 16) = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    v22 = 791;
    v21 = -2147024882;
    goto LABEL_34;
  }
  v12 = *v4;
  *((_QWORD *)v10 + 1) = *v4;
  if ( v12 )
    (**(void (__fastcall ***)(struct CDWMDXGIEnumeration *))v12)(v12);
  v13 = CDWMDisplaySet::EnumerateOutputs((CDWMDisplaySet *)v10);
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800A3CA8, 1u, v13, 0x75u);
  }
  else
  {
    v14 = CDWMDisplaySet::ArrangeCloneDisplays((CDWMDisplaySet *)v10);
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800A3CA8, 1u, v14, 0x77u);
    else
      CDWMDisplaySet::ComputeDisplayBounds((CDWMDisplaySet *)v10);
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    v22 = 792;
    v21 = v8;
    goto LABEL_34;
  }
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 88, 8LL);
  v15 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 16) + 64LL) )
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 40LL) + 8 * v15) + 88LL) + 16LL);
      v16 = *((_DWORD *)this + 28);
      v17 = v16 + 1;
      if ( v16 + 1 < v16 )
        break;
      v8 = 0;
      if ( v17 <= *((_DWORD *)this + 27) )
      {
        *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 28)) = v23;
        *((_DWORD *)this + 28) = v17;
      }
      else
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 88, 8LL, 1LL, &v23);
        v19 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
        v8 = v19;
        if ( v19 < 0 )
          goto LABEL_33;
      }
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= *(_DWORD *)(*((_QWORD *)this + 16) + 64LL) )
        return v8;
    }
    v19 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v8 = -2147024362;
LABEL_33:
    v22 = 798;
    v21 = v19;
    goto LABEL_34;
  }
  return v8;
}
