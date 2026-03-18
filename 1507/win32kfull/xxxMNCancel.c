/*
 * XREFs of xxxMNCancel @ 0x1C010C8EC
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 *     xxxMNButtonUp @ 0x1C010C7B0 (xxxMNButtonUp.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C010C838 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxEndMenuLoop @ 0x1C010E5F0 (xxxEndMenuLoop.c)
 *     xxxMNChar @ 0x1C0216834 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0216E44 (xxxMNKeyDown.c)
 *     xxxEndMenu @ 0x1C023C63C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C023D934 (xxxMNKeyFilter.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C004E9A0 (_PostTransformableMessage.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     PlayEventSound @ 0x1C00EBE10 (PlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C010D008 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C010DA10 (xxxSendMenuSelect.c)
 *     xxxMNReleaseCapture @ 0x1C010DB8C (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, struct _LARGE_STRING *a4)
{
  int *v4; // rsi
  unsigned __int64 v6; // r13
  unsigned int v8; // r12d
  int v9; // ecx
  int v10; // r14d
  unsigned int v11; // r15d
  __int64 result; // rax
  BOOL v13; // r12d
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rdx
  int v20; // esi
  __int64 *v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // [rsp+50h] [rbp-78h]
  _QWORD v26[3]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v27[11]; // [rsp+70h] [rbp-58h] BYREF
  int v28; // [rsp+D0h] [rbp+8h]

  v4 = *(int **)a1;
  v6 = a3;
  v8 = **(_DWORD **)a1;
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  *v4 |= 0x8000u;
  v9 = *v4;
  v25 = (v8 >> 8) & 1;
  v10 = (v8 >> 3) & 1;
  v11 = v8 >> 2;
  v28 = v8 & 1;
  result = *(_QWORD *)(a1 + 32);
  v13 = ((v8 >> 11) & 1) == 0;
  v14 = v11 & 1;
  if ( gptiCurrent == result )
  {
    result = 0x80000LL;
    if ( (v9 & 0x80000) == 0 )
    {
      v15 = *((_QWORD *)v4 + 2);
      *v4 = v9 | 0x80000;
      v26[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v26;
      v26[1] = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      xxxMNCloseHierarchy(v4);
      xxxMNSelectItem((struct tagPOPUPMENU *)v4);
      *(_DWORD *)(a1 + 8) &= ~1u;
      v16 = *((_QWORD *)v4 + 1);
      v27[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v27;
      v27[1] = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      xxxMNReleaseCapture(a1);
      if ( v10 )
      {
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v19 = *(__int64 **)(gpqForeground + 72LL);
            if ( v19 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
                xxxWindowEvent(0x80000005, v19, 0, 1, 33);
            }
          }
        }
        xxxWindowEvent(7u, *((__int64 **)v4 + 2), -4, 0, 0);
        v18 = *((_QWORD *)v4 + 2);
        if ( v18 )
          xxxDestroyWindow(v18);
      }
      if ( v16 )
      {
        v20 = -1;
        xxxSendMenuSelect(v16, 0, -1, -1, a1);
        if ( !v10 && (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v21 = *(__int64 **)(gpqForeground + 72LL);
            if ( v21 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
                xxxWindowEvent(0x80000005, v21, 0, 1, 33);
            }
          }
        }
        if ( !v14 )
          v20 = v28 != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, (__int64 *)v16, v20, 0, 0);
        if ( v13 )
        {
          if ( !v10 || (v22 = 1, v14) )
            v22 = 0;
          xxxSendMessage((struct tagWND *)v16, 0x212u, v22, 0LL);
        }
        if ( a2 )
        {
          PlayEventSound(6u);
          *(_DWORD *)(a1 + 24) = v6;
          if ( !v25 )
          {
            if ( v14 || !v10 || (*(_BYTE *)(v16 + 45) & 1) != 0 )
            {
              PostTransformableMessage((struct tagWND *)v16, a2, v6, (__int64)a4, 1);
            }
            else if ( a2 - 273 <= 1 || a2 == 294 )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout((struct tagWND *)v16, a2, v6, a4, 0, 0, 0LL, 1, 1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      ThreadUnlock1(v18, v17);
      return ThreadUnlock1(v24, v23);
    }
  }
  return result;
}
