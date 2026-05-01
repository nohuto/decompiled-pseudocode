/*
 * XREFs of ??$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEBG00@Z @ 0x18001FD14
 * Callers:
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001D678 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026C94 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::OnEventQueued::OnEventQueued_EventName<unsigned short const *,unsigned short const *,unsigned short const *>(
        void **a1,
        void **a2,
        void **a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // rsi
  void *v8; // r10
  void *v9; // r11
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rcx
  void *v13; // rdx
  __int64 v14; // rax
  void *v15; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  void *v18; // [rsp+50h] [rbp-48h]
  int v19; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+5Ch] [rbp-3Ch]
  void *v21; // [rsp+60h] [rbp-38h]
  int v22; // [rsp+68h] [rbp-30h]
  int v23; // [rsp+6Ch] [rbp-2Ch]
  void *v24; // [rsp+70h] [rbp-28h]
  int v25; // [rsp+78h] [rbp-20h]
  int v26; // [rsp+7Ch] [rbp-1Ch]

  v6 = SingleViewExperienceLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = &unk_1800359D8;
    v9 = &unk_1800359D8;
    LODWORD(v10) = 0;
    if ( *a1 )
    {
      v9 = *a1;
      v10 = -1LL;
      do
        ++v10;
      while ( *((_WORD *)*a1 + v10) );
    }
    v11 = 2 * v10 + 2;
    v18 = v9;
    v12 = *a2;
    v13 = &unk_1800359D8;
    v19 = v11;
    LODWORD(v14) = 0;
    v20 = 0;
    if ( v12 )
    {
      v13 = v12;
      v14 = -1LL;
      do
        ++v14;
      while ( *((_WORD *)v12 + v14) );
    }
    v15 = *a3;
    v22 = 2 * v14 + 2;
    LODWORD(v14) = 0;
    v21 = v13;
    v23 = 0;
    if ( v15 )
    {
      v8 = v15;
      v14 = -1LL;
      do
        ++v14;
      while ( *((_WORD *)v15 + v14) );
    }
    v24 = v8;
    v25 = 2 * v14 + 2;
    v26 = 0;
    LODWORD(v6) = TlgWrite(v7, &unk_180043358, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
