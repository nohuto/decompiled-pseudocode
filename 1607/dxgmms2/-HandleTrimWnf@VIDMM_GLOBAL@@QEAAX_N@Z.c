/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004C060
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C000F504 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FC8C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C004B768 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x1C004BFC0 (-SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C005D6EC (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // eax
  VIDMM_GLOBAL *v5; // r14
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r10
  _QWORD *v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // r15
  char v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r11
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // r13
  char v28; // r8
  _QWORD *v29; // r10
  DXGPROCESS *v30; // rcx
  char IsHighPriorityProcess; // al
  __int64 v32; // rcx
  bool v33; // cc
  unsigned __int64 v34; // r9
  unsigned int v35; // r15d
  __int64 v36; // rax
  int v37; // r9d
  _BYTE v38[104]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v42; // [rsp+B0h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 576);
  v3 = -1LL;
  v4 = *((_DWORD *)this + 1604);
  v5 = this;
  v6 = -1LL;
  if ( v4 )
  {
    v7 = v4;
    v8 = *((_QWORD *)this + 5150) + 232LL;
    LODWORD(v42) = dword_1C0035374;
    while ( 1 )
    {
      v9 = (_QWORD *)v8;
      v10 = 2LL;
      do
      {
        v11 = *(v9 - 27);
        if ( !v11 )
          goto LABEL_12;
        v12 = 100 - 100LL * *v9 / v11;
        if ( v12 <= (unsigned int)dword_1C0035364 )
        {
          if ( v12 <= (unsigned int)dword_1C0035368 )
          {
            v13 = (unsigned int)dword_1C0035378;
            v14 = (unsigned int)dword_1C0035374;
            goto LABEL_8;
          }
          v13 = (unsigned int)dword_1C0035378
              + (v12 - (unsigned int)dword_1C0035368)
              * (unsigned int)(dword_1C0035374 - dword_1C0035378)
              / (unsigned int)(dword_1C0035364 - dword_1C0035368);
        }
        else
        {
          v13 = (unsigned int)dword_1C003536C;
        }
        v14 = (unsigned int)dword_1C0035370;
LABEL_8:
        if ( v3 >= v13 )
          v3 = v13;
        if ( v6 >= v14 )
          v6 = v14;
LABEL_12:
        ++v9;
        --v10;
      }
      while ( v10 );
      v8 += 264LL;
      if ( !--v7 )
      {
        v5 = this;
        break;
      }
    }
  }
  v15 = *((_QWORD *)v5 + 5185);
  if ( v15 && v3 > v2 - v15 )
  {
    v16 = v2 - v15 - v3;
    v17 = 0;
  }
  else
  {
    *((_QWORD *)v5 + 5185) = v2;
    v16 = -v3;
    v17 = 1;
  }
  v18 = *((_QWORD *)v5 + 5186);
  if ( v18 && v6 > v2 - v18 )
  {
    v19 = v2 - v18 - v6;
    if ( v16 <= v19 )
      v16 = v2 - v18 - v6;
    v20 = 0;
  }
  else
  {
    *((_QWORD *)v5 + 5186) = v2;
    v19 = -v6;
    if ( v16 <= -v6 )
      v16 = -v6;
    v20 = 1;
  }
  v21 = 0;
  v40 = v16;
  if ( v5 != (VIDMM_GLOBAL *)-40968LL && *((struct _KTHREAD **)v5 + 5122) == KeGetCurrentThread() )
  {
    v36 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v36 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v36);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v5 + 40968, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v37 = *((_DWORD *)v5 + 10246);
      if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v22, &EventBlockThread, v23, v37);
    }
    ExAcquirePushLockSharedEx((char *)v5 + 40968, 0LL);
  }
  if ( v17 )
  {
    v25 = *((_QWORD *)v5 + 575);
    if ( *((_QWORD *)v5 + 5187) == v25 )
    {
      ++*((_DWORD *)v5 + 10378);
    }
    else
    {
      *((_DWORD *)v5 + 10378) = 0;
      *((_QWORD *)v5 + 5187) = v25;
    }
    if ( !v20 )
      goto LABEL_41;
  }
  else if ( !v20 )
  {
    goto LABEL_29;
  }
  v26 = *((_QWORD *)v5 + 575);
  if ( *((_QWORD *)v5 + 5188) == v26 )
  {
    ++*((_DWORD *)v5 + 10379);
  }
  else
  {
    *((_DWORD *)v5 + 10379) = 0;
    *((_QWORD *)v5 + 5188) = v26;
  }
LABEL_41:
  if ( *((_DWORD *)v5 + 10378) > 1u && *((_DWORD *)v5 + 10379) > 1u )
    goto LABEL_30;
  v21 = 1;
LABEL_29:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v5, v40, 5);
  if ( v21 )
  {
    v24 = a2;
LABEL_44:
    v27 = (_QWORD *)*((_QWORD *)v5 + 5126);
    if ( v27 == (_QWORD *)((char *)v5 + 41008) )
      goto LABEL_31;
    while ( 1 )
    {
      v28 = 0;
      v29 = v27 - 3;
      if ( !v21 )
        goto LABEL_54;
      v30 = *(DXGPROCESS **)(v29[5] + 32LL);
      if ( !v30 )
        goto LABEL_54;
      if ( (!*((_BYTE *)v30 + 256) || *((_BYTE *)v30 + 289)) && !*((_BYTE *)v30 + 288) )
        goto LABEL_54;
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v30);
      v32 = v29[59];
      if ( IsHighPriorityProcess )
      {
        if ( v32 )
        {
          v33 = v6 <= v2 - v32;
LABEL_52:
          if ( !v33 )
            goto LABEL_54;
        }
      }
      else if ( v32 )
      {
        v33 = v3 <= v2 - v32;
        goto LABEL_52;
      }
      v28 = 1;
      v29[59] = v2;
LABEL_54:
      v34 = 0LL;
      v42 = 0LL;
      v35 = v28 != 0;
      if ( v24 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
          (DXGAUTOPUSHLOCKSHARED *)v38,
          (struct DXGPUSHLOCK *const)(v29 + 41));
        VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)(v27 - 3), &v42, 0, 1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
        v34 = v42;
        v29 = v27 - 3;
        v24 = a2;
        if ( v42 )
          v35 |= 4u;
      }
      if ( v35 )
      {
        VIDMM_GLOBAL::SendTrimWnf(v5, (struct VIDMM_PROCESS *)v29[5], v35, v34);
        v24 = a2;
      }
      v27 = (_QWORD *)*v27;
      if ( v27 == (_QWORD *)((char *)v5 + 41008) )
        goto LABEL_31;
    }
  }
LABEL_30:
  v24 = a2;
  if ( a2 )
    goto LABEL_44;
LABEL_31:
  ExReleasePushLockSharedEx((char *)v5 + 40968, 0LL);
  KeLeaveCriticalRegion();
}
