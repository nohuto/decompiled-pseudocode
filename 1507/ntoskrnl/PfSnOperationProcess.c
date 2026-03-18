/*
 * XREFs of PfSnOperationProcess @ 0x1406AFE3C
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x140454D9C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfCalculateProcessHash @ 0x140443818 (PfCalculateProcessHash.c)
 *     PfSnCheckScenario @ 0x1404441E4 (PfSnCheckScenario.c)
 *     PfSnFindImageFileName @ 0x140444B74 (PfSnFindImageFileName.c)
 *     PfSnEndProcessTrace @ 0x14044540C (PfSnEndProcessTrace.c)
 *     PfSnBeginScenario @ 0x1404FD948 (PfSnBeginScenario.c)
 */

__int64 __fastcall PfSnOperationProcess(__int64 a1)
{
  PVOID v2; // rsi
  char v3; // al
  bool v4; // zf
  unsigned int v5; // ebx
  int v6; // eax
  _KPROCESS *Process; // r14
  int v8; // eax
  unsigned __int64 ImageFileName; // rbx
  int v10; // ecx
  unsigned __int8 v11; // r9
  PVOID P; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+38h] [rbp-21h] BYREF
  int v15; // [rsp+3Ch] [rbp-1Dh] BYREF
  wchar_t pszDest[32]; // [rsp+40h] [rbp-19h] BYREF

  v2 = 0LL;
  P = 0LL;
  if ( *(_BYTE *)a1 != 1 || (v3 = *(_BYTE *)(a1 + 1), (v3 & 0xFE) != 0) || *(_WORD *)(a1 + 2) )
  {
    v5 = -1073741811;
  }
  else
  {
    if ( (v3 & 1) != 0 )
    {
      v4 = (*(_DWORD *)(a1 + 4) & 0xFFFFFFFE) == 0;
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 4);
      if ( (v6 & 4) != 0 && (v6 & 3) != 0 )
        return (unsigned int)-1073741811;
      v4 = (v6 & 0xFFFFFFF8) == 0;
    }
    if ( !v4 )
      return (unsigned int)-1073741811;
    if ( (int)PfSnCheckScenario(1, &v14) < 0 )
      return 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    v8 = PfCalculateProcessHash((__int64)Process, (unsigned __int64)&P);
    v2 = P;
    v5 = v8;
    if ( v8 >= 0 )
    {
      ImageFileName = PfSnFindImageFileName((unsigned __int16 *)P, &v15);
      if ( ImageFileName )
      {
        memset(pszDest, 0, sizeof(pszDest));
        RtlStringCbPrintfW(pszDest, 0x3CuLL, L"Op-%.17s-%08X", ImageFileName, *(_DWORD *)&Process[1].BasePriority);
        *(_DWORD *)&pszDest[30] = *(_DWORD *)(a1 + 8);
        if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
        {
          PfSnEndProcessTrace((__int64)Process, *(_BYTE *)(a1 + 4) & 1 | 8, pszDest);
        }
        else
        {
          v10 = *(_DWORD *)(a1 + 4);
          v11 = (v10 & 1) != 0;
          if ( (v10 & 2) != 0 || v14 == 2 )
          {
            v11 |= 2u;
          }
          else if ( (v10 & 4) != 0 )
          {
            v11 |= 4u;
          }
          PfSnBeginScenario((__int64)Process, (__int64)pszDest, 1u, v11);
        }
        v5 = 0;
      }
      else
      {
        v5 = -1073741595;
      }
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v5;
}
