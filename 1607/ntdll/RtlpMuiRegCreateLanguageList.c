/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x180071974
 * Callers:
 *     RtlpSetProcUserMachineLangList @ 0x180012958 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegDupLanguageList @ 0x180013BF4 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044194 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     InitializeUserOrMachineLangList @ 0x180070A08 (InitializeUserOrMachineLangList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180070B60 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180071A10 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     _SafeAllocBlob @ 0x1800144BC (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  v7 = 0;
  if ( a1 < 1 )
    v3 = 4;
  result = SafeAllocBlob(0x40u, v3, 6u, 0, 0, &v7);
  if ( result )
  {
    *(_DWORD *)result = v7;
    *(_QWORD *)(result + 24) = result + 64;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v3;
    *(_BYTE *)(result + 8) = a2;
    *(_DWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 16) = a3;
  }
  return result;
}
