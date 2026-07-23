/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x180071964
 * Callers:
 *     RtlpSetProcUserMachineLangList @ 0x180012948 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegDupLanguageList @ 0x180013BE4 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044184 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     InitializeUserOrMachineLangList @ 0x1800709F8 (InitializeUserOrMachineLangList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180070B50 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712C8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180071A00 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     _SafeAllocBlob @ 0x1800144AC (_SafeAllocBlob.c)
 */

_QWORD *__fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD *result; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  v7 = 0;
  if ( a1 < 1 )
    v3 = 4;
  result = SafeAllocBlob(0x40u, v3, 6u, 0, 0, &v7);
  if ( result )
  {
    *(_DWORD *)result = v7;
    result[3] = result + 8;
    *((_WORD *)result + 2) = 0;
    *((_WORD *)result + 3) = v3;
    *((_BYTE *)result + 8) = a2;
    *((_DWORD *)result + 10) = 0;
    result[2] = a3;
  }
  return result;
}
