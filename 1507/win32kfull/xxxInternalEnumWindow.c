/*
 * XREFs of xxxInternalEnumWindow @ 0x1C007E7F8
 * Callers:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C0008998 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxSetClassIcon @ 0x1C0154854 (xxxSetClassIcon.c)
 *     xxxTurnOffCompositing @ 0x1C01E7C84 (xxxTurnOffCompositing.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

struct tagBWL *__fastcall xxxInternalEnumWindow(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        char a4)
{
  struct tagBWL *result; // rax
  struct tagBWL *v7; // rbp
  _QWORD *v8; // rsi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[4]; // [rsp+20h] [rbp-48h] BYREF

  result = BuildHwndList(a1, a4, 0LL);
  v7 = result;
  if ( result )
  {
    v8 = (_QWORD *)((char *)result + 32);
    v9 = 1;
    v10 = *((_QWORD *)result + 4);
    if ( v10 != 1 )
    {
      do
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        v11 = (unsigned __int16)v10;
        if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(gpsi + 8LL) )
        {
          v12 = v10 >> 16;
          v13 = (__int64 *)(gSharedInfo[1] + (unsigned int)(v11 * LODWORD(gSharedInfo[2])));
          if ( ((_WORD)v12 == *((_WORD *)v13 + 9)
             || (_WORD)v12 == 0xFFFF
             || !(_WORD)v12 && PsGetCurrentProcessWow64Process(gSharedInfo[0]))
            && (*((_BYTE *)v13 + 17) & 1) == 0
            && *((_BYTE *)v13 + 16) == 1 )
          {
            v14 = *v13;
            if ( *v13 )
            {
              v17[0] = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = v17;
              v17[1] = v14;
              ++*(_DWORD *)(v14 + 8);
              v9 = a2(v14, a3);
              ThreadUnlock1(v16, v15);
              if ( !v9 )
                break;
            }
          }
        }
        v10 = *++v8;
      }
      while ( *v8 != 1LL );
    }
    FreeHwndList(v7);
    return (struct tagBWL *)v9;
  }
  return result;
}
