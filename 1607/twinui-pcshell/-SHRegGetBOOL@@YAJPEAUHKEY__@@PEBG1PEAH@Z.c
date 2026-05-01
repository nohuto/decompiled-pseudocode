/*
 * XREFs of ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180008F78
 * Callers:
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x180007480 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180012348 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800128C0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18001C220 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHRegGetBOOL(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int *a4)
{
  LSTATUS ValueW; // eax
  int v6; // ecx
  bool v7; // zf
  __int64 result; // rax
  unsigned int v9; // [rsp+40h] [rbp-18h] BYREF
  DWORD v10; // [rsp+44h] [rbp-14h] BYREF
  DWORD v11[4]; // [rsp+48h] [rbp-10h] BYREF

  v10 = 0;
  v11[0] = 4;
  ValueW = RegGetValueW(a1, a2, a3, 0x10000012u, &v10, &v9, v11);
  v6 = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      ValueW = 13;
    v6 = ValueW;
  }
  else
  {
    if ( v10 == 4 )
    {
      if ( v9 > 1 )
        goto LABEL_12;
      v7 = v9 == 1;
    }
    else
    {
      if ( v11[0] != 4 || (unsigned __int16)(v9 - 48) > 1u )
        goto LABEL_12;
      ValueW = 0;
      v7 = (_WORD)v9 == 49;
    }
    LOBYTE(ValueW) = v7;
    v6 = 0;
    *a4 = ValueW;
  }
LABEL_12:
  result = (unsigned __int16)v6 | 0x80070000;
  if ( v6 <= 0 )
    return (unsigned int)v6;
  return result;
}
