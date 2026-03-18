/*
 * XREFs of xxxInternalEnumWindow @ 0x1C0099400
 * Callers:
 *     xxxDeactivate @ 0x1C0098E24 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00F96D4 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxTurnOffCompositing @ 0x1C01DE97C (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C0224654 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

struct tagBWL *__fastcall xxxInternalEnumWindow(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        unsigned int a4)
{
  struct tagBWL *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagBWL *v10; // rbp
  _QWORD *v11; // rsi
  unsigned int v12; // r14d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 CurrentProcessWow64Process; // rax
  _QWORD v20[4]; // [rsp+20h] [rbp-48h] BYREF

  result = BuildHwndList(a1, (struct tagWND *)a4, 0LL);
  v10 = result;
  if ( result )
  {
    v11 = (_QWORD *)((char *)result + 32);
    v12 = 1;
    v13 = *((_QWORD *)result + 4);
    if ( v13 != 1 )
    {
      do
      {
        PsGetThreadWin32Thread(KeGetCurrentThread(), v7, v8, v9);
        v7 = (unsigned __int16)v13;
        if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(gpsi + 8LL) )
        {
          v14 = v13 >> 16;
          v15 = (__int64 *)(gSharedInfo[1] + (unsigned int)(v7 * LODWORD(gSharedInfo[2])));
          if ( ((_WORD)v14 == *((_WORD *)v15 + 9)
             || (_WORD)v14 == 0xFFFF
             || !(_WORD)v14 && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(gSharedInfo[0])) != 0)
            && (*((_BYTE *)v15 + 17) & 1) == 0
            && *((_BYTE *)v15 + 16) == 1 )
          {
            v16 = *v15;
            if ( *v15 )
            {
              v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v20;
              v20[1] = v16;
              ++*(_DWORD *)(v16 + 8);
              v12 = a2(v16, a3);
              ThreadUnlock1(v18, v17);
              if ( !v12 )
                break;
            }
          }
        }
        v13 = *++v11;
      }
      while ( *v11 != 1LL );
    }
    FreeHwndList(v10);
    return (struct tagBWL *)v12;
  }
  return result;
}
