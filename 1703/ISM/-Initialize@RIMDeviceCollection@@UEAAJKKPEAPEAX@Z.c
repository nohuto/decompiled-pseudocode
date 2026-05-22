/*
 * XREFs of ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x180071F60
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18007DBB0 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180071E48 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x180072764 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18007286C (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 */

__int64 __fastcall RIMDeviceCollection::Initialize(
        RIMDeviceCollection *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // r9d
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  v15 = 0LL;
  v8 = RIMDeviceCollection::InitializeSyncObjects(this);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 144;
LABEL_13:
      Template_qqq(v9, &MinInput_Warning_CheckResult, 2, v11, v8);
      goto LABEL_14;
    }
    goto LABEL_14;
  }
  *((_DWORD *)this + 8) = a2;
  v13 = RIMRegisterForInput(
          a2,
          0LL,
          0LL,
          0LL,
          *((_QWORD *)this + 6),
          *((_QWORD *)this + 8),
          *((_QWORD *)this + 9),
          this,
          RIMDeviceCollection::OnDeviceChangeCallbackStatic,
          &v15);
  if ( v13 < 0 )
  {
    v10 = v13 | 0x10000000;
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v12, &MinInput_Warning_CheckResult, 2, 158, v10);
      goto LABEL_14;
    }
  }
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v15;
  v8 = RIMDeviceCollection::InitializeRIM(this, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 175;
      goto LABEL_13;
    }
LABEL_14:
    RIMDeviceCollection::Close(this);
  }
  return (unsigned int)v10;
}
