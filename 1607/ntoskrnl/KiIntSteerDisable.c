/*
 * XREFs of KiIntSteerDisable @ 0x1401244B8
 * Callers:
 *     KeDisconnectInterrupt @ 0x1401243CC (KeDisconnectInterrupt.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerLogState @ 0x14012DC88 (KiIntSteerLogState.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerDisable(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rbx
  _QWORD *v4; // rdi
  KIRQL v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 **v9; // rbx
  _QWORD *v10; // rax
  unsigned __int16 *v11; // rcx
  unsigned __int16 ***v12; // rax
  unsigned __int16 **v13; // rax
  unsigned __int16 *v14; // rcx
  __int16 v15; // ax
  unsigned __int16 *v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v18; // [rsp+30h] [rbp-18h]
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( v4 )
  {
    KiIntSteerLogState(*(_QWORD *)(*a1 + 168), &PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT);
    v5 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    if ( a2 )
    {
      v6 = a2;
      do
      {
        v7 = *v2++;
        *(_QWORD *)(v7 + 168) = 0LL;
        --v6;
      }
      while ( v6 );
    }
    v8 = *v4;
    v9 = (unsigned __int16 **)v4[2];
    v10 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v10 != v4 )
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    ExFreePoolWithTag(v4, 0x6B725449u);
    if ( v9[2] == (unsigned __int16 *)(v9 + 2) )
    {
      --KiIntTrackRootCount;
      v11 = *v9;
      v12 = (unsigned __int16 ***)v9[1];
      if ( *((unsigned __int16 ***)*v9 + 1) != v9 || *v12 != v9 )
        __fastfail(3u);
      *v12 = (unsigned __int16 **)v11;
      *((_QWORD *)v11 + 1) = v12;
      v13 = v9 + 8;
      if ( *((_DWORD *)v9 + 32) != 2 )
        v13 = v9 + 20;
      v14 = *v13;
      v15 = *((_WORD *)v13 + 4);
      v17[0] = 0LL;
      v18 = v15;
      v17[1] = v14;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v19, v17) )
        --*(_DWORD *)(KiProcessorBlock[v19] + 11544);
      ExFreePoolWithTag(v9, 0x6B725449u);
    }
    KeReleaseSpinLock(&KiIntTrackSpinlock, v5);
  }
  return 0LL;
}
