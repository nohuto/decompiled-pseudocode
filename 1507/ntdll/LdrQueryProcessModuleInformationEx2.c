/*
 * XREFs of LdrQueryProcessModuleInformationEx2 @ 0x1800BC6D4
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x180068C74 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrQueryNextListEntry @ 0x180069240 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180069260 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrpReadMemory @ 0x180069374 (LdrpReadMemory.c)
 *     LdrQueryInLoadOrderModuleList @ 0x1800694D0 (LdrQueryInLoadOrderModuleList.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x180069500 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x180069820 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x180069840 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x18007FD80 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x18007FFF0 (LdrQueryNextListEntry32.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx2(
        _QWORD *a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _WORD *v5; // r14
  char v6; // di
  _QWORD *v7; // r15
  unsigned int v8; // r13d
  unsigned int v9; // esi
  unsigned __int64 v10; // r12
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v11; // rdx
  int v12; // eax
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  int Memory; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r9
  int v22; // [rsp+34h] [rbp-94h]
  int v23; // [rsp+38h] [rbp-90h]
  __int64 v24; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-80h] BYREF
  int v26; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v27; // [rsp+50h] [rbp-78h]
  __int64 v28; // [rsp+58h] [rbp-70h] BYREF
  int v29; // [rsp+60h] [rbp-68h]
  __int64 v30; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v31[11]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v32; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+D8h] [rbp+10h]
  unsigned int v34; // [rsp+E8h] [rbp+20h]

  v34 = a4;
  v33 = a2;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 2;
  v31[0] = 0LL;
  v31[1] = LdrpProtectedCopyMemory;
  v31[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 >= 2 )
  {
    *a3 = 0;
    v9 = 0;
  }
  else
  {
    v9 = -1073741820;
    v5 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v7 = v31;
  v10 = 0LL;
  v11 = Enumerator;
  while ( 1 )
  {
    v27 = v10;
    if ( v10 >= (unsigned __int64)((v6 & 1) != 0) + 1 )
      return v9;
    v23 = 10240;
    v22 = 1;
    if ( v11 )
      LODWORD(v11->HashEntry.Linkage.Flink) = v8;
    if ( (v6 & 2) != 0 )
      ((void (__fastcall *)(__int64 (__fastcall *)()))funcs_1800691ED[5 * v10])(funcs_1800691ED[5 * v10]);
    v12 = ((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD *))funcs_180068FD9[5 * v10])((__int64)v7, &v28, &v30);
    if ( v12 >= 0 )
    {
      if ( v28 )
      {
        Memory = ((__int64 (__fastcall *)(__int64, __int64, __int64))*(&funcs_18006901D + 5 * v10))(
                   (__int64)v7,
                   v28,
                   (__int64)&v24);
        if ( Memory >= 0 )
        {
          while ( v24 != v28 )
          {
            v16 = v23;
            if ( !v23 )
            {
              v9 = -1073741271;
              break;
            }
            --v23;
            v29 = v16 - 1;
            v8 += 320 * v22;
            v22 = 1;
            v26 = 1;
            if ( v34 >= v8 )
            {
              *v5 = 320;
              Memory = (*(&funcs_1800690BB + 5 * v10))((int)v7, (int)(v5 + 4), v24, v30, v33);
              if ( Memory < 0 )
                goto LABEL_17;
              v17 = *((_QWORD *)v5 + 3);
              if ( v17 )
              {
                Memory = LdrpReadMemory(v7, v17 + 60, (__int64)&v25, 4LL);
                if ( Memory < 0 )
                  goto LABEL_17;
                v18 = *((_QWORD *)v5 + 3) + v25;
                Memory = LdrpReadMemory(v7, v18 + 8, (__int64)(v5 + 154), 4LL);
                if ( Memory < 0 )
                  goto LABEL_17;
                Memory = LdrpReadMemory(v7, v18 + 88, (__int64)(v5 + 152), 4LL);
                if ( Memory < 0 )
                  goto LABEL_17;
                Memory = LdrpReadMemory(v7, v18 + 24, (__int64)&v32, 2LL);
                if ( Memory < 0 )
                  goto LABEL_17;
                if ( v32 == 267 )
                {
                  v19 = v18 + 52;
                  v20 = 4LL;
                }
                else
                {
                  v19 = v18 + 48;
                  v20 = 8LL;
                }
                Memory = LdrpReadMemory(v7, v19, (__int64)(v5 + 156), v20);
                if ( Memory < 0 )
                  goto LABEL_17;
                v5 += 160;
                v31[3] = v5;
                *v5 = 0;
              }
              else
              {
                v22 = 0;
                v26 = 0;
              }
            }
            else
            {
              v9 = -1073741820;
            }
            Memory = ((__int64 (__fastcall *)(__int64, __int64, __int64))*(&funcs_18006901D + 5 * v10))(
                       (__int64)v7,
                       v24,
                       (__int64)&v24);
            if ( Memory < 0 )
              goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          v9 = Memory;
        }
      }
      v6 = v33;
    }
    else
    {
      v9 = v12;
    }
    if ( (v6 & 2) != 0 )
      ((void (__fastcall *)(_QWORD *, _QWORD *, _QWORD *))funcs_180069217[5 * v10])(funcs_180069217[5 * v10], v13, v14);
    v11 = Enumerator;
    if ( Enumerator )
      LODWORD(Enumerator->HashEntry.Linkage.Flink) = v8;
    ++v10;
  }
}
