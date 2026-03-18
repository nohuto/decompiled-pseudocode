/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C000CBB0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000CB00 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0022D30 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000CF40 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C000D420 (VidSchiProcessIsrVSync.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C000E5E0 (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E648 (VidSchiProcessIsrPreemptedPacket.c)
 *     LogPageFaultInformation @ 0x1C001F4B4 (LogPageFaultInformation.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0020F50 (VidSchiProcessIsrFaultedPacket.c)
 */

__int64 __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rsi
  int v5; // edx
  unsigned int v6; // r14d
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int128 v23; // xmm0
  int v24; // ebx
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // ecx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // eax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int128 v38; // xmm0
  int v39; // eax
  unsigned int v40; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 408);
  v5 = *a2;
  v6 = a3;
  result = (unsigned int)(v5 - 3);
  if ( (result & 0xFFFFFFFB) == 0 && (result = *(unsigned int *)(v3 + 36), (result & 0x10) != 0) )
  {
    v16 = 0LL;
    if ( *(_DWORD *)(v3 + 56) > 1u && (a2[18] & 1) != 0 )
    {
      v16 = v5 == 7 ? (unsigned int)a2[3] : (unsigned int)a2[6];
      if ( !(_DWORD)v16 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v25[3] = 281LL;
        v25[4] = 6LL;
        v25[5] = v3;
        v25[6] = 0LL;
        v25[7] = 0LL;
        WdLogEvent5_WdCriticalError(v25);
        JUMPOUT(0x1C001A06DLL);
      }
    }
    v17 = MEMORY[0xFFFFF78000000320];
    v18 = VidSchiProcessIsrVSync(*(_QWORD *)(a1 + 408), a2, v16, MEMORY[0xFFFFF78000000320]);
    if ( v18 == -1 || v18 >= *(_DWORD *)(v3 + 40) )
    {
      v26 = *(unsigned int *)(v3 + 4704);
      *(_QWORD *)(v3 + 8 * v26 + 4712) = v17;
      v26 *= 10LL;
      *(_OWORD *)(v3 + 8 * v26 + 4744) = *(_OWORD *)a2;
      *(_OWORD *)(v3 + 8 * v26 + 4760) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v3 + 8 * v26 + 4776) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v3 + 8 * v26 + 4792) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v3 + 8 * v26 + 4808) = *((_OWORD *)a2 + 4);
      result = ((unsigned __int8)*(_DWORD *)(v3 + 4704) + 1) & 3;
      *(_DWORD *)(v3 + 4704) = result;
    }
    else
    {
      _mm_lfence();
      v19 = *(_QWORD *)(v3 + 8LL * v18 + 2592);
      v20 = *(unsigned int *)(v19 + 14772);
      *(_QWORD *)(v19 + 8 * v20 + 14776) = v17;
      v20 *= 10LL;
      *(_OWORD *)(v19 + 8 * v20 + 14808) = *(_OWORD *)a2;
      *(_OWORD *)(v19 + 8 * v20 + 14824) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v19 + 8 * v20 + 14840) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v19 + 8 * v20 + 14856) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v19 + 8 * v20 + 14872) = *((_OWORD *)a2 + 4);
      result = ((unsigned __int8)*(_DWORD *)(v19 + 14772) + 1) & 3;
      *(_DWORD *)(v19 + 14772) = result;
    }
  }
  else
  {
    switch ( v5 )
    {
      case 1:
        result = *(unsigned int *)(v3 + 36);
        if ( (result & 1) == 0 )
          return result;
        result = *(_QWORD *)(v3 + 368);
        if ( _bittest64(&result, a2[3] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[4] + v3 + 60)) )
          return result;
        v9 = *(_QWORD *)(v3 + 8LL * (a2[3] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[4] + v3 + 60)) + 376);
        result = *(unsigned __int8 *)(v9 + 16);
        if ( (result & 1) != 0 )
          return result;
        v10 = (unsigned int)a2[2];
        v11 = *(unsigned int *)(v9 + 64);
        v12 = *(_QWORD *)(v9 + 24);
        if ( (_DWORD)v10 == (_DWORD)v11 )
          goto LABEL_11;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 144), 0, 0);
        if ( v13 < (unsigned int)v11 )
        {
          if ( (unsigned int)v10 <= v13 || (unsigned int)v10 >= (unsigned int)v11 )
          {
LABEL_11:
            if ( (_DWORD)a3 )
            {
              v14 = *(_QWORD *)(v9 + 64);
              *(_OWORD *)(v9 + 2864) = *(_OWORD *)a2;
              *(_OWORD *)(v9 + 2880) = *((_OWORD *)a2 + 1);
              *(_OWORD *)(v9 + 2896) = *((_OWORD *)a2 + 2);
              *(_OWORD *)(v9 + 2912) = *((_OWORD *)a2 + 3);
              v15 = *((_OWORD *)a2 + 4);
              *(_QWORD *)(v9 + 2944) = v14;
              *(_OWORD *)(v9 + 2928) = v15;
            }
            return VidSchiProcessIsrCompletedPacket(v9, (unsigned int)v10, a3, a2);
          }
        }
        else if ( (unsigned int)v10 <= v13 && (unsigned int)v10 >= (unsigned int)v11 )
        {
          goto LABEL_11;
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v27[3] = 281LL;
        v27[4] = 1LL;
        v27[5] = v10;
        v27[6] = v11;
        v27[7] = *(_QWORD *)(v12 + 16);
        WdLogEvent5_WdCriticalError(v27);
        JUMPOUT(0x1C001A113LL);
      case 2:
        result = *(unsigned int *)(v3 + 36);
        if ( (result & 1) != 0 )
        {
          result = *(_QWORD *)(v3 + 368);
          if ( !_bittest64(&result, a2[4] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[5] + v3 + 60)) )
          {
            v21 = *(_QWORD *)(v3
                            + 8LL * (a2[4] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[5] + v3 + 60))
                            + 376);
            result = *(unsigned __int8 *)(v21 + 16);
            if ( (result & 1) == 0 )
            {
              result = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v21, a2[2], 1, 0LL);
              if ( (_DWORD)result )
              {
                result = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v21, a2[3], 0, &v40);
                if ( (_DWORD)result )
                {
                  if ( v6 )
                  {
                    v22 = *(_QWORD *)(v21 + 64);
                    *(_OWORD *)(v21 + 2864) = *(_OWORD *)a2;
                    *(_OWORD *)(v21 + 2880) = *((_OWORD *)a2 + 1);
                    *(_OWORD *)(v21 + 2896) = *((_OWORD *)a2 + 2);
                    *(_OWORD *)(v21 + 2912) = *((_OWORD *)a2 + 3);
                    v23 = *((_OWORD *)a2 + 4);
                    *(_QWORD *)(v21 + 2944) = v22;
                    *(_OWORD *)(v21 + 2928) = v23;
                  }
                  do
                  {
                    v24 = VidSchiProcessIsrCompletedPacket(v21, v40, v6, a2);
                    result = VidSchiProcessIsrPreemptedPacket(v21, (unsigned int)a2[2], v6, a2);
                  }
                  while ( v24 );
                }
              }
            }
          }
        }
        break;
      case 4:
        v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v28[3] = 281LL;
        v28[4] = 13LL;
        v28[5] = (unsigned int)a2[4];
        v28[6] = (unsigned int)a2[5];
        v28[7] = (unsigned int)a2[2];
        WdLogEvent5_WdCriticalError(v28);
        JUMPOUT(0x1C001A148LL);
      case 9:
        result = *(unsigned int *)(v3 + 36);
        if ( (result & 4) != 0 )
        {
          v29 = a2[8];
          if ( (v29 & 0x10) != 0 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
            v30[3] = 281LL;
            v30[4] = 12LL;
            v30[5] = a2[8];
            v30[6] = (unsigned int)a2[2];
            v30[7] = *((_QWORD *)a2 + 5);
            WdLogEvent5_WdCriticalError(v30);
            JUMPOUT(0x1C001A192LL);
          }
          if ( (v29 & 0xC) == 0xC )
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
            v31[3] = 281LL;
            v31[4] = 13LL;
            v31[5] = a2[8];
            v31[6] = *((_QWORD *)a2 + 8);
            v31[7] = *((_QWORD *)a2 + 5);
            WdLogEvent5_WdCriticalError(v31);
            JUMPOUT(0x1C001A1D3LL);
          }
          if ( v29 >= 0x40 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
            v32[3] = 281LL;
            v32[4] = 13LL;
            v32[5] = a2[8];
            v32[6] = *((_QWORD *)a2 + 8);
            v32[7] = *((_QWORD *)a2 + 5);
            WdLogEvent5_WdCriticalError(v32);
            JUMPOUT(0x1C001A210LL);
          }
          v33 = *(_QWORD *)(v3 + 368);
          if ( _bittest64(&v33, a2[12] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[13] + v3 + 60)) )
          {
            return LogPageFaultInformation(1LL, a1, a2);
          }
          else
          {
            v34 = *(_QWORD *)(v3
                            + 8LL * (a2[12] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[13] + v3 + 60))
                            + 376);
            if ( (*(_BYTE *)(v34 + 16) & 1) != 0 )
            {
              return LogPageFaultInformation(2LL, a1, a2);
            }
            else
            {
              v35 = a2[8];
              if ( (v35 & 2) != 0 )
              {
                if ( (v35 & 0xC) == 0 )
                {
                  v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
                  v36[3] = 281LL;
                  v36[4] = 13LL;
                  v36[5] = a2[8];
                  v36[6] = *((_QWORD *)a2 + 8);
                  v36[7] = *((_QWORD *)a2 + 5);
                  WdLogEvent5_WdCriticalError(v36);
                  JUMPOUT(0x1C001A2A9LL);
                }
                if ( (v35 & 4) != 0 )
                {
                  result = LogPageFaultInformation(3LL, a1, a2);
                  *(_DWORD *)(v34 + 1904) = 1;
                }
                else
                {
                  result = LogPageFaultInformation(4LL, a1, a2);
                  *(_DWORD *)(v34 + 1900) = 1;
                }
              }
              else
              {
                result = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v34, a2[2], 0, &v40);
                if ( (_DWORD)result )
                {
                  if ( v6 )
                  {
                    v37 = *(_QWORD *)(v34 + 64);
                    *(_OWORD *)(v34 + 2864) = *(_OWORD *)a2;
                    *(_OWORD *)(v34 + 2880) = *((_OWORD *)a2 + 1);
                    *(_OWORD *)(v34 + 2896) = *((_OWORD *)a2 + 2);
                    *(_OWORD *)(v34 + 2912) = *((_OWORD *)a2 + 3);
                    v38 = *((_OWORD *)a2 + 4);
                    *(_QWORD *)(v34 + 2944) = v37;
                    *(_OWORD *)(v34 + 2928) = v38;
                  }
                  VidSchiProcessIsrCompletedPacket(v34, v40, v6, a2);
                  VidSchiProcessIsrFaultedPacket(v34, v40, v6, a2);
                  v39 = a2[8];
                  if ( (v39 & 4) != 0 )
                  {
                    return LogPageFaultInformation(3LL, a1, a2);
                  }
                  else if ( (v39 & 8) != 0 )
                  {
                    return LogPageFaultInformation(4LL, a1, a2);
                  }
                  else
                  {
                    return LogPageFaultInformation(5LL, a1, a2);
                  }
                }
              }
            }
          }
        }
        break;
    }
  }
  return result;
}
