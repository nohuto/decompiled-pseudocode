/*
 * XREFs of ?TimerCallback@CWatchDogTimer@@SAXPEAXE@Z @ 0x18008C460
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800315C0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180037F6C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_1800E7500 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
  {
    v3 = &word_1800B1B90;
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
    TlgWrite(v1, &unk_1800C6678, 0LL, v2, 3u, &pData);
  }
}
