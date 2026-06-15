/*
 * XREFs of ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003F0F0
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003F010 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x18006D1E0 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeHardware::FindVolumeControlForEndpoint(
        CVolumeHardware *this,
        struct IUnknown *a2,
        struct IPartsList *a3)
{
  struct IUnknown *v6; // rbx
  int v7; // esi
  __int64 v8; // rcx
  struct IUnknown *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+88h] [rbp+38h] BYREF
  struct IUnknown *v17; // [rsp+98h] [rbp+48h] BYREF

  v15 = -2LL;
  v6 = 0LL;
  v17 = 0LL;
  v16 = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      52LL,
      &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      this);
    v6 = v17;
  }
  if ( a2 )
  {
    v14 = 0LL;
    pv = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))a2->lpVtbl[1].QueryInterface)(
           a2,
           &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
           23LL);
    if ( v7 < 0 )
      goto LABEL_38;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].Release)(a2, &pv);
    if ( v7 < 0 )
      goto LABEL_38;
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
    {
      if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_qS(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          53,
          (unsigned int)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
          (_DWORD)this,
          (__int64)pv);
        v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v8 + 28) & 0x10000) != 0
        && *(_BYTE *)(v8 + 25) >= 4u )
      {
        WPP_SF_q(*(_QWORD *)(v8 + 16), 54LL, &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, this);
      }
    }
    v9 = v17;
    if ( v17 != a2 )
    {
      ATL::AtlComQIPtrAssign(&v17, a2, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
      v9 = v17;
    }
    if ( v9 )
    {
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v9->lpVtbl[3].Release)(v9, &v16);
      if ( v7 < 0 )
        goto LABEL_38;
    }
    v10 = *v14;
    v11 = v16
        ? (*(__int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, GUID *, char *))(v10 + 72))(
            v14,
            a3,
            &GUID_35caf6e4_f3b3_4168_bb4b_55e77a461c7e,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 88)
        : (*(unsigned __int64 (__fastcall **)(__int64 *, struct IPartsList *, GUID *, char *))(v10 + 32))(
            v14,
            a3,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 88);
    v7 = v11;
    if ( v11 < 0 )
      goto LABEL_38;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        55LL,
        &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        this);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(**((_QWORD **)this + 11) + 104LL))(
           *((_QWORD *)this + 11),
           23LL,
           &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
           (char *)this + 96);
    if ( v7 < 0 )
    {
LABEL_38:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x38u,
          (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
          v7);
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
    v6 = v17;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v7;
}
