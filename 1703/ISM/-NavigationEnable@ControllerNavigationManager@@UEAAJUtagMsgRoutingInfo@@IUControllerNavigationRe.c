/*
 * XREFs of ?NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRect@@UControllerNavigationPoint@@@Z @ 0x180031010
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180030938 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x180030E50 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032A9C (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerNavigationManager::NavigationEnable(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 a5)
{
  int v5; // eax
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  __int128 v12; // xmm0
  char v13; // al
  __int64 v14; // rcx
  char v15; // dl
  int updated; // eax
  __int64 v17; // rcx
  int v18; // r9d
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int128 v21; // xmm1
  _OWORD v23[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 136);
  if ( v5 && v5 == *(_DWORD *)a2 )
  {
    v9 = a5;
    *(_OWORD *)(a1 + 216) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 232) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 32);
    v10 = *(_QWORD **)(a1 + 16);
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v12 = *a4;
      v13 = *(_BYTE *)(a1 + 72);
      v14 = i[3];
      v15 = *(_BYTE *)(a1 + 74);
      v24 = v9;
      v23[0] = v12;
      *(_DWORD *)(v14 + 312) = a3;
      if ( !v13 || v15 )
      {
        updated = ControllerProcessor::UpdateNavigationState(v14, 0LL, v23, &v24);
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v18 = 623;
LABEL_12:
            Template_qqq(v17, &MinInput_Warning_CheckResult, 12, v18, updated);
          }
LABEL_13:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
      }
      else
      {
        updated = ControllerProcessor::UpdateNavigationState(v14, 0LL, v23, 0LL);
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v18 = 629;
            goto LABEL_12;
          }
          goto LABEL_13;
        }
      }
    }
    *(_DWORD *)(a1 + 76) = a3;
    v19 = *a4;
    *(_QWORD *)(a1 + 96) = v9;
    *(_BYTE *)(a1 + 72) = 1;
    *(_OWORD *)(a1 + 80) = v19;
  }
  else
  {
    v20 = a5;
    *(_OWORD *)(a1 + 144) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 184) = a3;
    v21 = *a4;
    *(_QWORD *)(a1 + 204) = v20;
    *(_OWORD *)(a1 + 188) = v21;
  }
  return 0LL;
}
