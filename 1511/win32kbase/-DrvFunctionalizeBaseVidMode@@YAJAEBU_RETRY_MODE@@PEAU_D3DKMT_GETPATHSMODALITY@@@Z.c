/*
 * XREFs of ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB06C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00526A8 (-GetCcdRawmodeFlag@@YAIXZ.c)
 */

__int64 __fastcall DrvFunctionalizeBaseVidMode(
        const struct _RETRY_MODE *a1,
        struct _D3DKMT_GETPATHSMODALITY *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // rax
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int CcdRawmodeFlag; // eax
  __int64 v13; // rcx

  v4 = 0;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)a1 + 1);
  if ( v8 == -1 && *((_DWORD *)a1 + 2) == -1 )
  {
    if ( *((_WORD *)a2 + 10) )
    {
      v9 = *((_DWORD *)a2 + 12);
      do
      {
        v9 &= 0xFF7CFA78;
        ++v4;
        *((_DWORD *)a2 + 12) = v9;
      }
      while ( v4 < *((unsigned __int16 *)a2 + 10) );
    }
  }
  else if ( v8 && *((_DWORD *)a1 + 2) )
  {
    if ( *((_WORD *)a2 + 10) != 1 )
    {
      v10 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL, a2, a3, a4);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = *((_DWORD *)a2 + 12) & 0xFF7EFB7C;
    *((_BYTE *)a2 + 164) = 0;
    *((_DWORD *)a2 + 42) = 1;
    *((_DWORD *)a2 + 12) = v11 | 0x20304;
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
  v13 = CcdRawmodeFlag;
  LODWORD(v13) = CcdRawmodeFlag | 0x8000;
  return ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C0104100)(v13, a2);
}
