/*
 * XREFs of xxxMNCancel @ 0x1C013C7D8
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C013C724 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNButtonUp @ 0x1C013ECEC (xxxMNButtonUp.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxEndMenuLoop @ 0x1C0142C30 (xxxEndMenuLoop.c)
 *     xxxMNChar @ 0x1C020F234 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 *     xxxEndMenu @ 0x1C02341A4 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C02354DC (xxxMNKeyFilter.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     _PostTransformableMessage @ 0x1C009CF34 (_PostTransformableMessage.c)
 *     PlayEventSound @ 0x1C010F740 (PlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C0140374 (xxxSendMenuSelect.c)
 *     xxxMNReleaseCapture @ 0x1C01404F0 (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int *v4; // r14
  unsigned int v7; // r13d
  int v8; // ecx
  int v9; // r15d
  unsigned int v10; // r12d
  __int64 result; // rax
  BOOL v12; // r13d
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 *v18; // rdx
  int v19; // ebp
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rdx
  int v24; // [rsp+50h] [rbp-78h]
  _QWORD v25[3]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v26[11]; // [rsp+70h] [rbp-58h] BYREF
  int v27; // [rsp+D0h] [rbp+8h]

  v4 = *(int **)a1;
  v7 = **(_DWORD **)a1;
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  *v4 |= 0x8000u;
  v8 = *v4;
  v24 = (v7 >> 8) & 1;
  v9 = (v7 >> 3) & 1;
  v10 = v7 >> 2;
  v27 = v7 & 1;
  result = *(_QWORD *)(a1 + 32);
  v12 = ((v7 >> 11) & 1) == 0;
  v13 = v10 & 1;
  if ( gptiCurrent == result )
  {
    result = 0x80000LL;
    if ( (v8 & 0x80000) == 0 )
    {
      v14 = *((_QWORD *)v4 + 2);
      *v4 = v8 | 0x80000;
      v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v25;
      v25[1] = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      xxxMNCloseHierarchy(v4, a1);
      xxxMNSelectItem((struct tagPOPUPMENU *)v4);
      *(_DWORD *)(a1 + 8) &= ~1u;
      v15 = *((_QWORD *)v4 + 1);
      v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v26;
      v26[1] = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      xxxMNReleaseCapture(a1);
      if ( v9 )
      {
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v18 = *(__int64 **)(gpqForeground + 80LL);
            if ( v18 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
                xxxWindowEvent(0x80000005, v18, 0, 1, 33);
            }
          }
        }
        xxxWindowEvent(7u, *((__int64 **)v4 + 2), -4, 0, 0);
        v17 = *((_QWORD *)v4 + 2);
        if ( v17 )
          xxxDestroyWindow((_QWORD *)v17);
      }
      if ( v15 )
      {
        v19 = -1;
        xxxSendMenuSelect(v15, 0, -1, -1, a1);
        if ( !v9 && (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v23 = *(__int64 **)(gpqForeground + 80LL);
            if ( v23 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
                xxxWindowEvent(0x80000005, v23, 0, 1, 33);
            }
          }
        }
        if ( !v13 )
          v19 = v27 != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, (__int64 *)v15, v19, 0, 0);
        if ( v12 )
        {
          if ( !v9 || (v20 = 1, v13) )
            v20 = 0;
          xxxSendMessage((struct tagWND *)v15, 0x212u, v20, 0LL);
        }
        if ( a2 )
        {
          PlayEventSound(6u);
          v17 = a3;
          *(_DWORD *)(a1 + 24) = a3;
          if ( !v24 )
          {
            if ( v13 || !v9 || (*(_BYTE *)(v15 + 45) & 1) != 0 )
            {
              PostTransformableMessage(v15, a2, a3, a4, 1);
            }
            else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
            {
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout((struct tagWND *)v15, a2, a3, a4, 0, 0, 0LL, 1, 1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      ThreadUnlock1(v17, v16);
      return ThreadUnlock1(v22, v21);
    }
  }
  return result;
}
