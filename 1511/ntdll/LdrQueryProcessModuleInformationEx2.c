/*
 * XREFs of LdrQueryProcessModuleInformationEx2 @ 0x1800C93F4
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x18006C4B4 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrQueryNextListEntry @ 0x18006CAA0 (LdrQueryNextListEntry.c)
 *     LdrpReadMemory @ 0x18006CAB4 (LdrpReadMemory.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006CB50 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList @ 0x18006CD90 (LdrQueryInLoadOrderModuleList.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18006CDC0 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x18006CDE0 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18006CE80 (LdrQueryInLoadOrderModuleList32.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x180087800 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x1800878C0 (LdrQueryNextListEntry32.c)
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
  int Memory; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r9
  int v20; // [rsp+34h] [rbp-94h]
  int v21; // [rsp+38h] [rbp-90h]
  __int64 v22; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-80h] BYREF
  int v24; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v25; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+58h] [rbp-70h] BYREF
  int v27; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v29[11]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v30; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+10h]
  unsigned int v32; // [rsp+E8h] [rbp+20h]

  v32 = a4;
  v31 = a2;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 2;
  v29[0] = 0LL;
  v29[1] = LdrpProtectedCopyMemory;
  v29[2] = LdrpQueryInformationCurrentProcess;
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
    v7 = v29;
  v10 = 0LL;
  v11 = Enumerator;
  while ( 1 )
  {
    v25 = v10;
    if ( v10 >= (unsigned __int64)((v6 & 1) != 0) + 1 )
      return v9;
    v21 = 10240;
    v20 = 1;
    if ( v11 )
      LODWORD(v11->HashEntry.Linkage.Flink) = v8;
    if ( (v6 & 2) != 0 )
      ((void (__fastcall *)(__int64 (__fastcall *)()))funcs_18006C80B[5 * v10])(funcs_18006C80B[5 * v10]);
    v12 = ((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD *))funcs_18006C835[5 * v10])((__int64)v7, &v26, &v28);
    if ( v12 >= 0 )
    {
      if ( v26 )
      {
        Memory = ((__int64 (__fastcall *)(__int64, __int64, __int64))*(&funcs_18006C879 + 5 * v10))(
                   (__int64)v7,
                   v26,
                   (__int64)&v22);
        if ( Memory >= 0 )
        {
          while ( v22 != v26 )
          {
            v14 = v21;
            if ( !v21 )
            {
              v9 = -1073741271;
              break;
            }
            --v21;
            v27 = v14 - 1;
            v8 += 320 * v20;
            v20 = 1;
            v24 = 1;
            if ( v32 >= v8 )
            {
              *v5 = 320;
              Memory = (*(&funcs_18006CA0C + 5 * v10))((int)v7, (int)(v5 + 4), v22, v28, v31);
              if ( Memory < 0 )
                goto LABEL_17;
              v15 = *((_QWORD *)v5 + 3);
              if ( v15 )
              {
                Memory = LdrpReadMemory(v7, v15 + 60, (__int64)&v23, 4LL);
                if ( Memory < 0 )
                  goto LABEL_17;
                v16 = *((_QWORD *)v5 + 3) + v23;
                Memory = LdrpReadMemory(v7, v16 + 8, (__int64)(v5 + 154), 4LL);
                if ( Memory < 0 )
                  goto LABEL_17;
                Memory = LdrpReadMemory(v7, v16 + 88, (__int64)(v5 + 152), 4LL);
                if ( Memory < 0 )
                  goto LABEL_17;
                Memory = LdrpReadMemory(v7, v16 + 24, (__int64)&v30, 2LL);
                if ( Memory < 0 )
                  goto LABEL_17;
                if ( v30 == 267 )
                {
                  v17 = v16 + 52;
                  v18 = 4LL;
                }
                else
                {
                  v17 = v16 + 48;
                  v18 = 8LL;
                }
                Memory = LdrpReadMemory(v7, v17, (__int64)(v5 + 156), v18);
                if ( Memory < 0 )
                  goto LABEL_17;
                v5 += 160;
                v29[3] = v5;
                *v5 = 0;
              }
              else
              {
                v20 = 0;
                v24 = 0;
              }
            }
            else
            {
              v9 = -1073741820;
            }
            Memory = ((__int64 (__fastcall *)(__int64, __int64, __int64))*(&funcs_18006C879 + 5 * v10))(
                       (__int64)v7,
                       v22,
                       (__int64)&v22);
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
      v6 = v31;
    }
    else
    {
      v9 = v12;
    }
    if ( (v6 & 2) != 0 )
      ((void (__fastcall *)(__int64))funcs_18006CA4C[5 * v10])((__int64)funcs_18006CA4C[5 * v10]);
    v11 = Enumerator;
    if ( Enumerator )
      LODWORD(Enumerator->HashEntry.Linkage.Flink) = v8;
    ++v10;
  }
}
