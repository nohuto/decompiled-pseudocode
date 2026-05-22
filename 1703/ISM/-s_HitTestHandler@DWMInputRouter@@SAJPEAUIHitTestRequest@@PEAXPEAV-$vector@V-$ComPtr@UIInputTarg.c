/*
 * XREFs of ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180016F50
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800092F0 (-GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJIPEAXPEAPEAUIInputTarget@@@Z @ 0x1800141EC (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJIPEAXPEAPEAUIInputTarget@@@Z.c)
 *     ConvertInputTypeToPointerType @ 0x1800148A8 (ConvertInputTypeToPointerType.c)
 *     ?HitTestView@DWMInputRouter@@KAIPEAPEAXI@Z @ 0x180015FD4 (-HitTestView@DWMInputRouter@@KAIPEAPEAXI@Z.c)
 *     ?FireViewHitTestCallback@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x180016024 (-FireViewHitTestCallback@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x1800191F8 (--$emplace_back@AEBV-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ?Set@Property@Input@@UEAAJPEBXK@Z @ 0x1800278A0 (-Set@Property@Input@@UEAAJPEBXK@Z.c)
 *     ?Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z @ 0x180027DB8 (-Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DWMInputRouter::s_HitTestHandler(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v6; // rdi
  __int64 *i; // rbx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int PointerAtIndex; // eax
  __int64 v11; // rcx
  int v12; // edi
  int v13; // r9d
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  int v16; // eax
  struct Pointer *v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // r14d
  void *v24; // rdi
  struct IInputTarget *v25; // rbx
  char v26; // si
  struct IInputTarget *v27; // rcx
  struct IInputTarget *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // rax
  struct IInputTarget *v36; // rcx
  unsigned int v37; // r14d
  Input::PropertyMap *v38; // rsi
  __int64 v39; // rcx
  int v40; // r9d
  Input::PropertyMap *v41; // rsi
  int v42; // eax
  __int64 v43; // rcx
  struct IInputTarget *v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  struct IInputTarget *v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  struct IInputTarget *v50; // rsi
  unsigned int v51; // eax
  struct IInputTarget *v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 (__fastcall ***v55)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v56; // rcx
  struct IInputTarget *v57; // rcx
  __int64 v59; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B8h] BYREF
  struct IInputTarget *v61; // [rsp+58h] [rbp-B0h] BYREF
  struct IInputTarget *v62; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+68h] [rbp-A0h] BYREF
  struct IInputTarget *v64; // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall ***v65)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-90h] BYREF
  __int64 v66; // [rsp+80h] [rbp-88h] BYREF
  struct Pointer *v67; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v68; // [rsp+90h] [rbp-78h]
  void *v69; // [rsp+98h] [rbp-70h]
  int v70; // [rsp+A0h] [rbp-68h] BYREF
  struct IInputTarget *v71; // [rsp+A8h] [rbp-60h]
  char v72; // [rsp+B0h] [rbp-58h]
  __int64 v73; // [rsp+B8h] [rbp-50h]
  __int64 v74[24]; // [rsp+C8h] [rbp-40h] BYREF
  void **v75; // [rsp+188h] [rbp+80h] BYREF
  __int128 v76; // [rsp+190h] [rbp+88h]
  __int64 v77; // [rsp+1A0h] [rbp+98h]
  void *Block; // [rsp+1A8h] [rbp+A0h]
  __int64 v79; // [rsp+1B0h] [rbp+A8h]
  int v80[177]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int16 v81; // [rsp+48Ch] [rbp+384h]
  char v82; // [rsp+928h] [rbp+820h] BYREF

  v73 = -2LL;
  v6 = a3[1];
  for ( i = *a3; i != v6; ++i )
  {
    v8 = *i;
    if ( *i )
    {
      *i = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  a3[1] = *a3;
  v69 = 0LL;
  memset(v74, 0, sizeof(v74));
  v64 = 0LL;
  v66 = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  v68 = v9;
  PointerAtIndex = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 56LL))(a1, v80);
  v12 = PointerAtIndex;
  if ( PointerAtIndex < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_124;
    v13 = 2300;
    goto LABEL_9;
  }
  PointerAtIndex = GetPointerAtIndex((struct InputInfo *)v80, v9, &v67);
  v12 = PointerAtIndex;
  if ( PointerAtIndex < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v13 = 2301;
LABEL_9:
      Template_qqq(v11, &MinInput_Warning_CheckResult, 0, v13, PointerAtIndex);
      goto LABEL_124;
    }
    goto LABEL_124;
  }
  PointerAtIndex = (*(__int64 (__fastcall **)(__int64, struct IInputTarget **))(*(_QWORD *)a1 + 40LL))(a1, &v64);
  v12 = PointerAtIndex;
  if ( PointerAtIndex >= 0 )
  {
    v14 = v66;
    if ( v66 )
    {
      v66 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    PointerAtIndex = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v66);
    v12 = PointerAtIndex;
    if ( PointerAtIndex < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v13 = 2303;
        goto LABEL_9;
      }
      goto LABEL_124;
    }
    v15 = v65;
    if ( v65 )
    {
      v65 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
    }
    PointerAtIndex = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a1 + 24LL))(
                       a1,
                       &v65);
    v12 = PointerAtIndex;
    if ( PointerAtIndex < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v13 = 2308;
        goto LABEL_9;
      }
      goto LABEL_124;
    }
    PointerAtIndex = (**v65)(v65, &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754, &v63);
    v12 = PointerAtIndex;
    if ( PointerAtIndex < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v13 = 2309;
        goto LABEL_9;
      }
      goto LABEL_124;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v63 + 24LL))(v63, &v74[1]);
    HIDWORD(v74[21]) = 0;
    LODWORD(v74[0]) = ConvertInputTypeToPointerType(v80[0]);
    if ( LODWORD(v74[0]) == 4 )
    {
      v16 = ((v81 & 0xC00) != 0) | 2;
      if ( (v81 & 1) == 0 )
        v16 = (v81 & 0xC00) != 0;
      HIDWORD(v74[21]) = v16;
    }
    v17 = v67;
    v62 = *(struct IInputTarget **)((char *)v67 + 12);
    v74[2] = (__int64)v62;
    v74[5] = (__int64)&v82;
    v74[6] = 100LL;
    LODWORD(v74[23]) = v80[170];
    if ( !(***(unsigned __int8 (__fastcall ****)(_QWORD, __int64 *))(a2 + 184))(*(_QWORD *)(a2 + 184), v74) )
      goto LABEL_124;
    if ( LODWORD(v74[6]) > 0x64 )
    {
      CloseHandle((HANDLE)v74[4]);
      memset(v74, 0, sizeof(v74));
      v69 = operator new[](saturated_mul(LODWORD(v74[6]), 8uLL));
      if ( !v69 )
      {
        v12 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v18, &MinInput_Warning_CheckResult, 0, 2346, 14);
        goto LABEL_124;
      }
      LODWORD(v74[0]) = ConvertInputTypeToPointerType(v80[0]);
      if ( LODWORD(v74[0]) == 4 )
      {
        v20 = HIDWORD(v74[21]);
        if ( (v81 & 0xC00) != 0 )
          v20 = HIDWORD(v74[21]) | 1;
        v21 = v20 | 2;
        if ( (v81 & 1) == 0 )
          v21 = v20;
        HIDWORD(v74[21]) = v21;
      }
      v62 = *(struct IInputTarget **)((char *)v17 + 12);
      v74[2] = (__int64)v62;
      v74[5] = v19;
      if ( !(***(unsigned __int8 (__fastcall ****)(_QWORD, __int64 *))(a2 + 184))(*(_QWORD *)(a2 + 184), v74) )
      {
        v12 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v22, &MinInput_Warning_CheckResult, 0, 2368, 255);
        goto LABEL_122;
      }
    }
    v23 = HIDWORD(v74[15]);
    v24 = (void *)v74[4];
    v25 = 0LL;
    v62 = 0LL;
    v26 = 0;
    if ( !v64 )
      goto LABEL_62;
    v61 = 0LL;
    if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, struct IInputTarget **))v64)(
           v64,
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           &v61) >= 0 )
    {
      v27 = v61;
      if ( !v61 )
      {
        v12 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 2393, 255);
          v27 = v61;
        }
        if ( v27 )
        {
          v61 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 16LL))(v27);
        }
        goto LABEL_122;
      }
      v26 = (*(__int64 (__fastcall **)(struct IInputTarget *, _QWORD, void *))(*(_QWORD *)v61 + 24LL))(v61, v23, v24);
    }
    v28 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    if ( v26 )
    {
      if ( v64 )
      {
        v25 = v64;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v64 + 8LL))(v64);
        v62 = v25;
      }
      CloseHandle(v24);
    }
    else
    {
LABEL_62:
      v29 = DWMInputRouter::CreateAndRegisterTarget((DWMInputRouter *)a2, v23, v24, &v62);
      v12 = v29;
      if ( v29 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v30, &MinInput_Warning_CheckResult, 0, 2423, v29);
        goto LABEL_119;
      }
      v25 = v62;
    }
    v60 = 0LL;
    v31 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v25)(
            v25,
            &GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78,
            &v60);
    v12 = v31;
    if ( v31 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_70:
        v34 = v60;
        if ( v60 )
        {
          v60 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        v35 = *(_QWORD *)v25;
        v36 = v25;
        goto LABEL_121;
      }
      v33 = 2430;
LABEL_69:
      Template_qqq(v32, &MinInput_Warning_CheckResult, 0, v33, v31);
      goto LABEL_70;
    }
    v31 = (*(__int64 (__fastcall **)(__int64, struct Pointer **))(*(_QWORD *)v60 + 32LL))(v60, &v67);
    v12 = v31;
    if ( v31 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_70;
      v33 = 2431;
      goto LABEL_69;
    }
    LOBYTE(v59) = v74[21] & 1;
    v37 = v74[15];
    v38 = v67;
    v75 = &Input::PropertyNode::`vftable';
    v76 = INPUTTARGET_ROUTETOMT;
    v77 = 0LL;
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)&v75);
    v75 = &Input::Property::`vftable';
    Block = 0LL;
    v79 = 0LL;
    v12 = Input::Property::Set((Input::Property *)&v75, &v59, 1u);
    if ( v12 >= 0 )
      v12 = Input::PropertyMap::Insert(v38);
    v75 = &Input::Property::`vftable';
    operator delete(Block);
    Block = 0LL;
    v79 = 0LL;
    operator delete(0LL);
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_70;
      v40 = 2438;
LABEL_81:
      Template_qqq(v39, &MinInput_Warning_CheckResult, 0, v40, v12);
      goto LABEL_70;
    }
    v41 = v67;
    v75 = &Input::PropertyNode::`vftable';
    v76 = INPUTTARGET_HITTESTEDINTERACTION;
    v77 = 0LL;
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)&v75);
    v75 = &Input::Property::`vftable';
    Block = 0LL;
    v79 = 0LL;
    v12 = Input::Property::Set((Input::Property *)&v75, &v74[15], 4u);
    if ( v12 >= 0 )
      v12 = Input::PropertyMap::Insert(v41);
    v75 = &Input::Property::`vftable';
    operator delete(Block);
    Block = 0LL;
    v79 = 0LL;
    operator delete(0LL);
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_70;
      v40 = 2442;
      goto LABEL_81;
    }
    if ( (_BYTE)v59 )
    {
      v61 = 0LL;
      v42 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, struct IInputTarget **))v25)(
              v25,
              &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
              &v61);
      v12 = v42;
      if ( v42 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v43, &MinInput_Warning_CheckResult, 0, 2451, v42);
LABEL_92:
        v44 = v61;
        if ( !v61 )
          goto LABEL_70;
        v61 = 0LL;
LABEL_94:
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v44 + 16LL))(v44);
        goto LABEL_70;
      }
      v45 = (*(__int64 (__fastcall **)(struct IInputTarget *, _QWORD))(*(_QWORD *)v61 + 104LL))(v61, v37);
      v12 = v45;
      if ( v45 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v46, &MinInput_Warning_CheckResult, 0, 2454, v45);
        goto LABEL_92;
      }
      v47 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v47 + 16LL))(v47);
      }
    }
    v71 = 0LL;
    v48 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, _QWORD, struct IInputTarget *, int *))(**(_QWORD **)(a2 + 216)
                                                                                                  + 24LL))(
            *(_QWORD *)(a2 + 216),
            v63,
            v80,
            v68,
            v25,
            &v70);
    v12 = v48;
    if ( v48 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v49, &MinInput_Warning_CheckResult, 0, 2473, v48);
      v44 = v71;
      v71 = 0LL;
      if ( !v44 )
        goto LABEL_70;
      goto LABEL_94;
    }
    if ( !v70 )
      goto LABEL_113;
    v50 = v71;
    if ( v25 != v71 )
    {
      if ( v71 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v71 + 8LL))(v71);
      v62 = v50;
      if ( v25 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    if ( (v72 & 1) == 0 )
    {
LABEL_113:
      if ( (*((_BYTE *)v17 + 4) & 2) != 0 )
      {
        v51 = DWMInputRouter::HitTestView((void **)v74[5], v74[6]);
        DWMInputRouter::FireViewHitTestCallback(a2, v51, v80[1], v80[0], v74[1], v74[2]);
      }
    }
    std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> const &>(
      a3,
      &v62);
    v52 = v71;
    v71 = 0LL;
    if ( v52 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v52 + 16LL))(v52);
    v53 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
LABEL_119:
    v36 = v62;
    if ( !v62 )
      goto LABEL_122;
    v35 = *(_QWORD *)v62;
LABEL_121:
    (*(void (__fastcall **)(struct IInputTarget *))(v35 + 16))(v36);
LABEL_122:
    if ( v69 )
      operator delete(v69);
    goto LABEL_124;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v13 = 2302;
    goto LABEL_9;
  }
LABEL_124:
  v54 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v55 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v55)[2])(v55);
  }
  v56 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  }
  v57 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v57 + 16LL))(v57);
  }
  return (unsigned int)v12;
}
