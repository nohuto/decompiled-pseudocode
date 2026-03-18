/*
 * XREFs of PfSnOperationProcess @ 0x1404C470C
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1404D55E4 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfSnEndProcessTrace @ 0x1404D62A0 (PfSnEndProcessTrace.c)
 *     PfSnCheckScenario @ 0x1404D664C (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x1404D6804 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x1404D6D78 (PfSnBeginScenario.c)
 *     PfSnFindImageFileName @ 0x1404D7858 (PfSnFindImageFileName.c)
 */

__int64 __fastcall PfSnOperationProcess(__int64 a1)
{
  PVOID v2; // rsi
  char v3; // al
  int v4; // eax
  bool v5; // zf
  _KPROCESS *Process; // r14
  int v7; // eax
  unsigned int v8; // ebx
  __int64 ImageFileName; // rbx
  int v11; // ecx
  __int64 v12; // r9
  PVOID P; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v15[4]; // [rsp+3Ch] [rbp-1Dh] BYREF
  wchar_t pszDest[32]; // [rsp+40h] [rbp-19h] BYREF

  v2 = 0LL;
  P = 0LL;
  if ( *(_BYTE *)a1 != 1 || (v3 = *(_BYTE *)(a1 + 1), (v3 & 0xFE) != 0) || *(_WORD *)(a1 + 2) )
  {
    v8 = -1073741811;
    goto LABEL_14;
  }
  if ( (v3 & 1) != 0 )
  {
    v5 = (*(_DWORD *)(a1 + 4) & 0xFFFFFFFE) == 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 4);
    if ( (v4 & 4) != 0 && (v4 & 3) != 0 )
      return (unsigned int)-1073741811;
    v5 = (v4 & 0xFFFFFFF8) == 0;
  }
  if ( !v5 )
    return (unsigned int)-1073741811;
  if ( (int)PfSnCheckScenario(1LL, &v14) < 0 )
    return 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = PfCalculateProcessHash(Process, &P);
  v2 = P;
  v8 = v7;
  if ( v7 >= 0 )
  {
    ImageFileName = PfSnFindImageFileName(P, v15);
    if ( ImageFileName )
    {
      memset(pszDest, 0, sizeof(pszDest));
      RtlStringCbPrintfW(pszDest, 0x3CuLL, L"Op-%.17s-%08X", ImageFileName, Process[1].ThreadSeed[1]);
      *(_DWORD *)&pszDest[30] = *(_DWORD *)(a1 + 8);
      if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      {
        PfSnEndProcessTrace(Process, *(_BYTE *)(a1 + 4) & 1 | 8u);
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 4);
        v12 = (v11 & 1) != 0;
        if ( (v11 & 2) != 0 || v14 == 2 )
        {
          v12 = (unsigned int)v12 | 2;
        }
        else if ( (v11 & 4) != 0 )
        {
          v12 = (unsigned int)v12 | 4;
        }
        PfSnBeginScenario(Process, pszDest, 1LL, v12);
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741595;
    }
  }
LABEL_14:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v8;
}
