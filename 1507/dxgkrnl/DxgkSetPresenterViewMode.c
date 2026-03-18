/*
 * XREFs of DxgkSetPresenterViewMode @ 0x1C00B13F0
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C0151E80 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     Template_tt @ 0x1C001E760 (Template_tt.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkSetPresenterViewMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  bool v8; // zf
  bool v9; // di
  __int64 v11; // [rsp+20h] [rbp-18h]

  v4 = a2;
  v5 = a1;
  if ( (_BYTE)a2 )
  {
    v8 = *((_DWORD *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + 193) == 0;
  }
  else
  {
    v7 = (unsigned int)_InterlockedExchange(
                         (volatile __int32 *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + 193,
                         (_BYTE)a1 != 0);
    v8 = (_DWORD)v7 == 0;
  }
  v9 = !v8;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v11) = v4;
    Template_tt(v4, v6, v7, v5, v11);
  }
  return v9;
}
