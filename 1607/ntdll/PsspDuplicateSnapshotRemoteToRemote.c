/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x180004424
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180007BB0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A6B60 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A6C00 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800FED10 (PssNtFreeRemoteSnapshot.c)
 *     PssValidateSnapshotDescriptor @ 0x1800FEF18 (PssValidateSnapshotDescriptor.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        HANDLE SourceProcessHandle,
        PVOID *a4,
        char a5)
{
  PVOID *v8; // r15
  unsigned int v9; // r13d
  NTSTATUS v10; // eax
  PVOID v11; // rdx
  int v12; // ebx
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  HANDLE v24; // rdx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  NTSTATUS v34; // eax
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  NTSTATUS v39; // eax
  unsigned __int64 v40; // rsi
  ULONG_PTR v41; // r15
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v46; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddressa[2]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v50; // [rsp+70h] [rbp-90h]
  _QWORD v51[142]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD Buffer[218]; // [rsp+4F0h] [rbp+3F0h] BYREF
  HANDLE SourceHandle; // [rsp+858h] [rbp+758h]
  unsigned int v54; // [rsp+868h] [rbp+768h]
  HANDLE v55; // [rsp+870h] [rbp+770h]
  __int64 v56; // [rsp+878h] [rbp+778h]
  HANDLE v57; // [rsp+888h] [rbp+788h]
  HANDLE v58; // [rsp+8A0h] [rbp+7A0h]
  HANDLE v59; // [rsp+8C0h] [rbp+7C0h]
  HANDLE v60; // [rsp+8E0h] [rbp+7E0h]

  BaseAddressa[1] = BaseAddress;
  v50 = a4;
  BaseAddressa[0] = 0LL;
  v46 = 0LL;
  *a4 = 0LL;
  v8 = a4;
  v9 = 0;
  memset(v51, 0, 0x468uLL);
  v10 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x468uLL, &BufferSize);
  v11 = 0LL;
  v12 = v10;
  if ( v10 < 0 )
    goto LABEL_44;
  if ( BufferSize == 1128 )
  {
    if ( Buffer[0] == 1146311504 )
    {
      v12 = PssValidateSnapshotDescriptor(Buffer, 0LL);
      if ( v12 >= 0 )
      {
        v13 = (unsigned __int64)v54 << 6;
        if ( v13 <= 0xFFFFFFFF )
        {
          v9 = v13 + 1128;
          if ( (unsigned int)v13 < 0xFFFFFB98 )
          {
            v14 = 8LL;
            v15 = v51;
            v16 = Buffer;
            do
            {
              v17 = v16[1];
              *v15 = *v16;
              v18 = v16[2];
              v15[1] = v17;
              v19 = v16[3];
              v15[2] = v18;
              v20 = v16[4];
              v15[3] = v19;
              v21 = v16[5];
              v15[4] = v20;
              v22 = v16[6];
              v15[5] = v21;
              v23 = v16[7];
              v16 += 8;
              v15[6] = v22;
              v15 += 8;
              *(v15 - 1) = v23;
              --v14;
            }
            while ( v14 );
            v24 = SourceHandle;
            v25 = v16[1];
            *v15 = *v16;
            v26 = v16[2];
            v15[1] = v25;
            v27 = v16[3];
            v15[2] = v26;
            v28 = v16[4];
            v15[3] = v27;
            v29 = v16[5];
            v30 = *((_QWORD *)v16 + 12);
            v15[4] = v28;
            v15[5] = v29;
            *((_QWORD *)v15 + 12) = v30;
            v51[109] = 0LL;
            v51[112] = 0LL;
            v51[115] = 0LL;
            v51[118] = 0LL;
            v51[122] = 0LL;
            v51[126] = 0LL;
            if ( v24 )
            {
              v31 = ZwDuplicateObject(ProcessHandle, v24, SourceProcessHandle, (PHANDLE)&v51[109], 0, 0, 2u);
              v11 = 0LL;
              v12 = v31;
              if ( v31 < 0 )
                goto LABEL_44;
            }
            if ( v55 )
            {
              v32 = ZwDuplicateObject(ProcessHandle, v55, SourceProcessHandle, (PHANDLE)&v51[112], 0, 0, 2u);
              v11 = 0LL;
              v12 = v32;
              if ( v32 < 0 )
                goto LABEL_44;
            }
            if ( v57 )
            {
              v33 = ZwDuplicateObject(ProcessHandle, v57, SourceProcessHandle, (PHANDLE)&v51[115], 0, 0, 2u);
              v11 = 0LL;
              v12 = v33;
              if ( v33 < 0 )
                goto LABEL_44;
            }
            if ( v58 )
            {
              v34 = ZwDuplicateObject(ProcessHandle, v58, SourceProcessHandle, (PHANDLE)&v51[118], 0, 0, 2u);
              v11 = 0LL;
              v12 = v34;
              if ( v34 < 0 )
                goto LABEL_44;
            }
            if ( v59 )
            {
              v35 = ZwDuplicateObject(ProcessHandle, v59, SourceProcessHandle, (PHANDLE)&v51[122], 0, 0, 2u);
              v11 = 0LL;
              v12 = v35;
              if ( v35 < 0 )
                goto LABEL_44;
            }
            if ( v60 )
            {
              v36 = ZwDuplicateObject(ProcessHandle, v60, SourceProcessHandle, (PHANDLE)&v51[126], 0, 0, 2u);
              v11 = 0LL;
              v12 = v36;
              if ( v36 < 0 )
                goto LABEL_44;
            }
            RegionSize = v9;
            BaseAddressa[0] = 0LL;
            v37 = ZwAllocateVirtualMemory(SourceProcessHandle, BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
            v11 = 0LL;
            v12 = v37;
            if ( v37 < 0 )
              goto LABEL_44;
            HIDWORD(v51[0]) = HIDWORD(v51[0]) & 0xFFFFFFF8 | 1;
            if ( v51[113] )
              v51[113] = (char *)BaseAddressa[0] + 1128;
            if ( LOWORD(v51[35]) )
              v51[36] = (char *)BaseAddressa[0] + 296;
            v38 = NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa[0], v51, 0x468uLL, 0LL);
            v11 = 0LL;
            v12 = v38;
            if ( v38 < 0 )
              goto LABEL_44;
            v12 = 0;
            if ( v56 )
            {
              v46 = 0LL;
              RegionSize = 1LL;
              v39 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v46, 0LL, &RegionSize, 0x1000u, 4u);
              v11 = 0LL;
              v12 = v39;
              if ( v39 < 0 )
                goto LABEL_44;
              v12 = 0;
              v40 = 0LL;
              if ( (_DWORD)v13 )
              {
                while ( 1 )
                {
                  v41 = RegionSize;
                  if ( RegionSize > (unsigned int)v13 - v40 )
                    v41 = (unsigned int)v13 - v40;
                  v42 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v40 + v56), v46, v41, &BufferSize);
                  v11 = 0LL;
                  v12 = v42;
                  if ( v42 < 0 )
                    goto LABEL_44;
                  if ( BufferSize != v41 )
                    goto LABEL_43;
                  v43 = NtWriteVirtualMemory(
                          SourceProcessHandle,
                          (char *)BaseAddressa[0] + v40 + 1128,
                          v46,
                          BufferSize,
                          &NumberOfBytesWritten);
                  v11 = 0LL;
                  v12 = v43;
                  if ( v43 < 0 )
                    goto LABEL_44;
                  if ( NumberOfBytesWritten != BufferSize )
                  {
LABEL_43:
                    v12 = -2147483635;
                    goto LABEL_44;
                  }
                  v40 += NumberOfBytesWritten;
                  if ( v40 >= (unsigned int)v13 )
                  {
                    v8 = v50;
                    v12 = 0;
                    break;
                  }
                }
              }
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v46, &RegionSize, 0x8000u);
              v46 = 0LL;
            }
            *v8 = BaseAddressa[0];
            goto LABEL_60;
          }
          v9 = -1;
        }
        v12 = -1073741675;
      }
    }
    else
    {
      v12 = -1073741816;
    }
  }
  else
  {
    v12 = -2147483635;
  }
LABEL_44:
  if ( v46 != v11 )
  {
    RegionSize = (ULONG_PTR)v11;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v46, &RegionSize, 0x8000u);
    v11 = 0LL;
  }
  if ( BaseAddressa[0] != v11 )
  {
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v51[126] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v51[126], 0LL, 0LL, 0, 0, 1u);
  if ( v51[122] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v51[122], 0LL, 0LL, 0, 0, 1u);
  if ( v51[115] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v51[115], 0LL, 0LL, 0, 0, 1u);
  if ( v51[118] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v51[118], 0LL, 0LL, 0, 0, 1u);
  if ( v51[112] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v51[112], 0LL, 0LL, 0, 0, 1u);
  if ( v51[109] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v51[109], 0LL, 0LL, 0, 0, 1u);
LABEL_60:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle);
  return (unsigned int)v12;
}
