/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C009A420
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C834 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  char *v3; // r15
  char *v4; // rdi
  __int64 v5; // rbx
  _QWORD **v7; // r12
  _QWORD *v8; // rsi
  _QWORD **v9; // r13
  _QWORD *v10; // r14
  VIDMM_DEVICE **v11; // rdx
  __int64 v12; // rcx
  VIDMM_SEGMENT *v13; // rsi
  char *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  VIDMM_SEGMENT *v25; // rsi
  char *v26; // rdi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v38; // [rsp+20h] [rbp-D8h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-98h] BYREF
  struct _KAPC_STATE v40; // [rsp+90h] [rbp-68h] BYREF

  v3 = (char *)this + 128;
  v4 = (char *)*((_QWORD *)this + 16);
  LODWORD(v5) = 0;
  do
  {
    if ( v4 == v3 )
      break;
    v7 = (_QWORD **)(v4 + 16);
    v4 = *(char **)v4;
    v8 = *v7;
    do
    {
      if ( v8 == v7 )
        break;
      v9 = (_QWORD **)(v8 + 2);
      v8 = (_QWORD *)*v8;
      v10 = *v9;
      while ( v10 != v9 )
      {
        v11 = (VIDMM_DEVICE **)(v10 - 7);
        v10 = (_QWORD *)*v10;
        v12 = *(_QWORD *)*v11;
        if ( *(_DWORD *)(v12 + 164) && *(_DWORD *)(v12 + 344) )
        {
          LODWORD(v5) = -1071775486;
          break;
        }
        if ( *(_DWORD *)(v12 + 344) )
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 1), v11);
      }
    }
    while ( (int)v5 >= 0 );
  }
  while ( (int)v5 >= 0 );
  if ( (int)v5 >= 0 )
  {
    v13 = (VIDMM_SEGMENT *)*((_QWORD *)this + 19);
    while ( v13 != (VIDMM_SEGMENT *)((char *)this + 152) )
    {
      v14 = (char *)v13 - 400;
      v13 = *(VIDMM_SEGMENT **)v13;
      v15 = *((_QWORD *)v14 + 13);
      if ( v15 && (*(_BYTE *)(v15 + 32) & 1) != 0 )
      {
        DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v14 + 40));
        KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v14 + 13) + 8LL), &ApcState);
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, int, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v14 + 13) + 8LL) + 24LL) + 48LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 13) + 8LL) + 24LL),
                *((_QWORD *)this + 1),
                *(_QWORD *)(*((_QWORD *)v14 + 13) + 24LL),
                3LL,
                0LL,
                0LL,
                0LL,
                0LL,
                1,
                v14);
        v5 = v16;
        if ( v16 < 0 )
        {
          if ( v16 == -1073741558 )
          {
            *((_DWORD *)v14 + 19) |= 0x100000u;
            LODWORD(v5) = 0;
          }
          else
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19, v20);
            v21[3] = 270LL;
            v21[4] = 4LL;
            v21[5] = 3LL;
            v21[6] = v5;
            v21[7] = 0LL;
            WdLogEvent5_WdCriticalError(v21);
          }
        }
        *(_BYTE *)(*((_QWORD *)v14 + 13) + 32LL) &= ~1u;
        KeUnstackDetachProcess(&ApcState);
        DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v14 + 40), v22, v23, v24);
      }
    }
    if ( (int)v5 >= 0 )
    {
      v25 = (VIDMM_SEGMENT *)*((_QWORD *)this + 21);
      while ( v25 != (VIDMM_SEGMENT *)((char *)this + 168) )
      {
        v26 = (char *)v25 - 400;
        v25 = *(VIDMM_SEGMENT **)v25;
        if ( *((_DWORD *)v26 + 86) )
        {
          LOBYTE(a3) = 1;
          LOBYTE(v38) = 0;
          (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD, int, _QWORD))(**((_QWORD **)v26 + 17) + 48LL))(
            *((_QWORD *)v26 + 17),
            v26,
            a3,
            0LL,
            v38,
            0LL);
        }
        else
        {
          v27 = *((_QWORD *)v26 + 13);
          if ( v27 && (*(_BYTE *)(v27 + 32) & 1) != 0 )
          {
            DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v26 + 40));
            KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v26 + 13) + 8LL), &v40);
            v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, int, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v26 + 13) + 8LL) + 24LL) + 48LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 13) + 8LL) + 24LL),
                    *((_QWORD *)this + 1),
                    *(_QWORD *)(*((_QWORD *)v26 + 13) + 24LL),
                    3LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    1,
                    v26);
            v5 = v28;
            if ( v28 < 0 )
            {
              if ( v28 == -1073741558 )
              {
                *((_DWORD *)v26 + 19) |= 0x100000u;
                LODWORD(v5) = 0;
              }
              else
              {
                v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31, v32);
                v33[3] = 270LL;
                v33[4] = 4LL;
                v33[5] = 3LL;
                v33[6] = v5;
                v33[7] = 0LL;
                WdLogEvent5_WdCriticalError(v33);
              }
            }
            *(_BYTE *)(*((_QWORD *)v26 + 13) + 32LL) &= ~1u;
            KeUnstackDetachProcess(&v40);
            DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v26 + 40), v34, v35, v36);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
