/*
 * XREFs of KsepMatchInitBiosInfo @ 0x1407B775C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1407B76CC (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcstoul @ 0x14014FA4C (wcstoul.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepRegistryCloseKey @ 0x140514A9C (KsepRegistryCloseKey.c)
 *     KsepRegistryOpenKey @ 0x140514C9C (KsepRegistryOpenKey.c)
 *     KsepRegistryQueryMULTISZ @ 0x1405793E8 (KsepRegistryQueryMULTISZ.c)
 *     KsepRegistryQuerySZ @ 0x140579410 (KsepRegistryQuerySZ.c)
 */

__int64 KsepMatchInitBiosInfo()
{
  int v0; // edi
  int v1; // eax
  HANDLE v2; // rbx
  int MULTISZ; // esi
  char v4; // al
  __int64 v5; // rax
  _WORD *v6; // rcx
  unsigned __int64 v7; // rax
  char v8; // al
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  wchar_t v16[3]; // [rsp+40h] [rbp-20h] BYREF
  wchar_t v17[3]; // [rsp+46h] [rbp-1Ah] BYREF
  wchar_t Str[6]; // [rsp+4Ch] [rbp-14h] BYREF

  KeyHandle = 0LL;
  memset(&qword_1403413E8, 0, 0x38uLL);
  v0 = -1;
  v1 = KsepRegistryOpenKey(L"\\Registry\\Machine\\Hardware\\Description\\System", 0LL, &KeyHandle);
  v2 = KeyHandle;
  MULTISZ = v1;
  if ( v1 >= 0 )
  {
    MULTISZ = KsepRegistryQuerySZ(KeyHandle, L"SystemBiosDate", 1, v16, 0x16uLL, &v15);
    if ( MULTISZ >= 0 )
    {
      Str[4] = 0;
      v4 = KsepDebugFlag;
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655816LL;
      if ( (v4 & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: BiosDate name [%ws] .\n", v16);
      KsepLogInfo(0LL, (__int64)"KSE: BiosDate name [%ws] .\n", v16);
      MULTISZ = KsepRegistryQueryMULTISZ(KeyHandle, L"SystemBiosVersion", (__int64)&unk_140329480, 520LL, (__int64)&v15);
      word_140329686 = 0;
      v5 = 0LL;
      v6 = &unk_140329480;
      while ( *v6 != 32 )
      {
        v5 = (unsigned int)(v5 + 1);
        ++v6;
        if ( (unsigned int)v5 >= 0x104 )
          goto LABEL_11;
      }
      v7 = 2 * v5;
      if ( v7 >= 0x208 )
        _report_rangecheckfailure();
      *(_WORD *)((char *)&unk_140329480 + v7) = 0;
LABEL_11:
      v8 = KsepDebugFlag;
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655840LL;
      if ( (v8 & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: BiosVendor name [%ws] .\n", &unk_140329480);
      KsepLogInfo(0LL, (__int64)"KSE: BiosVendor name [%ws] .\n", &unk_140329480);
      v16[2] = 0;
      v17[2] = 0;
      v9 = wcstoul(Str, 0LL, 16);
      if ( v9 >= 0x80 )
        v10 = v9 + 6400;
      else
        v10 = v9 + 0x2000;
      v11 = wcstoul(v16, 0LL, 16) << 8;
      v12 = v11 + wcstoul(v17, 0LL, 16);
      v2 = KeyHandle;
      v0 = v12 + (v10 << 16);
    }
  }
  if ( v2 )
    KsepRegistryCloseKey(v2);
  if ( MULTISZ < 0 )
  {
    dword_140341410 = -1;
    qword_1403413E8 = 0LL;
  }
  else
  {
    qword_1403413E8 = (__int64)&unk_140329480;
    dword_140341410 = v0;
  }
  return (unsigned int)MULTISZ;
}
