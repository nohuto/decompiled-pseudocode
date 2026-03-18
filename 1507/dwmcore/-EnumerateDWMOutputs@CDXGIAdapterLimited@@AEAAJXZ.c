/*
 * XREFs of ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x180095E80
 * Callers:
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800960A8 (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18005769C (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CDXGIAdapterLimited::EnumerateDWMOutputs(CDXGIAdapterLimited *this)
{
  __int64 v1; // rdi
  unsigned int v3; // r14d
  int v4; // edi
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  int updated; // eax
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int128 *v14; // rax
  __int64 v15; // r8
  _OWORD *v16; // rcx
  __int128 v17; // xmm0
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22[33]; // [rsp+48h] [rbp-B8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v19 = 0LL;
  v20 = 0LL;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v1 + 40LL))(
         v1,
         0LL,
         0xFFFFFFFFLL,
         &v19);
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v6 = v19;
      v21 = v19;
      memset_0(v22, 0, 0x100uLL);
      updated = (**v6)(v6, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v20);
      v4 = updated;
      if ( updated < 0 )
        break;
      v22[0] = v20;
      updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)&v21);
      v4 = updated;
      if ( updated < 0 )
      {
        v18 = 156;
        goto LABEL_24;
      }
      v8 = *((unsigned int *)this + 94);
      v9 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v4 = -2147024362;
LABEL_22:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9Eu);
        goto LABEL_4;
      }
      if ( v9 <= *((_DWORD *)this + 93) )
      {
        v13 = 264 * v8;
        v14 = (__int128 *)&v21;
        v15 = 2LL;
        v16 = (_OWORD *)(*((_QWORD *)this + 44) + v13);
        do
        {
          v17 = *v14;
          v14 += 8;
          *v16 = v17;
          v16 += 8;
          *(v16 - 7) = *(v14 - 7);
          *(v16 - 6) = *(v14 - 6);
          *(v16 - 5) = *(v14 - 5);
          *(v16 - 4) = *(v14 - 4);
          *(v16 - 3) = *(v14 - 3);
          *(v16 - 2) = *(v14 - 2);
          *(v16 - 1) = *(v14 - 1);
          --v15;
        }
        while ( v15 );
        *(_QWORD *)v16 = *(_QWORD *)v14;
        *((_DWORD *)this + 94) = v9;
      }
      else
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 352, 0x108u, 1, &v21);
        v11 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
        v4 = v11;
        if ( v11 < 0 )
          goto LABEL_22;
      }
      v12 = *((_QWORD *)this + 4);
      ++v3;
      v19 = 0LL;
      v20 = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v12 + 40LL))(
             v12,
             v3,
             0xFFFFFFFFLL,
             &v19);
      if ( v4 < 0 )
        goto LABEL_2;
    }
    v18 = 153;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v18);
  }
  else
  {
LABEL_2:
    if ( v4 == -2005270526 )
      v4 = 0;
  }
LABEL_4:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v19 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v19)[2])(v19);
  return (unsigned int)v4;
}
