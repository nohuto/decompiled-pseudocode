/*
 * XREFs of RtlWCSMessageWParamCharToMB @ 0x14003DEC4
 * Callers:
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     SfnINWPARAMCHAR @ 0x14021F710 (SfnINWPARAMCHAR.c)
 *     SfnINWPARAMDBCSCHAR @ 0x140232CE0 (SfnINWPARAMDBCSCHAR.c)
 * Callees:
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x14003CF24 (-THREAD_CODEPAGE@@YAGXZ.c)
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14018462C (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 */

__int64 __fastcall RtlWCSMessageWParamCharToMB(int a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int BytesInUnicodeString; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned int MultiByteString; // [rsp+40h] [rbp+8h] BYREF

  v3 = (unsigned int)(a1 - 47);
  if ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 157);
    if ( (_DWORD)v3 )
    {
      v3 = (unsigned int)(v3 - 54);
      if ( (_DWORD)v3 )
      {
        v3 = (unsigned int)(v3 - 1);
        if ( (_DWORD)v3 )
        {
          v3 = (unsigned int)(v3 - 3);
          if ( (_DWORD)v3 )
          {
            v3 = (unsigned int)(v3 - 1);
            if ( (_DWORD)v3 )
            {
              v3 = (unsigned int)(v3 - 8);
              if ( (_DWORD)v3 )
              {
                v3 = (unsigned int)(v3 - 17);
                if ( (_DWORD)v3 )
                {
                  if ( (_DWORD)v3 != 358 )
                    return 1LL;
                }
              }
            }
          }
        }
      }
    }
  }
  v5 = (unsigned __int16)THREAD_CODEPAGE(v3);
  MultiByteString = 0;
  BytesInUnicodeString = (**(_DWORD **)(W32GetUserSessionState(v7, v6) + 19904) & 2) != 0 ? 2 : 4;
  if ( (_WORD)v5 == NlsAnsiCodePage || !(_WORD)v5 )
  {
    if ( RtlUnicodeToMultiByteN((PCHAR)&MultiByteString, 4u, 0LL, (PCWCH)a2, BytesInUnicodeString) >= 0 )
      goto LABEL_16;
LABEL_13:
    *(_QWORD *)a2 = 0LL;
    return 1LL;
  }
  if ( !ConvertToAndFromWideChar(v5, (unsigned __int16 *)a2, BytesInUnicodeString, (char *)&MultiByteString, 4, 0) )
    goto LABEL_13;
LABEL_16:
  if ( (**(_DWORD **)(W32GetUserSessionState(v10, v9) + 19904) & 2) != 0 )
  {
    if ( (MultiByteString & 0xFF00) != 0 )
      v11 = ((unsigned __int64)(unsigned __int16)MultiByteString >> 8) | (((unsigned __int8)MultiByteString | ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) << 8)) << 8);
    else
      v11 = (unsigned __int8)MultiByteString;
    *(_QWORD *)a2 = v11;
  }
  else
  {
    *(_QWORD *)a2 = MultiByteString;
  }
  return 1LL;
}
