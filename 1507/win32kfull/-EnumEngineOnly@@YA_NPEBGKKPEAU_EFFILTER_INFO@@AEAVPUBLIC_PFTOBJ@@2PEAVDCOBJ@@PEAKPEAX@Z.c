/*
 * XREFs of ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C0032930
 * Callers:
 *     GreEnumFonts @ 0x1C00E5F4C (GreEnumFonts.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEAAHXZ @ 0x1C0031648 (-bValid@FHOBJ@@QEAAHXZ.c)
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C00333F8 (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C0033530 (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00E44D0 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ??0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z @ 0x1C00EBED8 (--0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z.c)
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C00EBFA4 (--1EFSMEMOBJ@@QEAA@XZ.c)
 */

char __fastcall EnumEngineOnly(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        struct _EFFILTER_INFO *a4,
        __int64 **a5,
        __int64 **a6,
        struct DCOBJ *a7,
        unsigned int *a8,
        void *a9)
{
  __int64 v12; // r8
  char v13; // bl
  __int64 v14; // r10
  __int64 *v15; // rcx
  struct _FONTSUB *v16; // rax
  const unsigned __int16 *v17; // rsi
  __int64 *v19; // rax
  __int64 *v20; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  BOOL v25; // eax
  _QWORD v26[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 *v27; // [rsp+68h] [rbp-21h] BYREF
  __int64 v28; // [rsp+70h] [rbp-19h]
  _QWORD v29[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v30; // [rsp+88h] [rbp-1h] BYREF
  __int64 v31; // [rsp+90h] [rbp+7h]
  __int64 *v32; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+A0h] [rbp+17h]

  v27 = *a5;
  v28 = *v27;
  v13 = 0;
  if ( FHOBJ::bValid((FHOBJ *)&v27) )
  {
    v29[0] = v12 + 8;
    v29[1] = *(_QWORD *)(v12 + 8);
    if ( FHOBJ::bValid((FHOBJ *)v29) )
    {
      if ( a1 )
      {
        EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v26, a7, 0x20u, a3, a9, a8);
        if ( !v26[0] )
          goto LABEL_12;
        if ( !(unsigned int)bScanFamilyAndFace(
                              (struct FHOBJ *)&v27,
                              (struct FHOBJ *)v29,
                              0LL,
                              0LL,
                              (struct EFSOBJ *)v26,
                              a3,
                              a4,
                              a1) )
          goto LABEL_12;
        v15 = *a6;
        if ( *a6 )
        {
          v33 = *v15;
          v30 = v15 + 1;
          v23 = v15[1];
          v32 = v15;
          v31 = v23;
          if ( !FHOBJ::bValid((FHOBJ *)&v32)
            || !FHOBJ::bValid((FHOBJ *)&v30)
            || !(unsigned int)bScanFamilyAndFace(
                                (struct FHOBJ *)&v32,
                                (struct FHOBJ *)&v30,
                                0LL,
                                0LL,
                                (struct EFSOBJ *)v26,
                                a3,
                                a4,
                                a1) )
          {
            goto LABEL_12;
          }
        }
        v16 = pfsubAlternateFacename(a1);
        v17 = (const unsigned __int16 *)((char *)v16 + 130);
        if ( !v16 )
          v17 = 0LL;
        if ( !v17 )
          goto LABEL_10;
        *(_QWORD *)v26[0] = v16;
        if ( !(unsigned int)bScanFamilyAndFace(
                              (struct FHOBJ *)&v27,
                              (struct FHOBJ *)v29,
                              0LL,
                              0LL,
                              (struct EFSOBJ *)v26,
                              a3,
                              a4,
                              v17) )
          goto LABEL_12;
        v20 = *a6;
        if ( !*a6 )
          goto LABEL_10;
        v31 = *v20;
        v32 = v20 + 1;
        v24 = v20[1];
        v30 = v20;
        v33 = v24;
        v25 = FHOBJ::bValid((FHOBJ *)&v30);
        if ( !v25 || !FHOBJ::bValid((FHOBJ *)&v32) )
        {
LABEL_12:
          EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v26);
          return v13;
        }
        v22 = bScanFamilyAndFace(
                (struct FHOBJ *)&v30,
                (struct FHOBJ *)&v32,
                0LL,
                0LL,
                (struct EFSOBJ *)v26,
                a3,
                a4,
                v17);
      }
      else
      {
        EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v26, a7, *(_DWORD *)(v14 + 12), a3, a9, a8);
        if ( !v26[0]
          || !bScanFamily((struct FHOBJ *)&v27, 2u, (struct FHOBJ *)&v27, 1u, 0LL, 0, (struct EFSOBJ *)v26, a3, a4, 0LL) )
        {
          goto LABEL_12;
        }
        v19 = *a6;
        if ( !*a6 )
          goto LABEL_10;
        v27 = *a6;
        v28 = *v19;
        if ( !FHOBJ::bValid((FHOBJ *)&v27) )
          goto LABEL_12;
        v22 = bScanFamily((struct FHOBJ *)&v27, 2u, (struct FHOBJ *)&v27, 1u, 0LL, 0, (struct EFSOBJ *)v26, a3, a4, 0LL);
      }
      if ( v22 )
      {
LABEL_10:
        if ( !*(_DWORD *)(v26[0] + 28LL) )
          v13 = 1;
        goto LABEL_12;
      }
      goto LABEL_12;
    }
  }
  return v13;
}
