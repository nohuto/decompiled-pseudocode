/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x180005200
 * Callers:
 *     RtlpMuiRegDupLanguageList @ 0x1800046DC (RtlpMuiRegDupLanguageList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180004780 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x180005100 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     InitializeUserOrMachineLangList @ 0x180039CC8 (InitializeUserOrMachineLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180039D8C (RtlpSetProcUserMachineLangList.c)
 * Callees:
 *     _SafeAllocBlob @ 0x18001A4CC (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  int v3; // ebx
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  v7 = 0;
  if ( a1 < 1 )
    v3 = 4;
  result = SafeAllocBlob(64, v3, 6, 0, 0, (__int64)&v7);
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
