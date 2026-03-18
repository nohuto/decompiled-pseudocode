/*
 * XREFs of xxxCallJournalRecordHook @ 0x1C01DDD0C
 * Callers:
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C00579F0 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0057C74 (PhkFirstGlobalValid.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 */

__int16 __fastcall xxxCallJournalRecordHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // r8
  int v8; // eax
  __int64 GlobalValid; // rax
  int v10; // ecx
  __int16 result; // ax
  int v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+34h] [rbp-1Ch]
  _QWORD v14[2]; // [rsp+3Ch] [rbp-14h] BYREF
  int v15; // [rsp+60h] [rbp+10h] BYREF

  memset(v14, 0, 12);
  LOBYTE(a2) = 1;
  v13 = 0LL;
  v12 = *(_DWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 16);
  LODWORD(v14[0]) = v5;
  if ( HMValidateHandleNoSecure(v6, a2, a3, a4) )
    *(_QWORD *)((char *)v14 + 4) = *(_QWORD *)(a1 + 16);
  else
    *(_QWORD *)((char *)v14 + 4) = 0LL;
  if ( (unsigned int)(v12 - 512) > 0xE )
  {
    if ( (unsigned int)(v12 - 256) <= 9 )
    {
      v7 = *(_BYTE *)(a1 + 42);
      if ( *(_WORD *)(a1 + 32) != 231 || v7 )
        LODWORD(v13) = *(unsigned __int8 *)(a1 + 32) | (unsigned __int16)(v7 << 8);
      else
        LODWORD(v13) = (*(unsigned __int16 *)(gptiCurrent + 762LL) << 16) | 0xE7;
      v8 = *(_DWORD *)(a1 + 40);
      HIDWORD(v13) = v7;
      if ( (v8 & 0x1000000) != 0 )
        HIDWORD(v13) = v7 | 0x8000;
    }
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 52);
  }
  GlobalValid = PhkFirstGlobalValid(gptiCurrent, 0);
  xxxCallHook2(GlobalValid, 0, 0LL, &v12, &v15, 0);
  v10 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v10 - 512) > 0xE )
  {
    result = v10 - 256;
    if ( (unsigned int)(v10 - 256) <= 9 )
    {
      *(_BYTE *)(a1 + 32) = v13;
      result = BYTE1(v13);
      *(_BYTE *)(a1 + 42) = BYTE1(v13);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = v13;
    result = WORD2(v13);
    *(_DWORD *)(a1 + 56) = HIDWORD(v13);
  }
  return result;
}
