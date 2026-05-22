/*
 * XREFs of ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18007DC14
 * Callers:
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x180074968 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180077DE0 (-Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMe.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007BD4C (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007CAE8 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x18007D800 (-DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180071E48 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x180072764 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18007286C (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::Initialize(
        HIDDeviceCollection *this,
        __int64 a2,
        struct _RIM_USAGE_ANDPAGE *const a3,
        unsigned int a4,
        unsigned int a5,
        void **lpTargetHandle)
{
  __int64 v8; // rbx
  void *v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v22; // [rsp+50h] [rbp-18h] BYREF

  v22 = 0LL;
  v8 = a4;
  v10 = operator new[](saturated_mul(a4, 4uLL));
  *((_QWORD *)this + 343) = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 88, 14);
    goto LABEL_20;
  }
  memset(v10, 0, 4 * v8);
  *((_DWORD *)this + 688) = a4;
  if ( a4 )
  {
    v13 = 0LL;
    do
    {
      *(_DWORD *)(v13 + *((_QWORD *)this + 343)) = *(_DWORD *)((char *)a3 + v13);
      v13 += 4LL;
      --v8;
    }
    while ( v8 );
  }
  v14 = RIMDeviceCollection::InitializeSyncObjects(this);
  v12 = v14;
  if ( v14 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v16 = 98;
LABEL_19:
      Template_qqq(v15, &MinInput_Warning_CheckResult, 0, v16, v14);
      goto LABEL_20;
    }
    goto LABEL_20;
  }
  v17 = *((_QWORD *)this + 343);
  v18 = *((unsigned int *)this + 688);
  *((_DWORD *)this + 8) = 32;
  v20 = RIMRegisterForInput(
          32LL,
          0LL,
          v18,
          v17,
          *((_QWORD *)this + 6),
          *((_QWORD *)this + 8),
          *((_QWORD *)this + 9),
          this,
          RIMDeviceCollection::OnDeviceChangeCallbackStatic,
          &v22);
  if ( v20 < 0 )
  {
    v12 = v20 | 0x10000000;
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 112, v12);
      goto LABEL_20;
    }
  }
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v22;
  v14 = RIMDeviceCollection::InitializeRIM((HANDLE *)this, a5, lpTargetHandle);
  v12 = v14;
  if ( v14 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v16 = 129;
      goto LABEL_19;
    }
LABEL_20:
    RIMDeviceCollection::Close(this);
  }
  return (unsigned int)v12;
}
