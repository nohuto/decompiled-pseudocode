/*
 * XREFs of LdrpQuerySxSMUIFile @ 0x18003CFD0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFindActivationContextSectionString @ 0x180015E40 (RtlFindActivationContextSectionString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall LdrpQuerySxSMUIFile(_OWORD *a1, unsigned __int16 a2, __int64 a3, UNICODE_STRING *a4, __int64 a5)
{
  int ActivationContextSectionString; // ebx
  __int64 v11; // rdi
  unsigned __int16 v12; // r13
  unsigned __int16 *v13; // r14
  unsigned __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  int v19; // [rsp+58h] [rbp-1F0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-1E8h] BYREF
  _WORD v21[4]; // [rsp+68h] [rbp-1E0h] BYREF
  char *v22; // [rsp+70h] [rbp-1D8h]
  __int64 v23; // [rsp+78h] [rbp-1D0h]
  unsigned __int16 *v24; // [rsp+80h] [rbp-1C8h]
  __int64 v25; // [rsp+88h] [rbp-1C0h]
  _QWORD v26[14]; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v27; // [rsp+100h] [rbp-148h] BYREF
  int v28; // [rsp+108h] [rbp-140h]
  _BYTE v29[56]; // [rsp+110h] [rbp-138h] BYREF
  char v30; // [rsp+150h] [rbp-F8h] BYREF

  v23 = a3;
  v25 = a5;
  v20 = 0LL;
  v19 = 0;
  LODWORD(v26[0]) = 112;
  memset((char *)v26 + 4, 0, 0x6CuLL);
  v27 = 72LL;
  v28 = 1;
  memset(v29, 0, sizeof(v29));
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1u,
                                     a1,
                                     0LL,
                                     a3,
                                     (__int64)a4,
                                     a5,
                                     &v19,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (v19 & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7, 0LL, 2, (int)a1, (__int64)v26);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( HIDWORD(v26[0]) == 1 )
          {
            if ( (v26[8] & 0x100000000LL) != 0 )
            {
              v11 = 0LL;
              v26[7] = 0LL;
            }
            else
            {
              v11 = v26[7];
              if ( (v26[8] & 0x200000000LL) != 0 )
                v11 = -4LL;
              v26[7] = v11;
            }
            v12 = *(_WORD *)(v26[9] + 92LL);
            v13 = (unsigned __int16 *)(v26[10] + *(unsigned int *)(v26[9] + 96LL));
            v22 = &v30;
            v21[1] = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(a2, (__int64)v21, 2, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              v14 = (unsigned __int64)v21[0] >> 1;
              if ( (unsigned int)RtlCompareUnicodeStrings(v13, (unsigned __int64)v12 >> 1, (__int64)v22, v14, 1) )
              {
                v15 = LdrpCreateActCtxLanguageW(v11, a2, &v20);
                ActivationContextSectionString = v15;
                if ( v15 >= 0 )
                {
                  v16 = v20;
                  if ( v20 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast((__int64)&v27, v20);
                    if ( a4->Buffer )
                      RtlFreeAnsiString(a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       a1,
                                                       0LL,
                                                       v23,
                                                       (__int64)a4,
                                                       v25,
                                                       &v19,
                                                       0LL,
                                                       0LL);
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(
                                                         7,
                                                         0LL,
                                                         2,
                                                         (int)a1,
                                                         (__int64)v26);
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( HIDWORD(v26[0]) == 1 )
                        {
                          v17 = *(unsigned __int16 *)(v26[9] + 92LL);
                          WORD1(v23) = v17;
                          LOWORD(v23) = v17;
                          v24 = (unsigned __int16 *)(v26[10] + *(unsigned int *)(v26[9] + 96LL));
                          if ( (unsigned int)RtlCompareUnicodeStrings(v24, v17 >> 1, (__int64)v22, v14, 1) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast((__int64)&v27);
                    v16 = v20;
                  }
                  if ( LdrpReleaseActCtxW )
                    LdrpReleaseActCtxW(v16);
                }
              }
            }
          }
          else
          {
            return (unsigned int)-1072365563;
          }
        }
      }
    }
  }
  return (unsigned int)ActivationContextSectionString;
}
