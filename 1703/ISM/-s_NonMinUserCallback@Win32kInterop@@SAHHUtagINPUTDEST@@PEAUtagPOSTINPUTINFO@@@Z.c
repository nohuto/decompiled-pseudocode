/*
 * XREFs of ?s_NonMinUserCallback@Win32kInterop@@SAHHUtagINPUTDEST@@PEAUtagPOSTINPUTINFO@@@Z @ 0x18000C360
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::s_NonMinUserCallback(int a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  unsigned int v7; // r15d
  int v8; // eax
  DWORD TickCount; // eax
  __int128 v10; // xmm0
  unsigned int v11; // r10d
  __int64 v12; // r9
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm1
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  char v26; // al
  __int64 v28; // rcx
  __int64 v29; // rdx
  char *v30; // rax
  _OWORD *v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  struct IInputDeliveryServer *v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  _OWORD v47[118]; // [rsp+30h] [rbp-F28h] BYREF
  int v48; // [rsp+790h] [rbp-7C8h] BYREF
  char v49; // [rsp+798h] [rbp-7C0h] BYREF

  v6 = 0;
  v7 = 0;
  memset(v47, 0, sizeof(v47));
  v8 = *(_DWORD *)(a3 + 24);
  BYTE10(v47[43]) = *(_DWORD *)(a2 + 176) != 0;
  BYTE12(v47[43]) = 1;
  DWORD1(v47[0]) = v8;
  LODWORD(v47[0]) = 8;
  TickCount = GetTickCount();
  v10 = *(_OWORD *)(a2 + 104);
  v11 = *(_DWORD *)a3;
  v12 = 0LL;
  v13 = *(_OWORD *)(a2 + 120);
  DWORD2(v47[0]) = TickCount;
  *(_QWORD *)&v47[2] = *(_QWORD *)(a2 + 168);
  *((_QWORD *)&v47[40] + 1) = *(_QWORD *)(a2 + 24);
  *((_QWORD *)&v47[34] + 1) = *((_QWORD *)&v47[40] + 1);
  v14 = *(_DWORD *)(a2 + 12) & 1;
  v47[35] = v10;
  v47[36] = v13;
  LODWORD(v47[39]) = v14;
  *(_QWORD *)&v47[1] = *(_QWORD *)(a3 + 88);
  DWORD2(v47[2]) = 1888;
  LODWORD(v47[3]) = v11;
  v15 = *(_OWORD *)(a2 + 152);
  v47[37] = *(_OWORD *)(a2 + 136);
  v47[38] = v15;
  if ( v11 )
  {
    while ( 1 )
    {
      DWORD1(v47[3 * v12 + 3]) = *(_DWORD *)(a3 + 144 * v12 + 12);
      v16 = *(_DWORD *)(a3 + 144 * v12 + 20);
      if ( (v16 & 2) != 0 )
        DWORD2(v47[3 * v12 + 3]) |= 1u;
      if ( (v16 & 4) != 0 )
        DWORD2(v47[3 * v12 + 3]) |= 2u;
      if ( (v16 & 0x8000) != 0 )
        DWORD2(v47[3 * v12 + 3]) |= 4u;
      v17 = *(unsigned int *)(a3 + 144 * v12 + 56);
      v18 = *(_DWORD *)(a3 + 144 * v12 + 60);
      LODWORD(v47[3 * v12 + 4]) = v17;
      DWORD1(v47[3 * v12 + 4]) = v18;
      v19 = (float)((float)(int)v17 * *((float *)&v47[35] + 3)) - *(float *)&v47[35];
      v20 = (float)((float)v18 * *((float *)&v47[35] + 3)) - *((float *)&v47[35] + 1);
      v21 = (float)((float)v18 * *((float *)&v47[36] + 3)) - *((float *)&v47[36] + 1);
      v22 = (float)((float)(int)v17 * *((float *)&v47[36] + 3)) - *(float *)&v47[36];
      if ( (float)(v19 * v21) == (float)(v20 * v22) )
        break;
      v23 = (float)(v19 * v21) - (float)(v20 * v22);
      v24 = (float)((float)v18 * *((float *)&v47[38] + 3)) - *((float *)&v47[38] + 1);
      v25 = (float)((float)(int)v17 * *((float *)&v47[38] + 3)) - *(float *)&v47[38];
      DWORD2(v47[3 * v12 + 4]) = (int)(float)((float)((float)(v24 * v22) - (float)(v25 * v21)) / v23);
      HIDWORD(v47[3 * v12 + 4]) = (int)(float)((float)((float)(v25 * v20) - (float)(v24 * v19)) / v23);
      v26 = BYTE8(v47[43]);
      v6 = 0;
      if ( *(_DWORD *)(a3 + 4) )
        v26 = 1;
      v12 = (unsigned int)(v12 + 1);
      BYTE8(v47[43]) = v26;
      if ( (unsigned int)v12 >= v11 )
        goto LABEL_12;
    }
    v6 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 249, 255);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v28, &MinInput_Warning_CheckResult, 0, 1126, 255);
    }
  }
  else
  {
LABEL_12:
    if ( !a1 )
    {
      v29 = 14LL;
      v48 = 3;
      v30 = &v49;
      v31 = v47;
      do
      {
        v32 = v31[1];
        *(_OWORD *)v30 = *v31;
        v33 = v31[2];
        *((_OWORD *)v30 + 1) = v32;
        v34 = v31[3];
        *((_OWORD *)v30 + 2) = v33;
        v35 = v31[4];
        *((_OWORD *)v30 + 3) = v34;
        v36 = v31[5];
        *((_OWORD *)v30 + 4) = v35;
        v37 = v31[6];
        *((_OWORD *)v30 + 5) = v36;
        v38 = v31[7];
        v31 += 8;
        *((_OWORD *)v30 + 6) = v37;
        v30 += 128;
        *((_OWORD *)v30 - 1) = v38;
        --v29;
      }
      while ( v29 );
      v39 = v31[1];
      *(_OWORD *)v30 = *v31;
      v40 = v31[2];
      *((_OWORD *)v30 + 1) = v39;
      v41 = v31[3];
      *((_OWORD *)v30 + 2) = v40;
      v42 = v31[4];
      *((_OWORD *)v30 + 3) = v41;
      v43 = v31[5];
      v44 = InputDeliveryServer::s_pInputDeliveryServer;
      *((_OWORD *)v30 + 4) = v42;
      *((_OWORD *)v30 + 5) = v43;
      v45 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, __int64, int *, __int64))(*(_QWORD *)v44 + 48LL))(
              v44,
              a2 + 40,
              &v48,
              1896LL);
      v6 = v45;
      if ( v45 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v46, &MinInput_Warning_CheckResult, 0, 1153, v45);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      return v6 >= 0;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *, __int64))(**((_QWORD **)Win32kInterop::s_pInterop + 5)
                                                                       + 104LL))(
           *((_QWORD *)Win32kInterop::s_pInterop + 5),
           a2,
           v47,
           v12);
  }
  if ( a1 )
    return v7;
  return v6 >= 0;
}
