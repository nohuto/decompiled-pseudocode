/*
 * XREFs of ?HandleEvent@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18001FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::HandleEvent(
        Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  struct IUnknownVtbl *v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v10; // rcx
  struct IUnknownVtbl *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int v21; // [rsp+68h] [rbp+28h] BYREF

  if ( *(_OWORD *)a2 != *(_OWORD *)&GUID_c720fc22_be39_40a0_9e7c_737d4cf82088 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_72d5424d_6eb2_4735_b36d_c9c3c6f038ce.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_72d5424d_6eb2_4735_b36d_c9c3c6f038ce.Data4 )
    {
      if ( !*((_QWORD *)this + 14) )
        return 0LL;
      lpVtbl = a3->lpVtbl;
      v18 = 0LL;
      v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
             a3,
             &GUID_72d5424d_6eb2_4735_b36d_c9c3c6f038ce,
             &v18);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 90LL;
        goto LABEL_36;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 40LL))(v18, &v21);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 93LL;
        goto LABEL_36;
      }
      if ( v21 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 32LL))(v18, &v16);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 98LL;
          goto LABEL_36;
        }
        v10 = *((_QWORD *)this + 14);
        v19 = v18;
        LODWORD(v17) = v16;
        if ( !v10 )
        {
          std::_Xbad_function_call();
          __debugbreak();
        }
        v5 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v10 + 16LL))(v10, &v17, &v19);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 100LL;
          goto LABEL_36;
        }
      }
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_9234b3a2_4825_4dcb_9623_87d4cf66c22c.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_9234b3a2_4825_4dcb_9623_87d4cf66c22c.Data4
        || !*((_QWORD *)this + 22) )
      {
        return 0LL;
      }
      v11 = a3->lpVtbl;
      v18 = 0LL;
      v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v11->QueryInterface)(
             a3,
             &GUID_9234b3a2_4825_4dcb_9623_87d4cf66c22c,
             &v18);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 109LL;
        goto LABEL_36;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 40LL))(v18, &v21);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 112LL;
        goto LABEL_36;
      }
      v12 = *((_QWORD *)this + 22);
      v19 = v18;
      LODWORD(v17) = v21;
      if ( !v12 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      v5 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v12 + 16LL))(v12, &v17, &v19);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 114LL;
        goto LABEL_36;
      }
    }
LABEL_39:
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return 0LL;
  }
  if ( !*((_QWORD *)this + 30) )
    return 0LL;
  v4 = a3->lpVtbl;
  v18 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v4->QueryInterface)(
         a3,
         &GUID_c720fc22_be39_40a0_9e7c_737d4cf82088,
         &v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 40LL))(v18, &v21);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 80LL;
      goto LABEL_36;
    }
    v8 = *((_QWORD *)this + 30);
    v17 = v18;
    v16 = v21;
    if ( !v8 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    v5 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v8 + 16LL))(v8, &v16, &v17);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 82LL;
      goto LABEL_36;
    }
    goto LABEL_39;
  }
  v7 = 77LL;
LABEL_36:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tilenotificationsink.cpp",
    (const char *)(unsigned int)v5);
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v6;
}
