/*
 * XREFs of FindQMsg @ 0x1C006BDA0
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C006B9D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C00F9078 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01EBA90 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(__int64 a1, struct tagMLIST *a2, _QWORD *a3, unsigned int a4, unsigned int a5, int a6)
{
  __int64 *v6; // rsi
  __int64 *result; // rax
  struct tagMLIST *v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 *v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // [rsp+20h] [rbp-48h]

  v6 = *(__int64 **)a2;
  result = 0LL;
  v20 = 0LL;
  v10 = a2;
  if ( *(_QWORD *)a2 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      v12 = v6[2];
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v13 = (unsigned __int16)v12;
      if ( (unsigned __int64)(unsigned __int16)v12 < *(_QWORD *)(gpsi + 8LL) )
      {
        v14 = v12 >> 16;
        v15 = (__int64 *)(gSharedInfo[1] + (unsigned int)(v13 * LODWORD(gSharedInfo[2])));
        if ( ((_WORD)v14 == *((_WORD *)v15 + 9)
           || (_WORD)v14 == 0xFFFF
           || !(_WORD)v14 && PsGetCurrentProcessWow64Process(gSharedInfo[0]))
          && (*((_BYTE *)v15 + 17) & 1) == 0
          && *((_BYTE *)v15 + 16) == 1 )
        {
          v11 = *v15;
          if ( *v15 )
            goto LABEL_7;
        }
        v10 = a2;
      }
      if ( v6[2] )
      {
        if ( *((_DWORD *)v6 + 6) == 786 )
          CheckRemoveHotkeyBit((struct tagTHREADINFO *)a1, v10);
        v17 = *(_QWORD *)(a1 + 392);
        if ( *(__int64 **)(v17 + 32) == v6 && *(_QWORD *)(v17 + 24) == a1 )
        {
          EtwTraceInputQueueUnLocked();
          *(_QWORD *)(*(_QWORD *)(a1 + 392) + 24LL) = 0LL;
        }
        goto LABEL_37;
      }
LABEL_7:
      if ( a6 )
      {
        v18 = a3 ? *a3 : 0LL;
        if ( v18 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
        {
          LOBYTE(v13) = 11;
          v19 = HMValidateHandleNoRip(v6[5], v13);
          if ( v19 && (*(_DWORD *)(v19 + 64) & 0x200) != 0 )
          {
            FreeDdeXact(v19);
            v10 = a2;
LABEL_37:
            DelQEntry(v10, v6, 1LL);
            v6 = *(__int64 **)v10;
            goto LABEL_20;
          }
        }
      }
      if ( a3 && a3 != (_QWORD *)v11 && (a3 != (_QWORD *)1 || v11) )
      {
        while ( v11 )
        {
          if ( (*(_BYTE *)(v11 + 55) & 0xC0) != 0x40 )
            break;
          v11 = *(_QWORD *)(v11 + 88);
          if ( a3 == (_QWORD *)v11 )
            goto LABEL_9;
        }
        goto LABEL_19;
      }
LABEL_9:
      v16 = *((_DWORD *)v6 + 6);
      if ( v16 + 2147482655 <= 7 )
        v16 &= ~0x80000000;
      if ( !a4 )
      {
        if ( a5 == -1 )
          goto LABEL_13;
LABEL_18:
        if ( v16 <= a5 )
          goto LABEL_13;
        goto LABEL_19;
      }
      if ( a4 <= a5 )
      {
        if ( v16 < a4 )
          goto LABEL_19;
        goto LABEL_18;
      }
      if ( v16 < a5 || v16 > a4 )
      {
LABEL_13:
        if ( !a6 )
          return v6;
        if ( !v20 )
          v20 = v6;
      }
LABEL_19:
      v6 = (__int64 *)*v6;
      v10 = a2;
LABEL_20:
      if ( !v6 )
        return v20;
    }
  }
  return result;
}
