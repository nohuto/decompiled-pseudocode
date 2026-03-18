/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C006EB9C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C006EC68 (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00B7B28 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        const struct tagSIZE *a2,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        struct _DPI_INFORMATION *a8)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-8h]
  struct _DPI_INFORMATION *v18; // [rsp+68h] [rbp+40h]

  FillPhysicalDpiOnly(a1, a2, a8);
  *((_DWORD *)a8 + 16) = 200;
  LODWORD(v18) = 20000 * *((_DWORD *)a8 + 10) / 0x6900u;
  v10 = 20000 * *((_DWORD *)a8 + 11) / 0x6900u;
  HIDWORD(v18) = 20000 * *((_DWORD *)a8 + 11) / 0x6900u;
  *((_QWORD *)a8 + 7) = v18;
  if ( !a5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v13);
  }
  v11 = 100 * a5 + 48;
  v12 = (unsigned int)v11 / 0x60;
  *((_DWORD *)a8 + 3) = (unsigned int)v11 / 0x60;
  if ( !((unsigned int)v11 / 0x60) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !*((_DWORD *)a8 + 8) || !*((_DWORD *)a8 + 9) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( a5 )
  {
    *((_DWORD *)a8 + 2) = v12;
    *((_DWORD *)a8 + 21) = 1234569;
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v16);
    *((_DWORD *)a8 + 2) = DpiInternal::AdjustDesktopScaleFactorForOverride(
                            (DpiInternal *)*((unsigned int *)a8 + 3),
                            *((_QWORD *)a8 + 4),
                            (struct tagSIZE)a3,
                            (const struct _DPI_SCALE_FACTOR_COLLECTION *)*((unsigned int *)a8 + 21),
                            v17);
  }
}
