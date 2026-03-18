/*
 * XREFs of VidSchiLogInterrupt @ 0x1C000BB40
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000B7E0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C00272A0 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 */

void __fastcall VidSchiLogInterrupt(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  char v5; // r15
  __int64 v6; // rdx
  __int64 v8; // rdi
  __int64 v9; // rbp
  _OWORD *v10; // rsi
  char v11; // dl
  __int64 v12; // rax
  char v13; // al
  int v14; // edx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // r8d
  __int64 v18; // rdi
  __int64 v19; // rsi
  _OWORD *v20; // rbp
  __int64 v21; // rax
  _QWORD *v22; // rdx
  unsigned int v23; // r8d

  v5 = a3;
  v6 = *a2;
  if ( (_DWORD)v6 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 2136) & 0x1000) != 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v6, a3, a4);
      v22[3] = a1;
      v22[4] = a2[2];
      v22[5] = *((_QWORD *)a2 + 2);
      if ( (a2[18] & 1) != 0 )
        v23 = a2[6];
      else
        v23 = 0;
      v22[6] = v23;
      WdLogEvent5_WdEvent(v22);
    }
    return;
  }
  if ( (_DWORD)v6 == 1 )
  {
    v8 = a2[3] + *(unsigned __int8 *)(a2[4] + a1 + 64);
LABEL_6:
    v9 = *(_QWORD *)(a1 + 8 * v8 + 408);
    v10 = (_OWORD *)(*(_QWORD *)(v9 + 200) + 88LL * *(unsigned int *)(v9 + 212));
    memset(v10, 0, 0x58uLL);
    *((_BYTE *)v10 + 83) = 1;
    v11 = 1;
    *(_DWORD *)(v9 + 212) = (*(_DWORD *)(v9 + 212) + 1) & (*(_DWORD *)(v9 + 208) - 1);
    *((_BYTE *)v10 + 80) = v5;
    v12 = *(_QWORD *)(a1 + 400);
    if ( _bittest64(&v12, (unsigned int)v8) )
      v13 = 0;
    else
      v13 = 1;
    *((_BYTE *)v10 + 82) = v13;
    if ( *(_DWORD *)(v9 + 16) != 1 )
      v11 = 0;
    *((_BYTE *)v10 + 81) = v11;
    *v10 = *(_OWORD *)a2;
    v10[1] = *((_OWORD *)a2 + 1);
    v10[2] = *((_OWORD *)a2 + 2);
    v10[3] = *((_OWORD *)a2 + 3);
    v10[4] = *((_OWORD *)a2 + 4);
    return;
  }
  v14 = v6 - 2;
  if ( !v14 )
  {
    v8 = a2[4] + *(unsigned __int8 *)(a2[5] + a1 + 64);
    goto LABEL_6;
  }
  v15 = (unsigned int)(v14 - 5);
  if ( !(_DWORD)v15 )
  {
    if ( (*(_DWORD *)(a1 + 2136) & 0x1000) == 0 )
      return;
    goto LABEL_19;
  }
  v15 = (unsigned int)(v15 - 2);
  if ( !(_DWORD)v15 )
  {
    v18 = a2[12] + *(unsigned __int8 *)(a2[13] + a1 + 64);
    v19 = *(_QWORD *)(a1 + 8 * v18 + 408);
    v20 = (_OWORD *)(*(_QWORD *)(v19 + 200) + 88LL * *(unsigned int *)(v19 + 212));
    memset(v20, 0, 0x58uLL);
    *((_BYTE *)v20 + 83) = 1;
    *(_DWORD *)(v19 + 212) = (*(_DWORD *)(v19 + 212) + 1) & (*(_DWORD *)(v19 + 208) - 1);
    *((_BYTE *)v20 + 80) = v5;
    v21 = *(_QWORD *)(a1 + 400);
    *((_BYTE *)v20 + 82) = !_bittest64(&v21, (unsigned int)v18);
    *((_BYTE *)v20 + 81) = *(_DWORD *)(v19 + 16) == 1;
    *v20 = *(_OWORD *)a2;
    v20[1] = *((_OWORD *)a2 + 1);
    v20[2] = *((_OWORD *)a2 + 2);
    v20[3] = *((_OWORD *)a2 + 3);
    v20[4] = *((_OWORD *)a2 + 4);
    return;
  }
  if ( (_DWORD)v15 == 1 && (*(_DWORD *)(a1 + 2136) & 0x1000) != 0 )
  {
LABEL_19:
    v16 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v15, a3, a4);
    v16[3] = a1;
    v16[4] = a2[2];
    if ( (a2[18] & 1) != 0 )
      v17 = a2[3];
    else
      v17 = 0;
    v16[5] = v17;
    v16[6] = a2[4];
    v16[7] = *((_QWORD *)a2 + 3);
    WdLogEvent5_WdEvent(v16);
  }
}
