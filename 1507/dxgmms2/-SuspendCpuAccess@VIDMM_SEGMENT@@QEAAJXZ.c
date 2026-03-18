/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C007126C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
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
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  VIDMM_SEGMENT *v23; // rsi
  char *v24; // rdi
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // [rsp+20h] [rbp-D8h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-98h] BYREF
  struct _KAPC_STATE v36; // [rsp+90h] [rbp-68h] BYREF

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
        if ( *(_DWORD *)(v12 + 156) && *(_DWORD *)(v12 + 336) )
        {
          LODWORD(v5) = -1071775486;
          break;
        }
        if ( *(_DWORD *)(v12 + 336) )
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
      v14 = (char *)v13 - 384;
      v13 = *(VIDMM_SEGMENT **)v13;
      v15 = *((_QWORD *)v14 + 12);
      if ( v15 && (*(_BYTE *)(v15 + 32) & 1) != 0 )
      {
        DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v14 + 39));
        KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v14 + 12) + 8LL), &ApcState);
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, int, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v14 + 12) + 8LL) + 24LL) + 48LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 12) + 8LL) + 24LL),
                *((_QWORD *)this + 1),
                *(_QWORD *)(*((_QWORD *)v14 + 12) + 24LL),
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
            *((_DWORD *)v14 + 19) |= 0x80000u;
            LODWORD(v5) = 0;
          }
          else
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
            v19[3] = 270LL;
            v19[4] = 4LL;
            v19[5] = 3LL;
            v19[6] = v5;
            v19[7] = 0LL;
            WdLogEvent5_WdCriticalError(v19);
          }
        }
        *(_BYTE *)(*((_QWORD *)v14 + 12) + 32LL) &= ~1u;
        KeUnstackDetachProcess(&ApcState);
        DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v14 + 39), v20, v21, v22);
      }
    }
    if ( (int)v5 >= 0 )
    {
      v23 = (VIDMM_SEGMENT *)*((_QWORD *)this + 21);
      while ( v23 != (VIDMM_SEGMENT *)((char *)this + 168) )
      {
        v24 = (char *)v23 - 384;
        v23 = *(VIDMM_SEGMENT **)v23;
        if ( *((_DWORD *)v24 + 84) )
        {
          LOBYTE(a3) = 1;
          LOBYTE(v34) = 0;
          (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD, int, _QWORD))(**((_QWORD **)v24 + 16) + 48LL))(
            *((_QWORD *)v24 + 16),
            v24,
            a3,
            0LL,
            v34,
            0LL);
        }
        else
        {
          v25 = *((_QWORD *)v24 + 12);
          if ( v25 && (*(_BYTE *)(v25 + 32) & 1) != 0 )
          {
            DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v24 + 39));
            KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v24 + 12) + 8LL), &v36);
            v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, int, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v24 + 12) + 8LL) + 24LL) + 48LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 12) + 8LL) + 24LL),
                    *((_QWORD *)this + 1),
                    *(_QWORD *)(*((_QWORD *)v24 + 12) + 24LL),
                    3LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    1,
                    v24);
            v5 = v26;
            if ( v26 < 0 )
            {
              if ( v26 == -1073741558 )
              {
                *((_DWORD *)v24 + 19) |= 0x80000u;
                LODWORD(v5) = 0;
              }
              else
              {
                v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
                v29[3] = 270LL;
                v29[4] = 4LL;
                v29[5] = 3LL;
                v29[6] = v5;
                v29[7] = 0LL;
                WdLogEvent5_WdCriticalError(v29);
              }
            }
            *(_BYTE *)(*((_QWORD *)v24 + 12) + 32LL) &= ~1u;
            KeUnstackDetachProcess(&v36);
            DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v24 + 39), v30, v31, v32);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
