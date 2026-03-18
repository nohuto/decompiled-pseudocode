/*
 * XREFs of DpiGetDbgInfoAdapters @ 0x1C002335C
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C001E1A8 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C013CE00 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

__int64 __fastcall DpiGetDbgInfoAdapters(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r11d
  _QWORD *v4; // r10
  __int64 *v5; // r9
  int DriverVersion; // eax
  __int64 v7; // r8
  int v8; // r11d

  v1 = qword_1C0046C78;
  v2 = 0;
  v4 = (_QWORD *)qword_1C0046C78;
  if ( (_QWORD *)*v4 != v4 )
  {
    do
    {
      if ( v2 >= 7 )
        break;
      v5 = (__int64 *)v4[7];
      if ( (__int64 *)*v5 != v5 )
      {
        do
        {
          if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 && *((_DWORD *)v5 + 59) == 2 )
          {
            if ( v2 >= 7 )
              break;
            DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v5[313]);
            *(_DWORD *)(a1 + 8 * v7) = DriverVersion;
            *(_DWORD *)(a1 + 8 * v7 + 4) = *((_DWORD *)v5 + 257);
            *(_DWORD *)(a1 + 8 * v7 + 8) = *((_DWORD *)v5 + 258);
            *(_DWORD *)(a1 + 8 * v7 + 12) ^= (*(_DWORD *)(a1 + 8 * v7 + 12) ^ (*(_DWORD *)(v5[313] + 160) == 1)) & 1;
            *(_DWORD *)(a1 + 8 * v7 + 12) ^= (*(_DWORD *)(a1 + 8 * v7 + 12) ^ (2 * *((unsigned __int8 *)v5 + 1056))) & 2;
            v2 = v8 + 1;
          }
          v5 = (__int64 *)*v5;
        }
        while ( *v5 != v4[7] );
        v1 = qword_1C0046C78;
      }
      v4 = (_QWORD *)*v4;
    }
    while ( *v4 != v1 );
  }
  return 0LL;
}
