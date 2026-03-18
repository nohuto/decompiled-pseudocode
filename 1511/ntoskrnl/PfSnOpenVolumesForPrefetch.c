/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x1404DBB8C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404DEC44 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     NtCreateEvent @ 0x14042E720 (NtCreateEvent.c)
 *     PfpOpenHandleCreate @ 0x1404D944C (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1404DA474 (PfpOpenHandleClose.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     PfSnIsVolumeMounted @ 0x1404DBA84 (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x1404DC1AC (PfSnQueryVolumeInfo.c)
 *     PfMetadataRecordIsEqual @ 0x1404DC2F0 (PfMetadataRecordIsEqual.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x1404DC900 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404DD0CC (PfSnVolumeCheckSeekPenalty.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140631B78 (PfSnVolumeCheckIsSdBus.c)
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
  PVOID *v34; // rax
  void *v35; // rcx
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 *v38; // rcx
  HANDLE v39; // rdx
  _QWORD *v40; // rbx
  PVOID *v41; // rax
  __int64 *v43; // rcx
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-B8h]
  PCWSTR SourceString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID *v48; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v50[2]; // [rsp+70h] [rbp-90h] BYREF
  int v51; // [rsp+90h] [rbp-70h] BYREF
  wchar_t *v52; // [rsp+98h] [rbp-68h]
  _OWORD v53[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v54; // [rsp+C0h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v56; // [rsp+150h] [rbp+50h]
  int i; // [rsp+150h] [rbp+50h]
  PVOID *v59; // [rsp+160h] [rbp+60h] BYREF
  size_t cbDest; // [rsp+168h] [rbp+68h] BYREF

  v2 = 0;
  p_P = &P;
  SourceString = 0LL;
  P = &P;
  v4 = 0LL;
  memset(v53, 0, sizeof(v53));
  *((_QWORD *)&v53[1] + 1) |= 0x200000000uLL;
  memset(v50, 0, sizeof(v50));
  v5 = *a1;
  LOBYTE(v6) = 1;
  *((_QWORD *)&v50[1] + 1) |= 0x200000000uLL;
  EventHandle = 0LL;
  v7 = 0;
  PfSnLogOpenVolumesForPrefetch(v5, v6);
  if ( !v5 || (v8 = *(_DWORD *)(v5 + 112), v8 >= 0x4000) )
  {
    v11 = -1073741811;
    goto LABEL_41;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 112 * v8, 0x76506343u);
  a1[2] = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_59;
  if ( *(_DWORD *)(v5 + 112) )
  {
    do
    {
      v10 = (_QWORD *)(a1[2] + 112LL * v2);
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
      v56 = 0;
      v14 = SourceString;
      if ( *SourceString )
      {
        while ( 1 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v14[v15] );
          v54 = 2LL * (unsigned int)(v15 + 1);
          if ( v13 <= v54 )
            v56 = 2 * v15 + 2;
          IsVolumeMounted = PfSnIsVolumeMounted(v14, (int *)&v59, (int *)&cbDest);
          v17 = (int)v59;
          if ( IsVolumeMounted < 0 )
            v17 = 0;
          LODWORD(v59) = v17;
          if ( v17 && !(_DWORD)cbDest && (int)PfSnQueryVolumeInfo(a1[1], v14, v53, &v48, &v49) >= 0 )
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
            v20 = v53[0];
            v19[8] = v48;
            v21 = v53[1];
            v22 = v49;
            *((_OWORD *)v19 + 1) = v20;
            *((_DWORD *)v19 + 15) = v22;
            *((_OWORD *)v19 + 2) = v21;
            memset(v53, 0, sizeof(v53));
            v19[6] = (PVOID *)v14;
            *((_DWORD *)v19 + 14) = v15;
            *((_QWORD *)&v53[1] + 1) |= 0x200000000uLL;
            v23 = (PVOID **)p_P;
            *v19 = &P;
            v19[1] = (PVOID *)v23;
            if ( *v23 != &P )
              __fastfail(3u);
            *v23 = (PVOID *)v19;
            p_P = (PVOID *)v19;
          }
          v14 = (const WCHAR *)((char *)v14 + v54);
          v13 = v56;
          if ( !*v14 )
          {
            v4 = (WCHAR *)SourceString;
            break;
          }
        }
      }
      cbDest = v13 + 2;
      v24 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x76506343u);
      if ( v24 )
      {
        v25 = v5 + *(unsigned int *)(v5 + 108);
        v26 = 0LL;
        for ( i = 0; (unsigned int)v26 < *(_DWORD *)(v5 + 112); i = v26 )
        {
          v27 = a1[2] + 112 * v26;
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
            v48 = (PVOID *)v29[8];
            v59 = v29;
            if ( (unsigned __int8)PfMetadataRecordIsEqual(v28, &v48, v30) )
              break;
            v29 = (PVOID *)*v29;
          }
          while ( v29 != &P );
          if ( v29 == &P )
            goto LABEL_56;
          RtlStringCbPrintfW(v24, cbDest, L"%s\\", *(_QWORD *)(v31 + 48));
          v51 = 0;
          v32 = 0x7FFFLL;
          v52 = 0LL;
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
            v52 = v24;
            LOWORD(v51) = 2 * (0x7FFF - v32);
            HIWORD(v51) = v51 + 2;
          }
          if ( (int)PfpOpenHandleCreate(
                      (__int64)v50,
                      a1[1],
                      (__int64)&v51,
                      0LL,
                      1179785,
                      0x21u,
                      0x80u,
                      (__int64)(v59 + 2)) < 0 )
          {
LABEL_56:
            memset(v50, 0, sizeof(v50));
            *((_QWORD *)&v50[1] + 1) |= 0x200000000uLL;
            v43 = (__int64 *)a1[4];
            *(_QWORD *)v27 = a1 + 3;
            *(_QWORD *)(v27 + 8) = v43;
            if ( (__int64 *)*v43 != a1 + 3 )
              __fastfail(3u);
            *v43 = v27;
            a1[4] = v27;
          }
          else
          {
            v34 = v59;
            v35 = v59 + 2;
            *(_OWORD *)(v27 + 32) = *((_OWORD *)v59 + 1);
            *(_OWORD *)(v27 + 48) = *((_OWORD *)v34 + 2);
            memset(v35, 0, 0x20uLL);
            v36 = v50[0];
            v37 = v50[1];
            v59[5] = (PVOID)((unsigned __int64)v59[5] | 0x200000000LL);
            *(_OWORD *)(v27 + 64) = v36;
            *(_OWORD *)(v27 + 80) = v37;
            memset(v50, 0, sizeof(v50));
            *((_QWORD *)&v50[1] + 1) |= 0x200000000uLL;
            v38 = (__int64 *)a1[6];
            *(_QWORD *)v27 = a1 + 5;
            *(_QWORD *)(v27 + 8) = v38;
            if ( (__int64 *)*v38 != a1 + 5 )
              __fastfail(3u);
            v39 = EventHandle;
            *v38 = v27;
            a1[6] = v27;
            *(_DWORD *)(v27 + 108) ^= (*(_DWORD *)(v27 + 108) ^ PfSnVolumeCheckSeekPenalty(v27 + 32, v39)) & 1;
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
  if ( (*((_QWORD *)&v53[1] + 1) & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v53, a1[1]);
  if ( (*((_QWORD *)&v50[1] + 1) & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v50, a1[1]);
  while ( 1 )
  {
    v40 = P;
    if ( P == &P )
      break;
    v41 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v41[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v41[1] = &P;
    if ( (v40[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose(v40 + 2, a1[1]);
    ExFreePoolWithTag(v40, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v5, 0LL);
  return (unsigned int)v11;
}
