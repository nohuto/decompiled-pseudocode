/*
 * XREFs of ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x180074968
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@XZ @ 0x1800758CC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$a.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18007DAE4 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18007DC14 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AugmentedInputDeviceCollection::Create(
        struct IRawInputClient *a1,
        void **a2,
        struct AugmentedInputDeviceCollection **a3)
{
  HIDDeviceCollection *v6; // rax
  HIDDeviceCollection *v7; // rdi
  unsigned int v8; // edx
  int v9; // ebx
  int v10; // r9d
  __int64 v11; // rcx
  char v12; // al
  HIDDeviceCollection *v14; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+20h]

  if ( !a1 || !a2 || !a3 )
  {
    v9 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return (unsigned int)v9;
    v10 = 34;
    goto LABEL_22;
  }
  v6 = (HIDDeviceCollection *)malloc(0xAD8uLL);
  v7 = v6;
  if ( v6 )
    memset(v6, 0, 0xAD8uLL);
  v14 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return (unsigned int)v9;
    v10 = 38;
LABEL_22:
    Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v10, v9);
    return (unsigned int)v9;
  }
  HIDDeviceCollection::HIDDeviceCollection(v7, a1);
  *(_QWORD *)v7 = &AugmentedInputDeviceCollection::`vftable';
  v15 = (_QWORD *)((char *)v7 + 2760);
  *((_QWORD *)v7 + 345) = 0LL;
  *((_QWORD *)v7 + 346) = 0LL;
  *((_QWORD *)v7 + 345) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Buyheadnode();
  LODWORD(v14) = 130986;
  v9 = HIDDeviceCollection::Initialize(v7, v8, (struct _RIM_USAGE_ANDPAGE *const)&v14, 1u, 8u, a2);
  if ( v9 >= 0 )
    goto LABEL_13;
  v12 = Microsoft_OneCore_MinInputEnableBits;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 79, v9);
LABEL_13:
    v12 = Microsoft_OneCore_MinInputEnableBits;
  }
  if ( v9 >= 0 )
  {
    *a3 = v7;
  }
  else if ( (v12 & 2) != 0 )
  {
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 40, v9);
  }
  if ( v9 < 0 )
    (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  return (unsigned int)v9;
}
