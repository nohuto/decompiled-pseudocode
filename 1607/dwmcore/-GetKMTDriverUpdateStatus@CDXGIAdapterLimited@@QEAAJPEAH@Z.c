/*
 * XREFs of ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800B2E44
 * Callers:
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x180035E04 (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 *     ?UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z @ 0x180038744 (-UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::GetKMTDriverUpdateStatus(CDXGIAdapterLimited *this, int *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-30h]
  int v9; // [rsp+30h] [rbp-20h] BYREF
  __int128 v10; // [rsp+34h] [rbp-1Ch]
  int v11; // [rsp+44h] [rbp-Ch]
  int v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v13 = 0LL;
  v12 = 0;
  v14 = 0LL;
  v9 = 0;
  v10 = 0uLL;
  v11 = 0;
  v4 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 297;
    goto LABEL_15;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 299;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v8);
    goto LABEL_5;
  }
  v9 = v14;
  *(_QWORD *)((char *)&v10 + 4) = &v12;
  LODWORD(v10) = 11;
  HIDWORD(v10) = 4;
  v6 = D3DKMTQueryAdapterInfo(&v9);
  if ( v6 < 0 )
  {
    v5 = v6 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6 | 0x10000000, 0x132u);
  }
  else
  {
    *a2 = v12;
  }
LABEL_5:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v5 == -805305674 )
    return (unsigned int)-2003304291;
  return v5;
}
