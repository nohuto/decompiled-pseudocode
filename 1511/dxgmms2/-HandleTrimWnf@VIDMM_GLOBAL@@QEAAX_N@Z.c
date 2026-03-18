/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0043340
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0010420 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0041B8C (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C005656C (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C005F880 (-SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, unsigned __int8 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  struct _KTHREAD *v6; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // si
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // di
  char *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  char v27; // al
  __int64 v28; // r9
  struct _KTHREAD **v29; // r15
  char v30; // r8
  DXGPROCESS *v31; // rcx
  char IsHighPriorityProcess; // al
  struct _KTHREAD *v33; // rcx
  bool v34; // cc
  __int64 v35; // rax
  __int64 v36; // rax
  bool v37; // al
  unsigned __int64 v38; // r8
  int v39; // esi
  struct VIDMM_PROCESS *v40; // rcx
  __int64 v41; // rax
  const struct _WNF_STATE_NAME *v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdi
  __int64 v49; // rax
  char v51; // [rsp+21h] [rbp-87h]
  unsigned __int64 v52; // [rsp+28h] [rbp-80h] BYREF
  __int64 v53; // [rsp+30h] [rbp-78h]
  char *v54; // [rsp+38h] [rbp-70h]
  struct _KTHREAD *v55; // [rsp+40h] [rbp-68h]
  _BYTE v56[24]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v57[20]; // [rsp+60h] [rbp-48h] BYREF
  int v58; // [rsp+74h] [rbp-34h]

  v4 = *((unsigned int *)this + 1604);
  v5 = -1LL;
  v6 = (struct _KTHREAD *)*((_QWORD *)this + 576);
  v8 = -1LL;
  v55 = v6;
  if ( (_DWORD)v4 )
  {
    a3 = (unsigned int)dword_1C002F35C;
    v9 = *((_QWORD *)this + 5111) + 232LL;
    v52 = v9;
    v53 = v4;
    LODWORD(v54) = dword_1C002F35C;
    do
    {
      a4 = (_QWORD *)v9;
      v10 = 2LL;
      do
      {
        v11 = *(a4 - 27);
        if ( !v11 )
          goto LABEL_15;
        v12 = 100 - 100LL * *a4 / v11;
        if ( v12 > (unsigned int)dword_1C002F354 )
        {
          v13 = (unsigned int)a3;
LABEL_10:
          v14 = (unsigned int)dword_1C002F360;
          goto LABEL_11;
        }
        if ( v12 > (unsigned int)dword_1C002F358 )
        {
          a3 = (unsigned int)v54;
          v13 = (unsigned int)dword_1C002F368
              + (v12 - (unsigned int)dword_1C002F358)
              * (unsigned int)(dword_1C002F364 - dword_1C002F368)
              / (unsigned int)(dword_1C002F354 - dword_1C002F358);
          goto LABEL_10;
        }
        v13 = (unsigned int)dword_1C002F368;
        v14 = (unsigned int)dword_1C002F364;
LABEL_11:
        if ( v5 >= v13 )
          v5 = v13;
        if ( v8 >= v14 )
          v8 = v14;
LABEL_15:
        ++a4;
        --v10;
      }
      while ( v10 );
      v9 = v52 + 264;
      v15 = v53-- == 1;
      v52 += 264LL;
    }
    while ( !v15 );
  }
  v16 = *((_QWORD *)this + 5146);
  if ( v16 && v5 > (__int64)v6 - v16 )
  {
    v17 = (__int64)v6 - v16 - v5;
    v18 = 0;
  }
  else
  {
    *((_QWORD *)this + 5146) = v6;
    v18 = 1;
    v17 = -v5;
  }
  v19 = *((_QWORD *)this + 5147);
  if ( v19 && v8 > (__int64)v6 - v19 )
  {
    v20 = (__int64)v6 - v19 - v8;
    if ( v17 > v20 )
      v20 = v17;
    v21 = 0;
  }
  else
  {
    *((_QWORD *)this + 5147) = v6;
    v20 = -v8;
    v21 = 1;
    if ( v17 > -v8 )
      v20 = v17;
  }
  v22 = (char *)this + 40704;
  v53 = v20;
  v51 = 0;
  v54 = (char *)this + 40704;
  if ( this != (VIDMM_GLOBAL *)-40704LL )
  {
    if ( *((struct _KTHREAD **)this + 5089) == KeGetCurrentThread() )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20, v19, a3, a4);
      *(_QWORD *)(v23 + 24) = 1155LL;
      WdLogEvent5_WdAssertion(v23);
    }
    v6 = v55;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 40704, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v26 = *((_DWORD *)this + 10180);
      if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v24, &EventBlockThread, v25, v26);
    }
    ExAcquirePushLockSharedEx((char *)this + 40704, 0LL);
  }
  if ( v18 )
  {
    v35 = *((_QWORD *)this + 575);
    if ( *((_QWORD *)this + 5148) == v35 )
    {
      ++*((_DWORD *)this + 10300);
    }
    else
    {
      *((_DWORD *)this + 10300) = 0;
      *((_QWORD *)this + 5148) = v35;
    }
    if ( !v21 )
      goto LABEL_58;
  }
  else if ( !v21 )
  {
    goto LABEL_40;
  }
  v36 = *((_QWORD *)this + 575);
  if ( *((_QWORD *)this + 5149) == v36 )
  {
    ++*((_DWORD *)this + 10301);
  }
  else
  {
    *((_DWORD *)this + 10301) = 0;
    *((_QWORD *)this + 5149) = v36;
  }
