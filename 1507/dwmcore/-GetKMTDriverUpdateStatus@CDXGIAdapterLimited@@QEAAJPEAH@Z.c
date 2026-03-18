/*
 * XREFs of ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800583EC
 * Callers:
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x180054E1C (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDXGIAdapterLimited::GetKMTDriverUpdateStatus(CDXGIAdapterLimited *this, int *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  int v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+34h] [rbp-1Ch]
  int v12; // [rsp+44h] [rbp-Ch]
  int v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+90h] [rbp+40h] BYREF
  __int64 v15; // [rsp+98h] [rbp+48h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v10 = 0;
  v11 = 0uLL;
  v12 = 0;
  v4 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 297;
LABEL_14:
    v8 = v4;
    goto LABEL_16;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 299;
    goto LABEL_14;
  }
  v10 = v15;
  *(_QWORD *)((char *)&v11 + 4) = &v13;
  LODWORD(v11) = 11;
  HIDWORD(v11) = 4;
  v6 = D3DKMTQueryAdapterInfo(&v10);
  if ( v6 >= 0 )
  {
    *a2 = v13;
    goto LABEL_5;
  }
  v9 = 306;
  v5 = v6 | 0x10000000;
  v8 = v6 | 0x10000000;
LABEL_16:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v9);
LABEL_5:
  if ( v15 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v15);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v5 == -805305674 )
    return (unsigned int)-2003304291;
  return v5;
}
