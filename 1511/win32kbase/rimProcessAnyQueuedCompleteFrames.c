/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C007DF30
 * Callers:
 *     rimCompleteReads @ 0x1C000F0AC (rimCompleteReads.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00C8B40 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C007F7DC (rimFreeAutoRepeatCompleteFrame.c)
 *     WPP_RECORDER_SF_qi @ 0x1C00C8A7C (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C00C8C44 (rimDispatchCompleteFrame.c)
 */

void __fastcall rimProcessAnyQueuedCompleteFrames(__int64 a1, __int64 a2, int a3)
{
  _QWORD **v3; // rbx
  _QWORD *v5; // r15
  char *v6; // rbp
  int v7; // r12d
  int v8; // eax
  _QWORD *v9; // r14
  int v10; // eax
  _QWORD *v11; // rcx
  _QWORD **v12; // rbp
  _QWORD *v13; // rax
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v3 = (_QWORD **)(a1 + 728);
  if ( *v3 == v3 || !*(_BYTE *)(a1 + 760) )
    return;
  if ( !*(_QWORD *)(a1 + 808) )
  {
    v12 = (_QWORD **)*v3;
    v13 = (_QWORD *)**v3;
    if ( (_QWORD **)(*v3)[1] != v3 || (_QWORD **)v13[1] != v12 )
      __fastfail(3u);
    *v3 = v13;
    v13[1] = v3;
    v6 = (char *)(v12 - 1);
    *((_QWORD *)v6 + 2) = v6 + 8;
    *((_QWORD *)v6 + 1) = v6 + 8;
    v7 = RawInputManagerDeviceObjectResolveHandle(*((void **)v6 + 4), 3u, *((_DWORD *)v6 + 12) == 0, &Object);
    goto LABEL_20;
  }
  v5 = *v3;
  if ( *v3 == v3 )
  {
    v6 = (char *)Object;
    v7 = (int)Object;
LABEL_20:
    v9 = Object;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v6 = (char *)(v5 - 1);
    v8 = RawInputManagerDeviceObjectResolveHandle((void *)v5[3], 3u, *((_DWORD *)v5 + 10) == 0, &Object);
    v9 = Object;
    v7 = v8;
    if ( v8 >= 0 )
      break;
LABEL_11:
    v5 = (_QWORD *)*v5;
    if ( v5 == v3 )
      goto LABEL_21;
  }
  v10 = *((_DWORD *)Object + 60);
  if ( (v10 & 0x800) != 0 && (v10 & 0x80000) == 0 )
  {
    v7 = -1073741823;
    ObfDereferenceObject(Object);
    goto LABEL_11;
  }
  a2 = *v5;
  v11 = (_QWORD *)*((_QWORD *)v6 + 2);
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v11 != v5 )
    __fastfail(3u);
  *v11 = a2;
  *(_QWORD *)(a2 + 8) = v11;
  v5[1] = v5;
  *v5 = v5;
LABEL_21:
  if ( v7 < 0 )
  {
    if ( *(_QWORD *)(a1 + 808) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0x14u,
        (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0x15u,
        (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids,
        *((_QWORD *)v6 + 4));
      Win32FreePool();
    }
  }
  else
  {
    --v9[31];
    WPP_RECORDER_SF_qi(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 19);
    rimFreeAutoRepeatCompleteFrame(v9 + 8);
    *(_BYTE *)(a1 + 760) = 0;
    rimDispatchCompleteFrame(a1, v9 + 8, v6);
    ObfDereferenceObject(v9);
  }
}
