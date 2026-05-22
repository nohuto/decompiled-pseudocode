/*
 * XREFs of ?MPCProcessor_OnTargetWithFocusChanged_@ISMTracing@@QEAAX_NPEAUIInputTarget@@1@Z @ 0x180046E7C
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180047BB0 (-OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180044088 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCProcessor_OnTargetWithFocusChanged_(
        ISMTracing *this,
        char a2,
        struct IInputTarget *a3,
        struct IInputTarget *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int PIDOfTarget; // eax
  int v9; // eax
  int v10; // [rsp+30h] [rbp-69h] BYREF
  int v11; // [rsp+34h] [rbp-65h] BYREF
  struct IInputTarget *v12; // [rsp+38h] [rbp-61h] BYREF
  struct IInputTarget *v13; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  char *v15; // [rsp+70h] [rbp-29h]
  int v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+7Ch] [rbp-1Dh]
  struct IInputTarget **v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  int *v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  struct IInputTarget **v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  int *v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]
  char v30; // [rsp+108h] [rbp+6Fh] BYREF

  v30 = a2;
  v6 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
  {
    v7 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      v17 = 0;
      v20 = 0;
      v15 = &v30;
      v18 = &v12;
      v16 = 1;
      v12 = a3;
      v19 = 8;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a3);
      v23 = 0;
      v26 = 0;
      v10 = PIDOfTarget;
      v21 = &v10;
      v24 = &v13;
      v22 = 4;
      v13 = a4;
      v25 = 8;
      v9 = ISMTracing::GetPIDOfTarget(a4);
      v29 = 0;
      v11 = v9;
      v27 = &v11;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)v7, &unk_1800B96B4, 0LL, 0LL, 7u, &pData);
    }
  }
}
