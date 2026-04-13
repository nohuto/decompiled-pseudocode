/*
 * XREFs of ?WriteHealthEvaluationInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x18001AB30
 * Callers:
 *     ??1?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@QEAA@XZ @ 0x18001A1A4 (--1-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ @ 0x180020464 (-Evaluate@-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180020708 (-Evaluate@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800209B0 (-Evaluate@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800083D8 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents<3>::WriteHealthEvaluationInfo(__int64 a1)
{
  const WCHAR *v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  HKEY v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 205) && *(_BYTE *)(a1 + 204) )
  {
    hKey = 0LL;
    v2 = (const WCHAR *)(a1 + 168);
    if ( *(_QWORD *)(a1 + 192) >= 8uLL )
      v2 = *(const WCHAR **)v2;
    v3 = RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
    if ( v3 )
    {
      v5 = 430LL;
    }
    else
    {
      v3 = RegSetValueExW(hKey, L"HealthEvaluation", 0, 3u, (const BYTE *)(a1 + 136), 0x14u);
      if ( !v3 )
        goto LABEL_10;
      v5 = 433LL;
    }
    wil::details::in1diag3::_Log_Win32(retaddr, v5, v4, (const char *)v3);
LABEL_10:
    v6 = hKey;
    *(_BYTE *)(a1 + 204) = 0;
    if ( v6 )
      RegCloseKey(v6);
  }
}
