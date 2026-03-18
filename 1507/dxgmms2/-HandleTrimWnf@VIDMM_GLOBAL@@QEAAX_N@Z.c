/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0033278
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0003CE8 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0005E14 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00061D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ?SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C003281C (-SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?CheckTrimWnfFrequency@VIDMM_GLOBAL@@QEAA_NPEBT_LARGE_INTEGER@@PEA_J_JPEAT2@@Z @ 0x1C0033648 (-CheckTrimWnfFrequency@VIDMM_GLOBAL@@QEAA_NPEBT_LARGE_INTEGER@@PEA_J_JPEAT2@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0035E44 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0058204 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(unsigned __int64 this, char a2)
{
  unsigned __int64 v2; // r12
  char v3; // r14
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  DWORD LowPart; // r8d
  __int64 v8; // r9
  __int64 v9; // r11
  _QWORD *v10; // r10
  signed __int64 v11; // rcx
  unsigned __int64 v12; // rax
  bool v13; // zf
  bool v14; // bl
  VIDMM_GLOBAL *v15; // rcx
  bool v16; // si
  char v17; // r13
  __int64 v18; // r9
  unsigned __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *i; // rsi
  char v23; // r10
  DXGPROCESS *v24; // rcx
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v26; // rcx
  union _LARGE_INTEGER *v27; // r11
  __int64 *v28; // r8
  unsigned __int64 v29; // r8
  int v30; // ebx
  struct VIDMM_PROCESS *v31; // rcx
  __int64 v32; // rax
  struct _WNF_STATE_NAME *v33; // rdx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rax
  union _LARGE_INTEGER v42; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-39h] BYREF
  union _LARGE_INTEGER v44; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-29h]
  __int64 v46; // [rsp+60h] [rbp-21h]
  __int64 v47; // [rsp+68h] [rbp-19h]
  unsigned __int64 v48; // [rsp+70h] [rbp-11h]
  _BYTE v49[8]; // [rsp+78h] [rbp-9h] BYREF
  DXGPUSHLOCK *v50; // [rsp+80h] [rbp-1h]
  int v51; // [rsp+88h] [rbp+7h]
  _BYTE v52[20]; // [rsp+90h] [rbp+Fh] BYREF
  int v53; // [rsp+A4h] [rbp+23h]

  v2 = -1LL;
  v44 = *(union _LARGE_INTEGER *)(this + 4608);
  v3 = a2;
  v4 = *(unsigned int *)(this + 6416);
  v5 = this;
  v6 = -1LL;
  v48 = this;
  v47 = -1LL;
  if ( (_DWORD)v4 )
  {
    LowPart = dword_1C0027334;
    v8 = *(_QWORD *)(this + 40832) + 232LL;
    v43 = v4;
    v46 = v8;
    v42.LowPart = dword_1C0027334;
    v45 = dword_1C002732C;
    while ( 1 )
    {
      v9 = 2LL;
      v10 = (_QWORD *)v8;
      do
      {
        this = *(v10 - 27);
        if ( !this )
          goto LABEL_15;
        v11 = 100 - 100LL * *v10 / this;
        if ( v11 > v45 )
        {
          v12 = LowPart;
LABEL_10:
          this = (unsigned int)dword_1C0027338;
          goto LABEL_11;
        }
        if ( v11 > (unsigned int)dword_1C0027330 )
        {
          LowPart = v42.LowPart;
          v12 = (unsigned int)dword_1C0027340
              + (v11 - (unsigned int)dword_1C0027330)
              * (unsigned int)(dword_1C002733C - dword_1C0027340)
              / (v45 - dword_1C0027330);
          goto LABEL_10;
        }
        v12 = (unsigned int)dword_1C0027340;
        this = (unsigned int)dword_1C002733C;
LABEL_11:
        if ( v2 >= v12 )
          v2 = v12;
        if ( v6 >= this )
          v6 = this;
LABEL_15:
        ++v10;
        --v9;
      }
      while ( v9 );
      v8 = v46 + 264;
      v47 = v6;
      v13 = v43-- == 1;
      v46 += 264LL;
      if ( v13 )
      {
        v5 = v48;
        v3 = a2;
        break;
      }
    }
  }
  v42.QuadPart = 0x8000000000000000uLL;
  v14 = VIDMM_GLOBAL::CheckTrimWnfFrequency((VIDMM_GLOBAL *)this, &v44, (__int64 *)(v5 + 41112), v2, &v42);
  v16 = VIDMM_GLOBAL::CheckTrimWnfFrequency(v15, &v44, (__int64 *)(v5 + 41120), v6, &v42);
  v17 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49, (struct _KTHREAD **)(v5 + 40648), 0LL, v18);
  DXGPUSHLOCK::AcquireShared(v50);
  v19 = 0LL;
  v51 = 1;
  if ( v14 )
  {
    v20 = *(_QWORD *)(v5 + 4600);
    if ( *(_QWORD *)(v5 + 41128) == v20 )
    {
      ++*(_DWORD *)(v5 + 41144);
    }
    else
    {
      *(_DWORD *)(v5 + 41144) = 0;
      *(_QWORD *)(v5 + 41128) = v20;
    }
  }
  else if ( !v16 )
  {
    goto LABEL_31;
  }
  if ( v16 )
  {
    v21 = *(_QWORD *)(v5 + 4600);
    if ( *(_QWORD *)(v5 + 41136) == v21 )
    {
      ++*(_DWORD *)(v5 + 41148);
    }
    else
    {
      *(_DWORD *)(v5 + 41148) = 0;
      *(_QWORD *)(v5 + 41136) = v21;
    }
  }
  if ( *(_DWORD *)(v5 + 41144) > 1u && *(_DWORD *)(v5 + 41148) > 1u )
  {
LABEL_32:
    if ( !v3 )
      goto LABEL_52;
    goto LABEL_33;
  }
  v17 = 1;
