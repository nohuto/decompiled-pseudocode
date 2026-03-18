/*
 * XREFs of DrvQueryDisplayConfig @ 0x1C004C1B0
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C004B650 (NtUserQueryDisplayConfig.c)
 *     rimGetQDCActivePathsData @ 0x1C00503A8 (rimGetQDCActivePathsData.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00AA368 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00BD928 (DrvProcessSetDisplayConfigParameters.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C004C9D8 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvQueryDisplayConfig(unsigned int a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // rbx
  __int64 v10; // rax
  char v11; // bp
  _DWORD *v12; // rcx
  int v13; // ebx
  __int64 i; // rdx
  __int64 v15; // rax

  v7 = a1;
  v10 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v10 + 24) = v7;
  WdLogEvent5_WdEvent(v10);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
  {
    if ( (_DWORD)v7 == 4 && (unsigned __int8)((__int64 (*)(void))qword_1C01043C0)() )
    {
      v11 = 1;
      LODWORD(v7) = 2;
      v12 = 0LL;
    }
    else
    {
      v11 = 0;
      v12 = a6;
    }
    v13 = ((__int64 (__fastcall *)(_QWORD, _DWORD *, __int64, __int64, __int64, _DWORD *))qword_1C0104148)(
            (unsigned int)v7,
            a2,
            a3,
            a4,
            a5,
            v12);
    if ( v13 >= 0 )
    {
      for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)(a3 + 72 * i + 48) == -2 && *(_DWORD *)(a3 + 72 * i + 52) == -2 )
        {
          *(_DWORD *)(a3 + 72 * i + 48) = 64;
          *(_DWORD *)(a3 + 72 * i + 52) = 1;
        }
      }
      if ( v11 )
        *a6 = 4;
    }
  }
  else
  {
    v13 = -1073741637;
  }
  v15 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v15 + 24) = v13;
  WdLogEvent5_WdEvent(v15);
  return (unsigned int)v13;
}
