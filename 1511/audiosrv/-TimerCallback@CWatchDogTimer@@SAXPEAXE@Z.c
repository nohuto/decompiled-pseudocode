/*
 * XREFs of ?TimerCallback@CWatchDogTimer@@SAXPEAXE@Z @ 0x180088DE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180005DB8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180069F24 (_TlgWrite.c)
 */

void __fastcall CWatchDogTimer::TimerCallback(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r9
  __int16 *v3; // rdx
  __int64 v4; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int16 *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800E5500 > 2 && TlgKeywordOn(a1, 0x400000000000uLL) )
  {
    v3 = &word_1800AFAB8;
    LODWORD(v4) = 0;
    if ( v1 )
    {
      v3 = (__int16 *)v1;
      v4 = -1LL;
      do
        ++v4;
      while ( *((_WORD *)v1 + v4) );
    }
    v6 = v3;
    v7 = 2 * v4 + 2;
    v8 = 0;
    TlgWrite(v1, &unk_1800C4AF0, 0LL, v2, 3u, &pData);
  }
}
