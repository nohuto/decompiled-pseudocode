/*
 * XREFs of RmpHandlePsmRetrieveHostMemoryLimit @ 0x180017A38
 * Callers:
 *     PsmRetrieveHostMemoryLimit @ 0x180017860 (PsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpActivityHostComputeEnforcementSettings @ 0x180007140 (RmpActivityHostComputeEnforcementSettings.c)
 *     RmpRmSidInitialize @ 0x180017BDC (RmpRmSidInitialize.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpHandlePsmRetrieveHostMemoryLimit(
        void *Src,
        int a2,
        const wchar_t *a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  wchar_t *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  int v23; // eax
  volatile signed __int32 *v24; // rbx
  unsigned int v25; // edi
  __int64 v26; // rax
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  char v29[16]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h]
  wchar_t Destination[232]; // [rsp+60h] [rbp-A0h] BYREF
  char v32[68]; // [rsp+230h] [rbp+130h] BYREF
  int v33; // [rsp+274h] [rbp+174h]
  int v34; // [rsp+278h] [rbp+178h]
  __int64 v35; // [rsp+280h] [rbp+180h]
  _BYTE v36[560]; // [rsp+290h] [rbp+190h] BYREF

  P = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a3);
  RmpRmSidInitialize(v32, Src);
  v35 = a5;
  v33 = a2;
  v34 = a4;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v10 = 4LL;
  v11 = v36;
  v12 = Destination;
  do
  {
    v13 = *((_OWORD *)v12 + 1);
    *v11 = *(_OWORD *)v12;
    v14 = *((_OWORD *)v12 + 2);
    v11[1] = v13;
    v15 = *((_OWORD *)v12 + 3);
    v11[2] = v14;
    v16 = *((_OWORD *)v12 + 4);
    v11[3] = v15;
    v17 = *((_OWORD *)v12 + 5);
    v11[4] = v16;
    v18 = *((_OWORD *)v12 + 6);
    v11[5] = v17;
    v19 = *((_OWORD *)v12 + 7);
    v12 += 64;
    v11[6] = v18;
    v11 += 8;
    *(v11 - 1) = v19;
    --v10;
  }
  while ( v10 );
  v20 = *(_OWORD *)v12;
  v21 = *((_OWORD *)v12 + 1);
  v22 = *((_QWORD *)v12 + 4);
  *v11 = v20;
  v11[1] = v21;
  *((_QWORD *)v11 + 4) = v22;
  v23 = RmpActivityHostFindByTypeAndIdentifier(RmSvcGlobals, 0LL, v36, &P);
  v24 = (volatile signed __int32 *)P;
  v25 = v23;
  if ( v23 >= 0 )
  {
    RmpActivityHostComputeEnforcementSettings((struct _RM_ACTIVITY_HOST *)P, 0LL, 0LL, (__int64)v29);
    v26 = v30;
    v25 = 0;
    *((_QWORD *)v24 + 86) = v30;
    *a6 = v26;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v24 )
    RmpObjectRelease(v24);
  return v25;
}
