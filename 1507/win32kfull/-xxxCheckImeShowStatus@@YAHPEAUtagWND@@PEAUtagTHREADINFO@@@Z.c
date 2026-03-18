/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00D6AE0
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00D6AB0 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E2A84 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagTHREADINFO *v2; // r14
  unsigned int v4; // edi
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // r13
  unsigned __int64 *i; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 *v10; // r14
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  char v15; // r14
  PRKPROCESS *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax

  v2 = a2;
  v4 = 0;
  if ( *((char *)a1 + 44) < 0 )
    return 0LL;
  v5 = BuildHwndList(*(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL), 2, 0LL);
  v6 = v5;
  if ( v5 )
  {
    for ( i = (unsigned __int64 *)((char *)v5 + 32); ; ++i )
    {
      v8 = *i;
      if ( *i == 1 )
        break;
      v9 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v8 < *(_QWORD *)(gpsi + 8LL) )
      {
        v10 = (__int64 *)(gSharedInfo[1] + (unsigned int)(unsigned __int16)v8 * LODWORD(gSharedInfo[2]));
        v11 = v8 >> 16;
        if ( ((_WORD)v11 == *((_WORD *)v10 + 9)
           || (_WORD)v11 == 0xFFFF
           || !(_WORD)v11 && PsGetCurrentProcessWow64Process(gSharedInfo[0]))
          && (*((_BYTE *)v10 + 17) & 1) == 0
          && *((_BYTE *)v10 + 16) == 1 )
        {
          v9 = *v10;
        }
        v2 = a2;
      }
      if ( v9 && a1 != (struct tagWND *)v9 )
      {
        v12 = 0LL;
        if ( *(_WORD *)(*(_QWORD *)(v9 + 152) + 8LL) == *(_WORD *)(gpsi + 882LL) )
          v12 = v9;
        if ( v12 )
        {
          if ( *(char *)(v9 + 44) >= 0 )
          {
            v13 = *(_QWORD *)(v12 + 376);
            if ( v13 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && (!v2 || v2 == *(struct tagTHREADINFO **)(v9 + 16)) )
            {
              v15 = 0;
              v16 = *(PRKPROCESS **)(*(_QWORD *)(v9 + 16) + 384LL);
              if ( v16 != *(PRKPROCESS **)(gptiCurrent + 384LL) )
              {
                KeAttachProcess(*v16);
                v15 = 1;
              }
              v17 = v13;
              if ( v13 >= W32UserProbeAddress )
                v17 = W32UserProbeAddress;
              if ( (*(_DWORD *)(v17 + 44) & 1) != 0 )
              {
                v18 = HMValidateHandleNoSecure(*(_QWORD *)(v13 + 16), 1);
                if ( v18 )
                  *(_DWORD *)(v13 + 44) &= ~1u;
              }
              else
              {
                v18 = 0LL;
              }
              if ( v15 )
                KeDetachProcess();
              if ( v18 )
              {
                v19 = *(_QWORD *)(v18 + 16);
                if ( v19 )
                {
                  if ( (*(_DWORD *)(v19 + 448) & 1) == 0 )
                    PostMessage(v18, 0x282u, 1uLL, 0LL);
                }
              }
            }
          }
        }
      }
      v2 = a2;
    }
    FreeHwndList(v6);
    return 1;
  }
  return v4;
}
