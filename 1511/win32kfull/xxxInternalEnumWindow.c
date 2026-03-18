/*
 * XREFs of xxxInternalEnumWindow @ 0x1C0090834
 * Callers:
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00DB8C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxTurnOffCompositing @ 0x1C01E80F8 (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C0223AFC (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
          v13 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v11 * *((_DWORD *)&gSharedInfo + 4)));
          if ( ((_WORD)v12 == *((_WORD *)v13 + 9)
             || (_WORD)v12 == 0xFFFF
             || !(_WORD)v12 && PsGetCurrentProcessWow64Process(gSharedInfo))
            && (*((_BYTE *)v13 + 17) & 1) == 0
            && *((_BYTE *)v13 + 16) == 1 )
          {
            v14 = *v13;
            if ( *v13 )
            {
              v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v17;
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
