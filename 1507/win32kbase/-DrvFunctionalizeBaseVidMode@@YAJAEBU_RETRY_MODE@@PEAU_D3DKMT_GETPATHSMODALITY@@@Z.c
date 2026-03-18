/*
 * XREFs of ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9160
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C001BD58 (-GetCcdRawmodeFlag@@YAIXZ.c)
 */

__int64 __fastcall DrvFunctionalizeBaseVidMode(const struct _RETRY_MODE *a1, struct _D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int CcdRawmodeFlag; // eax
  __int64 v11; // rcx

  v2 = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_DWORD *)a1 + 1);
  if ( v6 == -1 && *((_DWORD *)a1 + 2) == -1 )
  {
    if ( *((_WORD *)a2 + 10) )
    {
      v7 = *((_DWORD *)a2 + 12);
      do
      {
        v7 &= 0xFF7CFA78;
        ++v2;
        *((_DWORD *)a2 + 12) = v7;
      }
      while ( v2 < *((unsigned __int16 *)a2 + 10) );
    }
  }
  else if ( v6 && *((_DWORD *)a1 + 2) )
  {
    if ( *((_WORD *)a2 + 10) != 1 )
    {
      v8 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = *((_DWORD *)a2 + 12) & 0xFF7EFB7C;
    *((_BYTE *)a2 + 164) = 0;
    *((_DWORD *)a2 + 42) = 1;
    *((_DWORD *)a2 + 12) = v9 | 0x20304;
    *((_DWORD *)a2 + 30) = 9;
    *((_DWORD *)a2 + 47) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 48) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 33) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 34) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 35) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 36) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 38) = 21;
    *((_DWORD *)a2 + 37) = 0;
    *(_QWORD *)((char *)a2 + 156) = 0LL;
  }
  CcdRawmodeFlag = GetCcdRawmodeFlag();
  v11 = CcdRawmodeFlag;
  LODWORD(v11) = CcdRawmodeFlag | 0x8000;
  return ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C01012E0)(v11, a2);
}
