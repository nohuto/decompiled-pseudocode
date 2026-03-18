/*
 * XREFs of ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B2F28
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

char __fastcall EnumDeviceAndEngine(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        struct _EFFILTER_INFO *a4,
        struct PUBLIC_PFTOBJ *a5,
        __int64 **a6,
        struct PFFOBJ *a7,
        struct PDEVOBJ *a8,
        struct DCOBJ *a9,
        unsigned int *a10,
        void *a11)
{
  __int64 *v14; // rax
  char v15; // bl
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  unsigned int v24; // r9d
  unsigned int v25; // edx
  int v26; // eax
  __int64 *v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rax
  struct _FONTSUB *v31; // rax
  unsigned __int16 *v32; // rsi
  __int64 *v33; // rcx
  __int64 v34; // rax
  _QWORD v35[2]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v37; // [rsp+78h] [rbp-41h] BYREF
  __int64 v38; // [rsp+80h] [rbp-39h]
  _QWORD v39[2]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v40[2]; // [rsp+98h] [rbp-21h] BYREF
  __int64 *v41; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-9h]
  __int64 *v43; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v44; // [rsp+C0h] [rbp+7h]

  v14 = (__int64 *)(*(_QWORD *)a7 + 112LL);
  v38 = *v14;
  v37 = v14;
  v15 = 0;
  if ( FHOBJ::bValid((FHOBJ *)&v37) )
  {
    v35[0] = *(_QWORD *)a5;
    v35[1] = *(_QWORD *)v35[0];
    if ( FHOBJ::bValid((FHOBJ *)v35) )
    {
      v39[0] = v16 + 104;
      v39[1] = *(_QWORD *)(v16 + 104);
      if ( FHOBJ::bValid((FHOBJ *)v39) )
      {
        v40[0] = v17 + 8;
        v40[1] = *(_QWORD *)(v17 + 8);
        if ( FHOBJ::bValid((FHOBJ *)v40) )
        {
          if ( a1 )
          {
            EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v36, a9, 0x20u, a3, a11, a10);
            if ( !v36[0] )
              goto LABEL_16;
            if ( !(unsigned int)bScanFamilyAndFace(
                                  (struct FHOBJ *)v35,
                                  (struct FHOBJ *)v40,
                                  (struct FHOBJ *)&v37,
                                  (struct FHOBJ *)v39,
                                  (struct EFSOBJ *)v36,
                                  a3,
                                  a4,
                                  a1) )
              goto LABEL_16;
            v29 = *a6;
            if ( *a6 )
            {
              v44 = *v29;
              v41 = v29 + 1;
              v30 = v29[1];
              v43 = v29;
              v42 = v30;
              if ( !FHOBJ::bValid((FHOBJ *)&v43)
                || !FHOBJ::bValid((FHOBJ *)&v41)
                || !(unsigned int)bScanFamilyAndFace(
                                    (struct FHOBJ *)&v43,
                                    (struct FHOBJ *)&v41,
                                    0LL,
                                    0LL,
                                    (struct EFSOBJ *)v36,
                                    a3,
                                    a4,
                                    a1) )
              {
                goto LABEL_16;
              }
            }
            v31 = pfsubAlternateFacename(a1);
            v32 = (unsigned __int16 *)((char *)v31 + 130);
            if ( !v31 )
              v32 = 0LL;
            if ( !v32 )
              goto LABEL_14;
            *(_QWORD *)v36[0] = v31;
            if ( !(unsigned int)bScanFamilyAndFace(
                                  (struct FHOBJ *)v35,
                                  (struct FHOBJ *)v40,
                                  (struct FHOBJ *)&v37,
                                  (struct FHOBJ *)v39,
                                  (struct EFSOBJ *)v36,
                                  a3,
                                  a4,
                                  v32) )
              goto LABEL_16;
            v33 = *a6;
            if ( *a6 )
            {
              v42 = *v33;
              v43 = v33 + 1;
              v34 = v33[1];
              v41 = v33;
              v44 = v34;
              if ( !FHOBJ::bValid((FHOBJ *)&v41) || !FHOBJ::bValid((FHOBJ *)&v43) )
                goto LABEL_16;
              v26 = bScanFamilyAndFace(
                      (struct FHOBJ *)&v41,
                      (struct FHOBJ *)&v43,
                      0LL,
                      0LL,
                      (struct EFSOBJ *)v36,
                      a3,
                      a4,
                      v32);
              goto LABEL_13;
            }
          }
          else
          {
            EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v36, a9, *(_DWORD *)(v19 + 12) + *(_DWORD *)(v18 + 12), a3, a11, a10);
            if ( !v36[0] )
              goto LABEL_16;
            if ( (*(_DWORD *)(*(_QWORD *)a8 + 2208LL) & 0x2000) != 0 )
            {
              if ( !(unsigned int)bScanFamily(
                                    (struct FHOBJ *)&v37,
                                    0,
                                    (struct FHOBJ *)v35,
                                    2u,
                                    (struct FHOBJ *)v35,
                                    1u,
                                    (struct EFSOBJ *)v36,
                                    a3,
                                    a4,
                                    0LL) )
                goto LABEL_16;
              v23 = *a6;
              if ( !*a6 )
                goto LABEL_14;
              v37 = *a6;
              v38 = *v23;
              if ( !FHOBJ::bValid((FHOBJ *)&v37) )
                goto LABEL_16;
              v24 = 1;
              v25 = 2;
              goto LABEL_12;
            }
            if ( !(unsigned int)bScanFamily(
                                  (struct FHOBJ *)&v37,
                                  0,
                                  (struct FHOBJ *)v35,
                                  1u,
                                  (struct FHOBJ *)v35,
                                  2u,
                                  (struct EFSOBJ *)v36,
                                  a3,
                                  a4,
                                  0LL) )
              goto LABEL_16;
            v28 = *a6;
            if ( *a6 )
            {
              v37 = *a6;
              v38 = *v28;
              if ( !FHOBJ::bValid((FHOBJ *)&v37) )
                goto LABEL_16;
              v24 = 2;
              v25 = 1;
LABEL_12:
              v26 = bScanFamily(
                      (struct FHOBJ *)&v37,
                      v25,
                      (struct FHOBJ *)&v37,
                      v24,
                      0LL,
                      0,
                      (struct EFSOBJ *)v36,
                      a3,
                      a4,
                      0LL);
LABEL_13:
              if ( v26 )
                goto LABEL_14;
LABEL_16:
              EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v36, v20, v21, v22);
              return v15;
            }
          }
LABEL_14:
          if ( !*(_DWORD *)(v36[0] + 28LL) )
            v15 = 1;
          goto LABEL_16;
        }
      }
    }
  }
  return v15;
}
