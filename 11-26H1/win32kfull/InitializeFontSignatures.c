/*
 * XREFs of InitializeFontSignatures @ 0x1403FC640
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140323A20 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 */

void __fastcall InitializeFontSignatures(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 Context; // [rsp+30h] [rbp-49h] BYREF
  __int64 v7; // [rsp+38h] [rbp-41h]
  __int128 v8; // [rsp+40h] [rbp-39h]
  __int64 v9; // [rsp+50h] [rbp-29h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-19h] BYREF
  __int64 v11; // [rsp+98h] [rbp+1Fh]
  int v12; // [rsp+A0h] [rbp+27h]
  __int64 v13; // [rsp+A8h] [rbp+2Fh]
  USHORT AnsiCodePage; // [rsp+E0h] [rbp+67h] BYREF
  USHORT OemCodePage; // [rsp+E8h] [rbp+6Fh] BYREF

  QueryTable.Flags = 4;
  v9 = 0LL;
  memset(&QueryTable.Name, 0, 20);
  v8 = 0LL;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)DefaultFontQueryRoutine;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  Context = 0LL;
  v7 = 0LL;
  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  *(_QWORD *)(v2 + 19696) = 0LL;
  *(_QWORD *)(v2 + 19704) = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) >= 0 )
  {
    v3 = PALLOCMEM(HIDWORD(Context) + 4 * (int)Context, 1885433159LL);
    *(_QWORD *)(v2 + 19696) = v3;
    if ( v3 )
    {
      v4 = (unsigned int)Context;
      v7 = v3;
      v5 = *(_QWORD *)(v2 + 19696);
      LODWORD(Context) = 0;
      *(_QWORD *)&v8 = v5 + 4 * v4;
      *((_QWORD *)&v8 + 1) = v8;
      if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) < 0 )
      {
        Win32FreePool(*(void **)(v2 + 19696));
        *(_QWORD *)(v2 + 19696) = 0LL;
      }
      else
      {
        *(_QWORD *)(v2 + 19704) = v8;
        *(_BYTE *)(v2 + 19712) = v9;
        AnsiCodePage = 0;
        OemCodePage = 0;
        RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
        if ( AnsiCodePage == 0xFDE9 )
          *(_BYTE *)(v2 + 19712) = -2;
      }
    }
  }
}
