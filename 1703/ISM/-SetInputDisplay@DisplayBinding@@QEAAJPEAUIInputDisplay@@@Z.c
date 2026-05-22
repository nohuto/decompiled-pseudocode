/*
 * XREFs of ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x18001C6A4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800136A0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 *     ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x180015110 (-GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ?Set@Property@Input@@UEAAJPEBXK@Z @ 0x1800278A0 (-Set@Property@Input@@UEAAJPEBXK@Z.c)
 *     ?GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z @ 0x180027ECC (-GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z.c)
 *     ?Append@PropertyVector@Input@@UEAAJ$$QEAVPropertyNode@2@@Z @ 0x180028560 (-Append@PropertyVector@Input@@UEAAJ$$QEAVPropertyNode@2@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DisplayBinding::SetInputDisplay(DisplayBinding *this, struct IInputDisplay *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // r9d
  struct Input::PropertyNode *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+38h] [rbp-39h] BYREF
  __int64 v14; // [rsp+40h] [rbp-31h] BYREF
  struct Input::PropertyNode *v15[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v16; // [rsp+58h] [rbp-19h]
  void **v17; // [rsp+60h] [rbp-11h] BYREF
  __int128 v18; // [rsp+68h] [rbp-9h]
  __int64 v19; // [rsp+78h] [rbp+7h]
  void *Block; // [rsp+80h] [rbp+Fh]
  int v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+8Ch] [rbp+1Bh]

  v16 = -2LL;
  v14 = 0LL;
  v17 = &Input::PropertyNode::`vftable';
  v18 = DISPLAYBINDING_MONITOR_ENTRY;
  v19 = 0LL;
  Input::PropertyNode::GetDefinition((Input::PropertyNode *)&v17);
  v17 = &Input::Property::`vftable';
  Block = 0LL;
  v21 = 0;
  v22 = 0;
  v13 = (*(__int64 (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 48LL))(a2);
  v4 = (*(__int64 (__fastcall **)(struct IInputDisplay *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v14);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v4 = Input::Property::Set((Input::Property *)&v17, &v14, 8u);
    v6 = v4;
    if ( v4 >= 0 )
    {
      v4 = Input::PropertyMap::GetAt((DisplayBinding *)((char *)this + 64), &DISPLAYBINDING_MONITORS, v15);
      v6 = v4;
      if ( v4 >= 0 )
      {
        v8 = v15[0];
        v6 = Input::PropertyVector::Append(v15[0], &v17);
        if ( v6 >= 0 )
        {
          v9 = *((_QWORD *)v8 + 7);
          if ( v9 )
          {
            *(_OWORD *)v15 = *(_OWORD *)((char *)v8 + 8);
            (*(void (__fastcall **)(__int64, struct Input::PropertyNode **))(*(_QWORD *)v9 + 24LL))(v9, v15);
          }
        }
        if ( v6 >= 0 )
        {
          v6 = Input::PropertyMap::GetAt((DisplayBinding *)((char *)this + 64), &DISPLAYBINDING_ORIENTATION, v15);
          if ( v6 >= 0 )
            v6 = (*(__int64 (__fastcall **)(struct Input::PropertyNode *, int *, __int64))(*(_QWORD *)v15[0] + 160LL))(
                   v15[0],
                   &v13,
                   4LL);
          if ( v6 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(struct IInputDisplay *, _QWORD))(*(_QWORD *)a2 + 56LL))(
                   a2,
                   ((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
            v6 = v4;
            if ( v4 >= 0 )
            {
              if ( *((struct IInputDisplay **)this + 14) != a2 )
              {
                (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
                v11 = *((_QWORD *)this + 14);
                *((_QWORD *)this + 14) = a2;
                if ( v11 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
              }
            }
            else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v7 = 278;
              goto LABEL_4;
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 273, v6);
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 271, v6);
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 270;
        goto LABEL_4;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 267;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 266;
LABEL_4:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v7, v4);
  }
  v17 = &Input::Property::`vftable';
  operator delete(Block);
  Block = 0LL;
  v22 = 0;
  v21 = 0;
  operator delete(0LL);
  return (unsigned int)v6;
}
