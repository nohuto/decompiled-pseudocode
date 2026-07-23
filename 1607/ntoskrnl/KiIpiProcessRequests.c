/*
 * XREFs of KiIpiProcessRequests @ 0x140088FA0
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x1401661A0 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140014200 (PsGetCurrentProcess.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14015EE60 (KiSetUserTbFlushPending.c)
 *     PerfInfoLogIpi @ 0x1402275BC (PerfInfoLogIpi.c)
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
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int128 v20; // [rsp+20h] [rbp-98h]
  __int128 v21; // [rsp+30h] [rbp-88h]
  __int128 v22; // [rsp+40h] [rbp-78h]
  __int128 v23; // [rsp+50h] [rbp-68h]
  __int128 v24; // [rsp+60h] [rbp-58h]
  char v25[16]; // [rsp+70h] [rbp-48h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v1 = 1;
    EtwGetKernelTraceTimestamp(v25, 0x40400000uLL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
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
              goto LABEL_23;
            v22 = 2uLL;
            __asm { invpcid r13d, [rsp+0B8h+var_78] }
            break;
          case 2LL:
            v17 = v8 >> 16;
            if ( ((1 << *(_DWORD *)(v17 + 8)) & 0xA) != 0
              && KiFlushPcid
              && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              *(_QWORD *)&v23 = 1LL;
              *((_QWORD *)&v23 + 1) = *(_QWORD *)v17;
              __asm { invpcid r12d, [rsp+0B8h+var_68] }
            }
            __invlpg(*(void **)v17);
            break;
          case 3LL:
            if ( KiFlushPcid )
            {
              v24 = 2uLL;
              __asm { invpcid r13d, [rsp+0B8h+var_58] }
              if ( !PsGetCurrentProcess()->AddressPolicy )
                KiSetUserTbFlushPending();
            }
            else
            {
              v18 = __readcr4();
              if ( (v18 & 0x20080) != 0 )
              {
                __writecr4(v18 ^ 0x80);
                __writecr4(v18);
              }
              else
              {
LABEL_23:
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
              v13 = (unsigned __int64)*v10;
              if ( v11 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              {
                *(_QWORD *)&v20 = 1LL;
                *((_QWORD *)&v20 + 1) = *v10;
                __asm { invpcid r12d, [rsp+0B8h+var_98] }
              }
              __invlpg((void *)v13);
              v14 = v13 & 0x3FF;
              v15 = 4096LL << (9 * ((unsigned __int8)(v13 >> 10) & 3u));
              if ( (v13 & 0x3FF) != 0 )
              {
                do
                {
                  v13 += v15;
                  if ( v11 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                  {
                    *(_QWORD *)&v21 = 1LL;
                    *((_QWORD *)&v21 + 1) = v13;
                    __asm { invpcid r12d, [rsp+0B8h+var_88] }
                  }
                  __invlpg((void *)v13);
                  --v14;
                }
                while ( v14 );
              }
              ++v10;
            }
            while ( v10 < v12 );
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
    PerfInfoLogIpi(v25);
  return v0;
}
