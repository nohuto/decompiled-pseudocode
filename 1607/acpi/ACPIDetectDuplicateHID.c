/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C001E47C
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000EE50 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     ACPIExtListTestElement @ 0x1C001E5E0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C001EB18 (ACPIExtListStartEnum.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0020908 (ACPIExtListExitEnumEarly.c)
 */

void __fastcall ACPIDetectDuplicateHID(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 i; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  const char *v6; // rcx
  const char *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // ecx
  __int64 v14; // rdx
  const char *v15; // rax
  const char *v16; // r8
  __int64 v17; // rdx
  const char *v18; // rax
  const char *v19; // r8
  _QWORD v20[6]; // [rsp+50h] [rbp-48h] BYREF
  int v21; // [rsp+80h] [rbp-18h]

  v2 = BugCheckParameter2[93];
  if ( v2 && (BugCheckParameter2[1] & 0xA00000000000LL) != 0 && (BugCheckParameter2[1] & 0x2000000000003LL) == 0 )
  {
    v20[1] = 0LL;
    v20[0] = v2 + 752;
    v20[5] = 768LL;
    v20[2] = &AcpiDeviceTreeLock;
    v21 = 2;
    for ( i = ACPIExtListStartEnum(v20); ; i = ACPIExtListEnumNext(v20) )
    {
      LOBYTE(v4) = 1;
      v5 = (_QWORD *)i;
      if ( !(unsigned __int8)ACPIExtListTestElement(v20, v4) )
        break;
      if ( !v5 )
      {
        ACPIExtListExitEnumEarly(v20);
        return;
      }
      if ( v5 != BugCheckParameter2 && (v5[1] & 0xA00000000000LL) != 0 && (v5[1] & 0x2080000000003LL) == 0 )
      {
        v6 = (const char *)v5[70];
        if ( v6 )
        {
          v7 = (const char *)BugCheckParameter2[70];
          if ( v7 )
          {
            if ( strstr(v6, v7) )
            {
              v8 = v5[1];
              v9 = BugCheckParameter2[1];
              if ( (v8 & 0x1400000000000LL) != 0 && (v9 & 0x1400000000000LL) != 0 )
              {
                v10 = (unsigned __int8 *)v5[71];
                v11 = BugCheckParameter2[71] - (_QWORD)v10;
                do
                {
                  v12 = v10[v11];
                  v13 = *v10 - v12;
                  if ( v13 )
                    break;
                  ++v10;
                }
                while ( v12 );
                if ( !v13 )
                {
                  v17 = BugCheckParameter2[1];
                  v18 = (const char *)qword_1C002C340;
                  v19 = (const char *)qword_1C002C340;
                  if ( (v17 & 0x200000000000LL) != 0 )
                  {
                    v18 = (const char *)BugCheckParameter2[70];
                    if ( (v17 & 0x400000000000LL) != 0 )
                      v19 = (const char *)BugCheckParameter2[71];
                  }
                  WPP_RECORDER_SF_qqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x16u,
                    0xDu,
                    (__int64)&WPP_e4465e38b328316877facb043cb11b95_Traceguids,
                    (char)v5,
                    (char)BugCheckParameter2,
                    v18,
                    v19);
                  KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
                }
              }
              else if ( ((v9 | v8) & 0x1400000000000LL) == 0 )
              {
                v14 = BugCheckParameter2[1];
                v15 = (const char *)qword_1C002C340;
                v16 = (const char *)qword_1C002C340;
                if ( (v14 & 0x200000000000LL) != 0 )
                {
                  v15 = (const char *)BugCheckParameter2[70];
                  if ( (v14 & 0x400000000000LL) != 0 )
                    v16 = (const char *)BugCheckParameter2[71];
                }
                WPP_RECORDER_SF_qqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  0x16u,
                  0xEu,
                  (__int64)&WPP_e4465e38b328316877facb043cb11b95_Traceguids,
                  (char)v5,
                  (char)BugCheckParameter2,
                  v15,
                  v16);
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
  }
}
