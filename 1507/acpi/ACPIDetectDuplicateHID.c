/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C0015864
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000B2D0 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C0014580 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C00145E0 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x1C00159B8 (ACPIExtListTestElement.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0018DA8 (ACPIExtListExitEnumEarly.c)
 */

void __fastcall ACPIDetectDuplicateHID(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 i; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  const char *v6; // rcx
  const char *v7; // rdx
  unsigned __int8 *v8; // rax
  __int64 v9; // r8
  int v10; // edx
  int v11; // ecx
  _QWORD v12[6]; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+60h] [rbp-18h]

  v2 = BugCheckParameter2[92];
  if ( v2 && (*BugCheckParameter2 & 0xA00000000000LL) != 0 && (*BugCheckParameter2 & 0x2000000000003LL) == 0 )
  {
    v12[1] = 0LL;
    v12[0] = v2 + 744;
    v12[5] = 760LL;
    v12[2] = &AcpiDeviceTreeLock;
    v13 = 2;
    for ( i = ACPIExtListStartEnum((__int64)v12); ; i = (__int64)ACPIExtListEnumNext((__int64)v12) )
    {
      LOBYTE(v4) = 1;
      v5 = (_QWORD *)i;
      if ( !(unsigned __int8)ACPIExtListTestElement(v12, v4) )
        break;
      if ( !v5 )
      {
        ACPIExtListExitEnumEarly(v12);
        return;
      }
      if ( v5 != BugCheckParameter2 && (*v5 & 0xA00000000000LL) != 0 && (*v5 & 0x2080000000003LL) == 0 )
      {
        v6 = (const char *)v5[69];
        if ( v6 )
        {
          v7 = (const char *)BugCheckParameter2[69];
          if ( v7 )
          {
            if ( strstr(v6, v7) )
            {
              if ( (*v5 & 0x1400000000000LL) != 0 && (*BugCheckParameter2 & 0x1400000000000LL) != 0 )
              {
                v8 = (unsigned __int8 *)v5[70];
                v9 = BugCheckParameter2[70] - (_QWORD)v8;
                do
                {
                  v10 = v8[v9];
                  v11 = *v8 - v10;
                  if ( v11 )
                    break;
                  ++v8;
                }
                while ( v10 );
                if ( !v11 )
                  KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
              }
              else if ( ((*BugCheckParameter2 | *v5) & 0x1400000000000LL) == 0 )
              {
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
  }
}
