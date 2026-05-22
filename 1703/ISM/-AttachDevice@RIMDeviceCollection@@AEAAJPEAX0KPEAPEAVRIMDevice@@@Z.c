/*
 * XREFs of ?AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z @ 0x180072DF4
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z @ 0x180072150 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::AttachDevice(
        RIMDeviceCollection *this,
        void *a2,
        void *a3,
        unsigned int a4,
        struct RIMDevice **a5)
{
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // r15d
  int v12; // eax
  _QWORD *v13; // rcx
  unsigned int v14; // edi
  int v15; // esi
  int v16; // r9d
  unsigned int v17; // r8d
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r9d
  struct RIMDevice *v27; // [rsp+70h] [rbp+8h] BYREF

  v9 = (*(__int64 (__fastcall **)(RIMDeviceCollection *))(*(_QWORD *)this + 96LL))(this);
  v10 = *(_QWORD *)this;
  a5 = 0LL;
  v11 = v9;
  v27 = 0LL;
  v12 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, void *, void *, _QWORD, unsigned int, struct RIMDevice ***))(v10 + 80))(
          this,
          a2,
          a3,
          a4,
          v9,
          &a5);
  v14 = v12;
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)v13, &MinInput_Warning_CheckResult, 2, 1108, v12);
    return v14;
  }
  if ( *((_DWORD *)this + 668) >= 0x100u )
  {
    v15 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_8:
      v14 = v15;
LABEL_25:
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)v13, &MinInput_Warning_CheckResult, 2, 1110, v15);
      return v14;
    }
    v16 = 1036;
LABEL_7:
    Template_qqq((__int64)v13, &MinInput_Warning_CheckResult, 2, v16, v15);
    goto LABEL_8;
  }
  v13 = (_QWORD *)((char *)this + 624);
  v17 = 0;
  v18 = (__int64 *)((char *)this + 624);
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 )
    {
      if ( *(struct RIMDevice **)(v19 + 16) == a5[2] || !*(_DWORD *)(v19 + 40) )
        break;
    }
    ++v17;
    ++v18;
    if ( v17 >= 0x100 )
    {
      v15 = -2147023728;
      goto LABEL_15;
    }
  }
  v15 = 0;
LABEL_15:
  if ( v15 != -2147023728 )
  {
    v15 = -2147024883;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_8;
    v16 = 1044;
    goto LABEL_7;
  }
  v20 = 0LL;
  while ( *v13 )
  {
    v20 = (unsigned int)(v20 + 1);
    ++v13;
    if ( (unsigned int)v20 >= 0x100 )
      goto LABEL_24;
  }
  *((_QWORD *)this + v20 + 78) = a5;
  ++*((_DWORD *)this + 668);
  v15 = 0;
LABEL_24:
  v14 = v15;
  if ( v15 < 0 )
    goto LABEL_25;
  v21 = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD, struct RIMDevice **))(*(_QWORD *)this + 56LL))(
          this,
          v11,
          &v27);
  v14 = v21;
  if ( v21 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v22, &MinInput_Warning_CheckResult, 2, 1117, v21);
    return v14;
  }
  if ( !v27 || !*((_DWORD *)v27 + 1) )
  {
    v14 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v14;
    v25 = 1125;
    goto LABEL_43;
  }
  *(_DWORD *)v27 = v11;
  RIMGetSourceProcessId(a2, a3, (char *)v27 + 8);
  if ( *(_DWORD *)v27 != *((_DWORD *)a5 + 10) || !*((_DWORD *)v27 + 1) )
  {
    v14 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v14;
    Template_qqq((__int64)v27, &MinInput_Warning_CheckResult, 0, 48, 87);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v14;
    v25 = 1130;
LABEL_43:
    Template_qqq(v22, &MinInput_Warning_CheckResult, 2, v25, v14);
    return v14;
  }
  a5[4] = v27;
  v14 = 0;
  if ( (*((_DWORD *)v27 + 1) & 0xFFFFFEFF) != 0 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, struct RIMDevice *, _QWORD))(**((_QWORD **)this + 2) + 40LL))(
            *((_QWORD *)this + 2),
            v27,
            *((_QWORD *)this + 3));
    v14 = v23;
    if ( v23 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v24, &MinInput_Warning_CheckResult, 2, 1151, v23);
  }
  return v14;
}
