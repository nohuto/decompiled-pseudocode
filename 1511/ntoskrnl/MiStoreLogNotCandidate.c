/*
 * XREFs of MiStoreLogNotCandidate @ 0x140108AFC
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401CF38C (_TlgWriteEx.c)
 */

void __fastcall MiStoreLogNotCandidate(int a1)
{
  int v1; // edx
  ULONG64 v2; // r8
  const struct _TlgProvider_t *v3; // r9
  int v4; // r10d
  int v5; // r11d
  const GUID *v6; // [rsp+20h] [rbp-88h]
  const GUID *v7; // [rsp+28h] [rbp-80h]
  int v8; // [rsp+40h] [rbp-68h] BYREF
  int v9; // [rsp+44h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-58h] BYREF
  int *v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+7Ch] [rbp-2Ch]
  int *v14; // [rsp+80h] [rbp-28h]
  int v15; // [rsp+88h] [rbp-20h]
  int v16; // [rsp+8Ch] [rbp-1Ch]

  if ( hProvider && a1 != -1073741401 && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v13 = 0;
      v16 = 0;
      v11 = &v9;
      v14 = &v8;
      v9 = v4;
      v8 = v5;
      v12 = v1 + 2;
      v15 = v1 + 2;
      TlgWriteEx(v3, &unk_140254814, v2, (ULONG)v3, v6, v7, v1 + 2, &pData);
    }
  }
}