LABEL_58:
  if ( *((_DWORD *)this + 10300) > 1u && *((_DWORD *)this + 10301) > 1u )
  {
    v27 = 0;
LABEL_62:
    v28 = a2;
    if ( !a2 )
      goto LABEL_76;
    goto LABEL_42;
  }
  v51 = 1;
LABEL_40:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v53, 5);
  if ( !v27 )
    goto LABEL_62;
  v28 = a2;
LABEL_42:
  v29 = (struct _KTHREAD **)*((_QWORD *)this + 5093);
  while ( v29 != (struct _KTHREAD **)((char *)this + 40744) )
  {
    v30 = 0;
    if ( !v27 )
      goto LABEL_68;
    v31 = (DXGPROCESS *)*((_QWORD *)v29[2] + 4);
    if ( !v31 )
      goto LABEL_68;
    if ( (!*((_BYTE *)v31 + 264) || *((_BYTE *)v31 + 313)) && !*((_BYTE *)v31 + 312) )
      goto LABEL_68;
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v31);
    v33 = v29[52];
    if ( IsHighPriorityProcess )
    {
      if ( v33 )
      {
        v34 = v8 <= v6 - v33;
        goto LABEL_66;
      }
    }
    else if ( v33 )
    {
      v34 = v5 <= v6 - v33;
LABEL_66:
      if ( !v34 )
        goto LABEL_68;
    }
    v30 = 1;
    v29[52] = v6;
LABEL_68:
    v37 = v30 != 0;
    v38 = 0LL;
    v52 = 0LL;
    v39 = v37;
    if ( (_BYTE)v28 )
    {
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v56, v29 + 35, 0LL, v28);
      VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)(v29 - 3), &v52, 0, 1);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v56);
      v38 = v52;
      if ( v52 )
        v39 |= 4u;
    }
    if ( v39 )
    {
      v40 = v29[2];
      *(_QWORD *)&v57[4] = 0LL;
      *(_QWORD *)&v57[12] = 0LL;
      v58 = 0;
      v41 = *((_QWORD *)this + 3);
      *(_DWORD *)v57 = 0;
      v42 = *(const struct _WNF_STATE_NAME **)(v41 + 252);
      *(_QWORD *)&v57[8] = v38;
      *(_QWORD *)v57 = v42;
      *(_DWORD *)&v57[16] = v39;
      v43 = VIDMM_GLOBAL::SendWnfNotificationToProcess(v40, v42, v57, v28);
      v48 = v43;
      if ( v43 < 0 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
        *(_QWORD *)(v49 + 24) = v48;
        WdLogEvent5_WdAssertion(v49);
      }
    }
    v29 = (struct _KTHREAD **)*v29;
    v27 = v51;
    v28 = a2;
  }
  v22 = v54;
LABEL_76:
  ExReleasePushLockSharedEx(v22, 0LL);
  KeLeaveCriticalRegion();
}
