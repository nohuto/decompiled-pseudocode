/*
 * XREFs of ?MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180086E34
 * Callers:
 *     ?DeliverInput@MPCExclusiveInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180087640 (-DeliverInput@MPCExclusiveInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180044088 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCExclusiveInputTarget_DeliverInput_(
        ISMTracing *this,
        struct IInputTarget *a2,
        struct InputInfo *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdi
  int PIDOfTarget; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  struct IInputTarget *v13; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  struct IInputTarget **v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  __int64 *p_PIDOfTarget; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  int *v19; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  int *v21; // [rsp+A8h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-58h]
  char *v23; // [rsp+B8h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-48h]
  char *v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-38h]
  int *v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  __int64 *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]

  v5 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    if ( *((_DWORD *)a3 + 176) == 6 )
    {
      v7 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
      {
        v13 = a2;
        v15 = &v13;
        v16 = 8LL;
        LODWORD(v12) = ISMTracing::GetPIDOfTarget(a2);
        p_PIDOfTarget = &v12;
        v11 = *(_DWORD *)a3;
        v19 = &v11;
        v10 = *((_DWORD *)a3 + 1);
        v21 = &v10;
        v23 = (char *)a3 + 8;
        v25 = (char *)a3 + 712;
        v9 = *((_DWORD *)a3 + 176);
        v27 = &v9;
        PIDOfTarget = *((_DWORD *)a3 + 177);
        v29 = (__int64 *)&PIDOfTarget;
        v18 = 4LL;
        v20 = 4LL;
        v22 = 4LL;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 4LL;
        v30 = 4LL;
        TlgWrite((TraceLoggingHProvider)v7, &unk_1800BA1F4, 0LL, 0LL, 0xAu, &pData);
      }
    }
    else
    {
      v6 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v13 = a2;
        v15 = &v13;
        v16 = 8LL;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
        p_PIDOfTarget = (__int64 *)&PIDOfTarget;
        v9 = *(_DWORD *)a3;
        v19 = &v9;
        v10 = *((_DWORD *)a3 + 1);
        v21 = &v10;
        v23 = (char *)a3 + 8;
        v25 = (char *)a3 + 712;
        v11 = *((_DWORD *)a3 + 176);
        v27 = &v11;
        LODWORD(v12) = *((_DWORD *)a3 + 177);
        v29 = &v12;
        v18 = 4LL;
        v20 = 4LL;
        v22 = 4LL;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 4LL;
        v30 = 4LL;
        TlgWrite((TraceLoggingHProvider)v6, &unk_1800BA160, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
}
