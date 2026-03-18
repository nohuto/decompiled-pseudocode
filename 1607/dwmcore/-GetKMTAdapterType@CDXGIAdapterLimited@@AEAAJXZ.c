/*
 * XREFs of ?GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B30C8
 * Callers:
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800B32F8 (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::GetKMTAdapterType(CDXGIAdapterLimited *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-20h] BYREF
  __int128 v9; // [rsp+34h] [rbp-1Ch]
  int v10; // [rsp+44h] [rbp-Ch]
  int v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v8 = 0;
  v11 = 0;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v9 = 0uLL;
  v10 = 0;
  v3 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 199;
    goto LABEL_15;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 201;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v7);
    goto LABEL_5;
  }
  v8 = v13;
  *(_QWORD *)((char *)&v9 + 4) = &v11;
  LODWORD(v9) = 15;
  HIDWORD(v9) = 4;
  v5 = D3DKMTQueryAdapterInfo(&v8);
  if ( v5 < 0 )
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5 | 0x10000000, 0xD0u);
  }
  else
  {
    *((_DWORD *)this + 90) = v11;
  }
LABEL_5:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v4 == -805305674 )
    return (unsigned int)-2003304291;
  return v4;
}
