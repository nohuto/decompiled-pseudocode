/*
 * XREFs of ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00A5B68
 * Callers:
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C009D4F8 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A51F0 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKSt.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A596C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00AF570 (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 */

struct Rtl::KString *__fastcall Rtl::KString::Initialize(const struct _UNICODE_STRING *a1)
{
  _WORD *PoolWithTag; // rax
  _WORD *v3; // rbx
  void *v4; // rcx
  unsigned int MaximumLength; // eax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a1->MaximumLength + 24LL, 0x7274534Bu);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v4 = PoolWithTag + 12;
  PoolWithTag[4] = a1->Length;
  MaximumLength = a1->MaximumLength;
  v3[5] = MaximumLength;
  *((_QWORD *)v3 + 2) = v3 + 12;
  memmove(v4, a1->Buffer, MaximumLength);
  return (struct Rtl::KString *)v3;
}