LABEL_31:
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VIDMM_WORKER_THREAD::SetTimeout)(
    *(_QWORD *)v5,
    (union _LARGE_INTEGER)v42.QuadPart,
    5LL);
  if ( !v17 )
    goto LABEL_32;
LABEL_33:
  for ( i = *(_QWORD **)(v5 + 40688); i != (_QWORD *)(v5 + 40688); i = (_QWORD *)*i )
  {
    v23 = v19;
    if ( v17 )
    {
      v24 = *(DXGPROCESS **)(i[2] + 32LL);
      if ( v24 )
      {
        if ( *((_BYTE *)v24 + 264) != (_BYTE)v19 && *((_BYTE *)v24 + 313) == (_BYTE)v19
          || *((_BYTE *)v24 + 312) != (_BYTE)v19 )
        {
          IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v24);
          v28 = i + 52;
          if ( IsHighPriorityProcess )
          {
            if ( VIDMM_GLOBAL::CheckTrimWnfFrequency(v26, &v44, v28, v47, v27) )
              v23 = 1;
          }
          else if ( VIDMM_GLOBAL::CheckTrimWnfFrequency(v26, &v44, v28, v2, v27) )
          {
            v23 = 1;
          }
        }
      }
    }
    v43 = v19;
    v29 = v19;
    v30 = v23 != 0;
    if ( a2 != (_BYTE)v19 )
    {
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v52, (struct DXGPUSHLOCK *const)(i + 35));
      VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)(i - 3), &v43, 0, 1);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
      v29 = v43;
      v19 = 0LL;
      if ( v43 )
        v30 |= 4u;
    }
    if ( v30 )
    {
      v31 = (struct VIDMM_PROCESS *)i[2];
      *(_QWORD *)&v52[4] = 0LL;
      *(_QWORD *)&v52[12] = 0LL;
      v53 = 0;
      v32 = *(_QWORD *)(v5 + 24);
      *(_DWORD *)v52 = v19;
      v33 = *(struct _WNF_STATE_NAME **)(v32 + 252);
      *(_QWORD *)&v52[8] = v29;
      *(_QWORD *)v52 = v33;
      *(_DWORD *)&v52[16] = v30;
      v34 = VIDMM_GLOBAL::SendWnfNotificationToProcess(v31, v33, v52);
      v19 = 0LL;
      v39 = v34;
      if ( v34 < 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
        *(_QWORD *)(v40 + 24) = v39;
        WdLogEvent5_WdAssertion(v40);
        v19 = 0LL;
      }
    }
  }
LABEL_52:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v49);
}
