/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0035D80
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x1C0001000 (VidSchIsDeviceBusy.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0005D28 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0035E44 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0057A94 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandlePromotionCandidates(VIDMM_GLOBAL *this, bool *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // edx
  DXGAUTOPUSHLOCK *v6; // rcx
  __int64 v7; // rbx
  ULONG TimeIncrement; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // r14
  _QWORD *v15; // r15
  _QWORD *v16; // rbx
  char v17; // r11
  __int64 v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // r13d
  __int64 v22; // rcx
  _QWORD **v23; // rcx
  _QWORD *i; // rax
  _QWORD *v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // r12
  struct _VIDMM_GLOBAL_ALLOC ***v29; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v30; // r8
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-A8h]
  __int64 v33; // [rsp+28h] [rbp-A0h]
  struct _VIDMM_GLOBAL_ALLOC ***v34; // [rsp+30h] [rbp-98h]
  __int64 v35; // [rsp+38h] [rbp-90h]
  _QWORD *v36; // [rsp+40h] [rbp-88h]
  _QWORD *v37; // [rsp+48h] [rbp-80h]
  _BYTE v38[24]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v39[88]; // [rsp+70h] [rbp-58h] BYREF
  char v40; // [rsp+E0h] [rbp+18h]
  int v41; // [rsp+E8h] [rbp+20h]

  if ( (VIDMM_GLOBAL::_Config & 4) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( *((_DWORD *)this + 10314) )
  {
    *a2 = 1;
    return;
  }
  if ( *((_BYTE *)this + 41264) )
  {
    if ( !VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this, 1) )
    {
      *a2 = 1;
      return;
    }
    v7 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 41264) = 0;
    *((_QWORD *)this + 5155) = v7 * TimeIncrement;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v38, (VIDMM_GLOBAL *)((char *)this + 40648));
  v4 = *((_DWORD *)this + 1604);
  v5 = 0;
  if ( !v4 )
  {
LABEL_7:
    *((_DWORD *)this + 10315) = 0;
    v6 = (DXGAUTOPUSHLOCK *)v38;
    *a2 = 0;
    goto LABEL_8;
  }
  while ( *(_QWORD *)(*((_QWORD *)this + 5104) + 264LL * v5) == *((_QWORD *)this + 5104) + 264LL * v5 )
  {
    if ( ++v5 >= v4 )
      goto LABEL_7;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  v9 = *((_QWORD *)this + 5155);
  v10 = *((_QWORD *)this + 5156);
  v11 = *((_QWORD *)this + 576) - v9;
  *a2 = 1;
  if ( v11 < v10 )
  {
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v11 - v10, 7LL);
    return;
  }
  if ( !v9 || *((_DWORD *)this + 10315) )
  {
    *((_DWORD *)this + 10315) = 0;
    *((_QWORD *)this + 5156) = qword_1C0027388;
  }
  else
  {
    v12 = 2 * v10;
    *((_QWORD *)this + 5156) = v12;
    if ( v12 > qword_1C0027390 )
      *((_QWORD *)this + 5156) = qword_1C0027390;
  }
  v41 = 0;
  v33 = 0LL;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v39, (VIDMM_GLOBAL *)((char *)this + 40648));
  v13 = 0;
  if ( !*((_DWORD *)this + 1604) )
    goto LABEL_62;
  do
  {
    v14 = *((_QWORD *)this + 5104) + 264LL * v13;
    if ( *(_BYTE *)(v14 + 259) )
    {
      v15 = *(_QWORD **)v14;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_58:
          if ( v15 == (_QWORD *)v14 )
            goto LABEL_59;
          v16 = v15;
          v15 = (_QWORD *)*v15;
          if ( !v16[29] && !v16[28] )
            break;
          v17 = 1;
          v32 = 0LL;
          v40 = 1;
          v18 = 0LL;
LABEL_34:
          v21 = 0;
          if ( *((_DWORD *)this + 926) )
          {
            while ( 1 )
            {
              v22 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v21);
              if ( *(_DWORD *)(v22 + 372) == v13 && (*(_DWORD *)(v22 + 56) & 0x1001) != 0 )
                break;
LABEL_57:
              v18 = v32;
              ++v21;
              v17 = v40;
              if ( v21 >= *((_DWORD *)this + 926) )
                goto LABEL_58;
            }
            v35 = v16[2];
            v23 = (_QWORD **)(*(_QWORD *)(v35 + 16) + 40LL + 184LL * v21);
            for ( i = *v23; ; i = v36 )
            {
              if ( i == v23 )
                goto LABEL_57;
              v25 = i - 2;
              v36 = (_QWORD *)*i;
              v37 = i - 2;
              v26 = *(_QWORD *)(i[4] + 32LL);
              if ( v26 )
              {
                if ( *(_QWORD *)(v26 + 160) >= *((_QWORD *)this + 5155) || VidSchIsDeviceBusy((_DWORD *)v26) )
                  break;
              }
LABEL_55:
              v18 = v32;
              v17 = v40;
              v23 = (_QWORD **)(*(_QWORD *)(v35 + 16) + 184LL * v21 + 40);
            }
            v27 = v25 + 4;
            v28 = (_QWORD *)v25[4];
            while ( 2 )
            {
              if ( v28 == v27 )
                goto LABEL_55;
              v29 = (struct _VIDMM_GLOBAL_ALLOC ***)(v28 - 7);
              v28 = (_QWORD *)*v28;
              v34 = v29;
              v30 = **v29;
              if ( (*((_DWORD *)v30 + 19) & 0x400) == 0 && !*(_DWORD *)(*((_QWORD *)v30 + 59) + 4LL) )
              {
                if ( v17 )
                {
                  if ( *((_DWORD *)v30 + 94) < 0xA0000000 )
                    goto LABEL_53;
LABEL_48:
                  if ( v41 && *((_QWORD *)v30 + 2) + v33 > (unsigned __int64)qword_1C0027398 )
                    goto LABEL_61;
                  if ( (*(_BYTE *)(v25[6] + 50LL) & 2) == 0 )
                  {
                    ++*((_DWORD *)this + 10314);
                    *(_BYTE *)(v25[6] + 50LL) |= 2u;
                  }
                  v31 = *((_QWORD *)v30 + 2);
                  v33 += v31;
                  ++v41;
                  v32 = v31 + v18;
                  VIDMM_WORKER_THREAD::SuspendAccessToAllocation(*(VIDMM_WORKER_THREAD **)this, **v29);
                  v25 = v37;
                  *((_DWORD *)**v34 + 19) |= 0x800000u;
                  goto LABEL_53;
                }
                if ( (unsigned __int64)(v18 + *((_QWORD *)v30 + 2)) <= v16[3] - v16[22] )
                  goto LABEL_48;
              }
LABEL_53:
              v18 = v32;
              v27 = v25 + 4;
              v17 = v40;
              continue;
            }
          }
        }
        v17 = 0;
        v40 = 0;
        v18 = 0LL;
        v32 = 0LL;
        if ( (v16[25] || v16[26] || v16[27]) && v16[22] < v16[3] )
          goto LABEL_34;
        v19 = *v16;
        v20 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v20 != v16 )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        *v16 = 0LL;
        v16[1] = 0LL;
      }
    }
LABEL_59:
    ++v13;
  }
  while ( v13 < *((_DWORD *)this + 1604) );
  if ( v41 )
LABEL_61:
    *((_BYTE *)this + 41264) = 1;
LABEL_62:
  v6 = (DXGAUTOPUSHLOCK *)v39;
LABEL_8:
  DXGAUTOPUSHLOCK::Release(v6);
}
