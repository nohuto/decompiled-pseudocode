/*
 * XREFs of ?GetApplicationProperties@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAKPEA_K44@Z @ 0x18003E640
 * Callers:
 *     <none>
 * Callees:
 *     RmpValidateAndCaptureUserSid @ 0x180002244 (RmpValidateAndCaptureUserSid.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180004CC0 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetApplicationProperties(
        ExecutionModel::ResourceManager *this,
        wchar_t *a2,
        void *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10)
{
  __int64 v13; // rdx
  WCHAR *v14; // rcx
  wchar_t *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  int v26; // eax
  volatile signed __int32 *v27; // rsi
  int v28; // ebx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v31; // [rsp+38h] [rbp-C8h]
  void *Src; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v33[80]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Destination[280]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR v35[280]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v31 = a10;
  P = 0LL;
  RmpValidateAndCaptureUserSid(a3, (__int64)a2, a5, v33, &Src);
  RmpPsmAppInstanceIdInitializeFromCStr(Destination, a2, Src, a4, a5, a6);
  v13 = 4LL;
  v14 = v35;
  v15 = Destination;
  do
  {
    v16 = *((_OWORD *)v15 + 1);
    *(_OWORD *)v14 = *(_OWORD *)v15;
    v17 = *((_OWORD *)v15 + 2);
    *((_OWORD *)v14 + 1) = v16;
    v18 = *((_OWORD *)v15 + 3);
    *((_OWORD *)v14 + 2) = v17;
    v19 = *((_OWORD *)v15 + 4);
    *((_OWORD *)v14 + 3) = v18;
    v20 = *((_OWORD *)v15 + 5);
    *((_OWORD *)v14 + 4) = v19;
    v21 = *((_OWORD *)v15 + 6);
    *((_OWORD *)v14 + 5) = v20;
    v22 = *((_OWORD *)v15 + 7);
    v15 += 64;
    *((_OWORD *)v14 + 6) = v21;
    v14 += 64;
    *((_OWORD *)v14 - 1) = v22;
    --v13;
  }
  while ( v13 );
  v23 = *(_OWORD *)v15;
  v24 = *((_OWORD *)v15 + 1);
  v25 = *((_QWORD *)v15 + 4);
  *(_OWORD *)v14 = v23;
  *((_OWORD *)v14 + 1) = v24;
  *((_QWORD *)v14 + 4) = v25;
  v26 = RmpActivityHostFindByTypeAndIdentifier(0, v35, (volatile signed __int32 **)&P);
  v27 = (volatile signed __int32 *)P;
  if ( v26 >= 0 )
  {
    v28 = (*(__int64 (__fastcall **)(_QWORD, PVOID, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 15) + 56LL))(
            *((_QWORD *)this + 15),
            P,
            a7,
            a8,
            a9,
            v31);
    if ( v28 >= 0 )
      v28 = 0;
  }
  else
  {
    v28 = v26 | 0x10000000;
  }
  if ( v27 )
    RmpObjectRelease(v27);
  return (unsigned int)v28;
}
