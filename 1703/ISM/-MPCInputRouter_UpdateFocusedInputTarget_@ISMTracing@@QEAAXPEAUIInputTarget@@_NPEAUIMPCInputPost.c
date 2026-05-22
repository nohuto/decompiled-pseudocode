/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x180083A3C
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800846E0 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180044088 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        char a3,
        struct IMPCInputPostProcessor *a4)
{
  _DWORD *v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+38h] [rbp-89h] BYREF
  __int64 v12; // [rsp+40h] [rbp-81h] BYREF
  int PIDOfTarget; // [rsp+48h] [rbp-79h] BYREF
  int v14; // [rsp+4Ch] [rbp-75h] BYREF
  struct IInputTarget *v15; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v16[4]; // [rsp+58h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-49h] BYREF
  char *v18; // [rsp+98h] [rbp-29h]
  int v19; // [rsp+A0h] [rbp-21h]
  int v20; // [rsp+A4h] [rbp-1Dh]
  struct IInputTarget **v21; // [rsp+A8h] [rbp-19h]
  int v22; // [rsp+B0h] [rbp-11h]
  int v23; // [rsp+B4h] [rbp-Dh]
  _QWORD *v24; // [rsp+B8h] [rbp-9h]
  int v25; // [rsp+C0h] [rbp-1h]
  int v26; // [rsp+C4h] [rbp+3h]
  int *p_PIDOfTarget; // [rsp+C8h] [rbp+7h]
  int v28; // [rsp+D0h] [rbp+Fh]
  int v29; // [rsp+D4h] [rbp+13h]
  int *v30; // [rsp+D8h] [rbp+17h]
  int v31; // [rsp+E0h] [rbp+1Fh]
  int v32; // [rsp+E4h] [rbp+23h]
  char v33; // [rsp+138h] [rbp+77h] BYREF

  v33 = a3;
  v16[1] = -2LL;
  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 )
  {
    if ( *v6 )
    {
      v7 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
      {
        v18 = &v33;
        v19 = 1;
        v20 = 0;
        v15 = a2;
        v21 = &v15;
        v22 = 8;
        v23 = 0;
        v16[0] = a4;
        v24 = v16;
        v25 = 8;
        v26 = 0;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
        p_PIDOfTarget = &PIDOfTarget;
        v28 = 4;
        v29 = 0;
        v8 = 0;
        LODWORD(v11) = 0;
        if ( a2 )
        {
          v16[2] = a2;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
          v12 = 0LL;
          v9 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
                 a2,
                 &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
                 &v12);
          v10 = v12;
          if ( v9 >= 0 && v12 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v11);
            v10 = v12;
          }
          if ( v10 )
          {
            v12 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
          v8 = v11;
        }
        v14 = v8;
        v30 = &v14;
        v31 = 4;
        v32 = 0;
        TlgWrite((TraceLoggingHProvider)v7, &unk_1800B9F0A, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
