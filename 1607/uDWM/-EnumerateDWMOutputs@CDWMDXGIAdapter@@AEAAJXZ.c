/*
 * XREFs of ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x18003E674
 * Callers:
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x18003E7AC (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x18003E984 (-AddMultipleAndSet@-$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18003F094 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::EnumerateDWMOutputs(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 i; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  int updated; // eax
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15[33]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  for ( i = 0LL; ; i = v3 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 40LL))(
           v2,
           i,
           0xFFFFFFFFLL,
           &v12);
    v6 = v5;
    if ( v5 < 0 )
      break;
    v8 = v12;
    v14 = v12;
    memset_0(v15, 0, sizeof(v15));
    v9 = (**v8)(v8, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v13);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x99u);
      goto LABEL_5;
    }
    v15[0] = v13;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)&v14);
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x9Cu);
      goto LABEL_5;
    }
    v11 = DynArray<DXGIOutputInfo,0>::AddMultipleAndSet((char *)this + 352, &v14);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9Eu);
      goto LABEL_5;
    }
    v2 = *((_QWORD *)this + 4);
    ++v3;
  }
  if ( v5 == -2005270526 )
    v6 = 0;
LABEL_5:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
  return v6;
}
