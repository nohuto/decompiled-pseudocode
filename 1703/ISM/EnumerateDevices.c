/*
 * XREFs of EnumerateDevices @ 0x180076FD8
 * Callers:
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x1800798C4 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18006500C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$emplace_back@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18007B270 (--$emplace_back@VHString@Wrappers@WRL@Microsoft@@@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$a.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E0BC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EnumerateDevices(LPGUID InterfaceClassGuid, __int64 a2)
{
  char *v4; // r15
  char *i; // rbx
  char *v6; // rbx
  char *v7; // r15
  char *v9; // r15
  unsigned __int64 v10; // rax
  WCHAR *v11; // rax
  WCHAR *v12; // rbx
  HSTRING *v13; // rbx
  HSTRING *v14; // r14
  CONFIGRET Device_Interface_ListW; // eax
  DWORD v16; // eax
  unsigned int v17; // r15d
  HSTRING *v18; // rbx
  HSTRING *v19; // r14
  const WCHAR *j; // r15
  unsigned __int64 v21; // r12
  HRESULT v22; // r12d
  HSTRING *v23; // rbx
  HSTRING *v24; // r14
  __int64 v25; // rax
  HSTRING *v26; // r14
  HSTRING *v27; // r15
  HSTRING *v28; // r12
  HSTRING *v29; // rbx
  HSTRING *v30; // r14
  void *v31[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h]
  ULONG pulLen; // [rsp+48h] [rbp-50h] BYREF
  HSTRING string; // [rsp+50h] [rbp-48h] BYREF
  void *Block; // [rsp+58h] [rbp-40h]
  __int64 v36; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v36 = -2LL;
  v4 = *(char **)(a2 + 8);
  for ( i = *(char **)a2; i != v4; i += 8 )
  {
    WindowsDeleteString(*(HSTRING *)i);
    *(_QWORD *)i = 0LL;
  }
  *(_QWORD *)(a2 + 8) = *(_QWORD *)a2;
  *(_OWORD *)v31 = 0LL;
  v32 = 0LL;
  while ( 1 )
  {
    pulLen = 0;
    if ( CM_Get_Device_Interface_List_SizeW(&pulLen, InterfaceClassGuid, 0LL, 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)0x80070490LL);
      v6 = (char *)v31[0];
      if ( !v31[0] )
        return 2147943568LL;
      v7 = (char *)v31[1];
      if ( v31[0] == v31[1] )
      {
LABEL_10:
        std::_Deallocate(v6, (v32 - (__int64)v6) >> 3, 8uLL);
        return 2147943568LL;
      }
      do
      {
        WindowsDeleteString(*(HSTRING *)v6);
        *(_QWORD *)v6 = 0LL;
        v6 += 8;
      }
      while ( v6 != v7 );
LABEL_9:
      v6 = (char *)v31[0];
      goto LABEL_10;
    }
    if ( pulLen <= 1 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)0x80070490LL);
      v6 = (char *)v31[0];
      if ( !v31[0] )
        return 2147943568LL;
      v9 = (char *)v31[1];
      if ( v31[0] == v31[1] )
        goto LABEL_10;
      do
      {
        WindowsDeleteString(*(HSTRING *)v6);
        *(_QWORD *)v6 = 0LL;
        v6 += 8;
      }
      while ( v6 != v9 );
      goto LABEL_9;
    }
    v10 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v10 = -1LL;
    v11 = (WCHAR *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    Block = v11;
    if ( !v11 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)0x8007000ELL);
      v13 = (HSTRING *)v31[0];
      if ( v31[0] )
      {
        v14 = (HSTRING *)v31[1];
        if ( v31[0] != v31[1] )
        {
          do
          {
            WindowsDeleteString(*v13);
            *v13++ = 0LL;
          }
          while ( v13 != v14 );
          goto LABEL_23;
        }
        goto LABEL_24;
      }
      return 2147942414LL;
    }
    memset(v11, 0, 2LL * pulLen);
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(InterfaceClassGuid, 0LL, v12, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
      break;
    operator delete(v12);
  }
  v16 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
  if ( v16 )
  {
    v17 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x9A,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
            (const char *)v16);
    operator delete(v12);
    v18 = (HSTRING *)v31[0];
    if ( v31[0] )
    {
      v19 = (HSTRING *)v31[1];
      if ( v31[0] != v31[1] )
      {
        do
        {
          WindowsDeleteString(*v18);
          *v18++ = 0LL;
        }
        while ( v18 != v19 );
        v18 = (HSTRING *)v31[0];
      }
      std::_Deallocate((char *)v18, (v32 - (__int64)v18) >> 3, 8uLL);
    }
    return v17;
  }
  for ( j = v12; ; j += v25 + 1 )
  {
    if ( !*j )
    {
      if ( (void **)a2 != v31 )
      {
        v27 = *(HSTRING **)a2;
        if ( *(_QWORD *)a2 )
        {
          v28 = *(HSTRING **)(a2 + 8);
          while ( v27 != v28 )
          {
            WindowsDeleteString(*v27);
            *v27++ = 0LL;
          }
          std::_Deallocate(*(char **)a2, (__int64)(*(_QWORD *)(a2 + 16) - *(_QWORD *)a2) >> 3, 8uLL);
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_QWORD *)(a2 + 16) = 0LL;
        }
        *(void **)a2 = v31[0];
        *(void **)(a2 + 8) = v31[1];
        *(_QWORD *)(a2 + 16) = v32;
        *(_OWORD *)v31 = 0LL;
        v32 = 0LL;
      }
      if ( v12 )
        operator delete(v12);
      v29 = (HSTRING *)v31[0];
      if ( v31[0] )
      {
        v30 = (HSTRING *)v31[1];
        if ( v31[0] != v31[1] )
        {
          do
          {
            WindowsDeleteString(*v29);
            *v29++ = 0LL;
          }
          while ( v29 != v30 );
          v29 = (HSTRING *)v31[0];
        }
        std::_Deallocate((char *)v29, (v32 - (__int64)v29) >> 3, 8uLL);
      }
      return 0LL;
    }
    string = 0LL;
    v21 = -1LL;
    do
      ++v21;
    while ( j[v21] );
    if ( v21 > 0xFFFFFFFF )
    {
      v22 = -2147024362;
LABEL_41:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v22);
      WindowsDeleteString(string);
      string = 0LL;
      if ( v12 )
        operator delete(v12);
      v23 = (HSTRING *)v31[0];
      if ( v31[0] )
      {
        v24 = (HSTRING *)v31[1];
        if ( v31[0] != v31[1] )
        {
          do
          {
            WindowsDeleteString(*v23);
            *v23++ = 0LL;
          }
          while ( v23 != v24 );
          v23 = (HSTRING *)v31[0];
        }
        std::_Deallocate((char *)v23, (v32 - (__int64)v23) >> 3, 8uLL);
      }
      return (unsigned int)v22;
    }
    WindowsDeleteString(0LL);
    string = 0LL;
    v22 = WindowsCreateString(j, v21, &string);
    if ( v22 < 0 )
      goto LABEL_41;
    try
    {
      std::vector<Microsoft::WRL::Wrappers::HString>::emplace_back<Microsoft::WRL::Wrappers::HString>(v31, &string);
    }
    catch ( std::bad_alloc )
    {
      WindowsDeleteString(string);
      string = 0LL;
      if ( Block )
        operator delete(Block);
      v13 = (HSTRING *)v31[0];
      if ( !v31[0] )
        return 2147942414LL;
      v26 = (HSTRING *)v31[1];
      if ( v31[0] == v31[1] )
        goto LABEL_24;
      do
      {
        WindowsDeleteString(*v13);
        *v13++ = 0LL;
      }
      while ( v13 != v26 );
LABEL_23:
      v13 = (HSTRING *)v31[0];
LABEL_24:
      std::_Deallocate((char *)v13, (v32 - (__int64)v13) >> 3, 8uLL);
      return 2147942414LL;
    }
    WindowsDeleteString(string);
    v25 = -1LL;
    do
      ++v25;
    while ( j[v25] );
  }
}
