/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0209FA4
 * Callers:
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsShellParticipatesInSizing @ 0x1C00730E0 (IsShellParticipatesInSizing.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall xxxReportMoveSizeCompletionToShell(const struct tagRECT *a1)
{
  __int64 *v1; // rdi
  int top; // ebx
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // edx
  BOOL v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v16[5]; // [rsp+48h] [rbp-38h] BYREF

  v1 = *(__int64 **)&a1->left;
  if ( (unsigned int)IsShellParticipatesInSizing(*(_QWORD *)&a1->left) )
  {
    a1[16].left &= ~4u;
    top = a1[11].top;
    if ( top >= 0 )
      v4 = 2;
    else
      v4 = (top & 0x100000) == 0;
    memset(v15, 0, sizeof(v15));
    v5 = *v1;
    v15[3] = 0LL;
    v15[0] = v5;
    v15[2] = v4;
    LODWORD(v15[1]) = 8;
    xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v15);
  }
  else
  {
    v6 = *(_QWORD *)(v1[3] + 320);
    if ( (a1[16].left & 8) == 0 )
    {
      if ( v6 )
      {
        v8 = !IsRectEmptyInl(a1 + 15);
        if ( v10 || v8 )
        {
          v11 = 2;
          if ( (a1[11].top & 0x100000) != 0 )
          {
            if ( v10 )
              v11 = v9 != 0;
            else
              v11 = v7 == 0 ? 2 : 0;
          }
          v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v15;
          ++*(_DWORD *)(v6 + 8);
          v15[1] = v6;
          memset(v16, 0, sizeof(v16));
          v12 = *(_QWORD **)&a1->left;
          v16[3] = 0LL;
          LODWORD(v16[1]) = 2;
          v16[0] = *v12;
          v16[2] = v11;
          if ( (unsigned int)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v16)
            && !v11 )
          {
            SetLastInputWoken(*(_QWORD *)(v6 + 16), 0LL);
          }
          ThreadUnlock1(v14, v13);
        }
      }
    }
  }
}
