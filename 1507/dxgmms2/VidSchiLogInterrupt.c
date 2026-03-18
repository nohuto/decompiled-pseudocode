/*
 * XREFs of VidSchiLogInterrupt @ 0x1C0004758
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C0004240 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C001DB40 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiLogInterrupt(__int64 a1, __int64 a2, char a3)
{
  int v5; // edx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  unsigned int v11; // edi
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // edi
  unsigned int *v15; // rbx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  unsigned int *v19; // rbx
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rcx

  v5 = *(_DWORD *)a2 - 1;
  if ( !v5 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v6[3] = a1;
    v6[4] = *(unsigned int *)(a2 + 8);
    v6[5] = *(unsigned int *)(a2 + 12);
    v6[6] = *(unsigned int *)(a2 + 16);
LABEL_3:
    v7 = v6;
LABEL_4:
    WdLogEvent5_WdEvent(v7);
    return;
  }
  v8 = v5 - 1;
  if ( !v8 )
  {
    if ( a3 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v15 = (unsigned int *)(a2 + 8);
      v16 = 4LL;
      v6[3] = a1;
      v17 = v6 + 4;
      do
      {
        v18 = *v15++;
        *v17++ = v18;
        --v16;
      }
      while ( v16 );
    }
    else
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v19 = (unsigned int *)(a2 + 8);
      v20 = 4LL;
      v6[3] = a1;
      v21 = v6 + 4;
      do
      {
        v22 = *v19++;
        *v21++ = v22;
        --v20;
      }
      while ( v20 );
    }
    goto LABEL_3;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( (*(_DWORD *)(a1 + 2144) & 0x4000) == 0 )
      return;
    v14 = 0;
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v13[3] = a1;
    v13[4] = *(unsigned int *)(a2 + 8);
    v13[5] = *(_QWORD *)(a2 + 16);
    if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
      v14 = *(_DWORD *)(a2 + 24);
    v13[6] = v14;
LABEL_16:
    v7 = v13;
    goto LABEL_4;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    if ( (*(_DWORD *)(a1 + 2144) & 0x4000) == 0 )
      return;
    v11 = 0;
    v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v13 = v12;
    v12[3] = a1;
    v12[4] = *(unsigned int *)(a2 + 8);
    if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
      v11 = *(_DWORD *)(a2 + 12);
    v12[5] = v11;
    v12[6] = *(unsigned int *)(a2 + 16);
    v12[7] = *(_QWORD *)(a2 + 24);
    goto LABEL_16;
  }
  if ( v10 == 2 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v6[3] = a1;
    v6[4] = *(unsigned int *)(a2 + 8);
    v6[5] = *(_QWORD *)(a2 + 40);
    v6[6] = *(unsigned int *)(a2 + 48);
    v6[7] = *(unsigned int *)(a2 + 52);
    goto LABEL_3;
  }
}
