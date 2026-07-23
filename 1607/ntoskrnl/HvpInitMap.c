/*
 * XREFs of HvpInitMap @ 0x1404C5FEC
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401B71BC (HvpMapHiveImageFromSystemCache.c)
 *     HvpMapHiveImage @ 0x1404F7004 (HvpMapHiveImage.c)
 *     HvpBuildMapForLoaderHive @ 0x140564290 (HvpBuildMapForLoaderHive.c)
 *     HvpBuildMap @ 0x140610608 (HvpBuildMap.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     HvpAllocateMap @ 0x1404C6174 (HvpAllocateMap.c)
 *     HvpFreeMap @ 0x1404CC7DC (HvpFreeMap.c)
 */

__int64 __fastcall HvpInitMap(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // r13
  void *v4; // r12
  void *v5; // rbp
  unsigned int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rdx
  unsigned int v11; // r14d
  void *v12; // rax
  void *v13; // rbx
  void *v15; // rax
  void *v16; // r14
  unsigned int v17; // ebx
  int v18; // r9d
  int v19; // [rsp+20h] [rbp-38h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0LL;
  v5 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( (v7 & 0xFFF) != 0 )
  {
    v17 = -1073741492;
    SetFailureLocation(v3, 0, 5, -1073741492, 0);
  }
  else
  {
    v8 = v7 >> 12;
    if ( v7 >> 12 )
      v9 = (v8 - 1) >> 9;
    else
      v9 = 0;
    *(_DWORD *)(a1 + 1400) = v7;
    if ( *(_QWORD *)(a1 + 80) )
      goto LABEL_10;
    v2 = (v8 + 3) & 0xFFFFFFFC;
    LOBYTE(a2) = 1;
    if ( !v2 )
      v2 = 4;
    v4 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v2, a2, 926043459LL);
    if ( v4 )
    {
      LOBYTE(v10) = 1;
      v5 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v2, v10, 926043459LL);
      if ( !v5 )
      {
        v18 = -1073741801;
        goto LABEL_23;
      }
      memset(v4, 0, v2);
      memset(v5, 0, v2);
      *(_QWORD *)(a1 + 80) = v4;
      v11 = v7 >> 9;
      *(_DWORD *)(a1 + 72) = v11;
      *(_DWORD *)(a1 + 96) = v11;
      *(_QWORD *)(a1 + 104) = v5;
      *(_DWORD *)(a1 + 92) = v2;
LABEL_10:
      if ( v9 )
      {
        v15 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(0x2000LL, 0LL, 942820675LL);
        v16 = v15;
        if ( v15 )
        {
          memset(v15, 0, 0x2000uLL);
          if ( (unsigned __int8)HvpAllocateMap(a1, v16, 0LL, v9) )
          {
            *(_QWORD *)(a1 + 1416) = 0LL;
            *(_QWORD *)(a1 + 1408) = v16;
            return 0LL;
          }
          v17 = -1073741670;
          SetFailureLocation(v3, 0, 5, -1073741670, 64);
          HvpFreeMap(a1, v16, 0LL, v9);
          (*(void (__fastcall **)(void *, __int64))(a1 + 32))(v16, 0x2000LL);
          goto LABEL_27;
        }
        v18 = -1073741670;
        v19 = 48;
LABEL_25:
        v17 = v18;
        SetFailureLocation(v3, 0, 5, v18, v19);
LABEL_27:
        if ( v4 )
        {
          if ( *(void **)(a1 + 80) == v4 )
            *(_QWORD *)(a1 + 80) = 0LL;
          (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v4, v2);
        }
        if ( v5 )
        {
          if ( *(void **)(a1 + 104) == v5 )
            *(_QWORD *)(a1 + 104) = 0LL;
          (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v5, v2);
        }
        return v17;
      }
      v12 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(20480LL, 0LL, 909266243LL);
      v13 = v12;
      if ( v12 )
      {
        memset(v12, 0, 0x5000uLL);
        *(_QWORD *)(a1 + 1408) = a1 + 1416;
        *(_QWORD *)(a1 + 1416) = v13;
        return 0LL;
      }
      v18 = -1073741670;
LABEL_23:
      v19 = 32;
      goto LABEL_25;
    }
    v17 = -1073741801;
    SetFailureLocation(v3, 0, 5, -1073741801, 16);
  }
  return v17;
}
