/*
 * XREFs of DxgkSetPresenterViewMode @ 0x1C00C5F30
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C01560F0 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     Template_tt @ 0x1C001E820 (Template_tt.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkSetPresenterViewMode(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v3; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // zf
  bool v7; // di
  __int64 v9; // [rsp+20h] [rbp-18h]

  v3 = a1;
  if ( a2 )
  {
    v6 = *((_DWORD *)DXGGLOBAL::GetGlobal(a1) + 229) == 0;
  }
  else
  {
    v5 = (unsigned int)_InterlockedExchange((volatile __int32 *)DXGGLOBAL::GetGlobal(a1) + 229, (_BYTE)a1 != 0);
    v6 = (_DWORD)v5 == 0;
  }
  v7 = !v6;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v9) = a2;
    Template_tt(a2, v4, v5, v3, v9);
  }
  return v7;
}
