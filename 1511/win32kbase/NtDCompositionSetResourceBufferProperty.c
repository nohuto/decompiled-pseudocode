/*
 * XREFs of NtDCompositionSetResourceBufferProperty @ 0x1C0019940
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32AllocPoolWithQuotaImplSupported_0 @ 0x1C0002C08 (IsWin32AllocPoolWithQuotaImplSupported_0.c)
 *     Win32AllocPoolWithQuotaImpl_0 @ 0x1C0002C10 (Win32AllocPoolWithQuotaImpl_0.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall NtDCompositionSetResourceBufferProperty(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        size_t Size,
        bool *a6)
{
  void *v7; // rdi
  bool v8; // r12
  int v9; // ebx
  _BYTE *v10; // rdx
  struct DirectComposition::CApplicationChannel *v11; // rsi
  struct DirectComposition::CApplicationChannel *v13; // [rsp+48h] [rbp-50h] BYREF
  void *v14; // [rsp+50h] [rbp-48h]

  v13 = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  v8 = 0;
  v9 = 0;
  if ( (Size != 0) != (a4 != 0LL) )
    v9 = -1073741811;
  if ( v9 < 0 )
    goto LABEL_32;
  v10 = a6;
  if ( a6 )
  {
    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v8 = 0;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    goto LABEL_32;
  if ( Size )
  {
    if ( (int)IsWin32AllocPoolWithQuotaImplSupported_0() < 0 )
      v7 = 0LL;
    else
      v7 = (void *)Win32AllocPoolWithQuotaImpl_0();
    if ( v7 )
      memset(v7, 0, Size);
    v14 = v7;
    if ( !v7 )
      v9 = -1073741801;
    if ( v9 < 0 )
      goto LABEL_32;
    if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v7, a4, Size);
  }
  v9 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v13);
  v11 = v13;
  if ( v9 >= 0 )
  {
    v9 = 0;
    if ( !DirectComposition::CApplicationChannel::LookupResourceMarshaler(v13, a2) )
      v9 = -1073741790;
    if ( v9 >= 0 )
    {
      v9 = _guard_dispatch_icall_fptr();
      if ( v9 >= 0 )
        v8 = *((_DWORD *)v11 + 131) != 0;
    }
    _guard_dispatch_icall_fptr();
    if ( v9 >= 0 )
    {
      *a6 = v8;
      return (unsigned int)v9;
    }
  }
LABEL_32:
  if ( v7 )
    Win32FreePool(v7);
  return (unsigned int)v9;
}
