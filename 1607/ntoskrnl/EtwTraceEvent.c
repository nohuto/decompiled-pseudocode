/*
 * XREFs of EtwTraceEvent @ 0x1402250B8
 * Callers:
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x14012FEA0 (IoWMIWriteEvent.c)
 * Callees:
 *     EtwpCloseLogger @ 0x1400737B0 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x1400737E8 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140074B60 (EtwpReleaseTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400A88E8 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     EtwpSendTraceEvent @ 0x140227C60 (EtwpSendTraceEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // r12
  unsigned int v7; // r10d
  unsigned int ReserveTraceBufferStatus; // ebx
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int *v11; // r13
  int v12; // eax
  __int64 v13; // rdi
  int v14; // ebx
  unsigned int v15; // edi
  char *v16; // rdx
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rbx
  int i; // edx
  unsigned int v21; // ecx
  char *v22; // rax
  char *v23; // rsi
  size_t v24; // r8
  char *v25; // r12
  int j; // edi
  char *v27; // rdx
  size_t v28; // rcx
  size_t v29; // rbx
  unsigned __int64 v30; // rcx
  _OWORD *v31; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char v34[4]; // [rsp+30h] [rbp-1B8h] BYREF
  int v35; // [rsp+34h] [rbp-1B4h]
  size_t v36; // [rsp+38h] [rbp-1B0h]
  __int64 v37; // [rsp+40h] [rbp-1A8h]
  int v38; // [rsp+48h] [rbp-1A0h]
  int v39; // [rsp+4Ch] [rbp-19Ch]
  int v40; // [rsp+50h] [rbp-198h]
  int v41; // [rsp+54h] [rbp-194h]
  int v42; // [rsp+58h] [rbp-190h]
  unsigned int v43; // [rsp+5Ch] [rbp-18Ch]
  __int64 v44; // [rsp+60h] [rbp-188h]
  char *v45; // [rsp+68h] [rbp-180h]
  __int64 v46; // [rsp+70h] [rbp-178h]
  char *v47; // [rsp+78h] [rbp-170h]
  __int64 v48; // [rsp+80h] [rbp-168h] BYREF
  signed __int64 v49[3]; // [rsp+88h] [rbp-160h] BYREF
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  v5 = a3;
  v38 = 0;
  v35 = 0;
  v7 = a1;
  v43 = a1;
  if ( a1 < 0x40u )
  {
    v9 = a5 ? *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106) : EtwpHostSiloState;
    v44 = v9;
    v37 = v9;
    v10 = EtwpOpenLogger(v7, v9, a5, v34);
    v11 = (unsigned int *)v10;
    v46 = v10;
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 12);
      if ( (v12 & 0x80u) == 0 )
      {
        if ( a5 || (v12 & 0x1000000) == 0 )
        {
          if ( a5 )
          {
            if ( ((unsigned __int8)a2 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)a2 + v5 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)a2 + v5) < a2 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          LODWORD(v36) = *a2;
          if ( (unsigned int)v36 < (unsigned int)v5 )
          {
            ReserveTraceBufferStatus = -1073741811;
            v35 = -1073741811;
            v13 = v37;
            goto LABEL_70;
          }
          v40 = *((_DWORD *)a2 + 11);
          v14 = v40;
          v39 = v40;
          v15 = v36;
          if ( (v40 & 0x100000) != 0 )
          {
            v16 = (char *)a2 + v5;
            v17 = v36 - v5;
            if ( (unsigned int)(v36 - v5) > 0x100 )
            {
              ReserveTraceBufferStatus = -1073741684;
              v35 = -1073741684;
              v13 = v37;
              goto LABEL_70;
            }
            if ( v17 )
            {
              if ( a5 )
              {
                if ( ((unsigned __int8)v16 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v18 = (unsigned __int64)&v16[v17];
                if ( v18 > 0x7FFFFFFF0000LL || v18 < (unsigned __int64)v16 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              v19 = v17;
              memmove(Src, v16, v17);
              v15 = v5;
              LODWORD(v36) = v5;
              v38 = v19 >> 4;
              for ( i = 0; ; ++i )
              {
                v41 = i;
                if ( i >= v38 )
                  break;
                v21 = (unsigned int)Src[2 * i + 1];
                v15 += v21;
                LODWORD(v36) = v15;
                if ( v15 < v21 )
                {
                  ReserveTraceBufferStatus = -2147483643;
                  v35 = -2147483643;
                  v13 = v37;
                  goto LABEL_70;
                }
              }
              v14 = v39;
            }
          }
          v22 = (char *)EtwpReserveTraceBuffer(v11, v15, (__int64)v49, &v48, 0);
          v23 = v22;
          v47 = v22;
          if ( v22 )
          {
            if ( (v14 & 0x100000) != 0 )
            {
              v24 = v5;
              v25 = &v22[v5];
              v45 = v25;
              memmove(v22, a2, v24);
              for ( j = 0; ; ++j )
              {
                v42 = j;
                if ( j >= v38 )
                  break;
                v27 = (char *)Src[2 * j];
                v28 = LODWORD(Src[2 * j + 1]);
                if ( v27 && (_DWORD)v28 )
                {
                  if ( a5 && ((unsigned __int64)&v27[v28] > 0x7FFFFFFF0000LL || &v27[v28] < v27) )
                    MEMORY[0x7FFFFFFF0000] = 0;
                  v29 = v28;
                  memmove(v25, v27, v28);
                  v25 += v29;
                  v45 = v25;
                }
              }
              v14 = v39;
            }
            else
            {
              if ( a5 && v15 )
              {
                if ( ((unsigned __int8)a2 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v30 = (unsigned __int64)a2 + v15;
                if ( v30 > 0x7FFFFFFF0000LL || v30 < (unsigned __int64)a2 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(v22, a2, v15);
            }
            if ( (v14 & 0x80000) != 0 )
            {
              v31 = (_OWORD *)*((_QWORD *)a2 + 3);
              if ( a5 && ((unsigned __int8)v31 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(_OWORD *)(v23 + 24) = *v31;
            }
            v13 = v37;
            CurrentThread = KeGetCurrentThread();
            *(_DWORD *)v23 = a4 | v36;
            *((_QWORD *)v23 + 2) = v48;
            *((_DWORD *)v23 + 10) = CurrentThread->SchedulerApc.SpareLong0;
            *((_DWORD *)v23 + 11) = CurrentThread->UserTime;
            *((_DWORD *)v23 + 2) = CurrentThread[1].KernelStack;
            *((_DWORD *)v23 + 3) = CurrentThread[1].CurrentRunTime;
            if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) && (v11[3] & 0x80000) != 0 )
              EtwpSendTraceEvent(v11, v49);
            EtwpReleaseTraceBuffer(v49);
            ReserveTraceBufferStatus = v35;
            goto LABEL_70;
          }
          ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus((__int64)v11, v15);
        }
        else
        {
          ReserveTraceBufferStatus = -1073741637;
        }
      }
      else
      {
        ReserveTraceBufferStatus = -1073741790;
      }
      v13 = v37;
LABEL_70:
      EtwpCloseLogger(v43, v13, v34[0]);
      return ReserveTraceBufferStatus;
    }
  }
  return (unsigned int)-1073741816;
}
