/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x1800F67B8
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x18008BD70 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A5800 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A58A0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800F5E80 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        HANDLE SourceProcessHandle,
        PVOID *a4,
        char a5)
{
  PVOID *v8; // r15
  unsigned int v9; // r13d
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  HANDLE v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  ULONG_PTR v30; // r15
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v33; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v37; // [rsp+68h] [rbp-98h]
  PVOID *v38; // [rsp+70h] [rbp-90h]
  _QWORD v39[142]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD Buffer[218]; // [rsp+4F0h] [rbp+3F0h] BYREF
  HANDLE SourceHandle; // [rsp+858h] [rbp+758h]
  unsigned int v42; // [rsp+868h] [rbp+768h]
  HANDLE v43; // [rsp+870h] [rbp+770h]
  __int64 v44; // [rsp+878h] [rbp+778h]
  HANDLE v45; // [rsp+888h] [rbp+788h]
  HANDLE v46; // [rsp+8A0h] [rbp+7A0h]
  HANDLE v47; // [rsp+8C0h] [rbp+7C0h]
  HANDLE v48; // [rsp+8E0h] [rbp+7E0h]

  v37 = BaseAddress;
  v38 = a4;
  BaseAddressa = 0LL;
  v33 = 0LL;
  *a4 = 0LL;
  v8 = a4;
  v9 = 0;
  memset(v39, 0, 0x468uLL);
  v10 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x468uLL, &BufferSize);
  if ( v10 < 0 )
    goto LABEL_43;
  if ( BufferSize == 1128 )
  {
    if ( Buffer[0] == 1146311504 )
    {
      v11 = (unsigned __int64)v42 << 6;
      if ( v11 <= 0xFFFFFFFF )
      {
        v9 = v11 + 1128;
        if ( (unsigned int)v11 < 0xFFFFFB98 )
        {
          v12 = 8LL;
          v13 = v39;
          v14 = Buffer;
          do
          {
            v15 = v14[1];
            *v13 = *v14;
            v16 = v14[2];
            v13[1] = v15;
            v17 = v14[3];
            v13[2] = v16;
            v18 = v14[4];
            v13[3] = v17;
            v19 = v14[5];
            v13[4] = v18;
            v20 = v14[6];
            v13[5] = v19;
            v21 = v14[7];
            v14 += 8;
            v13[6] = v20;
            v13 += 8;
            *(v13 - 1) = v21;
            --v12;
          }
          while ( v12 );
          v22 = SourceHandle;
          v23 = v14[1];
          *v13 = *v14;
          v24 = v14[2];
          v13[1] = v23;
          v25 = v14[3];
          v13[2] = v24;
          v26 = v14[4];
          v13[3] = v25;
          v27 = v14[5];
          v28 = *((_QWORD *)v14 + 12);
          v13[4] = v26;
          v13[5] = v27;
          *((_QWORD *)v13 + 12) = v28;
          v39[109] = 0LL;
          v39[112] = 0LL;
          v39[115] = 0LL;
          v39[118] = 0LL;
          v39[122] = 0LL;
          v39[126] = 0LL;
          if ( v22 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v22, SourceProcessHandle, (PHANDLE)&v39[109], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_43;
          }
          if ( v43 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v43, SourceProcessHandle, (PHANDLE)&v39[112], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_43;
          }
          if ( v45 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v45, SourceProcessHandle, (PHANDLE)&v39[115], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_43;
          }
          if ( v46 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v46, SourceProcessHandle, (PHANDLE)&v39[118], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_43;
          }
          if ( v47 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v47, SourceProcessHandle, (PHANDLE)&v39[122], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_43;
          }
          if ( v48 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v48, SourceProcessHandle, (PHANDLE)&v39[126], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_43;
          }
          BaseAddressa = 0LL;
          RegionSize = v9;
          v10 = ZwAllocateVirtualMemory(SourceProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
          if ( v10 < 0 )
            goto LABEL_43;
          HIDWORD(v39[0]) = HIDWORD(v39[0]) & 0xFFFFFFF8 | 1;
          if ( v39[113] )
            v39[113] = (char *)BaseAddressa + 1128;
          if ( LOWORD(v39[35]) )
            v39[36] = (char *)BaseAddressa + 296;
          v29 = 0LL;
          v10 = NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v39, v9, 0LL);
          if ( v10 < 0 )
            goto LABEL_43;
          if ( v44 )
          {
            v33 = 0LL;
            RegionSize = 1LL;
            v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v33, 0LL, &RegionSize, 0x1000u, 4u);
            if ( v10 < 0 )
              goto LABEL_43;
            if ( (_DWORD)v11 )
            {
              while ( 1 )
              {
                v30 = RegionSize;
                if ( RegionSize > (unsigned int)v11 - v29 )
                  v30 = (unsigned int)v11 - v29;
                v10 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v29 + v44), v33, v30, &BufferSize);
                if ( v10 < 0 )
                  goto LABEL_43;
                if ( BufferSize != v30 )
                  goto LABEL_42;
                v10 = NtWriteVirtualMemory(
                        SourceProcessHandle,
                        (char *)BaseAddressa + v29 + 1128,
                        v33,
                        BufferSize,
                        &NumberOfBytesWritten);
                if ( v10 < 0 )
                  goto LABEL_43;
                if ( NumberOfBytesWritten != BufferSize )
                {
LABEL_42:
                  v10 = -2147483635;
                  goto LABEL_43;
                }
                v29 += NumberOfBytesWritten;
                if ( v29 >= (unsigned int)v11 )
                {
                  v8 = v38;
                  break;
                }
              }
            }
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v33, &RegionSize, 0x8000u);
            v33 = 0LL;
          }
          v10 = 0;
          *v8 = BaseAddressa;
          goto LABEL_59;
        }
        v9 = -1;
      }
      v10 = -1073741675;
    }
    else
    {
      v10 = -1073741816;
    }
  }
  else
  {
    v10 = -2147483635;
  }
LABEL_43:
  if ( v33 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v33, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v39[126] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v39[126], 0LL, 0LL, 0, 0, 1u);
  if ( v39[122] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v39[122], 0LL, 0LL, 0, 0, 1u);
  if ( v39[115] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v39[115], 0LL, 0LL, 0, 0, 1u);
  if ( v39[118] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v39[118], 0LL, 0LL, 0, 0, 1u);
  if ( v39[112] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v39[112], 0LL, 0LL, 0, 0, 1u);
  if ( v39[109] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v39[109], 0LL, 0LL, 0, 0, 1u);
LABEL_59:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle, v37);
  return (unsigned int)v10;
}
