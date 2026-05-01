/*
 * XREFs of RmpSystemPublishGlobalGameModeState @ 0x180037ADC
 * Callers:
 *     ?RmpGameModePublishGlobalState@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001E37C (-RmpGameModePublishGlobalState@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

char __fastcall RmpSystemPublishGlobalGameModeState(char a1)
{
  int v1; // eax
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  char v7[8]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  int *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v7[0] = a1;
  v1 = RtlPublishWnfStateData(WNF_RM_GAME_MODE_ACTIVE, 0LL, v7, 1LL, 0LL);
  v8 = v1;
  if ( v1 < 0 && (unsigned int)dword_18004C030 > 4 )
  {
    LOBYTE(v1) = TlgKeywordOn(v2, 0x400000000001uLL);
    if ( (_BYTE)v1 )
    {
      v12 = 0;
      v10 = &v8;
      v11 = 4;
      LOBYTE(v1) = TlgWrite(v3, &unk_1800432C9, v4, v5, 3u, &pData);
    }
  }
  return v1;
}
