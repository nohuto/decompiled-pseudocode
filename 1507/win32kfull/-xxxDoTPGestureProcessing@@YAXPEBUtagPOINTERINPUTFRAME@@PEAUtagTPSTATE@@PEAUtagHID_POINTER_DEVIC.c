/*
 * XREFs of ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01F4330
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1008 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01F15A8 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1948 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01F2010 (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FBBC8 (xxxGeneratePointerInputMessages.c)
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
  void **v21; // rdx
  _QWORD *v22; // rax

  if ( *((_DWORD *)a2 + 270) == 3 )
    goto LABEL_24;
  *((_DWORD *)a2 + 270) = 3;
  CancelInertiaState(a2, 1);
  if ( IsFirstActionAfterKey() )
    dword_1C0321BD0 = 9;
  else
    dword_1C0321BD4 = 9;
  ++gTPTelemState;
  ++dword_1C0321C24;
  EtwTraceTouchpadGestureDetected();
  v11 = (_DWORD *)((char *)a2 + 168);
  v12 = 6LL;
  do
  {
    if ( (*v11 & 1) != 0 )
      *v11 |= 0x400u;
    v11 += 44;
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
        v15 = 176LL * ((unsigned int)*v14 % *((_DWORD *)a2 + 267));
        *(_DWORD *)((char *)a2 + v15 + 168) &= ~0x400u;
        v16 = *(_DWORD *)((char *)a2 + v15 + 168);
        if ( (v16 & 0x40) == 0 && (*((_DWORD *)v14 + 5) & 0x20000) != 0 )
          *(_DWORD *)((char *)a2 + v15 + 168) = v16 | 2;
      }
      v14 += 108;
      ++v13;
    }
    while ( v13 < *((_DWORD *)a1 + 6) );
  }
  v17 = *((_QWORD *)a2 + 157);
  v18 = 0;
  if ( *(_DWORD *)(v17 + 24) )
  {
    v19 = (_WORD *)(*(_QWORD *)(v17 + 72) + 48LL);
    do
    {
      if ( *v19 )
      {
        v20 = 176LL * ((unsigned int)(unsigned __int16)*v19 % *((_DWORD *)a2 + 267));
        *(_DWORD *)((char *)a2 + v20 + 168) &= ~0x400u;
      }
      v19 += 108;
      ++v18;
    }
    while ( v18 < *(_DWORD *)(*((_QWORD *)a2 + 157) + 24LL) );
  }
  v21 = (void **)qword_1C032D188;
  v22 = (_QWORD *)*((_QWORD *)a2 + 157);
  *v22 = &gFrameTPListHead;
  v22[1] = v21;
  if ( *v21 != &gFrameTPListHead )
    __fastfail(3u);
  *v21 = v22;
  qword_1C032D188 = (__int64)v22;
  *((_QWORD *)a2 + 157) = 0LL;
  xxxGeneratePointerInputMessages(a4);
  if ( RevalidateTPDeviceState((unsigned __int64)a4) )
  {
LABEL_24:
    if ( !a5 )
      GestureContactProcessing(a1, 0LL, a2, a3, 0, 0, a6, a7);
  }
}
