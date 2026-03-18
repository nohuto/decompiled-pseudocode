/*
 * XREFs of FindQMsg @ 0x1C00835A0
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00831C0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 * Callees:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C0125E1C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01E2B30 (FreeDdeXact.c)
 */

__int64 __fastcall FindQMsg(__int64 a1, struct tagMLIST *a2, _QWORD *a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // r14
  __int64 result; // rax
  unsigned int v8; // ebp
  struct tagMLIST *v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  __int64 *v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-48h]
  struct tagMLIST *v21; // [rsp+78h] [rbp+10h]

  v21 = a2;
  v6 = *(_QWORD *)a2;
  result = 0LL;
  v19 = 0LL;
  v8 = a4;
  v10 = a2;
  if ( *(_QWORD *)a2 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      v12 = *(_QWORD *)(v6 + 16);
      PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
      a2 = (struct tagMLIST *)(unsigned __int16)v12;
      if ( (unsigned __int64)(unsigned __int16)v12 < *(_QWORD *)(gpsi + 8LL) )
      {
        v13 = v12 >> 16;
        v14 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)((_DWORD)a2 * *((_DWORD *)&gSharedInfo + 4)));
        if ( ((_WORD)v13 == *((_WORD *)v14 + 9)
           || (_WORD)v13 == 0xFFFF
           || !(_WORD)v13 && PsGetCurrentProcessWow64Process(gSharedInfo))
          && (*((_BYTE *)v14 + 17) & 1) == 0
          && *((_BYTE *)v14 + 16) == 1 )
        {
          v11 = *v14;
          if ( *v14 )
            goto LABEL_7;
        }
        v10 = v21;
      }
      if ( *(_QWORD *)(v6 + 16) )
      {
        if ( *(_DWORD *)(v6 + 24) == 786 )
          CheckRemoveHotkeyBit((struct tagTHREADINFO *)a1, v10);
        v16 = *(_QWORD *)(a1 + 384);
        if ( *(_QWORD *)(v16 + 40) == v6 && *(_QWORD *)(v16 + 32) == a1 )
        {
          EtwTraceInputQueueUnLocked();
          *(_QWORD *)(*(_QWORD *)(a1 + 384) + 32LL) = 0LL;
        }
        goto LABEL_37;
      }
LABEL_7:
      if ( a6 )
      {
        v17 = a3 ? *a3 : 0LL;
        if ( v17 == *(_QWORD *)(v6 + 16) && *(_DWORD *)(v6 + 24) == -2147482652 )
        {
          LOBYTE(a2) = 11;
          v18 = HMValidateHandleNoRip(*(_QWORD *)(v6 + 40), a2, a3);
          if ( v18 && (*(_DWORD *)(v18 + 64) & 0x200) != 0 )
          {
            FreeDdeXact(v18);
            v10 = v21;
LABEL_37:
            DelQEntry(v10, v6);
            v6 = *(_QWORD *)v10;
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
      v15 = *(_DWORD *)(v6 + 24);
      if ( v15 + 2147482655 <= 7 )
        v15 &= ~0x80000000;
      if ( !v8 )
      {
        if ( a5 == -1 )
          goto LABEL_13;
LABEL_18:
        if ( v15 <= a5 )
          goto LABEL_13;
        goto LABEL_19;
      }
      if ( v8 <= a5 )
      {
        if ( v15 < v8 )
          goto LABEL_19;
        goto LABEL_18;
      }
      if ( v15 < a5 || v15 > v8 )
      {
LABEL_13:
        if ( !a6 )
          return v6;
        if ( !v19 )
          v19 = v6;
      }
LABEL_19:
      v6 = *(_QWORD *)v6;
      v10 = v21;
LABEL_20:
      if ( !v6 )
        return v19;
    }
  }
  return result;
}
