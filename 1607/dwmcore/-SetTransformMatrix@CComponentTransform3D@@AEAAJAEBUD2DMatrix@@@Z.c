/*
 * XREFs of ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x180023584
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001B5F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x180023E00 (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTT.c)
 * Callees:
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180024020 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180024040 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800A2570 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnimationSourceMapEntry@@QEAA@XZ @ 0x18011E2B0 (--1CAnimationSourceMapEntry@@QEAA@XZ.c)
 */

__int64 __fastcall CComponentTransform3D::SetTransformMatrix(CComponentTransform3D *this, const struct D2DMatrix *a2)
{
  __int128 v2; // xmm3
  __int128 v4; // xmm0
  __int128 v6; // xmm1
  unsigned int v7; // eax
  int v8; // eax
  __int64 (__fastcall *v9)(CComponentTransform3D *, _QWORD, _QWORD); // rax
  unsigned int Count; // eax
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rdx
  int v17; // eax
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  __int64 Buffer; // [rsp+48h] [rbp-9h] BYREF
  __int64 v29; // [rsp+50h] [rbp-1h]
  _OWORD v30[4]; // [rsp+58h] [rbp+7h] BYREF

  v2 = *((_OWORD *)a2 + 1);
  v4 = *((_OWORD *)a2 + 2);
  v6 = *((_OWORD *)a2 + 3);
  v7 = *((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2);
  *(_OWORD *)((char *)this + 280) = *(_OWORD *)a2;
  v8 = *((_DWORD *)this + 8) ^ v7 & 6;
  *(_OWORD *)((char *)this + 296) = v2;
  *((_DWORD *)this + 8) = v8;
  *(_OWORD *)((char *)this + 312) = v4;
  *(_OWORD *)((char *)this + 328) = v6;
  *((_DWORD *)this + 86) = 0;
  if ( (v8 & 6) == 2 )
  {
    v9 = *(__int64 (__fastcall **)(CComponentTransform3D *, _QWORD, _QWORD))(*(_QWORD *)this + 104LL);
    if ( (char *)v9 == (char *)CTransform3D::OnChanged
       ? CTransform3D::OnChanged(this, 0LL, 0LL)
       : (unsigned int)v9(this, 0LL, 0LL) )
    {
      Count = CPtrArrayBase::GetCount((CComponentTransform3D *)((char *)this + 24));
      if ( Count )
      {
        v12 = 0LL;
        v13 = Count;
        do
        {
          v14 = CPtrArrayBase::operator[]((char *)this + 24, v12);
          if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 64LL) == CTransform3D::NotifyListenerOfChange )
            CTransform3D::NotifyListenerOfChange(this, v14, 0LL, 0LL);
          else
            (*(void (__fastcall **)(CComponentTransform3D *, __int64, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
              this,
              v14,
              0LL,
              0LL);
          ++v12;
          --v13;
        }
        while ( v13 );
      }
    }
  }
  (*(void (__fastcall **)(CComponentTransform3D *))(*(_QWORD *)this + 72LL))(this);
  v15 = 0;
  v16 = *((_QWORD *)this + 14);
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  if ( v16 )
    v17 = *(_DWORD *)(v16 + 52);
  else
    v17 = 0;
  if ( !v17 || !*((_DWORD *)this + 30) || (*((_DWORD *)this + 32) & 0x20000) == 0 )
    goto LABEL_25;
  v18 = *((_OWORD *)a2 + 1);
  v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 1232LL);
  v30[0] = *(_OWORD *)a2;
  v30[1] = v18;
  v20 = *((_OWORD *)a2 + 3);
  v30[2] = *((_OWORD *)a2 + 2);
  v30[3] = v20;
  if ( v16 )
    v21 = *(unsigned int *)(v16 + 52);
  else
    v21 = 0LL;
  v22 = *(_QWORD *)(v19 + 56);
  Buffer = v21;
  v29 = *((unsigned int *)this + 30);
  v15 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int16, void *, int, _OWORD *))CoreUICallSend)(
          v22,
          &Buffer,
          2LL,
          5LL,
          7,
          &unk_1801AD3F2,
          17,
          v30);
  if ( v15 == -2018375675 )
    v15 = 0;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1AFu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1A8u);
  }
  else
  {
LABEL_25:
    v23 = *((_QWORD *)this + 2);
    v29 = 0LL;
    LODWORD(Buffer) = 17;
    v24 = *(_QWORD *)(v23 + 352);
    v25 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 40), &Buffer);
    CAnimationSourceMapEntry::~CAnimationSourceMapEntry((CAnimationSourceMapEntry *)&Buffer);
    if ( v25 )
      v26 = (_QWORD *)v25[1];
    else
      v26 = 0LL;
    while ( v26 )
    {
      *(_QWORD *)(*v26 + 280LL) = v24;
      v26 = (_QWORD *)v26[1];
    }
  }
  return (unsigned int)v15;
}
