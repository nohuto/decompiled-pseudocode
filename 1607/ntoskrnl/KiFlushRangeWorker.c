/*
 * XREFs of KiFlushRangeWorker @ 0x1400DE860
 * Callers:
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiFlushRangeWorker(__int64 a1)
{
  void **v1; // r11
  unsigned __int64 v3; // rdi
  unsigned __int64 result; // rax
  int v5; // r9d
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  __int128 v8; // [rsp+0h] [rbp-38h]
  __int128 v9; // [rsp+10h] [rbp-28h]

  v1 = *(void ***)a1;
  _ESI = 0;
  v3 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
  {
    result = (unsigned __int64)*v1;
    v5 = (1 << *(_DWORD *)(a1 + 12)) & 0xA;
    if ( v5 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    {
      *(_QWORD *)&v8 = 1LL;
      *((_QWORD *)&v8 + 1) = *v1;
      __asm { invpcid esi, [rsp+38h+var_38] }
    }
    __invlpg((void *)result);
    v6 = result & 0x3FF;
    v7 = 4096LL << (9 * ((unsigned __int8)(result >> 10) & 3u));
    if ( (result & 0x3FF) != 0 )
    {
      do
      {
        result += v7;
        if ( v5 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        {
          *(_QWORD *)&v9 = 1LL;
          *((_QWORD *)&v9 + 1) = result;
          __asm { invpcid esi, [rsp+38h+var_28] }
        }
        __invlpg((void *)result);
        --v6;
      }
      while ( v6 );
    }
    ++v1;
  }
  while ( (unsigned __int64)v1 < v3 );
  return result;
}
