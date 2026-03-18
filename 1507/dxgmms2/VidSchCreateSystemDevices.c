/*
 * XREFs of VidSchCreateSystemDevices @ 0x1C00449B0
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C003D084 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0005B44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiCreateContextInternal @ 0x1C00062E4 (VidSchiCreateContextInternal.c)
 *     VidSchiCreateDeviceInternal @ 0x1C00382EC (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateSystemDevices(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  char v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v19[3]; // [rsp+28h] [rbp-18h]

  v1 = (__int64 *)(a1 + 176);
  v18 = 1LL;
  v19[0] = 0LL;
  v5 = VidSchiCreateDeviceInternal(a1, &v18, 0LL, (__int64 *)(a1 + 176));
  if ( v5 < 0
    || (v18 = 17LL, v19[0] = 0LL, v5 = VidSchiCreateDeviceInternal(a1, &v18, 0LL, (__int64 *)(a1 + 184)), v5 < 0) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v4, v3, v6, v7);
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdAssertion(v17);
  }
  else
  {
    v8 = 0LL;
    if ( *(_DWORD *)(a1 + 56) )
    {
      while ( 1 )
      {
        LODWORD(v19[0]) = 0;
        *(_QWORD *)((char *)v19 + 4) = 7LL;
        LODWORD(v18) = 20;
        HIDWORD(v18) = v8;
        v9 = VidSchiSchedulerNodeToDriverEngine(a1, v8);
        v10 = *v1;
        LODWORD(v19[0]) = v9;
        v11 = v8;
        *(_QWORD *)(*(_QWORD *)(a1 + 8 * v8 + 368) + 32LL) = VidSchiCreateContextInternal(
                                                               v10,
                                                               (unsigned int *)&v18,
                                                               0LL);
        if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8 * v8 + 368) + 32LL) )
          break;
        v8 = (unsigned int)(v8 + 1);
        *(_QWORD *)(a1 + 352) |= 1LL << v11;
        if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 56) )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v12 = 0LL;
      if ( !*(_DWORD *)(a1 + 52) )
        return 0LL;
      while ( 1 )
      {
        v18 = 29LL;
        v19[0] = 0LL;
        v13 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)((char *)v19 + 4) = 7LL;
        LODWORD(v19[0]) = v12;
        v14 = *(_QWORD *)(a1 + 184);
        HIDWORD(v18) = *(unsigned __int8 *)(v12 + a1 + 60)
                     + *(unsigned __int16 *)(*(_QWORD *)(v13 + 1896) + 48 * v12 + 2);
        *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v12) = VidSchiCreateContextInternal(v14, (unsigned int *)&v18, 0LL);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v12);
        if ( !v15 )
          break;
        v12 = (unsigned int)(v12 + 1);
        *(_BYTE *)(v15 + 641) = 1;
        if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 52) )
          return 0LL;
      }
    }
  }
  return (unsigned int)v5;
}
