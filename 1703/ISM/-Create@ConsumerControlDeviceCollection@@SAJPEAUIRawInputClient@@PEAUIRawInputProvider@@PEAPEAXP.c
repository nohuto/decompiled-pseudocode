/*
 * XREFs of ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007CAE8
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18007DAE4 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18007DC14 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::Create(
        __int64 a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct ConsumerControlDeviceCollection **a4)
{
  struct IRawInputClient *v7; // rdi
  _DWORD *v8; // rax
  unsigned int v9; // edx
  _DWORD *v10; // rbx
  _DWORD *v11; // rdi
  int v12; // edi
  int v13; // r9d
  __int64 v14; // rcx
  char v15; // al
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v7 = (struct IRawInputClient *)a1;
  if ( a1 && a3 && a4 )
  {
    v8 = malloc(0x22D0uLL);
    v10 = v8;
    if ( v8 )
      memset(v8, 0, 0x22D0uLL);
    if ( v10 )
    {
      HIDDeviceCollection::HIDDeviceCollection((HIDDeviceCollection *)v10, v7);
      v11 = v10 + 690;
      *(_QWORD *)v10 = &ConsumerControlDeviceCollection::`vftable';
      v10[2226] = 0;
      memset(v10 + 690, 0, 0x1800uLL);
      a1 = 256LL;
      do
      {
        *v11 = v10[2226];
        v11 += 6;
        --a1;
      }
      while ( a1 );
      *((_QWORD *)v10 + 3) = a2;
    }
    if ( !v10 )
    {
      v12 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v13 = 36;
LABEL_25:
        Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v13, v12);
        return (unsigned int)v12;
      }
      return (unsigned int)v12;
    }
    v17 = 786433;
    v12 = HIDDeviceCollection::Initialize(
            (HIDDeviceCollection *)v10,
            v9,
            (struct _RIM_USAGE_ANDPAGE *const)&v17,
            1u,
            0x28u,
            a3);
    if ( v12 < 0 )
    {
      v15 = Microsoft_OneCore_MinInputEnableBits;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_17:
        if ( v12 >= 0 )
        {
          *a4 = (struct ConsumerControlDeviceCollection *)v10;
        }
        else if ( (v15 & 2) != 0 )
        {
          Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 38, v12);
        }
        if ( v12 < 0 )
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
        return (unsigned int)v12;
      }
      Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 89, v12);
    }
    v15 = Microsoft_OneCore_MinInputEnableBits;
    goto LABEL_17;
  }
  v12 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v13 = 32;
    goto LABEL_25;
  }
  return (unsigned int)v12;
}
