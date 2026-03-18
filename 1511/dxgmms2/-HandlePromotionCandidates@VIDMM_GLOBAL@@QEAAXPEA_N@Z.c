/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0041C70
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x1C00128A4 (VidSchIsDeviceBusy.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001C2C8 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060D88 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandlePromotionCandidates(VIDMM_GLOBAL *this, bool *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  ULONG TimeIncrement; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // r15d
  __int64 v21; // r12
  unsigned int v22; // r10d
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  char v26; // r9
  __int64 v27; // r13
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  _QWORD **v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rbp
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  _QWORD *v37; // rdi
  __int64 *v38; // rcx
  struct _VIDMM_GLOBAL_ALLOC ***v39; // rsi
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-A8h]
  __int64 v42; // [rsp+28h] [rbp-A0h]
  _QWORD *v43; // [rsp+30h] [rbp-98h]
  __int64 v44; // [rsp+38h] [rbp-90h]
  _QWORD *v45; // [rsp+40h] [rbp-88h]
  __int64 v46; // [rsp+48h] [rbp-80h]
  _QWORD *v47; // [rsp+50h] [rbp-78h]
  _BYTE v48[8]; // [rsp+58h] [rbp-70h] BYREF
  char *v49; // [rsp+60h] [rbp-68h]
  int v50; // [rsp+68h] [rbp-60h]
  _BYTE v51[32]; // [rsp+70h] [rbp-58h] BYREF
  char v52; // [rsp+E0h] [rbp+18h]
  unsigned int v53; // [rsp+E8h] [rbp+20h]

  if ( (VIDMM_GLOBAL::_Config & 4) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( *((_DWORD *)this + 10328) )
  {
    *a2 = 1;
    return;
  }
  if ( *((_BYTE *)this + 41320) )
  {
    if ( !VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this, 1, a3, a4) )
    {
      *a2 = 1;
      return;
    }
    v6 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 41320) = 0;
    *((_QWORD *)this + 5162) = v6 * TimeIncrement;
  }
  v49 = (char *)this + 40704;
  if ( this != (VIDMM_GLOBAL *)-40704LL && *((struct _KTHREAD **)this + 5089) == KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v8);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 40704, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v11 = *((_DWORD *)this + 10180);
      if ( v11 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v9, &EventBlockThread, v10, v11);
    }
    ExAcquirePushLockSharedEx((char *)this + 40704, 0LL);
  }
  v12 = *((_DWORD *)this + 1604);
  v13 = 0;
  v50 = 1;
  if ( !v12 )
  {
LABEL_21:
    *((_DWORD *)this + 10329) = 0;
    *a2 = 0;
    ExReleasePushLockSharedEx((char *)this + 40704, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  while ( *(_QWORD *)(*((_QWORD *)this + 5111) + 264LL * v13) == *((_QWORD *)this + 5111) + 264LL * v13 )
  {
    if ( ++v13 >= v12 )
      goto LABEL_21;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
  v16 = *((_QWORD *)this + 5162);
  v17 = *((_QWORD *)this + 5163);
  v18 = *((_QWORD *)this + 576) - v16;
  *a2 = 1;
  if ( v18 < v17 )
  {
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v18 - v17, 7);
    return;
  }
  if ( !v16 || *((_DWORD *)this + 10329) )
  {
    *((_DWORD *)this + 10329) = 0;
    *((_QWORD *)this + 5163) = qword_1C002F3B0;
  }
  else
  {
    v19 = 2 * v17;
    *((_QWORD *)this + 5163) = v19;
    if ( v19 > qword_1C002F3B8 )
      *((_QWORD *)this + 5163) = qword_1C002F3B8;
  }
  v20 = 0;
  v21 = 0LL;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v51, (struct _KTHREAD **)this + 5088, v14, v15);
  v22 = 0;
  v41 = 0;
  if ( *((_DWORD *)this + 1604) )
  {
LABEL_30:
    v23 = *((_QWORD *)this + 5111) + 264LL * v22;
    v42 = v23;
    if ( !*(_BYTE *)(v23 + 259) )
      goto LABEL_73;
    v24 = *(_QWORD **)v23;
    if ( *(_QWORD *)v23 == v23 )
      goto LABEL_73;
    while ( 1 )
    {
      v25 = v24;
      v43 = v24;
      v45 = (_QWORD *)*v24;
      if ( v24[29] || v24[28] )
        break;
      v26 = 0;
      v27 = 0LL;
      v52 = 0;
      if ( (v24[25] || v24[26] || v24[27]) && v24[22] < v24[3] )
      {
        v23 = v42;
        goto LABEL_44;
      }
      v28 = *v24;
      v29 = (_QWORD *)v24[1];
      if ( *(_QWORD **)(*v25 + 8LL) != v25 || (_QWORD *)*v29 != v25 )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      *v25 = 0LL;
      v25[1] = 0LL;
LABEL_71:
      v23 = v42;
LABEL_72:
      v24 = v45;
      if ( v45 == (_QWORD *)v23 )
      {
LABEL_73:
        v41 = ++v22;
        if ( v22 >= *((_DWORD *)this + 1604) )
        {
          if ( v20 )
LABEL_75:
            *((_BYTE *)this + 41320) = 1;
          goto LABEL_76;
        }
        goto LABEL_30;
      }
    }
    v26 = 1;
    v27 = 0LL;
    v52 = 1;
LABEL_44:
    v30 = 0;
    v53 = 0;
    if ( !*((_DWORD *)this + 926) )
      goto LABEL_72;
    while ( 1 )
    {
      v31 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v30);
      if ( *(_DWORD *)(v31 + 372) == v22 && (*(_DWORD *)(v31 + 56) & 0x1001) != 0 )
      {
        v46 = v25[2];
        v44 = 184LL * v30;
        v32 = (_QWORD **)(*(_QWORD *)(v46 + 16) + 40LL + v44);
        v33 = *v32;
        if ( *v32 != v32 )
        {
          do
          {
            v34 = v33 - 2;
            v47 = (_QWORD *)*v33;
            v35 = *(_QWORD *)(v33[4] + 32LL);
            if ( v35 && (*(_QWORD *)(v35 + 160) >= *((_QWORD *)this + 5162) || VidSchIsDeviceBusy((_DWORD *)v35)) )
            {
              v36 = (_QWORD *)v34[4];
              v37 = v34 + 4;
              if ( v36 != v34 + 4 )
              {
                while ( 1 )
                {
                  v38 = (__int64 *)*(v36 - 7);
                  v39 = (struct _VIDMM_GLOBAL_ALLOC ***)(v36 - 7);
                  v40 = *v38;
                  do
                    v36 = (_QWORD *)*v36;
                  while ( v36 != v37 && (__int64 *)*(v36 - 7) == v38 );
                  if ( (*(_DWORD *)(v40 + 76) & 0x400) != 0 || *(_DWORD *)(*(_QWORD *)(v40 + 472) + 4LL) )
                    goto LABEL_67;
                  if ( !v26 )
                    break;
                  if ( *(_DWORD *)(v40 + 376) >= 0xA0000000 )
                    goto LABEL_61;
LABEL_67:
                  v26 = v52;
                  if ( v36 == v37 )
                    goto LABEL_68;
                }
                if ( (unsigned __int64)(v27 + *(_QWORD *)(v40 + 16)) <= v25[3] - v25[22] )
                {
LABEL_61:
                  if ( v20 && v21 + *(_QWORD *)(v40 + 16) > (unsigned __int64)qword_1C002F3C0 )
                    goto LABEL_75;
                  if ( (*(_BYTE *)(v34[6] + 50LL) & 2) == 0 )
                  {
                    ++*((_DWORD *)this + 10328);
                    *(_BYTE *)(v34[6] + 50LL) |= 2u;
                  }
                  ++v20;
                  v21 += *(_QWORD *)(v40 + 16);
                  v27 += *(_QWORD *)(v40 + 16);
                  VIDMM_WORKER_THREAD::SuspendAccessToAllocation(*(VIDMM_WORKER_THREAD **)this, **v39);
                  *((_DWORD *)**v39 + 19) |= 0x1000000u;
                }
                v25 = v43;
                goto LABEL_67;
              }
            }
LABEL_68:
            v26 = v52;
            v33 = v47;
          }
          while ( v47 != (_QWORD *)(*(_QWORD *)(v46 + 16) + v44 + 40) );
          v22 = v41;
        }
      }
      v26 = v52;
      v30 = v53 + 1;
      v53 = v30;
      if ( v30 >= *((_DWORD *)this + 926) )
        goto LABEL_71;
    }
  }
LABEL_76:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v51);
}
