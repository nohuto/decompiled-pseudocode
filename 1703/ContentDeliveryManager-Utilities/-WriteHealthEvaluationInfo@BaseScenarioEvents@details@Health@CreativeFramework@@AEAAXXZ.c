/*
 * XREFs of ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180026B4C
 * Callers:
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x180026670 (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180026C2C (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180022D6C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  HKEY v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 254) && *((_BYTE *)this + 253) )
  {
    hKey = 0LL;
    v2 = (const WCHAR *)((char *)this + 216);
    if ( *((_QWORD *)this + 30) >= 8uLL )
      v2 = *(const WCHAR **)v2;
    v3 = RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
    if ( v3 )
    {
      v5 = 443LL;
    }
    else
    {
      v3 = RegSetValueExW(hKey, L"HealthEvaluation", 0, 3u, (const BYTE *)this + 144, 0x24u);
      if ( !v3 )
        goto LABEL_10;
      v5 = 446LL;
    }
    wil::details::in1diag3::_Log_Win32(retaddr, (void *)v5, v4, (const char *)v3);
LABEL_10:
    v6 = hKey;
    *((_BYTE *)this + 253) = 0;
    if ( v6 )
      RegCloseKey(v6);
  }
}
