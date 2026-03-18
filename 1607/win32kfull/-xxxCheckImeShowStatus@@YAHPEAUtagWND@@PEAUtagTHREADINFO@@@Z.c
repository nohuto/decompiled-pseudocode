/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00FBA30
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00FBA00 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01D97D8 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagTHREADINFO *v2; // r14
  unsigned int v4; // edi
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagBWL *v9; // r13
  unsigned __int64 *i; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // r14
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  char v18; // r14
  PRKPROCESS *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax

  v2 = a2;
  v4 = 0;
  if ( *((char *)a1 + 44) < 0 )
    return 0LL;
  v5 = BuildHwndList(*(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL), (struct tagWND *)2, 0LL);
  v9 = v5;
  if ( v5 )
  {
    for ( i = (unsigned __int64 *)((char *)v5 + 32); ; ++i )
    {
      v11 = *i;
      if ( *i == 1 )
        break;
      v12 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread(), v6, v7, v8);
      v6 = (unsigned __int16)v11;
      if ( (unsigned __int64)(unsigned __int16)v11 < *(_QWORD *)(gpsi + 8LL) )
      {
        v13 = (__int64 *)(gSharedInfo[1] + (unsigned int)(unsigned __int16)v11 * LODWORD(gSharedInfo[2]));
        v14 = v11 >> 16;
        if ( ((_WORD)v14 == *((_WORD *)v13 + 9)
           || (_WORD)v14 == 0xFFFF
           || !(_WORD)v14 && PsGetCurrentProcessWow64Process(gSharedInfo[0]))
          && (*((_BYTE *)v13 + 17) & 1) == 0
          && *((_BYTE *)v13 + 16) == 1 )
        {
          v12 = *v13;
        }
        v2 = a2;
      }
      if ( v12 && a1 != (struct tagWND *)v12 )
      {
        v6 = *(_QWORD *)(v12 + 152);
        v15 = 0LL;
        if ( *(_WORD *)(v6 + 8) == *(_WORD *)(gpsi + 882LL) )
          v15 = v12;
        if ( v15 )
        {
          if ( *(char *)(v12 + 44) >= 0 )
          {
            v16 = *(_QWORD *)(v15 + 360);
            if ( v16 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && (!v2 || v2 == *(struct tagTHREADINFO **)(v12 + 16)) )
            {
              v18 = 0;
              v19 = *(PRKPROCESS **)(*(_QWORD *)(v12 + 16) + 376LL);
              if ( v19 != *(PRKPROCESS **)(gptiCurrent + 376LL) )
              {
                KeAttachProcess(*v19);
                v18 = 1;
              }
              v20 = v16;
              if ( v16 >= W32UserProbeAddress )
                v20 = W32UserProbeAddress;
              if ( (*(_DWORD *)(v20 + 44) & 1) != 0 )
              {
                LOBYTE(v6) = 1;
                v21 = HMValidateHandleNoSecure(*(_QWORD *)(v16 + 16), v6, v7, v8);
                if ( v21 )
                  *(_DWORD *)(v16 + 44) &= ~1u;
              }
              else
              {
                v21 = 0LL;
              }
              if ( v18 )
                KeDetachProcess();
              if ( v21 )
              {
                v22 = *(_QWORD *)(v21 + 16);
                if ( v22 )
                {
                  if ( (*(_DWORD *)(v22 + 440) & 1) == 0 )
                    PostMessage(v21, 642LL, 1LL, 0LL);
                }
              }
            }
          }
        }
      }
      v2 = a2;
    }
    FreeHwndList(v9);
    return 1;
  }
  return v4;
}
