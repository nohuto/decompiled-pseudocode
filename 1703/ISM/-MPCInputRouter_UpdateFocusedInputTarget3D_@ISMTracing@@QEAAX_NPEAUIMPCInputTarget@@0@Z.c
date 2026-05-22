/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0@Z @ 0x180083C08
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x180084C7C (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180044088 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        ISMTracing *this,
        char a2,
        struct IMPCInputTarget *a3,
        char a4)
{
  _DWORD *v5; // rcx
  __int64 v6; // rbx
  int PIDOfTarget; // eax
  int v8; // [rsp+30h] [rbp-49h] BYREF
  struct IMPCInputTarget *v9; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  char *v11; // [rsp+60h] [rbp-19h]
  int v12; // [rsp+68h] [rbp-11h]
  int v13; // [rsp+6Ch] [rbp-Dh]
  struct IMPCInputTarget **v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  char *v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  int *v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  char v23; // [rsp+E8h] [rbp+6Fh] BYREF
  char v24; // [rsp+F8h] [rbp+7Fh] BYREF

  v24 = a4;
  v23 = a2;
  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 )
  {
    if ( *v5 )
    {
      v6 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v11 = &v23;
        v14 = &v9;
        v17 = &v24;
        v12 = 1;
        v9 = a3;
        v15 = 8;
        v18 = 1;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a3);
        v22 = 0;
        v8 = PIDOfTarget;
        v20 = &v8;
        v21 = 4;
        TlgWrite((TraceLoggingHProvider)v6, &unk_1800B9F7E, 0LL, 0LL, 6u, &pData);
      }
    }
  }
}
