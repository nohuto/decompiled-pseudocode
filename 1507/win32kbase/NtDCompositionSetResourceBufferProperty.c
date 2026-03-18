/*
 * XREFs of NtDCompositionSetResourceBufferProperty @ 0x1C002C9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX_KPEA_N@Z @ 0x1C0030478 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX_KPEA_N@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall NtDCompositionSetResourceBufferProperty(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        size_t Size,
        bool *a6)
{
  void *v7; // rdi
  int v8; // ebx
  _BYTE *v9; // rdx
  bool v11; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+34h] [rbp-44h]
  struct DirectComposition::CApplicationChannel *v13; // [rsp+38h] [rbp-40h] BYREF
  void *v14; // [rsp+40h] [rbp-38h]

  v13 = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  v11 = 0;
  v8 = 0;
  if ( (Size != 0) != (a4 != 0LL) )
    v8 = -1073741811;
  v12 = v8;
  if ( v8 < 0 )
    goto LABEL_22;
  v9 = a6;
  if ( a6 )
  {
    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v8 = v12;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_22;
  if ( Size )
  {
    v7 = (void *)Win32AllocPoolWithQuotaZInit(Size);
    v14 = v7;
    if ( !v7 )
      v8 = -1073741801;
    v12 = v8;
    if ( v8 < 0 )
      goto LABEL_22;
    if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v7, a4, Size);
    v12 = 0;
  }
  v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v13);
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(v13, a2, a3, v7, Size, &v11);
    _guard_dispatch_icall_fptr();
    if ( v8 >= 0 )
    {
      *a6 = v11;
      return (unsigned int)v8;
    }
  }
LABEL_22:
  if ( v7 )
    Win32FreePool(v7);
  return (unsigned int)v8;
}
