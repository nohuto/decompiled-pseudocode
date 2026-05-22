/*
 * XREFs of ??$?4AEAV?$function@$$A6AX_N@Z@std@@X@?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEAV01@@Z @ 0x18000877C
 * Callers:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007B64 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004A9E0 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::function<void (bool)>::operator=<std::function<void (bool)> &,void>(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // r8
  _BYTE *v5; // rax
  _BYTE *v6; // r8
  _BYTE *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  _BYTE v14[56]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE *v15; // [rsp+70h] [rbp-1h]
  _BYTE v16[56]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE *v17; // [rsp+B0h] [rbp+3Fh]

  v3 = 0LL;
  v15 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
  {
    v3 = (_BYTE *)(**v4)(v4, v14);
    v15 = v3;
  }
  if ( v3 != v14 && *(_QWORD *)(a1 + 56) != a1 )
  {
    v5 = v3;
    v3 = *(_BYTE **)(a1 + 56);
    v15 = v3;
    *(_QWORD *)(a1 + 56) = v5;
    goto LABEL_25;
  }
  v6 = 0LL;
  v17 = 0LL;
  if ( v3 )
  {
    if ( v3 == v14 )
    {
      v6 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v3 + 8LL))(v3, v16);
      v17 = v6;
      v3 = v15;
      if ( !v15 )
        goto LABEL_12;
      v7 = v14;
      LOBYTE(v7) = v15 != v14;
      (*(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v15 + 32LL))(v15, v7, v6);
      v6 = v17;
    }
    else
    {
      v6 = v3;
      v17 = v3;
    }
    v3 = 0LL;
    v15 = 0LL;
  }
LABEL_12:
  v8 = *(_QWORD *)(a1 + 56);
  if ( !v8 )
    goto LABEL_19;
  v3 = *(_BYTE **)(a1 + 56);
  if ( v8 == a1 )
  {
    v3 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 8LL))(v3, v14);
    v15 = v3;
    v10 = *(_QWORD *)(a1 + 56);
    if ( !v10 )
    {
      v6 = v17;
      goto LABEL_19;
    }
    LOBYTE(v9) = v10 != a1;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 32LL))(*(_QWORD *)(a1 + 56), v9);
    v3 = v15;
    v6 = v17;
  }
  else
  {
    v15 = *(_BYTE **)(a1 + 56);
  }
  *(_QWORD *)(a1 + 56) = 0LL;
LABEL_19:
  if ( v6 )
  {
    if ( v6 == v16 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 8LL))(v6, a1);
      if ( v17 )
      {
        v11 = v16;
        LOBYTE(v11) = v17 != v16;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v17 + 32LL))(v17, v11);
      }
      v3 = v15;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v6;
    }
  }
LABEL_25:
  if ( v3 )
  {
    v12 = v14;
    LOBYTE(v12) = v3 != v14;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v3 + 32LL))(v3, v12);
  }
  return a1;
}
