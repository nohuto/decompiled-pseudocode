/*
 * XREFs of ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAI_KPEA_N@Z @ 0x1C00304EC
 * Callers:
 *     NtDCompositionSetResourceReferenceArrayProperty @ 0x1C002BB50 (NtDCompositionSetResourceReferenceArrayProperty.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 v7; // rsi
  unsigned int v8; // r15d
  struct DirectComposition::CResourceMarshaler *v10; // r14
  int v11; // edi
  unsigned int v12; // r15d
  struct DirectComposition::CResourceMarshaler *v13; // rax
  unsigned int *v14; // rcx
  _BYTE v16[8]; // [rsp+40h] [rbp-38h] BYREF
  struct DirectComposition::CResourceMarshaler *v17; // [rsp+48h] [rbp-30h]

  v16[0] = 0;
  v7 = 0LL;
  v8 = a3;
  v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v17 = v10;
  v11 = 0;
  if ( !v10 )
    v11 = -1073741790;
  if ( a5 )
  {
    if ( v11 >= 0 )
    {
      if ( !is_mul_ok(a5, 8uLL) )
        return (unsigned int)-1073741675;
      v11 = 0;
      v7 = Win32AllocPoolWithQuota(8 * a5, 1717715780LL);
      if ( !v7 )
        v11 = -1073741801;
    }
    v12 = 0;
    if ( v11 < 0 )
      goto LABEL_25;
    do
    {
      if ( v12 >= a5 )
        break;
      v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a4[v12]);
      *(_QWORD *)(v7 + 8LL * v12) = v13;
      if ( !v13 )
        v11 = -1073741811;
      ++v12;
    }
    while ( v11 >= 0 );
    v10 = v17;
    v8 = a3;
  }
  if ( v11 < 0
    || (v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, unsigned __int64, _BYTE *))(*(_QWORD *)v10 + 168LL))(
                v10,
                this,
                v8,
                v7,
                a5,
                v16),
        v11 < 0) )
  {
LABEL_25:
    if ( !v7 )
    {
LABEL_19:
      if ( v11 < 0 )
        return (unsigned int)v11;
      goto LABEL_20;
    }
    v14 = (unsigned int *)v7;
LABEL_18:
    Win32FreePool(v14);
    goto LABEL_19;
  }
  if ( a4 )
  {
    v14 = a4;
    goto LABEL_18;
  }
LABEL_20:
  if ( v16[0] )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
  *a6 = *((_DWORD *)this + 131) != 0;
  return (unsigned int)v11;
}
