/*
 * XREFs of ?xxxSeekAndAbortLowerRankedActivity@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C8CE8
 * Callers:
 *     xxxProcessPointerDeviceInput @ 0x1C01CF3C8 (xxxProcessPointerDeviceInput.c)
 * Callees:
 *     AbortDeviceActivity @ 0x1C01C8D90 (AbortDeviceActivity.c)
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 */

void __fastcall xxxSeekAndAbortLowerRankedActivity(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  int v5; // edi
  struct tagHID_POINTER_DEVICE_INFO **p_Blink; // rax
  struct tagHID_POINTER_DEVICE_INFO *v8; // rcx

  Flink = gActivePointerDeviceList.Flink;
  v5 = 0;
  if ( gActivePointerDeviceList.Flink == &gActivePointerDeviceList )
    goto LABEL_15;
  do
  {
    p_Blink = (struct tagHID_POINTER_DEVICE_INFO **)&Flink[-1].Blink;
    Flink = Flink->Flink;
    v8 = *p_Blink;
    if ( *p_Blink == a1 )
    {
      v5 = 1;
    }
    else if ( *((_DWORD *)a1 + 373) > *((_DWORD *)v8 + 373) && !v5 )
    {
      AbortDeviceActivity(v8);
    }
  }
  while ( Flink != &gActivePointerDeviceList );
  if ( !v5 )
  {
LABEL_15:
    if ( gbPointerSendLastPending && (gptiCurrent == gptiRit || (unsigned int)IsDwmInputThread(gptiRit, a2, a3, a4)) )
      xxxAssessPointerContactState();
  }
}
