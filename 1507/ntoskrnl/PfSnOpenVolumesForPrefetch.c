/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x140456B84
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfpOpenHandleClose @ 0x14042D5B8 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14042D8E8 (PfpOpenHandleCreate.c)
 *     PfSnIsVolumeMounted @ 0x1404571B4 (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x1404572BC (PfSnQueryVolumeInfo.c)
 *     PfMetadataRecordIsEqual @ 0x140457BB0 (PfMetadataRecordIsEqual.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x140457BC8 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140457C60 (PfSnVolumeCheckSeekPenalty.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     NtCreateEvent @ 0x140488270 (NtCreateEvent.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406B0028 (PfSnVolumeCheckIsSdBus.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  unsigned int v2; // r13d
  WCHAR *v4; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v8; // eax
  PVOID PoolWithTag; // rax
  _QWORD *v10; // rsi
  NTSTATUS v11; // edi
  int DeviceInterfaces; // eax
  unsigned int v13; // edi
  const WCHAR *v14; // rsi
  __int64 v15; // r15
  int IsVolumeMounted; // eax
  int v17; // ecx
  PVOID **v18; // rax
  PVOID **v19; // r13
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  PVOID **v23; // rax
  wchar_t *v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int *v28; // rcx
  PVOID *v29; // r9
  __int64 v30; // r8
  __int64 v31; // r10
  __int64 v32; // rcx
  wchar_t *v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 *v36; // rcx
  HANDLE v37; // rdx
  _QWORD *v38; // rbx
  PVOID *v39; // rax
  __int64 *v41; // rcx
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-B8h]
  PCWSTR SourceString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID *v46; // [rsp+60h] [rbp-A0h] BYREF
  int v47; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v48[2]; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+90h] [rbp-70h] BYREF
  wchar_t *v50; // [rsp+98h] [rbp-68h]
  _OWORD v51[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v52; // [rsp+C0h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v54; // [rsp+150h] [rbp+50h]
  int i; // [rsp+150h] [rbp+50h]
  int v57; // [rsp+160h] [rbp+60h]
  PVOID *v58; // [rsp+160h] [rbp+60h]
  int cbDest; // [rsp+168h] [rbp+68h]
  size_t cbDesta; // [rsp+168h] [rbp+68h]

  v2 = 0;
  p_P = &P;
  SourceString = 0LL;
  P = &P;
  v4 = 0LL;
  memset(v51, 0, sizeof(v51));
  *((_QWORD *)&v51[1] + 1) |= 0x200000000uLL;
  memset(v48, 0, sizeof(v48));
  v5 = *a1;
  LOBYTE(v6) = 1;
  *((_QWORD *)&v48[1] + 1) |= 0x200000000uLL;
  EventHandle = 0LL;
  v7 = 0;
  PfSnLogOpenVolumesForPrefetch(v5, v6);
  if ( !v5 || (v8 = *(_DWORD *)(v5 + 112), v8 >= 0x4000) )
  {
    v11 = -1073741811;
    goto LABEL_41;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 112 * v8, 0x76506343u);
  a1[16] = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_59;
  if ( *(_DWORD *)(v5 + 112) )
  {
    do
    {
      v10 = (_QWORD *)(a1[16] + 112LL * v2);
      memset(v10, 0, 0x70uLL);
      v10[1] = v10;
      *v10 = v10;
      memset(v10 + 4, 0, 0x20uLL);
      v10[7] |= 0x200000000uLL;
      memset(v10 + 8, 0, 0x20uLL);
      v10[11] |= 0x200000000uLL;
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v5 + 112) );
    v4 = (WCHAR *)SourceString;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v11 >= 0 )
  {
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (unsigned int)&GUID_DEVINTERFACE_VOLUME,
                         0,
                         0,
                         0,
                         (__int64)&SourceString,
                         0LL);
    v4 = (WCHAR *)SourceString;
    v11 = DeviceInterfaces;
    if ( DeviceInterfaces >= 0 )
    {
      v13 = 0;
      v54 = 0;
      v14 = SourceString;
      if ( *SourceString )
      {
        while ( 1 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v14[v15] );
          v52 = 2LL * (unsigned int)(v15 + 1);
          if ( v13 <= v52 )
            v54 = 2 * v15 + 2;
          IsVolumeMounted = PfSnIsVolumeMounted(v14);
          v17 = v57;
          if ( IsVolumeMounted < 0 )
            v17 = 0;
          v57 = v17;
          if ( v17 && !cbDest && (int)PfSnQueryVolumeInfo(a1 + 1, v14, v51, &v46, &v47) >= 0 )
          {
            v18 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x76506343u);
            v19 = v18;
            if ( !v18 )
            {
              v4 = (WCHAR *)SourceString;
              v11 = -1073741670;
              goto LABEL_41;
            }
            memset(v18, 0, 0x48uLL);
            memset(v19 + 2, 0, 0x20uLL);
            v20 = v51[0];
            v19[8] = v46;
            v21 = v51[1];
            v22 = v47;
            *((_OWORD *)v19 + 1) = v20;
            *((_DWORD *)v19 + 15) = v22;
            *((_OWORD *)v19 + 2) = v21;
            memset(v51, 0, sizeof(v51));
            v19[6] = (PVOID *)v14;
            *((_DWORD *)v19 + 14) = v15;
            *((_QWORD *)&v51[1] + 1) |= 0x200000000uLL;
            v23 = (PVOID **)p_P;
            *v19 = &P;
            v19[1] = (PVOID *)v23;
            if ( *v23 != &P )
              __fastfail(3u);
            *v23 = (PVOID *)v19;
            p_P = (PVOID *)v19;
          }
          v14 = (const WCHAR *)((char *)v14 + v52);
          v13 = v54;
          if ( !*v14 )
          {
            v4 = (WCHAR *)SourceString;
            break;
          }
        }
      }
      cbDesta = v13 + 2;
      v24 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDesta, 0x76506343u);
      if ( v24 )
      {
        v25 = v5 + *(unsigned int *)(v5 + 108);
        v26 = 0LL;
        for ( i = 0; (unsigned int)v26 < *(_DWORD *)(v5 + 112); i = v26 )
        {
          v27 = a1[16] + 112 * v26;
          v28 = (unsigned int *)(v25 + 96 * v26);
          *(_QWORD *)(v27 + 16) = v25 + *v28;
          *(_DWORD *)(v27 + 24) = v28[1];
          *(_DWORD *)(v27 + 104) = 0;
          *(_QWORD *)(v27 + 96) = v25 + v28[7];
          v29 = (PVOID *)P;
          if ( P == &P )
            goto LABEL_56;
          do
          {
            v30 = *((unsigned int *)v29 + 15);
            v46 = (PVOID *)v29[8];
            v58 = v29;
            if ( (unsigned __int8)PfMetadataRecordIsEqual(v28, &v46, v30) )
              break;
            v29 = (PVOID *)*v29;
          }
          while ( v29 != &P );
          if ( v29 == &P )
            goto LABEL_56;
          RtlStringCbPrintfW(v24, cbDesta, L"%s\\", *(_QWORD *)(v31 + 48));
          v49 = 0;
          v32 = 0x7FFFLL;
          v50 = 0LL;
          v33 = v24;
          do
          {
            if ( !*v33 )
              break;
            ++v33;
            --v32;
          }
          while ( v32 );
          if ( v32 )
          {
            v50 = v24;
            LOWORD(v49) = 2 * (0x7FFF - v32);
            HIWORD(v49) = v49 + 2;
          }
          if ( (int)PfpOpenHandleCreate(
                      (__int64)v48,
                      (__int64)(a1 + 1),
                      (__int64)&v49,
                      0LL,
                      1179785,
                      0x21u,
                      0x80u,
                      (__int64)(v58 + 2)) < 0 )
          {
LABEL_56:
            memset(v48, 0, sizeof(v48));
            *((_QWORD *)&v48[1] + 1) |= 0x200000000uLL;
            v41 = (__int64 *)a1[18];
            *(_QWORD *)v27 = a1 + 17;
            *(_QWORD *)(v27 + 8) = v41;
            if ( (__int64 *)*v41 != a1 + 17 )
              __fastfail(3u);
            *v41 = v27;
            a1[18] = v27;
          }
          else
          {
            *(_OWORD *)(v27 + 32) = *((_OWORD *)v58 + 1);
            *(_OWORD *)(v27 + 48) = *((_OWORD *)v58 + 2);
            memset(v58 + 2, 0, 0x20uLL);
            v34 = v48[0];
            v35 = v48[1];
            v58[5] = (PVOID)((unsigned __int64)v58[5] | 0x200000000LL);
            *(_OWORD *)(v27 + 64) = v34;
            *(_OWORD *)(v27 + 80) = v35;
            memset(v48, 0, sizeof(v48));
            *((_QWORD *)&v48[1] + 1) |= 0x200000000uLL;
            v36 = (__int64 *)a1[20];
            *(_QWORD *)v27 = a1 + 19;
            *(_QWORD *)(v27 + 8) = v36;
            if ( (__int64 *)*v36 != a1 + 19 )
              __fastfail(3u);
            v37 = EventHandle;
            *v36 = v27;
            a1[20] = v27;
            *(_DWORD *)(v27 + 108) ^= ((unsigned __int8)PfSnVolumeCheckSeekPenalty(v27 + 32, v37) ^ (unsigned __int8)*(_DWORD *)(v27 + 108)) & 1;
            if ( (*(_DWORD *)(v27 + 108) & 1) != 0 )
            {
              v7 |= 1u;
            }
            else if ( (v7 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v27 + 32, EventHandle) )
            {
              v7 |= 2u;
            }
          }
          v26 = (unsigned int)(i + 1);
        }
        v11 = 0;
        *a2 = v7;
        ExFreePoolWithTag(v24, 0);
        goto LABEL_41;
      }
LABEL_59:
      v11 = -1073741670;
    }
  }
LABEL_41:
  if ( (*((_QWORD *)&v51[1] + 1) & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v51, (__int64)(a1 + 1));
  if ( (*((_QWORD *)&v48[1] + 1) & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v48, (__int64)(a1 + 1));
  while ( 1 )
  {
    v38 = P;
    if ( P == &P )
      break;
    v39 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v39[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v39[1] = &P;
    if ( (v38[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose(v38 + 2, (__int64)(a1 + 1));
    ExFreePoolWithTag(v38, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v5, 0LL);
  return (unsigned int)v11;
}
