/*
 * XREFs of DrvUpdateDpiInfoAndNotifyMonitorChange @ 0x1C00BC93C
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0034460 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memcmp @ 0x1C00859F0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvUpdateDpiInfoAndNotifyMonitorChange(__int64 a1, unsigned int *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v5; // r13
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // rbx
  struct _LUID *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  int updated; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  _QWORD *v30; // rax
  unsigned int CurrentProcessSessionId; // [rsp+40h] [rbp-59h] BYREF
  __int64 v33; // [rsp+48h] [rbp-51h] BYREF
  _OWORD Buf1[6]; // [rsp+50h] [rbp-49h] BYREF

  *a4 = 0;
  v5 = a3;
  v7 = a1;
  if ( a1 )
  {
    v8 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        v9 = *(_QWORD *)(32 * (v8 + 1LL) + v7);
        v33 = v9;
        v10 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v33);
        a1 = *a2;
        if ( v10->LowPart == (_DWORD)a1 )
        {
          a1 = a2[1];
          if ( v10->HighPart == (_DWORD)a1 )
          {
            v11 = *(_QWORD *)(v9 + 2600);
            v12 = *(_OWORD *)(v9 + 2496);
            v13 = *(_QWORD *)(v11 + 256);
            v14 = *(unsigned int *)(v11 + 272);
            Buf1[0] = *(_OWORD *)(v9 + 2480);
            v15 = *(_OWORD *)(v9 + 2512);
            Buf1[1] = v12;
            v16 = *(_OWORD *)(v9 + 2528);
            Buf1[2] = v15;
            v17 = *(_OWORD *)(v9 + 2544);
            Buf1[3] = v16;
            v18 = *(_OWORD *)(v9 + 2560);
            Buf1[4] = v17;
            Buf1[5] = v18;
            v19 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))qword_1C0101598)(
                    v13,
                    v14,
                    (unsigned int)v5,
                    v9 + 2160,
                    v9 + 2480);
            LODWORD(v33) = v19;
            if ( v19 != -1071774937 )
            {
              if ( v19 >= 0 )
              {
                if ( memcmp(Buf1, (const void *)(v9 + 2480), 0x60uLL) )
                  *a4 = 1;
              }
              else
              {
                v23 = (_QWORD *)WdLogNewEntry5_WdError(a1, v20, v21, v22);
                v23[3] = (int)v33;
                v23[4] = *(_QWORD *)(*(_QWORD *)(v9 + 2600) + 256LL);
                v23[5] = *(unsigned int *)(*(_QWORD *)(v9 + 2600) + 272LL);
                v23[6] = v5;
                WdLogEvent5_WdError(v23);
              }
            }
          }
        }
        ++v8;
      }
      while ( v8 < *(_DWORD *)(v7 + 20) );
    }
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  v29 = updated;
  if ( updated < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27, v28);
    v30[3] = v29;
    v30[4] = CurrentProcessSessionId;
    v30[5] = a2;
    v30[6] = a2;
    v30[7] = v5;
    WdLogEvent5_WdError(v30);
  }
  return (unsigned int)v29;
}
