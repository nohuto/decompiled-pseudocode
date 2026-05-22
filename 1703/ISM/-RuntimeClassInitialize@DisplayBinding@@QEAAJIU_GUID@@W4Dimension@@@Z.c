/*
 * XREFs of ?RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z @ 0x18001BE80
 * Callers:
 *     ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x180015110 (-GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?RegisterDisplayBinding@DWMInputRouter@@UEAAJIU_GUID@@W4Dimension@@@Z @ 0x1800166E0 (-RegisterDisplayBinding@DWMInputRouter@@UEAAJIU_GUID@@W4Dimension@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1PropertyVector@Input@@UEAA@XZ @ 0x18001BD74 (--1PropertyVector@Input@@UEAA@XZ.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ?Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z @ 0x180027DB8 (-Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DisplayBinding::RuntimeClassInitialize(unsigned __int64 a1, int a2, _OWORD *a3, int a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  void **v11; // [rsp+40h] [rbp-41h] BYREF
  struct _GUID v12; // [rsp+48h] [rbp-39h]
  __int64 v13; // [rsp+58h] [rbp-29h]
  void *Block; // [rsp+60h] [rbp-21h]
  __int64 v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  void **v17; // [rsp+78h] [rbp-9h] BYREF
  struct _GUID v18; // [rsp+80h] [rbp-1h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  __int128 v20; // [rsp+98h] [rbp+17h]
  __int128 v21; // [rsp+A8h] [rbp+27h]

  *(_DWORD *)(a1 + 40) = a2;
  *(_OWORD *)(a1 + 48) = *a3;
  *(_DWORD *)(a1 + 44) = a4;
  v17 = &Input::PropertyNode::`vftable';
  v18 = DISPLAYBINDING_MONITORS;
  v19 = 0LL;
  Input::PropertyNode::GetDefinition((Input::PropertyNode *)&v17);
  v20 = 0LL;
  v21 = 0LL;
  v17 = &Input::PropertyVectorModifiedAdapter<Input::ModifiedNotifier<Input::PropertyVector>>::`vftable';
  v11 = &Input::PropertyNode::`vftable';
  v12 = DISPLAYBINDING_ORIENTATION;
  v13 = 0LL;
  Input::PropertyNode::GetDefinition((Input::PropertyNode *)&v11);
  Block = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v11 = &Input::PropertyModifiedAdapter<Input::ModifiedNotifier<Input::Property>>::`vftable';
  v5 = a1 + 16;
  v6 = (a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  if ( *((_QWORD *)&v21 + 1) != v6 )
  {
    if ( *((_QWORD *)&v21 + 1) && v6 )
    {
      LOBYTE(v7) = 87;
      v8 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 45;
LABEL_19:
        Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v9, v7);
        goto LABEL_20;
      }
      goto LABEL_20;
    }
    *((_QWORD *)&v21 + 1) = (a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  }
  v7 = Input::PropertyMap::Insert((Input::PropertyMap *)(a1 + 64));
  v8 = v7;
  if ( v7 >= 0 )
  {
    v5 = (a1 + 16) & -(__int64)(a1 != 0);
    if ( v16 != v5 )
    {
      if ( v16 && v5 )
      {
        LOBYTE(v7) = 87;
        v8 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v9 = 49;
          goto LABEL_19;
        }
        goto LABEL_20;
      }
      v16 = (a1 + 16) & -(__int64)(a1 != 0);
    }
    v7 = Input::PropertyMap::Insert((Input::PropertyMap *)(a1 + 64));
    v8 = v7;
    if ( v7 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 50;
      goto LABEL_19;
    }
    goto LABEL_20;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 46;
    goto LABEL_19;
  }
LABEL_20:
  v11 = &Input::Property::`vftable';
  operator delete(Block);
  Block = 0LL;
  v15 = 0LL;
  operator delete(0LL);
  Block = 0LL;
  v15 = 0LL;
  v11 = &Input::PropertyNode::`vftable';
  Input::PropertyVector::~PropertyVector((char **)&v17);
  return v8;
}
