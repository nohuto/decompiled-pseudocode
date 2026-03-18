/*
 * XREFs of RtlMBMessageWParamCharToWCS @ 0x14003E354
 * Callers:
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     fnHkINLPMSG @ 0x14003B750 (fnHkINLPMSG.c)
 *     NtUserfnINWPARAMCHAR @ 0x14023EEB0 (NtUserfnINWPARAMCHAR.c)
 * Callees:
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x14003CF24 (-THREAD_CODEPAGE@@YAGXZ.c)
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14018462C (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 */

__int64 __fastcall RtlMBMessageWParamCharToWCS(__int64 a1, CHAR *a2)
{
  unsigned __int64 v2; // rbp
  BOOL v3; // r14d
  int v5; // ebx
  __int64 v6; // rdx
  _BYTE *v7; // rcx
  unsigned int v8; // esi
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int UnicodeString; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 *)a2;
  UnicodeString = 0;
  v3 = 0;
  v5 = a1;
  v8 = (unsigned __int16)THREAD_CODEPAGE(a1);
  v9 = v5 - 47;
  if ( v9 )
  {
    v10 = v9 - 157;
    if ( v10 )
    {
      v11 = v10 - 54;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
          goto LABEL_16;
        v13 = v12 - 3;
        if ( !v13 )
          goto LABEL_16;
        v14 = v13 - 1;
        if ( !v14 )
          goto LABEL_16;
        v15 = v14 - 8;
        if ( v15 )
        {
          v16 = v15 - 17;
          if ( !v16 )
            goto LABEL_16;
          if ( v16 != 358 )
            return 1LL;
        }
      }
      else
      {
        v7 = *(_BYTE **)(W32GetUserSessionState(v7, v6) + 19904);
        LOBYTE(v7) = (*v7 & 2) != 0;
        v3 = (((*(_QWORD *)a2 & 0x80000000LL) != 0) & (unsigned __int8)v7) != 0;
      }
      if ( (**(_DWORD **)(W32GetUserSessionState(v7, v6) + 19904) & 2) != 0 )
      {
        if ( (v2 & 0xFF00) != 0 )
          v17 = (v2 >> 8) | ((unsigned __int64)(unsigned __int8)v2 << 8);
        else
          v17 = (unsigned __int8)v2;
        *(_QWORD *)a2 = v17;
      }
    }
  }
LABEL_16:
  if ( (_WORD)v8 == NlsAnsiCodePage || !(_WORD)v8 )
  {
    if ( RtlMultiByteToUnicodeN((PWCH)&UnicodeString, 4u, 0LL, a2, 2u) >= 0 )
      goto LABEL_19;
  }
  else if ( ConvertToAndFromWideChar(v8, (unsigned __int16 *)&UnicodeString, 4, a2, 2, 1) )
  {
LABEL_19:
    v18 = UnicodeString;
    if ( v3 )
      v18 = UnicodeString | 0x80000000;
    *(_QWORD *)a2 = v18;
    return 1LL;
  }
  return 0LL;
}
