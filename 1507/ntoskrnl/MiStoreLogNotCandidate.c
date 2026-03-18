/*
 * XREFs of MiStoreLogNotCandidate @ 0x140231634
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 */

void __fastcall MiStoreLogNotCandidate(int a1)
{
  int v1; // edx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider && a1 != -1073741401 && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v11 = 0;
      v14 = 0;
      v9 = &v7;
      v12 = &v6;
      v7 = v4;
      v6 = v5;
      v10 = v1 + 2;
      v13 = v1 + 2;
      MmTlgWrite(v3, (unsigned __int8 *)dword_1402A46FB, v2, v3, v1 + 2, &v8);
    }
  }
}
