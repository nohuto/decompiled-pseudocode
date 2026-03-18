/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C00042DC
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C0004240 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C001DB40 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C00043E0 (VidSchiProcessIsrCompletedPacket.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C00046F8 (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     LogPageFaultInformation @ 0x1C0013A7C (LogPageFaultInformation.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C00189B0 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C0018BE0 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C0018DD0 (VidSchiProcessIsrVSync.c)
 */

char __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v5; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int128 v23; // xmm0
  int v24; // ebx
  _QWORD *v25; // rax
  unsigned int v26; // ecx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  int v34; // eax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int128 v37; // xmm0
  int v38; // eax
  unsigned int v40; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 384);
  v5 = *a2;
  LODWORD(v8) = *a2 - 3;
  if ( (v8 & 0xFFFFFFFB) == 0 )
  {
    LODWORD(v8) = *(_DWORD *)(v3 + 36);
    if ( (v8 & 0x10) != 0 )
    {
      v13 = 0LL;
      if ( *(_DWORD *)(v3 + 56) > 1u && (a2[18] & 1) != 0 )
      {
        v13 = v5 == 7 ? (unsigned int)a2[3] : (unsigned int)a2[6];
        if ( !(_DWORD)v13 )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v14[3] = 281LL;
          v14[4] = 6LL;
          v14[5] = v3;
          v14[6] = 0LL;
          v14[7] = 0LL;
          WdLogEvent5_WdCriticalError(v14);
          JUMPOUT(0x1C000B87ELL);
        }
      }
      v15 = MEMORY[0xFFFFF78000000320];
      v16 = VidSchiProcessIsrVSync(v3, a2, v13, MEMORY[0xFFFFF78000000320]);
      if ( v16 == -1 || v16 >= *(_DWORD *)(v3 + 40) )
      {
        v19 = *(unsigned int *)(v3 + 4752);
        *(_QWORD *)(v3 + 8 * v19 + 4760) = v15;
        v8 = 10 * v19;
        *(_OWORD *)(v3 + 8 * v8 + 4792) = *(_OWORD *)a2;
        *(_OWORD *)(v3 + 8 * v8 + 4808) = *((_OWORD *)a2 + 1);
        *(_OWORD *)(v3 + 8 * v8 + 4824) = *((_OWORD *)a2 + 2);
        *(_OWORD *)(v3 + 8 * v8 + 4840) = *((_OWORD *)a2 + 3);
        *(_OWORD *)(v3 + 8 * v8 + 4856) = *((_OWORD *)a2 + 4);
        LODWORD(v8) = ((unsigned __int8)*(_DWORD *)(v3 + 4752) + 1) & 3;
        *(_DWORD *)(v3 + 4752) = v8;
      }
      else
      {
        _mm_lfence();
        v17 = *(_QWORD *)(v3 + 8LL * v16 + 2640);
        v18 = *(unsigned int *)(v17 + 14740);
        *(_QWORD *)(v17 + 8 * v18 + 14744) = v15;
        v8 = 10 * v18;
        *(_OWORD *)(v17 + 8 * v8 + 14776) = *(_OWORD *)a2;
        *(_OWORD *)(v17 + 8 * v8 + 14792) = *((_OWORD *)a2 + 1);
        *(_OWORD *)(v17 + 8 * v8 + 14808) = *((_OWORD *)a2 + 2);
        *(_OWORD *)(v17 + 8 * v8 + 14824) = *((_OWORD *)a2 + 3);
        *(_OWORD *)(v17 + 8 * v8 + 14840) = *((_OWORD *)a2 + 4);
        LODWORD(v8) = ((unsigned __int8)*(_DWORD *)(v17 + 14740) + 1) & 3;
        *(_DWORD *)(v17 + 14740) = v8;
      }
      return v8;
    }
  }
  switch ( v5 )
  {
    case 1:
      LODWORD(v8) = *(_DWORD *)(v3 + 36);
      if ( (v8 & 1) != 0 )
      {
        v9 = a2[3] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[4] + v3 + 60);
        v8 = *(_QWORD *)(v3 + 360);
        if ( !_bittest64(&v8, (unsigned int)v9) )
        {
          v10 = *(_QWORD *)(v3 + 8 * v9 + 368);
          LOBYTE(v8) = *(_BYTE *)(v10 + 16);
          if ( (v8 & 1) == 0 )
          {
            LODWORD(v8) = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v10, a2[2], 0, &v40);
            if ( (_DWORD)v8 )
            {
              if ( a3 )
              {
                v11 = *(_QWORD *)(v10 + 64);
                *(_OWORD *)(v10 + 2992) = *(_OWORD *)a2;
                *(_OWORD *)(v10 + 3008) = *((_OWORD *)a2 + 1);
                *(_OWORD *)(v10 + 3024) = *((_OWORD *)a2 + 2);
                *(_OWORD *)(v10 + 3040) = *((_OWORD *)a2 + 3);
                v12 = *((_OWORD *)a2 + 4);
                *(_QWORD *)(v10 + 3072) = v11;
                *(_OWORD *)(v10 + 3056) = v12;
              }
              LOBYTE(v8) = VidSchiProcessIsrCompletedPacket(v10, v40, a3, a2);
            }
          }
        }
      }
      return v8;
    case 2:
      LODWORD(v8) = *(_DWORD *)(v3 + 36);
      if ( (v8 & 1) != 0 )
      {
        v20 = a2[4] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[5] + v3 + 60);
        v8 = *(_QWORD *)(v3 + 360);
        if ( !_bittest64(&v8, (unsigned int)v20) )
        {
          v21 = *(_QWORD *)(v3 + 8 * v20 + 368);
          LOBYTE(v8) = *(_BYTE *)(v21 + 16);
          if ( (v8 & 1) == 0 )
          {
            LODWORD(v8) = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v21, a2[2], 1, 0LL);
            if ( (_DWORD)v8 )
            {
              LODWORD(v8) = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v21, a2[3], 0, &v40);
              if ( (_DWORD)v8 )
              {
                if ( a3 )
                {
                  v22 = *(_QWORD *)(v21 + 64);
                  *(_OWORD *)(v21 + 2992) = *(_OWORD *)a2;
                  *(_OWORD *)(v21 + 3008) = *((_OWORD *)a2 + 1);
                  *(_OWORD *)(v21 + 3024) = *((_OWORD *)a2 + 2);
                  *(_OWORD *)(v21 + 3040) = *((_OWORD *)a2 + 3);
                  v23 = *((_OWORD *)a2 + 4);
                  *(_QWORD *)(v21 + 3072) = v22;
                  *(_OWORD *)(v21 + 3056) = v23;
                }
                do
                {
                  v24 = VidSchiProcessIsrCompletedPacket(v21, v40, a3, a2);
                  LOBYTE(v8) = VidSchiProcessIsrPreemptedPacket(v21, (unsigned int)a2[2], a3, a2);
                }
                while ( v24 );
              }
            }
          }
        }
      }
      return v8;
    case 4:
      v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v25[3] = 281LL;
      v25[4] = 13LL;
      v25[5] = (unsigned int)a2[4];
      v25[6] = (unsigned int)a2[5];
      v25[7] = (unsigned int)a2[2];
      WdLogEvent5_WdCriticalError(v25);
      JUMPOUT(0x1C000BAA2LL);
    case 9:
      LODWORD(v8) = *(_DWORD *)(v3 + 36);
      if ( (v8 & 4) != 0 )
      {
        v26 = a2[8];
        if ( (v26 & 0x10) != 0 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v27[3] = 281LL;
          v27[4] = 12LL;
          v27[5] = a2[8];
          v27[6] = (unsigned int)a2[2];
          v27[7] = *((_QWORD *)a2 + 5);
          WdLogEvent5_WdCriticalError(v27);
          JUMPOUT(0x1C000BAF5LL);
        }
        if ( (v26 & 0xC) == 0xC )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v28[3] = 281LL;
          v28[4] = 13LL;
          v28[5] = a2[8];
          v28[6] = *((_QWORD *)a2 + 8);
          v28[7] = *((_QWORD *)a2 + 5);
          WdLogEvent5_WdCriticalError(v28);
          JUMPOUT(0x1C000BB36LL);
        }
        if ( v26 >= 0x40 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v29[3] = 281LL;
          v29[4] = 13LL;
          v29[5] = a2[8];
          v29[6] = *((_QWORD *)a2 + 8);
          v29[7] = *((_QWORD *)a2 + 5);
          WdLogEvent5_WdCriticalError(v29);
          JUMPOUT(0x1C000BB73LL);
        }
        v30 = a2[12] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[13] + v3 + 60);
        v31 = *(_QWORD *)(v3 + 360);
        if ( _bittest64(&v31, (unsigned int)v30) )
        {
          v32 = 1LL;
LABEL_60:
          LOBYTE(v8) = LogPageFaultInformation(v32, a1, a2);
          return v8;
        }
        v33 = *(_QWORD *)(v3 + 8 * v30 + 368);
        if ( (*(_BYTE *)(v33 + 16) & 1) != 0 )
        {
          v32 = 2LL;
          goto LABEL_60;
        }
        v34 = a2[8];
        if ( (v34 & 2) == 0 )
        {
          LODWORD(v8) = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v33, a2[2], 0, &v40);
          if ( !(_DWORD)v8 )
            return v8;
          if ( a3 )
          {
            v36 = *(_QWORD *)(v33 + 64);
            *(_OWORD *)(v33 + 2992) = *(_OWORD *)a2;
            *(_OWORD *)(v33 + 3008) = *((_OWORD *)a2 + 1);
            *(_OWORD *)(v33 + 3024) = *((_OWORD *)a2 + 2);
            *(_OWORD *)(v33 + 3040) = *((_OWORD *)a2 + 3);
            v37 = *((_OWORD *)a2 + 4);
            *(_QWORD *)(v33 + 3072) = v36;
            *(_OWORD *)(v33 + 3056) = v37;
          }
          VidSchiProcessIsrCompletedPacket(v33, v40, a3, a2);
          VidSchiProcessIsrFaultedPacket(v33, v40, a3, a2);
          v38 = a2[8];
          if ( (v38 & 4) != 0 )
          {
            v32 = 3LL;
          }
          else
          {
            v32 = 4LL;
            if ( (v38 & 8) == 0 )
              v32 = 5LL;
          }
          goto LABEL_60;
        }
        if ( (v34 & 0xC) == 0 )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v35[3] = 281LL;
          v35[4] = 13LL;
          v35[5] = a2[8];
          v35[6] = *((_QWORD *)a2 + 8);
          v35[7] = *((_QWORD *)a2 + 5);
          WdLogEvent5_WdCriticalError(v35);
          JUMPOUT(0x1C000BBF1LL);
        }
        if ( (v34 & 4) != 0 )
        {
          LOBYTE(v8) = LogPageFaultInformation(3LL, a1, a2);
          *(_DWORD *)(v33 + 2032) = 1;
        }
        else
        {
          LOBYTE(v8) = LogPageFaultInformation(4LL, a1, a2);
          *(_DWORD *)(v33 + 2028) = 1;
        }
      }
      break;
  }
  return v8;
}
