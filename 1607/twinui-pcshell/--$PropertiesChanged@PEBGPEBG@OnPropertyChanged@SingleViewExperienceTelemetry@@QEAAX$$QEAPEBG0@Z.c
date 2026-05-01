/*
 * XREFs of ??$PropertiesChanged@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x18001F69C
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001C808 (-OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026C94 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::PropertiesChanged<unsigned short const *,unsigned short const *>(
        __int64 a1,
        void **a2,
        void **a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  void *v8; // rdx
  void *v9; // r8
  __int64 v10; // rax
  void *v11; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  void *v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+5Ch] [rbp-2Ch]
  void *v17; // [rsp+60h] [rbp-28h]
  int v18; // [rsp+68h] [rbp-20h]
  int v19; // [rsp+6Ch] [rbp-1Ch]

  v6 = SingleViewExperienceLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    LODWORD(v6) = 0;
    if ( (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v8 = &unk_1800359D8;
      v9 = &unk_1800359D8;
      LODWORD(v10) = 0;
      if ( *a2 )
      {
        v9 = *a2;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)*a2 + v10) );
      }
      v11 = *a3;
      v15 = 2 * v10 + 2;
      LODWORD(v10) = 0;
      v14 = v9;
      v16 = 0;
      if ( v11 )
      {
        v8 = v11;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)v11 + v10) );
      }
      v17 = v8;
      v18 = 2 * v10 + 2;
      v19 = 0;
      LODWORD(v6) = TlgWrite(v7, &unk_180043445, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  return (int)v6;
}
