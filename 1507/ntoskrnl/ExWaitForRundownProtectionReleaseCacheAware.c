/*
 * XREFs of ExWaitForRundownProtectionReleaseCacheAware @ 0x14010CE20
 * Callers:
 *     RawVerifyVolume @ 0x140244EE8 (RawVerifyVolume.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     RawUserFsCtrl @ 0x14055F784 (RawUserFsCtrl.c)
 *     VerifierExWaitForRundownProtectionReleaseCacheAware @ 0x140741C44 (VerifierExWaitForRundownProtectionReleaseCacheAware.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

void __stdcall ExWaitForRundownProtectionReleaseCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRef)
{
  unsigned int v2; // ecx
  unsigned __int64 v3; // r11
  unsigned int v4; // r9d
  int v5; // edx
  __int64 v6; // rax
  signed __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  __int16 Object; // [rsp+38h] [rbp-30h] BYREF
  char v9; // [rsp+3Ah] [rbp-2Eh]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  v2 = *((_DWORD *)RunRef + 5);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    do
    {
      v5 = v4 % v2;
      ++v4;
      v6 = _InterlockedExchange64(
             (volatile __int64 *)(*(_QWORD *)RunRef + (unsigned int)(*((_DWORD *)RunRef + 4) * v5)),
             (__int64)&v7 + 1);
      v2 = *((_DWORD *)RunRef + 5);
      v3 += v6;
    }
    while ( v4 < v2 );
    if ( v3 )
    {
      v11[1] = v11;
      v11[0] = v11;
      Object = 1;
      v9 = 6;
      v10 = 0;
      if ( _InterlockedExchangeAdd64(&v7, v3 >> 1) != -(__int64)(v3 >> 1) )
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    }
  }
}
