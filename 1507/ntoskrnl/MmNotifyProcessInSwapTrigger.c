/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x14010C878
 * Callers:
 *     KiRequestProcessInSwap @ 0x14010C75C (KiRequestProcessInSwap.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401FB4C0 (_TlgCreateSz.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 */

char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  char result; // al
  __int64 v2; // r10
  int v3; // r8d
  int v4; // r9d
  int v5; // [rsp+30h] [rbp-68h] BYREF
  __int64 v6[4]; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  result = *(_BYTE *)(a1 + 1491) & 0xC0;
  if ( result == (char)0x80 && hProvider && hProvider->LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(hProvider, 8uLL);
    if ( result )
    {
      v5 = *(_DWORD *)(v2 + 744);
      TlgCreateSz(&pDesc, (LPCSTR)(v2 + 1096));
      v10 = 0;
      v8 = &v5;
      v9 = 4;
      return MmTlgWrite(v4, (int)&dword_1402A433A, v3, v4, 4u, (__int64)v6);
    }
  }
  return result;
}
