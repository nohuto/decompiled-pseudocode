/*
 * XREFs of ?MPCHFXInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z @ 0x1800856DC
 * Callers:
 *     ?InternalDeliverInput@MPCHFXInputTarget@@AEAAJPEAUInputInfo@@_N@Z @ 0x180085F38 (-InternalDeliverInput@MPCHFXInputTarget@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180044088 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHFXInputTarget_DeliverInput_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        struct InputInfo *a4,
        bool a5)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdi
  int PIDOfTarget; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  struct IInputTarget *v15; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  struct IInputTarget **v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  int *p_PIDOfTarget; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  bool *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int v37; // [rsp+170h] [rbp+70h] BYREF

  v37 = a3;
  v7 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    if ( ((*((_DWORD *)a4 + 176) - 6) & 0xFFFFFFFD) != 0 )
    {
      v8 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
      {
        v15 = a2;
        v17 = &v15;
        v18 = 8LL;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
        p_PIDOfTarget = &PIDOfTarget;
        v21 = &v37;
        v11 = *(_DWORD *)a4;
        v23 = &v11;
        v12 = *((_DWORD *)a4 + 1);
        v25 = &v12;
        v27 = (char *)a4 + 8;
        v29 = (char *)a4 + 712;
        v13 = *((_DWORD *)a4 + 176);
        v31 = &v13;
        v14 = *((_DWORD *)a4 + 177);
        v33 = &v14;
        v35 = &a5;
        v20 = 4LL;
        v22 = 4LL;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 4LL;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 1LL;
        TlgWrite((TraceLoggingHProvider)v8, &unk_1800BA0AF, 0LL, 0LL, 0xCu, &pData);
      }
    }
    else
    {
      v9 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v9 > 5u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
      {
        v15 = a2;
        v17 = &v15;
        v18 = 8LL;
        v14 = ISMTracing::GetPIDOfTarget(a2);
        p_PIDOfTarget = &v14;
        v21 = &v37;
        v13 = *(_DWORD *)a4;
        v23 = &v13;
        v12 = *((_DWORD *)a4 + 1);
        v25 = &v12;
        v27 = (char *)a4 + 8;
        v29 = (char *)a4 + 712;
        v11 = *((_DWORD *)a4 + 176);
        v31 = &v11;
        PIDOfTarget = *((_DWORD *)a4 + 177);
        v33 = &PIDOfTarget;
        v35 = &a5;
        v20 = 4LL;
        v22 = 4LL;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 4LL;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 1LL;
        TlgWrite((TraceLoggingHProvider)v9, &unk_1800B9FFE, 0LL, 0LL, 0xCu, &pData);
      }
    }
  }
}
