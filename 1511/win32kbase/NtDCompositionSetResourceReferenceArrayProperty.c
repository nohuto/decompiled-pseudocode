/*
 * XREFs of NtDCompositionSetResourceReferenceArrayProperty @ 0x1C004F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z @ 0x1C001D6B4 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall NtDCompositionSetResourceReferenceArrayProperty(
        unsigned int a1,
        int a2,
        unsigned int a3,
        char *a4,
        unsigned __int64 a5,
        bool *a6)
{
  void *v7; // rdi
  _BYTE *v8; // rdx
  int v9; // ebx
  size_t v10; // rsi
  bool v12; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+34h] [rbp-64h]
  struct DirectComposition::CApplicationChannel *v14; // [rsp+38h] [rbp-60h] BYREF
  void *v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+50h] [rbp-48h]

  v13 = 0;
  v14 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v12 = 0;
  if ( a6 )
  {
    v8 = a6;
    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v9 = v13;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    goto LABEL_23;
  if ( a5 )
  {
    v17 = (a5 * (unsigned __int128)4uLL) >> 64;
    v10 = 4 * a5;
    if ( is_mul_ok(a5, 4uLL) )
    {
      v16 = 4 * a5;
      v9 = 0;
    }
    else
    {
      v10 = -1LL;
      v16 = -1LL;
      v9 = -1073741675;
    }
    v13 = v9;
    if ( v9 < 0 )
      goto LABEL_23;
    v7 = (void *)Win32AllocPoolWithQuota();
    v15 = v7;
    if ( !v7 )
      v9 = -1073741801;
    v13 = v9;
    if ( v9 < 0 )
      goto LABEL_23;
    if ( &a4[v10] < a4 || (unsigned __int64)&a4[v10] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v7, a4, v10);
    v13 = 0;
  }
  v9 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v14);
  if ( v9 >= 0 )
  {
    v9 = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
           v14,
           a2,
           a3,
           (unsigned int *)v7,
           a5,
           &v12);
    _guard_dispatch_icall_fptr();
    if ( v9 >= 0 )
    {
      *a6 = v12;
      return (unsigned int)v9;
    }
  }
LABEL_23:
  if ( v7 )
    Win32FreePool();
  return (unsigned int)v9;
}
