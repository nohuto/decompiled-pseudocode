/*
 * XREFs of LoadDDB @ 0x1C000623C
 * Callers:
 *     LoadMemDDB @ 0x1C0005EEC (LoadMemDDB.c)
 *     LoadFieldUnitDDB @ 0x1C0045ACC (LoadFieldUnitDDB.c)
 *     LoadTable @ 0x1C0048080 (LoadTable.c)
 *     AMLILoadDDB @ 0x1C008606C (AMLILoadDDB.c)
 * Callees:
 *     PushFrame @ 0x1C0013EA4 (PushFrame.c)
 *     RtlStringCchCopyNA @ 0x1C001DD04 (RtlStringCchCopyNA.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     FreeContext @ 0x1C0046CB4 (FreeContext.c)
 */

__int64 __fastcall LoadDDB(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 v9; // rcx
  char pszSrc[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( gdwfAMLIInit >= 0 && !strncmp((const char *)(a2 + 28), "MSFT", 4uLL) && *(_DWORD *)(a2 + 32) < 0x1000000u )
  {
    v8 = -1072431079;
    LogError(3222536217LL);
    *(_DWORD *)pszSrc = *(_DWORD *)a2;
    RtlStringCchCopyNA(pszDest, 5uLL, pszSrc, 4uLL);
    PrintDebugMessage(80, (unsigned int)pszDest, a2, 0, 0LL);
    goto LABEL_8;
  }
  v8 = PushFrame(a1, 1179927628, 64, (unsigned int)ParseLoad, (__int64)pszSrc);
  if ( v8 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 88) = 0LL;
    FreeContext(a1);
    return v8;
  }
  v9 = *(_QWORD *)pszSrc;
  *(_QWORD *)(*(_QWORD *)pszSrc + 32LL) = a3;
  *(_QWORD *)(v9 + 48) = a4;
  *(_QWORD *)(v9 + 56) = a2;
  return v8;
}
