/*
 * XREFs of ??4?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001FDE0
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18000AEB8 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::function<long (enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *)>::operator=(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v3; // r8
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  _BYTE *v5; // rax
  _BYTE *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v10[56]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE *v11; // [rsp+70h] [rbp-1h]
  _BYTE v12[56]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE *v13; // [rsp+B0h] [rbp+3Fh]

  v3 = 0LL;
  v11 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
  {
    v3 = (_BYTE *)(**v4)(v4, v10);
    v11 = v3;
  }
  if ( v3 != v10 && *(_QWORD *)(a1 + 56) != a1 )
  {
    v5 = v3;
    v3 = *(_BYTE **)(a1 + 56);
    v11 = v3;
    *(_QWORD *)(a1 + 56) = v5;
    goto LABEL_26;
  }
  v6 = 0LL;
  v13 = 0LL;
  if ( v3 )
  {
    if ( v3 == v10 )
    {
      v6 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v3 + 8LL))(v3, v12);
      v13 = v6;
      v3 = v11;
      if ( !v11 )
        goto LABEL_12;
      LOBYTE(a2) = v11 != v10;
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 32LL))(v11, a2);
      v6 = v13;
    }
    else
    {
      v6 = v3;
      v13 = v3;
    }
    v3 = 0LL;
    v11 = 0LL;
  }
LABEL_12:
  v7 = *(_QWORD *)(a1 + 56);
  if ( !v7 )
    goto LABEL_19;
  if ( v7 == a1 )
  {
    v3 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 8LL))(v7, v10);
    v11 = v3;
    v8 = *(_QWORD *)(a1 + 56);
    if ( !v8 )
    {
      v6 = v13;
      goto LABEL_19;
    }
    LOBYTE(a2) = v8 != a1;
    (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, a2, v3);
    v3 = v11;
    v6 = v13;
  }
  else
  {
    v3 = *(_BYTE **)(a1 + 56);
    v11 = v3;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
LABEL_19:
  if ( !v6 )
    goto LABEL_26;
  if ( v6 == v12 )
  {
    *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 8LL))(v6, a1);
    if ( !v13 )
    {
      v3 = v11;
      goto LABEL_26;
    }
    LOBYTE(a2) = v13 != v12;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v13 + 32LL))(v13, a2);
    v3 = v11;
  }
  else
  {
    *(_QWORD *)(a1 + 56) = v6;
  }
  v13 = 0LL;
LABEL_26:
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v10;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
  }
  return a1;
}
