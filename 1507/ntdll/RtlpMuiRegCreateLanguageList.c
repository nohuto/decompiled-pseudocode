/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x18001DA70
 * Callers:
 *     RtlpSetProcUserMachineLangList @ 0x18001BAC8 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegDupLanguageList @ 0x18001CDB8 (RtlpMuiRegDupLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x18001DA28 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     InitializeUserOrMachineLangList @ 0x180048B38 (InitializeUserOrMachineLangList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180048CF0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800495D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180049C70 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     _SafeAllocBlob @ 0x18001DB04 (_SafeAllocBlob.c)
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
