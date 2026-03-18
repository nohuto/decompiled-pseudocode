/*
 * XREFs of ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01F4690
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F0F68 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01F16F8 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1AF4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01F22BC (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
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
  _DWORD *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned __int16 *v14; // rcx
  __int64 v15; // r9
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // r9d
  _WORD *v19; // r8
  __int64 v20; // rcx
  struct _LIST_ENTRY **v21; // rdx
  struct _LIST_ENTRY *v22; // rax

  if ( *((_DWORD *)a2 + 330) == 3 )
    goto LABEL_24;
  *((_DWORD *)a2 + 330) = 3;
  CancelInertiaState(a2, 1);
  if ( IsFirstActionAfterKey() )
    dword_1C0321C20 = 9;
  else
    dword_1C0321C24 = 9;
  ++gTPTelemState;
  ++dword_1C0321C78;
  EtwTraceTouchpadGestureDetected();
  v11 = (_DWORD *)((char *)a2 + 212);
  v12 = 6LL;
  do
  {
    if ( (*v11 & 1) != 0 )
      *v11 |= 0x400u;
    v11 += 54;
    --v12;
  }
  while ( v12 );
  v13 = 0;
  if ( *((_DWORD *)a1 + 6) )
  {
    v14 = (unsigned __int16 *)(*((_QWORD *)a1 + 9) + 48LL);
    do
    {
      if ( *v14 )
      {
        v15 = 216LL * ((unsigned int)*v14 % *((_DWORD *)a2 + 327));
        *(_DWORD *)((char *)a2 + v15 + 212) &= ~0x400u;
        v16 = *(_DWORD *)((char *)a2 + v15 + 212);
        if ( (v16 & 0x40) == 0 && (*((_DWORD *)v14 + 5) & 0x20000) != 0 )
          *(_DWORD *)((char *)a2 + v15 + 212) = v16 | 2;
      }
      v14 += 108;
      ++v13;
    }
    while ( v13 < *((_DWORD *)a1 + 6) );
  }
  v17 = *((_QWORD *)a2 + 192);
  v18 = 0;
  if ( *(_DWORD *)(v17 + 24) )
  {
    v19 = (_WORD *)(*(_QWORD *)(v17 + 72) + 48LL);
    do
    {
      if ( *v19 )
      {
        v20 = 216LL * ((unsigned int)(unsigned __int16)*v19 % *((_DWORD *)a2 + 327));
        *(_DWORD *)((char *)a2 + v20 + 212) &= ~0x400u;
      }
      v19 += 108;
      ++v18;
    }
    while ( v18 < *(_DWORD *)(*((_QWORD *)a2 + 192) + 24LL) );
  }
  v21 = (struct _LIST_ENTRY **)qword_1C032C5D8;
  v22 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 192);
  v22->Flink = &gFrameTPListHead;
  v22->Blink = (struct _LIST_ENTRY *)v21;
  if ( *v21 != &gFrameTPListHead )
    __fastfail(3u);
  *v21 = v22;
  qword_1C032C5D8 = (__int64)v22;
  *((_QWORD *)a2 + 192) = 0LL;
  xxxGeneratePointerInputMessages(a4);
  if ( RevalidateTPDeviceState((unsigned __int64)a4) )
  {
LABEL_24:
    if ( !a5 )
      GestureContactProcessing(a1, 0LL, a2, a3, 0, 0, a6, a7);
  }
}
