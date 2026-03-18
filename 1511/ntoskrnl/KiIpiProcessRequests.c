/*
 * XREFs of KiIpiProcessRequests @ 0x1400C6AB0
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x14015A800 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140154B20 (KiSetUserTbFlushPending.c)
 *     PerfInfoLogIpi @ 0x14020F924 (PerfInfoLogIpi.c)
 */

__int64 KiIpiProcessRequests()
{
  unsigned __int8 v0; // bl
  char v1; // r15
  struct _KPRCB *CurrentPrcb; // r14
  char *v4; // rdi
  char *v6; // rax
  char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbp
  void **v10; // r11
  int v11; // r10d
  void **v12; // rbx
  char *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v19; // rcx
  struct _KPRCB *v21; // [rsp+20h] [rbp-98h]
  __int128 v22; // [rsp+28h] [rbp-90h]
  __int128 v23; // [rsp+38h] [rbp-80h]
  __int128 v24; // [rsp+48h] [rbp-70h]
  __int128 v25; // [rsp+58h] [rbp-60h]
  __int128 v26; // [rsp+68h] [rbp-50h]
  _BYTE v27[16]; // [rsp+78h] [rbp-40h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v1 = 1;
    EtwGetKernelTraceTimestamp(v27, 1077936128LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = CurrentPrcb;
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( CurrentPrcb->Mailbox )
  {
    _R12D = 0;
    v4 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
    if ( v4 )
    {
      _R13D = 1;
      while ( 1 )
      {
        v6 = v4;
        v7 = v4;
        v4 = *(char **)v4;
        v8 = *((_QWORD *)v7 + 1);
        v9 = KiProcessorBlock[(unsigned int)((v6 - (char *)CurrentPrcb - 32384) >> 6)];
        switch ( v8 & 0xF )
        {
          case 1LL:
            if ( !KiFlushPcid )
              goto LABEL_25;
            v22 = 2uLL;
            __asm { invpcid r13d, [rsp+0B8h+var_90] }
            break;
          case 2LL:
            v17 = v8 >> 16;
            if ( ((1 << *(_DWORD *)(v17 + 8)) & 0xA) != 0
              && KiFlushPcid
              && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              *(_QWORD *)&v23 = 1LL;
              *((_QWORD *)&v23 + 1) = *(_QWORD *)v17;
              __asm { invpcid r12d, [rsp+0B8h+var_80] }
            }
            __invlpg(*(void **)v17);
            break;
          case 3LL:
            if ( KiFlushPcid )
            {
              v25 = 2uLL;
              __asm { invpcid r13d, [rsp+0B8h+var_60] }
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( !Process->AddressPolicy )
                KiSetUserTbFlushPending(Process, v8, 0x140000000uLL);
            }
            else
            {
              v19 = __readcr4();
              if ( (v19 & 0x20080) != 0 )
              {
                __writecr4(v19 ^ 0x80);
                __writecr4(v19);
              }
              else
              {
LABEL_25:
                v16 = __readcr3();
                __writecr3(v16);
              }
            }
            break;
          case 4LL:
            v10 = *(void ***)(v8 >> 16);
            v11 = (1 << *(_DWORD *)((v8 >> 16) + 0xC)) & 0xA;
            v12 = &v10[BYTE1(v8)];
            do
            {
              v13 = (char *)*v10;
              if ( v11 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              {
                *(_QWORD *)&v26 = 1LL;
                *((_QWORD *)&v26 + 1) = *v10;
                __asm { invpcid r12d, [rsp+0B8h+var_50] }
              }
              __invlpg(v13);
              v14 = (unsigned __int16)v13 & 0x7FF;
              v15 = 0x200000LL;
              if ( ((unsigned __int16)v13 & 0x800) == 0 )
                v15 = 4096LL;
              if ( ((unsigned __int16)v13 & 0x7FF) != 0 )
              {
                do
                {
                  v13 += v15;
                  if ( v11 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                  {
                    *(_QWORD *)&v24 = 1LL;
                    *((_QWORD *)&v24 + 1) = v13;
                    __asm { invpcid r12d, [rsp+0B8h+var_70] }
                  }
                  __invlpg(v13);
                  --v14;
                }
                while ( v14 );
              }
              ++v10;
            }
            while ( v10 < v12 );
            CurrentPrcb = v21;
            break;
          case 5LL:
            (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v7 + 5))(
              v9,
              *((_QWORD *)v7 + 2),
              *((_QWORD *)v7 + 3),
              *((_QWORD *)v7 + 4));
            break;
          case 6LL:
            __wbinvd();
            break;
          case 7LL:
            break;
        }
        if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v7 + 6), 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 11524), 0xFFFFFFFF) == 1 )
        {
          *(_DWORD *)(v9 + 11520) = 0;
        }
        v0 = 1;
        if ( !v4 )
        {
          v4 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
          if ( !v4 )
            break;
        }
      }
    }
  }
  if ( v1 )
    PerfInfoLogIpi(v27);
  return v0;
}
