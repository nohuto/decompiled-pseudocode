/*
 * XREFs of ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01EBC40
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E7838 (-FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUta.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01E7B6C (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01E7FB4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01E84D4 (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB3C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01F33DC (xxxGeneratePointerInputMessages.c)
 */

void __fastcall xxxDoTPShellProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        LARGE_INTEGER *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        void *a4,
        unsigned int a5,
        int *a6)
{
  LARGE_INTEGER *v6; // r10
  struct tagPOINTERINFONODE *v7; // rsi
  int v8; // r14d
  unsigned int v13; // edi
  LARGE_INTEGER *v14; // rdx
  DWORD LowPart; // eax
  unsigned int v16; // eax
  LARGE_INTEGER v17; // r8
  unsigned int v18; // r9d
  unsigned int *v19; // r8
  unsigned __int16 v20; // ax
  _QWORD *v21; // rax
  _QWORD *QuadPart; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct tagPOINTERINFONODE *v26; // rax

  v6 = a2 + 204;
  v7 = 0LL;
  v8 = 0;
  v13 = a5;
  v14 = a2 + 33;
  do
  {
    LowPart = v14->LowPart;
    if ( (v14->LowPart & 1) != 0 )
    {
      if ( (LowPart & 0x80u) == 0 )
      {
        v16 = LowPart & 0xFFFFFBFF;
      }
      else
      {
        v16 = LowPart | 0x400;
        --v13;
      }
      v14->LowPart = v16;
    }
    v14 += 34;
  }
  while ( &v14[-33] != v6 );
  if ( a2[208].LowPart == 6 )
    goto LABEL_33;
  v8 = 1;
  a2[208].LowPart = 6;
  zzzCancelInertiaState((struct tagTPSTATE *)a2, 1);
  if ( IsFirstActionAfterKey() )
  {
    if ( v13 == 3 )
    {
      dword_1C0326D08 = 11;
LABEL_15:
      ++dword_1C0326D64;
      goto LABEL_18;
    }
    dword_1C0326D08 = 12;
  }
  else
  {
    if ( v13 == 3 )
    {
      dword_1C0326D0C = 11;
      goto LABEL_15;
    }
    dword_1C0326D0C = 12;
  }
  ++dword_1C0326D68;
LABEL_18:
  ++dword_1C0326D74;
  a2[233] = KeQueryPerformanceCounter(0LL);
  if ( !a2[239].QuadPart )
  {
    v26 = FindOrAssignPrimary(a1, (struct tagTPSTATE *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v17.QuadPart);
    v7 = v26;
    if ( !v26 )
      return;
    if ( (a2[240].LowPart & 0x400) != 0 )
      *((_DWORD *)v26 + 17) |= 0x2000u;
    goto LABEL_33;
  }
  v18 = 0;
  if ( *((_DWORD *)a1 + 10) )
  {
    v19 = (unsigned int *)(*((_QWORD *)a1 + 11) + 68LL);
    do
    {
      v20 = *((_WORD *)v19 - 10);
      if ( v20 && (a2[34 * ((unsigned int)v20 % a2[205].HighPart) + 33].LowPart & 0x400) == 0 && (*v19 & 0x10000) != 0 )
        *v19 = *v19 & 0xFFFCFFFF | 0x20000;
      v19 += 54;
      ++v18;
    }
    while ( v18 < *((_DWORD *)a1 + 10) );
  }
  v21 = (_QWORD *)qword_1C0329638;
  QuadPart = (_QWORD *)a2[239].QuadPart;
  if ( *(struct _LIST_ENTRY **)qword_1C0329638 != &gFrameTPListHead )
    __fastfail(3u);
  *QuadPart = &gFrameTPListHead;
  QuadPart[1] = v21;
  *v21 = QuadPart;
  qword_1C0329638 = (__int64)QuadPart;
  a2[239].QuadPart = 0LL;
  xxxGeneratePointerInputMessages(a4);
  if ( RevalidateTPDeviceState((unsigned __int64)a4, v23, v24, v25) )
LABEL_33:
    GestureContactProcessing(a1, v7, (struct tagTPSTATE *)a2, a3, v8, 1, a5, a6);
}
