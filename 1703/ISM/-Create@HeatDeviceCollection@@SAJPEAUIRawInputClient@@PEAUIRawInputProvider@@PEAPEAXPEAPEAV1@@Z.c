/*
 * XREFs of ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007D6D0
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18007DAE4 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall HeatDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct HeatDeviceCollection **a4)
{
  unsigned int v4; // ebx
  HIDDeviceCollection *v8; // rax
  HIDDeviceCollection *v9; // rdi
  char v10; // al
  int v11; // r9d

  v4 = 0;
  if ( a1 && a3 && a4 )
  {
    v8 = (HIDDeviceCollection *)malloc(0xAC8uLL);
    v9 = v8;
    if ( v8 )
      memset(v8, 0, 0xAC8uLL);
    if ( v9 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v9, a1);
      *((_QWORD *)v9 + 3) = a2;
      *(_QWORD *)v9 = &HeatDeviceCollection::`vftable';
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      *a4 = v9;
    }
    else
    {
      v10 = 14;
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 42;
LABEL_15:
        Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v11, v10);
      }
    }
  }
  else
  {
    v10 = 87;
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 37;
      goto LABEL_15;
    }
  }
  return v4;
}
