/*
 * XREFs of PfSnOperationProcess @ 0x1404D2240
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1403EC51C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfSnCheckScenario @ 0x1403E7C68 (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x1403E7E20 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x1403E8500 (PfSnBeginScenario.c)
 *     PfSnFindImageFileName @ 0x1403E8F4C (PfSnFindImageFileName.c)
 *     PfSnEndProcessTrace @ 0x1403EA4F4 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnOperationProcess(__int64 a1)
{
  PVOID v2; // rsi
  char v3; // al
  bool v4; // zf
  _KPROCESS *Process; // r14
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 ImageFileName; // rbx
  int v10; // eax
  int v11; // eax
  unsigned __int8 v12; // r9
  int v13; // [rsp+30h] [rbp-39h] BYREF
  PVOID P; // [rsp+38h] [rbp-31h] BYREF
  _DWORD v15[4]; // [rsp+40h] [rbp-29h] BYREF
  wchar_t pszDest[32]; // [rsp+50h] [rbp-19h] BYREF

  v2 = 0LL;
  P = 0LL;
  if ( *(_BYTE *)a1 != 1 || (v3 = *(_BYTE *)(a1 + 1), (v3 & 0xFE) != 0) || *(_WORD *)(a1 + 2) )
  {
    v7 = -1073741811;
    goto LABEL_13;
  }
  if ( (v3 & 1) != 0 )
  {
    v4 = (*(_DWORD *)(a1 + 4) & 0xFFFFFFFE) == 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 4);
    if ( (v10 & 4) != 0 && (v10 & 3) != 0 )
      return (unsigned int)-1073741811;
    v4 = (v10 & 0xFFFFFFF8) == 0;
  }
  if ( !v4 )
    return (unsigned int)-1073741811;
  if ( (int)PfSnCheckScenario(1, &v13) < 0 )
    return 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = PfCalculateProcessHash((__int64)Process, (unsigned __int64)&P);
  v2 = P;
  v7 = v6;
  if ( v6 >= 0 )
  {
    ImageFileName = PfSnFindImageFileName((unsigned __int16 *)P, v15);
    if ( ImageFileName )
    {
      memset(pszDest, 0, sizeof(pszDest));
      RtlStringCbPrintfW(pszDest, 0x3CuLL, L"Op-%.17s-%08X", ImageFileName, Process[1].ThreadSeed[1]);
      *(_DWORD *)&pszDest[30] = *(_DWORD *)(a1 + 8);
      if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      {
        PfSnEndProcessTrace((__int64)Process, *(_BYTE *)(a1 + 4) & 1 | 8, pszDest);
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 4);
        v12 = (v11 & 1) != 0;
        if ( (v11 & 2) != 0 || v13 == 2 )
        {
          v12 |= 2u;
        }
        else if ( (v11 & 4) != 0 )
        {
          v12 |= 4u;
        }
        PfSnBeginScenario((__int64)Process, (__int64)pszDest, 1u, v12);
      }
      v7 = 0;
    }
    else
    {
      v7 = -1073741595;
    }
  }
LABEL_13:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v7;
}
