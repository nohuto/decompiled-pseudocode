/*
 * XREFs of ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01EB030
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01E7B6C (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01E7FB4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01E84D4 (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB3C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01F33DC (xxxGeneratePointerInputMessages.c)
 */

void __fastcall xxxDoTPGestureProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        void *a4,
        int a5,
        unsigned int a6,
        int *a7)
{
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD *v12; // r8
  _DWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r9d
  unsigned __int16 *v16; // rcx
  __int64 v17; // r10
  int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // r10d
  _WORD *v21; // r9
  unsigned int i; // r8d
  __int64 v23; // r9
  char *v24; // rax
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  char v39; // [rsp+40h] [rbp-118h] BYREF
  int v40; // [rsp+148h] [rbp-10h]

  if ( *((_DWORD *)a2 + 416) == 3 )
    goto LABEL_34;
  if ( *((_QWORD *)a2 + 239) )
  {
    *((_DWORD *)a2 + 416) = 3;
    zzzCancelInertiaState(a2, 1);
    if ( IsFirstActionAfterKey() )
      dword_1C0326D08 = 9;
    else
      dword_1C0326D0C = 9;
    ++gTPTelemState;
    ++dword_1C0326D74;
    EtwTraceTouchpadGestureDetected();
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = (_DWORD *)((char *)a2 + 264);
    *((LARGE_INTEGER *)a2 + 233) = PerformanceCounter;
    v13 = (_DWORD *)((char *)a2 + 264);
    v14 = 6LL;
    do
    {
      if ( (*v13 & 1) != 0 )
        *v13 |= 0x400u;
      v13 += 68;
      --v14;
    }
    while ( v14 );
    v15 = 0;
    if ( *((_DWORD *)a1 + 10) )
    {
      v16 = (unsigned __int16 *)(*((_QWORD *)a1 + 11) + 48LL);
      do
      {
        if ( *v16 )
        {
          v17 = 272LL * ((unsigned int)*v16 % *((_DWORD *)a2 + 411));
          *(_DWORD *)((char *)a2 + v17 + 264) &= ~0x400u;
          v18 = *(_DWORD *)((char *)a2 + v17 + 264);
          if ( (v18 & 0x40) == 0 && (*((_DWORD *)v16 + 5) & 0x20000) != 0 )
            *(_DWORD *)((char *)a2 + v17 + 264) = v18 | 2;
        }
        v16 += 108;
        ++v15;
      }
      while ( v15 < *((_DWORD *)a1 + 10) );
    }
    v19 = *((_QWORD *)a2 + 239);
    v20 = 0;
    if ( *(_DWORD *)(v19 + 40) )
    {
      v21 = (_WORD *)(*(_QWORD *)(v19 + 88) + 48LL);
      do
      {
        if ( *v21 )
          *((_DWORD *)a2 + 68 * ((unsigned int)(unsigned __int16)*v21 % *((_DWORD *)a2 + 411)) + 66) &= ~0x400u;
        v21 += 108;
        ++v20;
      }
      while ( v20 < *(_DWORD *)(*((_QWORD *)a2 + 239) + 40LL) );
    }
    do
    {
      if ( (*v12 & 0x80u) != 0 )
        *v12 |= 0x400u;
      v12 += 68;
    }
    while ( v12 - 66 != (_DWORD *)((char *)a2 + 1632) );
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)a2 + 239) + 40LL); ++i )
    {
      v23 = *(_QWORD *)(*((_QWORD *)a2 + 239) + 88LL) + 216LL * i;
      v24 = &v39;
      v25 = 2LL;
      v26 = (_OWORD *)((char *)a2 + 272 * ((unsigned int)*(unsigned __int16 *)(v23 + 48) % *((_DWORD *)a2 + 411)));
      do
      {
        v27 = v26[1];
        *(_OWORD *)v24 = *v26;
        v28 = v26[2];
        *((_OWORD *)v24 + 1) = v27;
        v29 = v26[3];
        *((_OWORD *)v24 + 2) = v28;
        v30 = v26[4];
        *((_OWORD *)v24 + 3) = v29;
        v31 = v26[5];
        *((_OWORD *)v24 + 4) = v30;
        v32 = v26[6];
        *((_OWORD *)v24 + 5) = v31;
        v33 = v26[7];
        v26 += 8;
        *((_OWORD *)v24 + 6) = v32;
        v24 += 128;
        *((_OWORD *)v24 - 1) = v33;
        --v25;
      }
      while ( v25 );
      *(_OWORD *)v24 = *v26;
      if ( (v40 & 0x400) != 0 )
        *(_DWORD *)(v23 + 68) = 0;
    }
    v34 = (_QWORD *)qword_1C0329638;
    v35 = (_QWORD *)*((_QWORD *)a2 + 239);
    if ( *(struct _LIST_ENTRY **)qword_1C0329638 != &gFrameTPListHead )
      __fastfail(3u);
    *v35 = &gFrameTPListHead;
    v35[1] = v34;
    *v34 = v35;
    qword_1C0329638 = (__int64)v35;
    *((_QWORD *)a2 + 239) = 0LL;
    xxxGeneratePointerInputMessages(a4);
    if ( RevalidateTPDeviceState((unsigned __int64)a4, v36, v37, v38) )
    {
LABEL_34:
      if ( !a5 )
        GestureContactProcessing(a1, 0LL, a2, a3, 0, 0, a6, a7);
    }
  }
}
