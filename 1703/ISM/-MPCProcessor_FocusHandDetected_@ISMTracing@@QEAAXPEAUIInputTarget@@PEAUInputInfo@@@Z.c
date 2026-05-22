/*
 * XREFs of ?MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180044C8C
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCSixDofProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180045B90 (-OnTargetWithFocus3dChanged@MPCSixDofProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180047BB0 (-OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180049DB0 (-OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180044088 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCProcessor_FocusHandDetected_(
        ISMTracing *this,
        struct IInputTarget *a2,
        struct InputInfo *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  int PIDOfTarget; // eax
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  struct IInputTarget *v13; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  struct IInputTarget **v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  int *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  int *v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  int *v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+ACh] [rbp-54h]
  char *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]
  char *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  int *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  int *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]

  v5 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v6 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      v17 = 0;
      v15 = &v13;
      v13 = a2;
      v16 = 8;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v8 = PIDOfTarget;
      v18 = &v8;
      v9 = *(_DWORD *)a3;
      v21 = &v9;
      v10 = *((_DWORD *)a3 + 1);
      v24 = &v10;
      v27 = (char *)a3 + 8;
      v30 = (char *)a3 + 712;
      v11 = *((_DWORD *)a3 + 176);
      v33 = &v11;
      v12 = *((_DWORD *)a3 + 177);
      v36 = &v12;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      TlgWrite((TraceLoggingHProvider)v6, &unk_1800B92C4, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
