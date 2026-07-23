/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x1404D7E18
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404D7A84 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtCreateEvent @ 0x14041DCA0 (NtCreateEvent.c)
 *     PfSnQueryVolumeInfo @ 0x1404D8438 (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1404D857C (PfSnIsVolumeMounted.c)
 *     PfMetadataRecordIsEqual @ 0x1404D8684 (PfMetadataRecordIsEqual.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x1404D869C (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404D8734 (PfSnVolumeCheckSeekPenalty.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     PfpOpenHandleClose @ 0x1404ED298 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1404ED318 (PfpOpenHandleCreate.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140669DD0 (PfSnVolumeCheckIsSdBus.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  WCHAR *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rcx
  int v8; // ebx
  unsigned int v9; // eax
  PVOID PoolWithTag; // rax
  unsigned int v11; // r12d
  _QWORD *v12; // rsi
  NTSTATUS v13; // edi
  int DeviceInterfaces; // eax
  unsigned int v15; // edi
  const WCHAR *v16; // r14
  __int64 v17; // r12
  int IsVolumeMounted; // eax
  int v19; // ecx
  PVOID **v20; // rax
  PVOID **v21; // rsi
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // eax
  PVOID *v25; // rax
  wchar_t *v26; // rsi
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned int *v30; // rcx
  PVOID *v31; // r9
  __int64 v32; // r8
  __int64 v33; // r10
  __int64 v34; // rcx
  wchar_t *v35; // rax
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
  _OWORD v48[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+80h] [rbp-80h] BYREF
  PVOID *v50; // [rsp+88h] [rbp-78h] BYREF
  int v51; // [rsp+90h] [rbp-70h] BYREF
  wchar_t *v52; // [rsp+98h] [rbp-68h]
  _OWORD v53[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v54; // [rsp+C0h] [rbp-40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v56; // [rsp+150h] [rbp+50h]
  int i; // [rsp+150h] [rbp+50h]
  int v59; // [rsp+160h] [rbp+60h]
  PVOID *v60; // [rsp+160h] [rbp+60h]
  int cbDest; // [rsp+168h] [rbp+68h]
  size_t cbDesta; // [rsp+168h] [rbp+68h]

  p_P = &P;
  SourceString = 0LL;
  P = &P;
  v3 = 0LL;
  memset(v53, 0, sizeof(v53));
  *((_QWORD *)&v53[1] + 1) |= 0x200000000uLL;
  memset(v48, 0, sizeof(v48));
  LOBYTE(v4) = 1;
  v5 = *a1;
  v6 = *((_QWORD *)&v48[1] + 1) | 0x200000000LL;
  v7 = *a1;
  *((_QWORD *)&v48[1] + 1) |= 0x200000000uLL;
  EventHandle = 0LL;
  v8 = 0;
  PfSnLogOpenVolumesForPrefetch(v7, v4);
  if ( v5 && (v9 = *(_DWORD *)(v5 + 112), v9 < 0x4000) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 112 * v9, 0x76506343u);
    a1[2] = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      if ( *(_DWORD *)(v5 + 112) )
      {
        v11 = 0;
        do
        {
          v12 = (_QWORD *)(a1[2] + 112LL * v11);
          memset(v12, 0, 0x70uLL);
          v12[1] = v12;
          *v12 = v12;
          memset(v12 + 4, 0, 0x20uLL);
          v12[7] |= 0x200000000uLL;
          memset(v12 + 8, 0, 0x20uLL);
          v12[11] |= 0x200000000uLL;
          ++v11;
        }
        while ( v11 < *(_DWORD *)(v5 + 112) );
        v6 = *((_QWORD *)&v48[1] + 1);
        v3 = (WCHAR *)SourceString;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( v13 >= 0 )
      {
        DeviceInterfaces = IopGetDeviceInterfaces(
                             (unsigned int)&GUID_DEVINTERFACE_VOLUME,
                             0,
                             0,
                             0,
                             (__int64)&SourceString,
                             0LL);
        v3 = (WCHAR *)SourceString;
        v13 = DeviceInterfaces;
        if ( DeviceInterfaces >= 0 )
        {
          v15 = 0;
          v56 = 0;
          v16 = SourceString;
          if ( *SourceString )
          {
            while ( 1 )
            {
              v17 = -1LL;
              do
                ++v17;
              while ( v16[v17] );
              v54 = 2LL * (unsigned int)(v17 + 1);
              if ( v15 <= v54 )
                v56 = 2 * v17 + 2;
              IsVolumeMounted = PfSnIsVolumeMounted(v16);
              v19 = v59;
              if ( IsVolumeMounted < 0 )
                v19 = 0;
              v59 = v19;
              if ( v19 && !cbDest && (int)PfSnQueryVolumeInfo(a1[1], v16, v53, &v50, &v49) >= 0 )
              {
                v20 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x76506343u);
                v21 = v20;
                if ( !v20 )
                {
                  v3 = (WCHAR *)SourceString;
                  v13 = -1073741670;
                  goto LABEL_42;
                }
                memset(v20, 0, 0x48uLL);
                memset(v21 + 2, 0, 0x20uLL);
                v22 = v53[0];
                v21[8] = v50;
                v23 = v53[1];
                v24 = v49;
                *((_OWORD *)v21 + 1) = v22;
                *((_DWORD *)v21 + 15) = v24;
                *((_OWORD *)v21 + 2) = v23;
                memset(v53, 0, sizeof(v53));
                v21[6] = (PVOID *)v16;
                *((_QWORD *)&v53[1] + 1) |= 0x200000000uLL;
                *((_DWORD *)v21 + 14) = v17;
                v25 = p_P;
                if ( *p_P != &P )
                  __fastfail(3u);
                v21[1] = p_P;
                *v21 = &P;
                *v25 = v21;
                p_P = (PVOID *)v21;
              }
              v16 = (const WCHAR *)((char *)v16 + v54);
              v15 = v56;
              if ( !*v16 )
              {
                v3 = (WCHAR *)SourceString;
                break;
              }
            }
          }
          cbDesta = v15 + 2;
          v26 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDesta, 0x76506343u);
          if ( v26 )
          {
            v27 = v5 + *(unsigned int *)(v5 + 108);
            v28 = 0LL;
            for ( i = 0; (unsigned int)v28 < *(_DWORD *)(v5 + 112); i = v28 )
            {
              v29 = a1[2] + 112 * v28;
              v30 = (unsigned int *)(v27 + 96 * v28);
              *(_QWORD *)(v29 + 16) = v27 + *v30;
              *(_DWORD *)(v29 + 24) = v30[1];
              *(_DWORD *)(v29 + 104) = 0;
              *(_QWORD *)(v29 + 96) = v27 + v30[7];
              v31 = (PVOID *)P;
              if ( P == &P )
                goto LABEL_58;
              do
              {
                v32 = *((unsigned int *)v31 + 15);
                v50 = (PVOID *)v31[8];
                v60 = v31;
                if ( (unsigned __int8)PfMetadataRecordIsEqual(v30, &v50, v32) )
                  break;
                v31 = (PVOID *)*v31;
              }
              while ( v31 != &P );
              if ( v31 == &P )
                goto LABEL_58;
              RtlStringCbPrintfW(v26, cbDesta, L"%s\\", *(_QWORD *)(v33 + 48));
              v51 = 0;
              v34 = 0x7FFFLL;
              v52 = 0LL;
              v35 = v26;
              do
              {
                if ( !*v35 )
                  break;
                ++v35;
                --v34;
              }
              while ( v34 );
              if ( v34 )
              {
                v52 = v26;
                LOWORD(v51) = 2 * (0x7FFF - v34);
                HIWORD(v51) = v51 + 2;
              }
              if ( (int)PfpOpenHandleCreate(
                          (unsigned int)v48,
                          a1[1],
                          (unsigned int)&v51,
                          0,
                          1179785,
                          33,
                          128,
                          (__int64)(v60 + 2)) < 0 )
              {
LABEL_58:
                memset(v48, 0, sizeof(v48));
                *((_QWORD *)&v48[1] + 1) |= 0x200000000uLL;
                v43 = (__int64 *)a1[4];
                if ( (__int64 *)*v43 != a1 + 3 )
                  __fastfail(3u);
                *(_QWORD *)v29 = a1 + 3;
                *(_QWORD *)(v29 + 8) = v43;
                *v43 = v29;
                a1[4] = v29;
              }
              else
              {
                *(_OWORD *)(v29 + 32) = *((_OWORD *)v60 + 1);
                *(_OWORD *)(v29 + 48) = *((_OWORD *)v60 + 2);
                memset(v60 + 2, 0, 0x20uLL);
                v36 = v48[0];
                v37 = v48[1];
                v60[5] = (PVOID)((unsigned __int64)v60[5] | 0x200000000LL);
                *(_OWORD *)(v29 + 64) = v36;
                *(_OWORD *)(v29 + 80) = v37;
                memset(v48, 0, sizeof(v48));
                *((_QWORD *)&v48[1] + 1) |= 0x200000000uLL;
                v38 = (__int64 *)a1[6];
                if ( (__int64 *)*v38 != a1 + 5 )
                  __fastfail(3u);
                v39 = EventHandle;
                *(_QWORD *)(v29 + 8) = v38;
                *(_QWORD *)v29 = a1 + 5;
                *v38 = v29;
                a1[6] = v29;
                *(_DWORD *)(v29 + 108) ^= ((unsigned __int8)PfSnVolumeCheckSeekPenalty(v29 + 32, v39) ^ (unsigned __int8)*(_DWORD *)(v29 + 108)) & 1;
                if ( (*(_DWORD *)(v29 + 108) & 1) != 0 )
                {
                  v8 |= 1u;
                }
                else if ( (v8 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v29 + 32, EventHandle) )
                {
                  v8 |= 2u;
                }
              }
              v28 = (unsigned int)(i + 1);
            }
            v13 = 0;
            *a2 = v8;
            ExFreePoolWithTag(v26, 0);
          }
          else
          {
            v13 = -1073741670;
          }
LABEL_42:
          v6 = *((_QWORD *)&v48[1] + 1);
        }
      }
    }
    else
    {
      v13 = -1073741670;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( (*((_QWORD *)&v53[1] + 1) & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v53, a1[1]);
  if ( (v6 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v48, a1[1]);
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
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v5, 0LL);
  return (unsigned int)v13;
}
