/*
 * XREFs of RtlWCSMessageWParamCharToMB @ 0x1C02461D8
 * Callers:
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     fnHkINLPMSG @ 0x1C0084D00 (fnHkINLPMSG.c)
 *     SfnINWPARAMCHAR @ 0x1C0209B00 (SfnINWPARAMCHAR.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1C0209E20 (SfnINWPARAMDBCSCHAR.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C0017E28 (ConvertToAndFromWideChar.c)
 *     THREAD_CODEPAGE @ 0x1C020C134 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall RtlWCSMessageWParamCharToMB(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // ax
  ULONG BytesInUnicodeString; // edx
  __int64 v7; // rax
  unsigned int MultiByteString; // [rsp+40h] [rbp+8h] BYREF

  if ( (_DWORD)a1 == 47
    || (_DWORD)a1 == 204
    || (unsigned int)a1 > 0x101
    && ((unsigned int)a1 <= 0x103
     || (unsigned int)a1 > 0x105
     && ((unsigned int)a1 <= 0x107 || (_DWORD)a1 == 271 || (_DWORD)a1 == 288 || (_DWORD)a1 == 646)) )
  {
    v5 = THREAD_CODEPAGE(a1, a2, a3, a4);
    MultiByteString = 0;
    BytesInUnicodeString = (*gpsi & 2) != 0 ? 2 : 4;
    if ( v5 == NlsAnsiCodePage || !v5 )
    {
      if ( RtlUnicodeToMultiByteN((PCHAR)&MultiByteString, 4u, 0LL, (PCWCH)a2, BytesInUnicodeString) < 0 )
        goto LABEL_13;
    }
    else if ( !(unsigned int)ConvertToAndFromWideChar(
                               v5,
                               (WCHAR *)a2,
                               BytesInUnicodeString,
                               (CHAR *)&MultiByteString,
                               4u,
                               0) )
    {
LABEL_13:
      *(_QWORD *)a2 = 0LL;
      return 1LL;
    }
    if ( (*gpsi & 2) != 0 )
    {
      if ( (MultiByteString & 0xFF00) != 0 )
      {
        *(_QWORD *)a2 = BYTE1(MultiByteString) | (unsigned __int16)((unsigned __int8)MultiByteString << 8) | (unsigned __int64)(*(unsigned __int16 *)(a2 + 2) << 16);
        return 1LL;
      }
      v7 = (unsigned __int8)MultiByteString;
    }
    else
    {
      v7 = MultiByteString;
    }
    *(_QWORD *)a2 = v7;
  }
  return 1LL;
}
