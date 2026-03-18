/*
 * XREFs of FindQMsg @ 0x1C005B2D0
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C005AF00 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 * Callees:
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C010277C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01EBFB0 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(__int64 a1, struct tagMLIST *a2, _QWORD *a3, unsigned int a4, unsigned int a5, int a6)
{
  __int64 *v6; // r14
  __int64 *result; // rax
  struct tagMLIST *v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 *v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 *v21; // [rsp+20h] [rbp-48h]

  v6 = *(__int64 **)a2;
  result = 0LL;
  v21 = 0LL;
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
        v15 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v13 * *((_DWORD *)&gSharedInfo + 4)));
        if ( ((_WORD)v14 == *((_WORD *)v15 + 9)
           || (_WORD)v14 == 0xFFFF
           || !(_WORD)v14 && PsGetCurrentProcessWow64Process(gSharedInfo))
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
        v17 = *(_QWORD *)(a1 + 384);
        if ( *(__int64 **)(v17 + 32) == v6 && *(_QWORD *)(v17 + 24) == a1 )
        {
          EtwTraceInputQueueUnLocked();
          *(_QWORD *)(*(_QWORD *)(a1 + 384) + 24LL) = 0LL;
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
          v20 = HMValidateHandleNoRip(v6[5], v13);
          if ( v20 && (*(_DWORD *)(v20 + 64) & 0x200) != 0 )
          {
            FreeDdeXact(v20);
            v10 = a2;
LABEL_37:
            DelQEntry(v10, v6, 1LL);
            v6 = *(__int64 **)v10;
            goto LABEL_16;
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
        goto LABEL_15;
      }
LABEL_9:
      v16 = *((_DWORD *)v6 + 6);
      if ( v16 + 2147482655 <= 7 )
        v16 &= ~0x80000000;
      if ( !a4 )
      {
        if ( a5 == -1 )
          goto LABEL_19;
LABEL_14:
        if ( v16 <= a5 )
          goto LABEL_19;
        goto LABEL_15;
      }
      if ( a4 <= a5 )
      {
        if ( v16 < a4 )
          goto LABEL_15;
        goto LABEL_14;
      }
      if ( v16 < a5 || v16 > a4 )
      {
LABEL_19:
        if ( !a6 )
          return v6;
        v19 = v21;
        if ( !v21 )
          v19 = v6;
        v21 = v19;
      }
LABEL_15:
      v6 = (__int64 *)*v6;
      v10 = a2;
LABEL_16:
      if ( !v6 )
        return v21;
    }
  }
  return result;
}
