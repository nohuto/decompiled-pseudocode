/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0086820
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C00868EC (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00B9A08 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
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
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-8h]
  struct _DPI_INFORMATION *v22; // [rsp+68h] [rbp+40h]

  FillPhysicalDpiOnly(a1, a2, a8);
  *((_DWORD *)a8 + 16) = 200;
  v11 = 940802361LL;
  LODWORD(v22) = 20000 * *((_DWORD *)a8 + 10) / 0x6900u;
  v12 = 20000 * *((_DWORD *)a8 + 11);
  LODWORD(v13) = (940802361 * (unsigned __int64)v12) >> 32;
  v14 = v12 / 0x6900;
  HIDWORD(v22) = v14;
  *((_QWORD *)a8 + 7) = v22;
  if ( !a5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, 940802361LL, v10);
    WdLogEvent5_WdAssertion(v17);
  }
  v15 = 100 * a5 + 48;
  LODWORD(v13) = (2863311531u * (unsigned __int64)(unsigned int)v15) >> 32;
  v16 = (unsigned int)v15 / 0x60;
  *((_DWORD *)a8 + 3) = (unsigned int)v15 / 0x60;
  if ( !((unsigned int)v15 / 0x60) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v13, v11, v10);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*((_DWORD *)a8 + 8) || !*((_DWORD *)a8 + 9) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v15, v13, v11, v10);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( a5 )
  {
    *((_DWORD *)a8 + 2) = v16;
    *((_DWORD *)a8 + 21) = 1234569;
  }
  else
  {
    v20 = WdLogNewEntry5_WdAssertion(v15, v13, v11, v10);
    WdLogEvent5_WdAssertion(v20);
    *((_DWORD *)a8 + 2) = DpiInternal::AdjustDesktopScaleFactorForOverride(
                            (DpiInternal *)*((unsigned int *)a8 + 3),
                            *((_QWORD *)a8 + 4),
                            (struct tagSIZE)a3,
                            (const struct _DPI_SCALE_FACTOR_COLLECTION *)*((unsigned int *)a8 + 21),
                            v21);
  }
}
