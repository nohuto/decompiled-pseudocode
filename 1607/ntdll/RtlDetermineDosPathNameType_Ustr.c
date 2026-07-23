/*
 * XREFs of RtlDetermineDosPathNameType_Ustr @ 0x18001E5E8
 * Callers:
 *     LdrpPreprocessDllName @ 0x180015880 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x18001BACC (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D820 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001E280 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlDosSearchPath_Ustr @ 0x180042800 (RtlDosSearchPath_Ustr.c)
 *     RtlpDetermineDosPathNameType4 @ 0x18006C514 (RtlpDetermineDosPathNameType4.c)
 *     RtlpInitCurrentDir @ 0x1800793E8 (RtlpInitCurrentDir.c)
 *     RtlpComputeBackupIndex @ 0x180082398 (RtlpComputeBackupIndex.c)
 *     RtlNtPathNameToDosPathName @ 0x1800CFD00 (RtlNtPathNameToDosPathName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDetermineDosPathNameType_Ustr(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  _WORD *v2; // rdx
  __int64 result; // rax
  unsigned int v4; // ecx

  v1 = *a1;
  v2 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( *a1 >= 2u && (*v2 == 92 || *v2 == 47) )
  {
    result = 4LL;
    if ( v1 >= 4u && (v2[1] == 92 || v2[1] == 47) )
    {
      result = 6LL;
      if ( v1 >= 6u && (v2[2] == 46 || v2[2] == 63) )
      {
        if ( v1 < 8u || v2[3] != 92 && v2[3] != 47 )
        {
          v4 = 1;
          if ( v1 == 6 )
            return 7;
          return v4;
        }
      }
      else
      {
        return 1LL;
      }
    }
  }
  else if ( v1 >= 4u && *v2 && v2[1] == 58 )
  {
    if ( v1 >= 6u && (v2[2] == 92 || v2[2] == 47) )
      return 2LL;
    else
      return 3LL;
  }
  else
  {
    return 5LL;
  }
  return result;
}
