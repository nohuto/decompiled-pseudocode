/*
 * XREFs of VidSchiLogInterrupt @ 0x1C000CE90
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000CB00 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0022D30 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiLogInterrupt(__int64 a1, unsigned int *a2, char a3)
{
  __int64 result; // rax
  int v6; // eax
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int *v16; // rbx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ecx

  result = *a2;
  if ( (_DWORD)result == 3 )
  {
    if ( (*(_DWORD *)(a1 + 2096) & 0x4000) == 0 )
      return result;
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
    v13[3] = a1;
    v13[4] = a2[2];
    v13[5] = *((_QWORD *)a2 + 2);
    if ( (a2[18] & 1) != 0 )
      v20 = a2[6];
    else
      v20 = 0;
    v13[6] = v20;
    goto LABEL_25;
  }
  v6 = result - 1;
  if ( !v6 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
    v7[3] = a1;
    v7[4] = a2[2];
    v7[5] = a2[3];
    v7[6] = a2[4];
    v8 = v7;
    return WdLogEvent5_WdEvent(v8);
  }
  v9 = v6 - 1;
  if ( !v9 )
  {
    if ( a3 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
      v10[3] = a1;
      v10[4] = a2[2];
      v10[5] = a2[3];
      v10[6] = a2[4];
      v10[7] = a2[5];
      return WdLogEvent5_WdEvent(v10);
    }
    v15 = WdLogNewEntry5_WdEvent(a1, a2);
    v16 = a2 + 2;
    v17 = 4LL;
    *(_QWORD *)(v15 + 24) = a1;
    v18 = (_QWORD *)(v15 + 32);
    do
    {
      v19 = *v16++;
      *v18++ = v19;
      --v17;
    }
    while ( v17 );
    v8 = (_QWORD *)v15;
    return WdLogEvent5_WdEvent(v8);
  }
  result = (unsigned int)(v9 - 5);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 2 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
      v11[3] = a1;
      v11[4] = a2[2];
      v11[5] = *((_QWORD *)a2 + 5);
      v11[6] = a2[12];
      v11[7] = a2[13];
      v8 = v11;
      return WdLogEvent5_WdEvent(v8);
    }
  }
  else if ( (*(_DWORD *)(a1 + 2096) & 0x4000) != 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
    v13 = v12;
    v12[3] = a1;
    v12[4] = a2[2];
    if ( (a2[18] & 1) != 0 )
      v14 = a2[3];
    else
      v14 = 0;
    v12[5] = v14;
    v12[6] = a2[4];
    v12[7] = *((_QWORD *)a2 + 3);
LABEL_25:
    v8 = v13;
    return WdLogEvent5_WdEvent(v8);
  }
  return result;
}
