/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180083960 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180093CA0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180093CF0 (ZwReadVirtualMemory.c)
 *     memset @ 0x180098540 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800F65A0 (PssNtFreeRemoteSnapshot.c)
 *     EvaluateCurrentState @ 0x1800F67A8 (EvaluateCurrentState.c)
 *     PssValidateSnapshotDescriptor @ 0x1800F6860 (PssValidateSnapshotDescriptor.c)
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
  int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  _OWORD *v14; // rax
  __int64 *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  void *v23; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned __int64 v26; // rsi
  SIZE_T v27; // r15
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v30; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v34; // [rsp+68h] [rbp-98h]
  PVOID *v35; // [rsp+70h] [rbp-90h]
  _QWORD v36[134]; // [rsp+80h] [rbp-80h] BYREF
  __int64 Buffer[104]; // [rsp+4B0h] [rbp+3B0h] BYREF
  unsigned int v38; // [rsp+7F0h] [rbp+6F0h]
  HANDLE v39; // [rsp+7F8h] [rbp+6F8h]
  __int64 v40; // [rsp+800h] [rbp+700h]
  HANDLE v41; // [rsp+810h] [rbp+710h]
  HANDLE v42; // [rsp+828h] [rbp+728h]
  HANDLE v43; // [rsp+848h] [rbp+748h]
  HANDLE v44; // [rsp+868h] [rbp+768h]

  v34 = BaseAddress;
  v35 = a4;
  BaseAddressa = 0LL;
  v30 = 0LL;
  *a4 = 0LL;
  v8 = a4;
  v9 = 0;
  memset(v36, 0, sizeof(v36));
  v10 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x430uLL, &BufferSize);
  if ( v10 < 0 )
    goto LABEL_46;
  if ( BufferSize == 1072 )
  {
    if ( LODWORD(Buffer[0]) != 1146311504 )
      goto LABEL_5;
    LOBYTE(v11) = EvaluateCurrentState();
    if ( v11 )
    {
      v10 = PssValidateSnapshotDescriptor(Buffer);
      if ( v10 < 0 )
        goto LABEL_46;
    }
    if ( LODWORD(Buffer[0]) == 1146311504 )
    {
      v12 = (unsigned __int64)v38 << 6;
      if ( v12 <= 0xFFFFFFFF )
      {
        v9 = v12 + 1072;
        if ( (unsigned int)v12 < 0xFFFFFBD0 )
        {
          v13 = 8LL;
          v14 = v36;
          v15 = Buffer;
          do
          {
            v16 = *((_OWORD *)v15 + 1);
            *v14 = *(_OWORD *)v15;
            v17 = *((_OWORD *)v15 + 2);
            v14[1] = v16;
            v18 = *((_OWORD *)v15 + 3);
            v14[2] = v17;
            v19 = *((_OWORD *)v15 + 4);
            v14[3] = v18;
            v20 = *((_OWORD *)v15 + 5);
            v14[4] = v19;
            v21 = *((_OWORD *)v15 + 6);
            v14[5] = v20;
            v22 = *((_OWORD *)v15 + 7);
            v15 += 16;
            v14[6] = v21;
            v14 += 8;
            *(v14 - 1) = v22;
            --v13;
          }
          while ( v13 );
          v23 = (void *)Buffer[102];
          v24 = *((_OWORD *)v15 + 1);
          *v14 = *(_OWORD *)v15;
          v25 = *((_OWORD *)v15 + 2);
          v14[1] = v24;
          v14[2] = v25;
          v36[102] = 0LL;
          v36[105] = 0LL;
          v36[108] = 0LL;
          v36[111] = 0LL;
          v36[115] = 0LL;
          v36[119] = 0LL;
          if ( v23 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v23, SourceProcessHandle, (PHANDLE)&v36[102], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_46;
          }
          if ( v39 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v39, SourceProcessHandle, (PHANDLE)&v36[105], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_46;
          }
          if ( v41 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v41, SourceProcessHandle, (PHANDLE)&v36[108], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_46;
          }
          if ( v42 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v42, SourceProcessHandle, (PHANDLE)&v36[111], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_46;
          }
          if ( v43 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v43, SourceProcessHandle, (PHANDLE)&v36[115], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_46;
          }
          if ( v44 )
          {
            v10 = ZwDuplicateObject(ProcessHandle, v44, SourceProcessHandle, (PHANDLE)&v36[119], 0, 0, 2u);
            if ( v10 < 0 )
              goto LABEL_46;
          }
          BaseAddressa = 0LL;
          RegionSize = v9;
          v10 = ZwAllocateVirtualMemory(SourceProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
          if ( v10 < 0 )
            goto LABEL_46;
          HIDWORD(v36[0]) = HIDWORD(v36[0]) & 0xFFFFFFF8 | 1;
          if ( v36[106] )
            v36[106] = (char *)BaseAddressa + 1072;
          if ( LOWORD(v36[28]) )
            v36[29] = (char *)BaseAddressa + 240;
          v26 = 0LL;
          v10 = NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v36, v9, 0LL);
          if ( v10 < 0 )
            goto LABEL_46;
          if ( v40 )
          {
            v30 = 0LL;
            RegionSize = 1LL;
            v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v30, 0LL, &RegionSize, 0x1000u, 4u);
            if ( v10 < 0 )
              goto LABEL_46;
            if ( (_DWORD)v12 )
            {
              while ( 1 )
              {
                v27 = RegionSize;
                if ( RegionSize > (unsigned int)v12 - v26 )
                  v27 = (unsigned int)v12 - v26;
                v10 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v26 + v40), v30, v27, &BufferSize);
                if ( v10 < 0 )
                  goto LABEL_46;
                if ( BufferSize != v27 )
                  goto LABEL_45;
                v10 = NtWriteVirtualMemory(
                        SourceProcessHandle,
                        (char *)BaseAddressa + v26 + 1072,
                        v30,
                        BufferSize,
                        &NumberOfBytesWritten);
                if ( v10 < 0 )
                  goto LABEL_46;
                if ( NumberOfBytesWritten != BufferSize )
                {
LABEL_45:
                  v10 = -2147483635;
                  goto LABEL_46;
                }
                v26 += NumberOfBytesWritten;
                if ( v26 >= (unsigned int)v12 )
                {
                  v8 = v35;
                  break;
                }
              }
            }
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v30, &RegionSize, 0x8000u);
            v30 = 0LL;
          }
          v10 = 0;
          *v8 = BaseAddressa;
          goto LABEL_62;
        }
        v9 = -1;
      }
      v10 = -1073741675;
    }
    else
    {
LABEL_5:
      v10 = -1073741816;
    }
  }
  else
  {
    v10 = -2147483635;
  }
LABEL_46:
  if ( v30 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v30, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v36[119] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v36[119], 0LL, 0LL, 0, 0, 1u);
  if ( v36[115] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v36[115], 0LL, 0LL, 0, 0, 1u);
  if ( v36[108] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v36[108], 0LL, 0LL, 0, 0, 1u);
  if ( v36[111] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v36[111], 0LL, 0LL, 0, 0, 1u);
  if ( v36[105] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v36[105], 0LL, 0LL, 0, 0, 1u);
  if ( v36[102] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v36[102], 0LL, 0LL, 0, 0, 1u);
LABEL_62:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle, v34);
  return (unsigned int)v10;
}
